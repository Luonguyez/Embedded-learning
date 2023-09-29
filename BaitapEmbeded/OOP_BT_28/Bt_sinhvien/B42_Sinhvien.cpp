#include <iostream>
#define a() a
using namespace std;

class Sinhvien{
    private:
        string id, ten, ns;
        double gpa;
    public:
        Sinhvien(){
            id = ten = ns =" ";
            gpa = 0;
        }
        Sinhvien(string id, string ten, string ns, double gpa){
            this->gpa = gpa;
            this->id = id;
            this->ns = ns;
            this->ten = ten;
        }
        friend void nhap(Sinhvien &);
        friend void in(Sinhvien );

};

void nhap(Sinhvien &a){
            cin.ignore();
            cout<<"Nhap ten: "; 
             getline(cin, a.ten);
           
}

void in(Sinhvien a){
    cout<<a.ten;
}


int main(){
    Sinhvien a();
    nhap(a);
    in(a);
    return 0;
}