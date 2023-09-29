#include <iostream>
using namespace std;
// cach 1:

// class Phanso{

//     private:
//      int tu, mau;
//     public:
//     Phanso(){
//         tu = 0;
//         mau = 1;
//     }
//     Phanso(int tu, int mau){
//         this-> tu = tu;
//         this-> mau = mau;
//     }
   
//      int UCLN(int a, int b) {
//         cout<<"ucln";
//         while (b!=0)
//         {   
//             cout<<"inside....";
//             int temp = b;
//             b = a%b;
//             a= temp;
//         }
//         cout<<"a = "<<a<<endl;
//         return a;

        
//     }
//     void Rutgon(){
//         cout<<"rut gon \n";
//         int gcd = UCLN(tu, mau);
//         tu /= gcd;
//         mau /=gcd;
          
//         cout<<tu<<" / "<<mau;
//     }
//    void setPhanso(){
//         cout<<"tu = "; cin>>tu;
//         cout<<"mau = "; cin>>mau;
//     }

// };

// cach 2:

int gcd(int t, int m){
    if(m == 0) return t;
    else return gcd(m, t%m);
}
int lcm(int a, int b){
    return a / gcd(a,b) * b;
}

class Ps{
    private: 
        int t, m;
    public:
        Ps(int t, int m);
        friend ostream& operator << (ostream&, Ps);
        friend istream& operator >> (istream&, Ps&);
        friend Ps operator + (Ps, Ps);
        void rut();
};
Ps :: Ps(int t, int m){
    this-> t = t;
    this-> m = m;
}
ostream& operator <<(ostream& out, Ps a){
    out<<a.t<< "/" <<a.m<<endl;
    return out;
}

istream& operator >>(istream& in, Ps &a){
    in>> a.t>> a.m;
    return in;
}
void Ps :: rut(){
    int g = gcd(t, m);
    t/=g;
    m/=g;
}

Ps operator + (Ps ps1, Ps ps2){
    Ps tong(1,1);
    int mc = lcm(ps1.m, ps2.m);
    tong.t = mc/ps1.m * ps1.t + mc/ps2.m *ps2.t;
    tong.m = mc;
    return tong;
}
int main(){
    // cach 1

    // cout<<"cach 1"<<endl;
    // Phanso p;
    // p.setPhanso();
    // p.Rutgon();
    // cout<<"cach 2"<<endl;

    // cach 2
    cout<<"nhap \n";
    Ps s(1,1), s2(1,1), s3(1,1);

    cin>>s>>s2;
    
    s3=s+s2;
    s3.rut();
    cout<<s3;

    return 0;

}