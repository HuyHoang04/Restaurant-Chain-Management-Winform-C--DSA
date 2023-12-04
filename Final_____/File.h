#pragma once
#include <fstream>
#include <sstream>
#include "_lib.h"
#include "Fuction.h"

string fname = "F://DATA str//N2_LaHuyHoang_NguyenHuuDanh_NguyenDucVinh_DoMInhKhoa//DSA//RestauranList1.csv";
std:: string fname2 = "F://DATA str//N2_LaHuyHoang_NguyenHuuDanh_NguyenDucVinh_DoMInhKhoa//DSA//HistoryList.csv";

// viet de tu Arr -> File
void writeRestaurantToCSV(string filename, Restaurant ChainArr[])
{
    ofstream file(filename);
    if (!file.is_open()) {
        std::cout << "Không thể mở file!" << std::endl;
        return;
    }


    int i = 0;
    while (ChainArr[i].Capacity != 0)
    {
        file << ChainArr[i].id << "," << ChainArr[i].type << "," << ChainArr[i].Capacity << "," << ChainArr[i].staff << "\n";
        i++;
    }

    file.close();
}


// Tu File -> LinkedList

void readRestaurantFromCSV(string filename) 
{

    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Không thể mở file!" << std::endl;
        return ;
    }

    string line, word;
    stringstream s;
    string id;
    string type;
    int capa;
    int sta;

    // Đọc từng dòng từ file .csv cho đến khi hết dữ liệu
    while (getline(file, line)) 
    {
        s.clear();
        
        s.str(line);

        getline(s, word, ',');
        id = word;

        getline(s, word, ',');
        type = word;

        getline(s, word, ',');
        capa = stoi(word);

        getline(s, word, ',');
        sta = stoi(word);

        makeRestaurant(Chain,id,type,capa,sta);
    }

    file.close();

}

void ReadHistoryListCSV(string filename)
{
    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Không thể mở file!" << std::endl;
        return;
    }

    Record a;
    string line, word;
    stringstream s;
    string Resid;
    string phonenumber;
    string cusname;
    string Tableid;
    int cusnum;
    int dayT;
    int monthT;
    int yearT;
    
      
    while (getline(file, line))
        {
            s.clear();

            s.str(line);
            getline(s, a.Resid, ',');
            getline(s, a.phonenumber, ',');
            getline(s, a.cusname, ',');
            getline(s, a.tableid, ',');
            getline(s, word, ',');
            a.cusnum = stoi(word);
            getline(s, word, ',');
            a.dayT= stoi(word);
            getline(s, word, ',');
            a.mothT = stoi(word);
            getline(s, word, ',');
            a.yearT = stoi(word);
            getline(s, word, ',');
            if (word == "1")
            {
                a.AddorRemove = true;
            }
            else a.AddorRemove = false;
            History.push(a);
        }

    file.close();
}

void writeHistoryToCSV(string filename, Record HistoryArr[])
{
    ofstream file(filename);
    if (!file.is_open()) {
        std::cout << "Không thể mở file!" << std::endl;
        return;
    }


    int i = 0;
    while (HistoryArr[i].dayT != 0)
    {
        file << HistoryArr[i].Resid << "," << HistoryArr[i].phonenumber<< "," << HistoryArr[i].cusname << "," << HistoryArr[i].tableid << HistoryArr[i].cusnum << "," << HistoryArr[i].dayT << "," << HistoryArr[i].mothT << "," << HistoryArr[i].yearT << "\n";
        i++;
    }

    file.close();
}


