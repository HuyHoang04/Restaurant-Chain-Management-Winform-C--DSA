#pragma once
#include "_lib.h"
#include "_Struck.h"
#include "CLinkedList.h"
#include "CStack.h"
#include "CHashtable.h"

int MaxTable = 20;
int moneyperone = 200000;
double TotalMoney;
LinkedList<Restaurant> Chain;
Stack<Record> History;
Restaurant ChainArr[100];
Record HistoryArr[100];
Hashtable<string, int> cuppon(10);

    void makeRestaurant(LinkedList<Restaurant>& Chain, string id, string type, int capacity, int staff)
    {
        Restaurant tempR;
        tempR.id = id;
        tempR.type = type;
        tempR.Capacity = capacity;
        tempR.staff = staff;
        for (int i = 1; i <= MaxTable; i++)
        {
            tempR.Tablearr[i].id = to_string(i) + id;
            tempR.Tablearr[i].statement = false;
        }
        Chain.insert(tempR);
    }
    
    // datban
    void StamentSetTable(LinkedList<Restaurant> &Chain, Stack<Record>& History, double& Totalmoney, string Resid,  string cusname, string phonenumber, string Tableid, int cusnum, int dayT, int mothT, int yearT)
    {
        Restaurant a;
        a.Capacity = Chain.findNodeByID(Resid)->data.Capacity;
        a.id = Chain.findNodeByID(Resid)->data.id;
        for (int i = 1; i <= MaxTable; i++)
        {
            a.Tablearr[i] = Chain.findNodeByID(Resid)->data.Tablearr[i];
            if (a.Tablearr[i].id == Tableid)
            {
                a.Tablearr[i].statement = true;
            }
        }

        a.type = Chain.findNodeByID(Resid)->data.type;
        a.profit = Chain.findNodeByID(Resid)->data.profit + cusnum * moneyperone;
        a.staff = Chain.findNodeByID(Resid)->data.staff;
        Chain.Replace(Resid, a);

        // add
        Record u;
        u.Resid = Resid;
        u.cusname = cusname;
        u.phonenumber = phonenumber;
        u.AddorRemove = true;
        u.cusnum = cusnum;
        u.dayT = dayT;
        u.money = cusnum * moneyperone;
        u.mothT = mothT;
        u.tableid = Tableid;
        u.yearT = yearT;
        History.push(u);

        // money
        Totalmoney += cusnum * moneyperone;
    }

    // huyban
    void StamentDeleteTable(LinkedList<Restaurant>& Chain, Stack<Record>& History, double& Totalmoney, string Resid,string cusname,string phonenumber, string Tableid, int cusnum, int dayT, int mothT, int yearT)
    {
        Restaurant a;
        a.Capacity = Chain.findNodeByID(Resid)->data.Capacity;
        a.id = Chain.findNodeByID(Resid)->data.id;
        for (int i = 1; i <= MaxTable; i++)
        {
            a.Tablearr[i] = Chain.findNodeByID(Resid)->data.Tablearr[i];
            if (a.Tablearr[i].id == Tableid)
            {
                a.Tablearr[i].statement = false;
            }
        }

        a.type = Chain.findNodeByID(Resid)->data.type;
        a.profit = Chain.findNodeByID(Resid)->data.profit - cusnum * moneyperone;
        a.staff = Chain.findNodeByID(Resid)->data.staff;
        Chain.Replace(Resid, a);

        // add
        Record u;
        u.Resid = Resid;
        u.cusname = cusname;
        u.phonenumber = phonenumber;
        u.AddorRemove = false;
        u.cusnum = cusnum;
        u.money = -(cusnum * moneyperone);
        u.dayT = dayT;
        u.mothT = mothT;
        u.tableid = Tableid;
        u.yearT = yearT;
        History.push(u);

        // money
        Totalmoney -= cusnum * moneyperone;
    }
    // tinh tien theo quy
    double moneybymoth(Stack<Record>& History, Record HistoryArr[], int moth1, int moth2, int moth3)
    {
        int i = 0;
        double totalprofit = 0;
        while (HistoryArr[i].dayT != 0)
        {
            if (HistoryArr[i].mothT == moth1 || HistoryArr[i].mothT == moth2 || HistoryArr[i].mothT == moth3)
                totalprofit += HistoryArr[i].money;
            i++;
        }
        return totalprofit;
    }

    double moneybyyear(Stack<Record>& History, Record HistoryArr[],int year)
    {
        int i = 0;
        double totalprofit = 0;
        while (HistoryArr[i].dayT != 0)
        {
            if (HistoryArr[i].yearT == year)
            {
                totalprofit += HistoryArr[i].money;
            }
            i++;
        }
        return totalprofit;
    }


    void ToArray(LinkedList<Restaurant>& Chain, Restaurant ChainArr[])
    {
        Chain.ToArray(ChainArr);
    }

    void ToArrayHistory(Stack<Record>& History, Record HistoryArr[])
    {
        History.ToArrayHistory(HistoryArr);
    }

    static std::string toStandardString(System::String^ string)
    {
        using System::Runtime::InteropServices::Marshal;
        System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
        char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
        std::string returnString(charPointer, string->Length);
        Marshal::FreeHGlobal(pointer);
        return returnString;
    }

    void Addcuppon(Hashtable<string, int> &cuppon)
    {
        cuppon.insert("KHAITRUONG", 1000);
        cuppon.insert("THANHLAP", 1000);
        cuppon.insert("KINIEM", 1000);
        cuppon.insert("TETDENXUANVE", 1000);
        cuppon.insert("MUAHEVUINHON", 1000);
    }




    bool isLeapYear(int year) {
        return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    }
    int getNumberOfDaysInMonth(int month, int year) {
        int numDaysInMonth = 0;
        switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            numDaysInMonth = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            numDaysInMonth = 30;
            break;
        case 2:
            if (isLeapYear(year)) {
                numDaysInMonth = 29;
            }
            else {
                numDaysInMonth = 28;
            }
            break;
        default:
            return -1;
        }

        return numDaysInMonth;
    }
    bool isValidDate(int day, int month, int year) {
        if (year < 1) {
            return false;
        }
        if (month < 1 || month > 12) {
            return false;
        }
        int numDaysInMonth = getNumberOfDaysInMonth(month, year);
        if (day < 1 || day > numDaysInMonth) {
            return false;
        }
        return true;
    }

