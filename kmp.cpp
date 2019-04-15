#include<bits/stdc++.h>
using namespace std;
#define n 100
void prefixv(string s,int (&arr)[n]){
    int sz=s.length(),k=0;
    arr[0]=0;
    for(int i=1;i<sz;i++){
        if(s[i]==s[k]){
            arr[i]=++k;
        }else{
            arr[i]=0;
            k=0;
        }
    }
}
void findIndex(string s,string p,int (pre)[]){
    int i=0,j=0,k=0,ssize=s.length();
    while(i<ssize){
        if(s[i]==p[j]){
            i++ ;
            j++;
        }
        if(j==p.length()){
            cout <<(i-j)<<" ";
            j=pre[j-1];
        }else if(i<ssize && s[i]!=p[j]){
            if(j!=0)
                j=pre[j-1];
            else
            {
                i++;
            }
            
        }
    }
}
int main(){
    string t,p;
    int pref[n];
    cout <<"Enter the text :-";
    cin>>t;
    cout<<"Enter the patter to search :-";
    cin >>p;
    prefixv(p,pref);
    cout <<"Indexes are :-";
    findIndex(t,p,pref);
}