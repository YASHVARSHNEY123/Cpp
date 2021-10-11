#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int cm(pair<int,int> a,pair<int,int> b){
    return a.first>b.first;
}
// int hcf(int n,int m){
//     if (n%m==0) return m;
//     else return hcf(m,n%m);
// }
// int lcm(int a,int b){
//     if(a>b) return (a*b)/hcf(a,b);
//     else return (a*b)/hcf(b,a);
// }
int main(){
    int Num;
    cin>>Num;
    int ArrLen,Iter,Ans[Num];
    for(int i=0;i<Num;i++){
         int sum=0;
        cin>>ArrLen>>Iter;
        vector< pair<int,int> > v;
        for(int j=0;j<Iter;j++){
            int a,b;
            cin>>a>>b;
            v.push_back({a,b});
        }
        sort(v.begin(),v.end(),cm);
        for(int l=1;l<=ArrLen;l++){
        for(int k=0;k<v.size();k++){
            if(l%(v[k].second) !=0)
            {sum+=v[k].first;
            break;}
        }}
        
      Ans[i]=sum;
    }
    for(int i=0;i<Num;i++)
    cout<<Ans[i]<<endl;
    
    return 0;
}