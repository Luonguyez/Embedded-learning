#include "restaurant.h"

dishOnMenu :: dishOnMenu(string NAME, int PRICE){
    static int id = 0;
    dishOnMenu :: ID = id;
    id++;
    this-> NAME = NAME;
    this-> PRICE = PRICE;
}

void setNumberOfTable(list<Table>& numTableData){
  while(1){  
    int tableNum = 0;
    cout << "[Manager]\n"
         << "----------------------------\n"
         << "Enter number of table: ";
    cin  >> tableNum;

    numTableData.clear();
    for(int i = 1; i <= tableNum; i++){
        Table tb(i);
        numTableData.push_back(tb);
    }
    system("cls");
    cout << "<Manager>\n"
         << "-----------Success----------\n";
    ENDFUNC("Change number of table");
  }
}

void addDishMenu(list<dishOnMenu>& dishData){
    while(1){
        cout<<"Add dish into Menu: \n";
        string NAME;
        cout<<"Add name dish: "; cin>>NAME;
    
        int PRICE;
        cout<<"Add price: "; cin>>PRICE;

        dishOnMenu newMenu(NAME, PRICE);
        dishData.push_back(newMenu);
        cout << "Successfully\n----------------\n";
        ENDFUNC("Add more... ");
        
    }
}

void changeDishMenu(list<dishOnMenu>& dishData){
    string NAME;
    int PRICE;
    int ID;

    while (1)
    {   
        cout<<"Chang dish in Menu: \n"
            <<"Select ID: ";
        cin>> ID;
        
        for(list<dishOnMenu>:: iterator it = dishData.begin(); it != dishData.end(); it++){
            if (it->getID() == ID)
            {
                cout<<"Change name: "; cin>>NAME;
                it->setNAME(NAME);
                cout<<"Change price: "; cin>>PRICE;
                it->setPRICE(PRICE);
            }
            
        }ENDFUNC("Change dish in menu\n");
    }
    
}

void deleteDishMenu(list<dishOnMenu>& dishData){

    int ID;
    cout<<"Del\n";
    while (1)
    {   
        cout<<"Delete dish in Menu: \n"
            <<"Select ID: ";
        cin>> ID;
        
        for(list<dishOnMenu>:: iterator it = dishData.begin(); it != dishData.end(); it++){
            if (it->getID() == ID)
            {
               it = dishData.erase(it);
            }
            
        }ENDFUNC("Delete dish in menu\n");
    }
}

void showDishMenu(list<dishOnMenu> dishData){
    cout <<"Show dish in menu\n";

    cout << "ID"
             <<" | "
             << "NAME"
             <<" | "
             <<"PRICE"<<endl;
    for(list<dishOnMenu>:: iterator it = dishData.begin(); it != dishData.end(); it++){
        cout << it->getID()
             <<"  | "
             << it->getNAME()
             <<"      | "
             <<it->getPRICE()<<endl;
    }ENDFUNC("Showlist");
}

void optionManager(list<dishOnMenu>& dishData, list<Table>& numTableData){
    

    while (1)
    {
        cout<<"[Manager]\n";
        cout<<"----------------\n";
        cout<<"1. Set number of table\n";
        cout<<"2. Add dish into menu\n";
        cout<<"3. Change dish in menu\n";
        cout<<"4. Delete dish in menu\n";
        cout<<"5. Show menu\n";
        cout<<"0. Back\n";
        int key;
        cout<<"Press: "; cin>>key;
        switch (key)
        {
        case 1:
            setNumberOfTable(numTableData);
            break;
        case 2:
            addDishMenu(dishData);
            showDishMenu(dishData);
            break;
        case 3:
            changeDishMenu(dishData);
            showDishMenu(dishData);
            break;
        case 4:
            showDishMenu(dishData);
            deleteDishMenu(dishData);
            showDishMenu(dishData);
            break;
        case 5:
            showDishMenu(dishData);
            break;
        case 0: 
            return;
            break;
        default:
            break;
        }
    }
    
}