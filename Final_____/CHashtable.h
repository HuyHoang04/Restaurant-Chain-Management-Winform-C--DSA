#pragma once
#include "_lib.h"
template <typename K, typename V>
class HashEntry {
public:
    K key;
    V value;
    HashEntry<K, V>* next;

    HashEntry(const K& key, const V& value) : key(key), value(value), next(nullptr) {}
};

template <typename K, typename V>
class Hashtable {
private:
    HashEntry<K, V>** table;
    int capacity;
    int size;

    int hashFunction(const K& key) {
        // Simple hash function, can be replaced with a more sophisticated one
        return std::hash<K>{}(key) % capacity;
    }

public:
    Hashtable(int capacity) : capacity(capacity), size(0) {
        table = new HashEntry<K, V>* [capacity]();
    }

    ~Hashtable() {
        for (int i = 0; i < capacity; ++i) {
            HashEntry<K, V>* entry = table[i];
            while (entry != nullptr) {
                HashEntry<K, V>* prev = entry;
                entry = entry->next;
                delete prev;
            }
        }
        delete[] table;
    }

    void insert(const K& key, const V& value) {
        int index = hashFunction(key);
        HashEntry<K, V>* current = table[index];
        while (current != nullptr) {
            if (current->key == key) {
                current->value = value;
                return;
            }
            current = current->next;
        }
        HashEntry<K, V>* newEntry = new HashEntry<K, V>(key, value);
        newEntry->next = table[index];
        table[index] = newEntry;
        size++;
    }

    bool remove(const K& key) {
        int index = hashFunction(key);
        HashEntry<K, V>* current = table[index];
        HashEntry<K, V>* prev = nullptr;

        while (current != nullptr) {
            if (current->key == key) {
                if (prev == nullptr) {
                    table[index] = current->next;
                }
                else {
                    prev->next = current->next;
                }
                delete current;
                size--;
                return true;
            }
            prev = current;
            current = current->next;
        }
        return false;
    }

    V* get(const K& key) {
        int index = hashFunction(key);
        HashEntry<K, V>* current = table[index];
        while (current != nullptr) {
            if (current->key == key) {
                return &(current->value);
            }
            current = current->next;
        }
        return nullptr;
    }

    int getSize() const {
        return size;
    }

    bool isEmpty() const {
        return size == 0;
    }
};