#include <iostream>
#include <list>

using namespace std;
enum VehicleType{
    MOTOR,
    CAR,
};

class parkingSlot{
    private:
        bool isOccupied; // true co xe do, false chua co xe do
        VehicleType slotType; //loai xe
        int slotNumber;  // so thu tu vi tri do
    public:
        parkingSlot(VehicleType type, int number) : isOccupied(false), slotType(type), slotNumber(number) {}
        
        VehicleType getSlotType() {return this->slotType;};
        
        int getSlotNumber() {return this->slotNumber;};

        bool getStatus() {return this->isOccupied;};
        
        void setStatus( bool occupied) {isOccupied = occupied;};

};

int main(){

    parkingSlot carTest(CAR, 5);

    cout <<"Slot at number: "<< carTest.getSlotNumber();
    if(carTest.getSlotType() == CAR){
        cout << " is for car!\n";
    }else if (carTest.getSlotType() == MOTOR)
    {
        cout << "is for motor!\n";
    }
    cout << "This slot is: " << (carTest.getStatus() ? "Full." : "Empty.") <<endl;

    carTest.setStatus(true);

    cout << "Now, slot " << carTest.getSlotNumber() << " " << (carTest.getStatus() ? "Full" : "Empty") << endl; 

}
