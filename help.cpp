#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<string> sval;
     string line="king.is.upadhyay~boss";
     string sch,sitm;
     vector<string> vput;
     vput.push_back("<king t1 = 'badshah' t2 = 'aa'>");
     vput.push_back("<is t4 = 'kya' t9 = 'baat'>");
     vput.push_back("<wing t7 = 'kya' t5 = 'baat'>");
     vput.push_back("</wing");
     vput.push_back("<upadhyay boss = 'yoo' t8 = 'waw'>");
     vput.push_back("</upadhyay");
     vput.push_back("</is");
     vput.push_back("</king");
     int val[200]={0},pos=0,i=0;
     for(int j=0;j<sval.size();j++){
          cout<<sval[j]<<endl;
     }
     for(int l=0;l<sval.size();l++){
          sitm=sval[l];
               for(int k=0;k<vput.size();k++){
                    line=vput[k];
                    sch=line.substr(0,line.find(" "));
                    if(sch=="<"+sitm && l<sval.size()-1){

                    }else if(l==sval.size()-1){

                    }
               }
     }
}
/*
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;


int main() {
    int num,quer;
    string line;
    vector<string> strv;
    vector<string> strq;
    cin>>num>>quer;
    for (int i=0;i<num;i++){
        getline(cin,line);
        strv.push_back(line);
    }
    for(int i=0;i<quer;i++){
        getline(cin,line);
        strq.push_back(str);
        vector<string> sval;
        int val[200]={0},pos=0,i=0;
       do{
          string str;
          val[i]=line.find(".",pos);
          if(val[i]!=string::npos){
               str=line.substr(pos,val[i]-pos);
               sval.push_back(str);
               //cout<<str<<endl;
          }else if(line.find("~")){
               str=line.substr(pos,line.find("~")-pos);
               sval.push_back(str);
               //cout<<str<<endl;
               str=line.substr(line.find("~")+1);
               sval.push_back(str);
               //cout<<str<<endl;
               break;
          }
          pos=val[i]+1;
          i++;
     }while(1);
     for(int j=0;j<sval.size();j++){
          cout<<sval[j]<<endl;
     }
     
     
    }
    
    return 0;
}
*/