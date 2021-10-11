#include <iostream>
#include<iomanip>
#include<math.h>
using namespace std;
class SimpleCalc
{
protected:
    int a, b;

public:
    void SetNum(int, int);
    void ShowOp();
};
void SimpleCalc::SetNum(int a1, int a2)
{
    a = a1;
    b = a2;
}
void SimpleCalc ::ShowOp()
{
    cout << "The addition result is" << a + b << endl;
    cout << "The subtraction result is" << a - b << endl;
    cout << "The multiplication result is" << a * b << endl;
    cout << "The division result is" << a / (b * 1.0) << endl;
}
class ScientificCalc{
protected:
int c,d;
public:
void Setno(int,int);
void ShowCalc();
};
void ScientificCalc:: Setno(int a,int b){
    c=a;
    d=b;
}
void ScientificCalc::ShowCalc(){
    cout<<"The modulo is"<<c%d<<endl;
    cout<<"The sqrt of first num is"<<sqrt(c)<<endl;
    cout<<"The sqrt of second num is"<<sqrt(d)<<endl;
    cout<<"The pow func is"<<pow(c,d)<<endl;
}
class HybridCalc: public SimpleCalc , public ScientificCalc{
};
int main()
{
HybridCalc c1;
c1.Setno(1,2);
c1.SetNum(7,6);
c1.ShowOp();
c1.ShowCalc();
    return 0;
}