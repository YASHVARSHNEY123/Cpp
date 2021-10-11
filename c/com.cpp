#include<iostream>
using namespace std;
class complex{
  private:
        float real,img;
  public:
        void setData(float a,float b);
        void getData();
        void sub(complex c1,complex c2);
};
void complex:: setData(float a,float b){
    real=a; img=b;
}
void complex::getData(){
    cout<<"The complex number is "<<real<<"+ i"<<img<<endl;
}
void complex::sub(complex c1, complex c2){
    real=c1.real-c2.real;
    img=c1.img-c2.img;
}
int main(){
    complex c1,c2,c3;
    c1.setData(5,4);
    c1.getData();
    c2.setData(4,5);
    c2.getData();
    c3.sub(c1,c2);
    c3.getData();
    return 0;
}