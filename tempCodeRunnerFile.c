#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct node {
int info;
struct node *next;
struct node *prev;
};
struct node *head = NULL;

struct node *getanewnode(int a){
struct node *ptr = (struct node *)malloc(sizeof(struct node ));
ptr->data=a;
ptr->next = NULL;
ptr->prev= NULL;
return ptr;
}

void insertatlast(int info){
 struct node *ptr = (struct node *)malloc(sizeof(struct node ));
 ptr->info = info;
 if(head==NULL){
    ptr->next = head;
    head = ptr;
 }
 else{
struct node *p = head;
while(p->next != NULL){
    p= p->next;}

p->next=ptr;
ptr->prev =p;
ptr->next = NULL;}
}


void display(struct node *ptr){

while(ptr!=NULL){

    printf("%d\n",ptr->data);
    ptr=ptr->next;
}
}


int main(){

int i,n,b;
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&b);
    insertatlast(b);
}

display(head);
return 0;
}

