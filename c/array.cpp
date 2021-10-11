#include<iostream>
#include<iomanip>
using namespace std;
typedef struct employee{
    int id;
    char name[3];
}ep;
typedef union employe{
    int id;
    char name[3];
}ep1;
enum meal{ 
breakfast,lunch,dinner
};
int main(){
    ep w;
    ep1 e;
   cout<<sizeof(w)<<" "<<sizeof(e);
}
