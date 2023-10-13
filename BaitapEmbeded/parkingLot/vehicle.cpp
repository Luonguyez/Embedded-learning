#include <iostream>
#include <vector>
#include <string>


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

class Car{
    private:
        string licensePlate;
        Dimension size;
    public:
        Car(string license, float length, float width) : licensePlate(license), size(length, width) {};
        string getLicense() const {return this ->licensePlate;};
        void setLicense(string license) { licensePlate = license;};
        Dimension getSize() const {return this->size;};
        parkingSlot findParkingSlot( vector <parkingSlot>& slots) {
            if(slots)
        }
};

int main(){
    // Tao danh sach cac vi tri do xe voi cac kich thuoc khac nhau
    vector <parkingSlot> park_slots = {
        parkingSlot(4.5, 2.5),
        parkingSlot(5.0, 2.6),
        parkingSlot(4.2, 2.2)
    };

    // tao 1 oto voi kich thuoc cu the
    Car Vinfast("75G1", 4.3, 2.3);
    // in thong bao co vi tri phu hop hay khong

    // in kich thuoc vi tri
    // kiem tra xe co dau duoc khong

}