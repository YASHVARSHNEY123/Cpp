#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    string st;
    ifstream in;
    in.open("file.txt");
    while(in.eof()==0){
        getline(in,st);
        cout<<st<<endl;
    }
    return 0;
}