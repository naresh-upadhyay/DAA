#include<bits/stdc++.h>
using namespace std;
int brouteforce(string t,string p){

    int st=t.size();
    int sp=p.size();
    for(int i=0;i<(st-sp);i++){
        int j=0;
        for(j=0;j<sp;j++){
            if(t[i+j]!=p[j])
                break;
        }
        if(j==sp){
            cout<<"Pattern found at pos :-"<<i<<endl;
        }
    }
}
int main(){
    string t,p;
    cout<<"Enter the text:-";
    cin>>t;
    cout<<"Enter the pattern:-";
    cin>>p;
    brouteforce(t,p);
}