#include<bits/stdc++.h> 
using namespace std; 
struct node{
    int val;
    bool flag=false;
}node;
class graph{
    int val;
    list<struct node> *adj;
    public:
    graph(int v){
        adj=new list<struct node>[v];
    }
    void addnode(struct node n1,struct node n2){
        adj[n1.val].push_back(n2);
    }
    bool iscyclic(){
        
    }
};
int main(){
    int node;
    struct node e1,e2;
    cin >>node;
    cout <<"nodes";
    graph g(node);
    char ch='y';
    while(ch=='Y'||ch=='y'){
        cin >>e1.val>>e2.val;
        g.addnode(e1,e2);
        ch='n';
        cout<<"move forward :y/n?";
        cin >>ch;
    }
    
}