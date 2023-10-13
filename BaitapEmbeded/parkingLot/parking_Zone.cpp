#include <iostream>
#include <vector>

using namespace std;

class Dimension{
    private:
        float length;
        float width;
    public:
        Dimension(float l, float w){
            length = l;
            width = w;
        };
        float getLength() const {return this ->length;};
        float getWidth() const {return this->width;};

};

class parkingSlot{ // 1 vi tri
    private:
        bool isOccupied;
        Dimension size;
    public:
        parkingSlot(float length, float width) : isOccupied(false), size(length, width) {};
         //code getter setter
        bool getStatus() const {return this->isOccupied;};
        void setStatus(bool status) {this->isOccupied = status;};
        Dimension getDimension() const {return this->size;};
};

class parkingLot{// bai do xe
    private:
        vector <parkingSlot> slots; //vector luu lai tat ca vi tri kich thuoc trong bai dau xe
    public:
        parkingLot(int numSlot){
            //pushback vi tri
            // gia su chieu dai 4.5 rong 2.5
            // cout <<"Input number of slot: "; 
            // cin >> numSlot;
            for(int i = 0; i < numSlot; i++) {
                parkingSlot park_slot(4.5, 2.5);
                slots.push_back(park_slot);
            }
        };

        // lay so luong vi tri trong
        int getAvailableSlot() const {
           
            int a = slots.size();
            
            for(int i = 0; i < slots.size(); i++ ){
                if( slots[i].getStatus() == true){
                    a--;
                }
            }
            return a;
            
            
        };

        //cap nhat vi tri do
        bool updatesSlotStatus(int slot_id, bool status){
            //true : ca 2 hop le
            if(slot_id >= 0 && slot_id< slots.size()){
                slots[slot_id].setStatus(status);
                return true;
            }
                return false;
        };
                

        int getTotalSlot() const{
            return slots.size();
        }
        
        vector<parkingSlot> getVectorSlots(){
            return slots;
        }

};

void displaySlot(parkingLot myPark){
    cout << "\n\n Slot  : | ";
    for(int i = 0; i < myPark.getVectorSlots().size(); i++){
        cout << i << " | ";
    }
    cout << "\n Status: |";
    for(int i = 0; i < myPark.getVectorSlots().size(); i++){
        if(myPark.getVectorSlots()[i].getStatus() == true){
            cout << " x |";
        }else {
            cout << " 0 |";
        }
    }
}

int main(){
    
    parkingLot myPark(10);
    cout<<"\nTotal of slot "<< myPark.getTotalSlot()<<endl;
    displaySlot(myPark);

    myPark.updatesSlotStatus(4,true);
    myPark.updatesSlotStatus(5,true);
    myPark.updatesSlotStatus(3,true);

    cout<<"\n\nTotal of slot now: "<<myPark.getAvailableSlot();
    displaySlot(myPark);
}
