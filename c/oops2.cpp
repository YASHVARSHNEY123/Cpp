#include<iostream>
using namespace std;
class Employee{
   private:
        int id;
        static int count;
    public:
        void setdata();
        void getData();
        static void getCount();
};
void Employee :: setdata(void){
 cout<<"Enter id"<<endl;
 cin>>id;
 count++;
}
void Employee::getData(){
    cout<<"The id of emp"<<count<<" is"<<id<<endl;
}
void Employee::getCount(){
    cout<<"count is "<<count<<endl;
}
int Employee::count;
int main(){
    Employee yash, kush;
    yash.setdata();
    yash.getData();
    Employee::getCount();
    kush.setdata();
    kush.getData();
    Employee::getCount();
    return 0;
}