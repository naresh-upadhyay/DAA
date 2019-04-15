#include<stdio.h>
#include<stdlib.h>
struct bst{
    struct bst *prev;
    int data;
    struct bst *next;
}*start,*check,*least,*greatest;

struct bst *create(){
    struct bst *temp;
    temp=(struct bst*)malloc(sizeof(struct bst));
    int val;
    printf("Enter the value of data:-");
    scanf("%d",&val);
    temp->data=val;
    temp->next=NULL;
    temp->prev=NULL;
    return temp;
}
void insert(struct bst *temp){
    if(start==NULL){
        start=temp;
        check=start;
    }else if (check==NULL){
        check=temp;
    }
    else if(check->data>temp->data){
        check=check->prev;
        least=check;
        insert(temp);        
    }else{
        check=check->next;
        greatest=check;
        insert(temp);        
    }
}
void out(struct bst *check1){
    if(start->data>check1->data){
        check1=check1->prev;
        out(check1);     
        printf("%d",check1->data);

    }else{
        check1=check1->next;
        out(check1);   
        printf("%d",check1->data);
    }
}
int main(){
    char ch='y';
    
    while(ch=='y'||ch=='Y'){
    insert(create());
    printf("Enter the value of y/n ?");
    scanf("%c",&ch);
    scanf("%c",&ch);
    }
    out(start);

}