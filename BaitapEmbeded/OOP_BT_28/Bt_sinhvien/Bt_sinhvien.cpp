#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;

class Sinhvien;
class Giaovien;

class Sinhvien{
    friend class Giaovien;
 private:
    string name, birth, ms;
    static int id;
    double gpa;
 public:
    void in();
    void nhap();
    double getGpa();
    friend void hamChuanhoa(Sinhvien&);
};

void hamChuanhoa(Sinhvien &a){
    string res = "";
    stringstream ss(a.name);
    string token;
    while ( ss>>token)
    {
        res+=toupper(token[0]);
        for(int i =1; i<token.length(); i++){
            res += tolower(token[i]);
        }
        res += " ";
    }
    res.erase(res.length()- 1);
    a.name = res;
    
}

double Sinhvien::getGpa(){
    return this->gpa;
}

int Sinhvien :: id = 0;

void Sinhvien::nhap(){
    ++id;
    this->ms = "SV" + string(3 - to_string(id).length(), '0') + to_string(id); 
    cin.ignore();
    cout<<"Ten sv: "; getline(cin, this->name);
    cout<<"Nhap ns: "; getline(cin, this->birth);
    cout<<"nhap GPA: "; cin>>this->gpa;
}

void Sinhvien::in(){
    cout<<this->ms<<" "<<this->name<<" "<<this->birth<<" "<<this->gpa<<endl;
}

bool cmp(Sinhvien a, Sinhvien b){
    return a.getGpa() > b.getGpa();
}

class Giaovien{
    private:
     string khoa;
    public:
     void updateSV(Sinhvien&);
};

void Giaovien ::updateSV(Sinhvien &a){
     a.gpa = 3.2;
}

int main(){
    int n;
    cout<<"Nhap n: "; cin>>n;
    Sinhvien a[100];
    Giaovien b[100];
    for(int i = 0; i<n; i++){
        a[i].nhap();
    }
    for(int i = 0; i<n; i++){
        hamChuanhoa(a[i]);
        b[i].updateSV(a[i]);
    }
    
    sort(a, a+n, cmp);
    for(int i = 0; i<n; i++){
        a[i].in();
    }
}
