#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
class Point{
float x,y;

public:
    friend float calcDis(Point a1,Point b1);
    Point(float,float);
};
float calcDis(Point a1,Point b1){
    return sqrt(pow(a1.x-b1.x,2)+pow(a1.y-b1.y,2));
}
Point :: Point(float a,float b){
    x=a;
    y=b;
}
int main(){
    Point a(0,0),b(1,1);
    cout<<"The distance is"<<calcDis(a,b)<<endl;
    return 0;
}