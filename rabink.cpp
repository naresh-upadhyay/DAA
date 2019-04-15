#include<bits/stdc++.h>
using namespace std;
int hashf(string p,int sp){
        int h=0;
        for(int i=0;i<sp;i++){
        h=p[sp-i]*pow(10,i)+h;
    }
    return h;
}
int rabink(string t,string p,int pm){

    int st=t.size();
    int sp=p.size();
    int h=hashf(p,sp);
    for(int i=0;i<(st-sp);i++){
        string s=t.substr(i,sp);
        if(h==hashf(s,sp))
            if(s==p)
                cout<<"Pattern found at pos :-"<<i<<endl;
            
    }
}
int main(){
    string t,p;
    cout<<"Enter the text:-";
    cin>>t;
    cout<<"Enter the pattern:-";
    cin>>p;
    rabink(t,p,7);
}