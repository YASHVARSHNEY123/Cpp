#include<iostream>
using namespace std;
class Base1{
public: 
    int data1;
    Base1(int a){
        data1=a;
        cout<<"Base1 constructer called."<<endl;
    }
    void GetData1(){
        cout<<"The Data 1 is"<<data1<<endl;
    }
};
class Base2{
public: 
    int data2;
    Base2(int a){
        data2=a;
        cout<<"Base2 constructer called."<<endl;
    }
    void GetData1(){
        cout<<"The Data 2 is"<<data2<<endl;
    }
};
class Derived : public Base1,public Base2{
public:
int data3;
Derived(int a,int b,int c): Base1(a),Base2(b){
  data3=c;
  cout<<"Derived constructer called"<<endl;
}
};
int main(){
    Derived r(1,2,3);
    return 0;
}