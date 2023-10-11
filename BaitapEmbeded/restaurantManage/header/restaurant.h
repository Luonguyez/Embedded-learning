#ifndef restaurant_h
#define  restaurant_h
#include <iostream>
#include <string>
#include <list>

using namespace std;

#define ENDFUNC(...)                \
cout << "1. "<<__VA_ARGS__<<endl    \
     << "0. Exit\n"                 \
     << "-----------\n"             \
     << "Press: ";                  \
int key = 0;                        \
do                                  \
{                                   \
    cin>>key;                       \
    if(key == 0){                   \
        system("cls");              \
        return;                     \
    }                               \
    else if(key != 0 && key !=1) {   \
        cout << "1. "<<__VA_ARGS__<<endl    \
     << "0. Exit\n"                 \
     << "-----------\n"             \
     << "Press: ";                  \
    }                                \
                           \
}  while( key !=1 )  ;                            \
system("cls");  


class dishOnMenu{
    private: 
        int ID;
        string NAME;
        int PRICE;
    public:
        dishOnMenu(string NAME , int PRICE);
        // {
        //     static int menuIndex = 0;
        //     ID = ++menuIndex;
        //     this->NAME = NAME;
        //     this->PRICE = PRICE;
        // }

        int getID() {return ID;};
        string getNAME() {return NAME;};
        void setNAME(string NAME) {this->NAME = NAME;};
        int getPRICE() {return PRICE;};
        void setPRICE(int PRICE) {this->PRICE = PRICE;};

};

class dishOnTable : public dishOnMenu
{
    private:
        int numDISH;
    public:
        dishOnTable(int numDISH){
            this->numDISH = numDISH;
        }

        int getNumDISH() {return numDISH;};
        void setNumDISH(int numDISH) {this->numDISH = numDISH;};
};

class Table
{
    private:
        int numTABLE;
        bool status;
    public:
        Table(int numTABLE){
            this->numTABLE = numTABLE;
            status = false;
        }

        int getNumTABLE() {return numTABLE;};
        void setNumTABLE(int numTABLE) {this->numTABLE = numTABLE;};
};

void optionManager(list<dishOnMenu>& dishData, list<Table>& numTableData);

void optionStaff(list<dishOnMenu>& dishData, list<Table>& numTableData);

void setNumTable(list<Table>& numTableData);

#endif
