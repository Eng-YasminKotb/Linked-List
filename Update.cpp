#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* link;
};
node* head=NULL;
//declare functions
void insert(int value);
void insert_first(int value);
int main(){

    insert(71);
    insert_first(70);

    return 0;
}

void insert(int value){
    node* ptr1=new node;
    ptr1->data=value;
    if(head==NULL) {
        head = ptr1;
        ptr1=ptr1->link;
    }

}
void insert_first(int value){
    node* ptr1=new node;
    ptr1->data=value;
    ptr1->link=head;
    head=ptr1;
}