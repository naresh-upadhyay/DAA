#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *lnode,*rnode;
    int data;
    int flag;
}*root,*trav;
struct node * temp(){
    struct node *tempn;
    int val,flagv=0;
    tempn=(struct node*)malloc(sizeof(struct node ));
    printf("Enter the value in node:-");
        printf("HI ");
    tempn->flag=flagv;
    tempn->lnode=NULL;
    tempn->rnode=NULL;
    scanf(" %d",&val);
        printf("HI ");
    tempn->data=val;
    return tempn;
}
void create(struct node *tempp,int *num){
    *num--;
    if(tempp==NULL){
        tempp=temp();
        printf("HI ");
    }
    else if(*num){
        tempp=tempp->lnode;
        create(tempp,num);
        tempp=tempp->rnode;
        create(tempp,num);
    }
}
void printSearch(struct node *trav){
    if(trav->flag==0){
        printf(" %d ",trav->data);
        trav->flag=1;
    }else{
        trav=trav->lnode;
        printSearch(trav);
        trav=trav->rnode;
        printSearch(trav);
    }
}
int main(){
    int val;
    printf(" Enter the height :-");
    scanf("%d",&val);
    create(root,&val);
    printSearch(root);
}