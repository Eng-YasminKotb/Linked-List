#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* link;
};
node* head=NULL;
//declare functions

void insert(int value);
void print();
void delete_first_node();
void search(int value);
void occurrence(int value);
void length();
int main(){

    insert(70);
    insert(71);
    insert(72);
    insert(73);
    insert(74);
    length();


    return 0;
}


void insert(int value){
    node* ptr1=new node;
    ptr1->data=value;
    if(head==NULL){
        ptr1->link=head;
        head=ptr1;
    }
    else{
        node* ptr2=head;
        while(ptr2->link!=NULL){
            ptr2=ptr2->link;
        }
        ptr2->link=ptr1;
        ptr1->link=NULL;

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
