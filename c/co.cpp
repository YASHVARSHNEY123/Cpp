#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int cm(pair<int,int> a,pair<int,int> b){
    return a.first>b.first;
}
int main(){
    int Num;
    cin>>Num;
    int ArrLen[Num],Iter[Num],Ans[Num];
    for(int i=0;i<Num;i++){
        int sum=0;
        static int m=0;
        cin>>ArrLen[i]>>Iter[i];
        int Arr[ArrLen[i]]={0};
        map<int,int> mp;
        for(int j=0;j<Iter[i];j++){
            int a,b;
            cin>>a>>b;
            mp.insert({a,b});
        }
        vector< pair<int,int> > v(mp.begin(),mp.end());
        sort(v.begin(),v.end(),cm);
        //  int sum=0;
            for(int c=1;c<=ArrLen[i];i++)
            {
               for(int d=0;d<v.size();d++){
                  if(c%v[d].second!=0)
                  {sum+=v[d].first;
                   break;}
            }
        }
      Ans[m++]=sum;
    }
    for(int i=0;i<Num;i++)
    cout<<Ans[i]<<endl;
    
    return 0;
}