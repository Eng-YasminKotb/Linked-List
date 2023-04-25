#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* link;
};
 node* head=NULL;
//declare functions
void insert(int value);

int main(){

    insert(71);


    return 0;
}

void insert(int value){
    node* ptr1=new node;
    ptr1->data=value;
    if(head==NULL){
        head=ptr1;
        ptr1->link=NULL;
    }
}








































































































































/*insert(70);
insert(71);
insert(71);
insert(75);
insert(73);
print();
search(4);
occurrence(71);
d_node(70);
print();
insert_begin(66);
print();*/
/*
return 0;


void insert(int value){
    node* green =new node ;
    node* blue;
    blue=head;

    green->data=value;
    if(head==NULL){
        head=green;

        green->link=NULL;
    }
    else{
        while(blue->link!=NULL){
            blue=blue->link;
        }
        blue->link=green;
        green->link=NULL;

    }
}

void  print() {
    node *green;
    green=head;
    if (head == NULL) {
        cout << "linked list is empty";
    } else {
        while (green!= NULL) {
            cout << green->data << " ";
            green = green->link;

        }
        cout<<"\n";
    }
}



void search(int value){
    bool check=1;
    node* green;
    green=head;
    while(green != NULL){
        if(green->data==value) {
            check = 0;
        }
        green= green->link;

    }
    if(check==0)cout<<"Existed\n";
    else cout<<"Not existed\n";

}

void occurrence(int value){
    int cnt=0;
    node* green;
    green=head;
    while( green!=NULL){
        if( green->data==value){
            cnt++;
        }
        green= green->link;
    }
    cout<<cnt<<"\n";
}

void d_node (int value){
    node* t_node;
    t_node=head;
    if(t_node->data==value){
        head=t_node->link;
        free(t_node);

    }
}

void insert_begin(int value){
    node* green=new node;
    green->data=value;
    green->link=head;
    head=green;
}



/*
#include <bits/stdc++.h>
using namespace std ;

int* insert(int n,int arr[],int x, int pos)
{
    int C_arr[100];
    for(int i=0;i<n+1;i++) C_arr[i]=arr[i];


    for (int i = pos; i <n+1 ; i++) arr[i] = C_arr[i-1];

    arr[pos - 1] = x;
    return arr;
}
int main() {
    int arr[100];
    int n;
    cin>>n;

    for (int i = 0; i < n; i++) cin>>arr[i];

    int new_val, pos;  cin>>new_val>>pos;
    insert(n,arr, new_val, pos);//arr
    for (int i = 0; i < n + 1; i++) cout << arr[i] << " ";
    cout <<"\n";


    return 0;
}*/










/*


/*
 *
    //1)
    cout<<"Enter the elements: \n";
    int arr_1[5];
    for(int i=0;i<5;i++) cin>>arr_1[i];
    for(int i=0;i<5;i++) cout<<arr_1[i]<<" ";
    cout<<"\n";
    //2)
    int arr_2[5]={1,2,3,4,5};
    int arr_3[]={1,2,3,4,5};
    for(int i=0;i<5;i++) cout<<arr_2[i]<<" ";

    //3)
    int n;
    cin>>n;
    int arr_4[n];
    for(int i=0;i<n;i++) cin>>arr_4[i];
    for(int i=0;i<n;i++) cout<<++arr_4[i]<<" ";
    cout<<"\n";

//---------------Access Elements by indexes---------------------------------------------

    int arr_5[3]={50,70,90};
    cout<<arr_5[3/2];

//---------------The elements are stored at contiguous memory locations-----------------

    int arr[5];
    for (int i = 0; i < 5; i++){
        cout << "Address arr[" << i <<  "] is " << &arr[i]<< "\n";
    }

//---------------------Ways to traverse(print) the array-------------------------------

    int arr_6[6]={11,12,13,14,15,16};

// Way 1
    for(int i=0;i<6;i++) cout<<arr_6[i]<<" ";

// Way 2(****)
    cout<<"By Other Method:"<<endl;
    for(int i=0;i<6;i++)cout<<i[arr]<<" ";
    cout<<endl; */




/*
----------------------------------------------------LECTURE3------------------------------------------
  #include <bits/stdc++.h>
using namespace std ;
int* insert(int arr[],int x, int pos)
{
    int C_arr[100];
    for(int i=0;i<n+1;i++) C_arr[i]=arr[i];


    for (int i = pos; i <n+1 ; i++) arr[i] = C_arr[i-1];

    arr[pos - 1] = x;
    return arr;
}
int main() {
    int arr[100];
    int n;
    cin>>n;

    for (int i = 0; i < n; i++) cin>>arr[i];
    cout<<"ELements of the previous array: \n";
    for (int i = 0; i < n; i++)  cout << arr[i] << " ";
    cout<<"\n";
    int new_val, pos;  cin>>new_val>>pos;
        insert(arr, new_val, pos);//arr
        for (int i = 0; i < n + 1; i++) cout << arr[i] << " ";
        cout <<"\n";


        return 0;
}
 */



/*
     -------pointers---------
 Difinition-> is a variable that stores the memory address as its value.
 syntax---->  data type* name =&(variable)
 Example---->
 int x=25;
 cout<<x<<"\n";//25
 cout<<&x<<"\n";//address
 int* ptr=&x;
 cout<<ptr<<"\n";//address
 cout<<*ptr;//25
 pointer point to a variable that hasn't a name f;
   int* ptr=new int(8);
   cout<<*ptr;
    ---------Structure-----------
definition----->is a user define data type
 ` struct node{
 int data;
 node* ;


 }

*/