#include<iostream>
using namespace std;
class Employee{
    public:
        int id;
        int salary;
        Employee(int d){
            id=d;
            salary=99;
        }
        Employee(){}
    };
class Programmer : public Employee{
    public: 
        int languagecode;
        Programmer(int d){
            id=d;
            salary=88;
            languagecode=8;
        }
        Programmer(){}
        void getData(){
         cout<<"id = "<<id<<"l.c = "<<languagecode<<"salary"<<salary;
        };
};
int main(){
    Programmer yu(3);
    yu.getData();
    return 0;
}