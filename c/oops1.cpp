#include<iostream>
#include<iomanip>
using namespace std;
class Employee{
   private:
        int a,b,c;
   public:
        int e,d;
        void setData(int a1,int b1,int c1);
        void getData(){
            cout<<"a is"<<a<<endl;
            cout<<"b is"<<b<<endl;
            cout<<"c is"<<c<<endl;
            cout<<"d is"<<d<<endl;
            cout<<"e is"<<e<<endl;
        }
};
void Employee :: setData(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
 Employee yash;
 yash.d=9;
 yash.e=0;
 yash.setData(1,8,9);
 yash.getData();
}