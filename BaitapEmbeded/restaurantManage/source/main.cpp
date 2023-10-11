#include "restaurant.h"


int main(){

    list<dishOnMenu> dishData;
    list<Table> numTableData;

    while (1)
    {
        cout<<"Welcome Luong's restaurant!\n";
        cout<<"-----------\n"
            <<"1. Manager\n"
            <<"2. Staff\n";
        int key = 0;
        cout<<"Press: "; cin>>key;
        switch (key)
        {
        case 1:
            system("cls");
            optionManager(dishData, numTableData);
            break;
        default:
            break;
    }
    }
    
}