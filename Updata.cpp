#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* link;
};
node* head=NULL;
//declare functions

void insert_first(int value);
void insert_last(int value);
void insert_specific_index(int insertedValue,int targetValue);
void print();
void delete_first_node();
void search(int value);
void occurrence(int value);
void length();
int main(){

    insert_first(70);
    insert_last(71);
    insert_last(72);
    insert_last(73);
    insert_last(74);
    insert_specific_index(22,71);
    insert_last(55);
    print();


    return 0;
}


void insert_first(int value){
    node* ptr1=new node;
    ptr1->data=value;
    if(head==NULL){
        ptr1->link=head;
        head=ptr1;
    }
    else{
        ptr1->link=head;
        head=ptr1;

    }

}
void insert_last(int value){
    node* ptr1=new node;
    ptr1->data=value;
    node* ptr2=head;
    while(ptr2->link!=NULL){

        ptr2=ptr2->link;
    }

    ptr2->link=ptr1;
    ptr1->link=NULL;
}
void insert_specific_index(int insertedValue,int targetValue){
    node* ptr1=new node;
    ptr1->data=insertedValue;
    bool check=0;
    node* ptr3;
    node* ptr4=head;
    while (ptr4!=NULL){
        node* ptr2=ptr4;
        if(ptr2->data==targetValue){
            ptr3=ptr2;
            ptr3=ptr2->link;
            ptr2->link=ptr1;
            check=1;
        }
        if(check==1){
            ptr1->link=ptr3;
            break;
        }
        ptr4=ptr4->link;
    }
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
void delete_first_node(){

    node* ptr1=head;
    head=ptr1->link;
    free(ptr1);

}
void search(int value){
    node* ptr1=head;
    bool check=0;
    while(ptr1!=NULL){
        if(ptr1->data==value) check=1;
        ptr1=ptr1->link;
    }
    if(check==1) cout<<"Existed\n";
    else cout<<"NOT Existed\n";
}
void occurrence(int value){
    node* ptr1=head;
    int cnt=0;
    while(ptr1!=NULL){
        if(ptr1->data==value)  cnt++;
        ptr1=ptr1->link;
    }
    cout<<cnt<<"\n";
}
void length(){
    node* ptr1=head;
    int cnt_nodes=0;

    while(ptr1!=NULL){
        cnt_nodes++;
        ptr1=ptr1->link;
    }
    cout<<cnt_nodes<<"\n";
}
