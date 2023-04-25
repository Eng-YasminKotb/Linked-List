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
void print();
int main(){

    insert(71);
    insert_first(70);
    print();
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
void print(){
    node* ptr1=head;
    if(head==NULL) cout<<"Linked list is empty\n";
    else{
        while(ptr1!=NULL){
            cout<<ptr1->data<<" ";
            ptr1=ptr1->link;
        }
        cout<<"\n";
    }
}
