#include<iostream>
using namespace std;
template<class T1=int,class T2=float,class T3=char>
class mt{
  public:
 T1 a;
 T2 b;
 T3 c;
 mt(T1 x,T2 y,T3 z){
   a=x;
   b=y;
   c=z;
 }
 void display(){
   cout<<"a is"<<a<<endl;
   cout<<"b is"<<b<<endl;
   cout<<"c is"<<c<<endl;
 }
};
int main(){
  mt<T1,int,int> m(1,1,'1');
  m.display();
  return 0;
}