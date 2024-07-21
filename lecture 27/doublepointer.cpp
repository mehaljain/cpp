#include<iostream>
using namespace std;
int main(){
   
    // int i=5;
    // int *ptr=&i;
    // cout<<"&i -> "<<&i<<endl;
    // cout<<"ptr-> "<<ptr<<endl;
    // cout<<"&ptr-> "<<&ptr<<endl;
    // cout<<"*ptr-> "<<*ptr<<endl;

int value=5;
int *ptr=&value;
int **ptr2=&ptr;
cout<<sizeof(ptr)<<endl;
cout<<sizeof(ptr2)<<endl;

// cout<<endl<<"all ok"<<endl;
// cout<<"value-> "<<value<<endl;
// cout<<"ptr-> "<<ptr<<endl;
// cout<<"&ptr2-> "<<&ptr2<<endl;
// cout<<"*ptr-> "<<*ptr<<endl;
// cout<<"&ptr-> "<<&ptr<<endl;
// cout<<"ptr2-> "<<ptr2<<endl;
// cout<<"*ptr2-> "<<*ptr2<<endl;
// cout<<"ptr-> "<<ptr<<endl;
// cout<<"&value-> "<<&value<<endl;
// cout<<"*(*ptr2)-> "<<*(*ptr2)<<endl;
// cout<<"*(*ptr2)-> "<<**ptr2<<endl;

// cout<<endl<<ptr<<endl;
// cout<<*ptr<<endl;
// ptr=ptr+1;
// cout<<ptr<<endl;\
// cout<<*ptr<<endl;

// cout<<endl<<ptr<<endl;
// cout<<*ptr<<endl;
// *ptr=*ptr+1;
// cout<<ptr<<endl;
// cout<<*ptr<<endl;
// cout<<value<<endl;


/// -------------ON UPDATION **ptr2 AFTER APPLYING DOUBLE POINTER-------------------------------------////

// cout<<"before-> "<<**ptr2<<endl;
// cout<<"address before-> "<<&ptr2<<endl;
// cout<<"value before-> "<<value<<endl;
// cout<<"ptr-> "<<ptr<<endl;
// cout<<"address of value before-> "<<&value<<endl;
// **ptr2=**ptr2+3;
// cout<<"address after-> "<<&ptr2<<endl;
// cout<<"after-> "<<**ptr2<<endl;
// cout<<"value after-> "<<value<<endl;
// cout<<"value of *ptr-> "<<*ptr<<endl;
// cout<<"ptr-> "<<ptr<<endl;
// cout<<"address of value before-> "<<&value<<endl;

// only value change


/// -------------ON UPDATION *ptr2 AFTER APPLYING DOUBLE POINTER-------------------------------------////

// ***only ptr change/value at ptr2    ************

// cout<<"before :"<<endl;
// cout<<endl<<" *ptr2 before-> "<<*ptr2<<endl;
// cout<<"value at ptr-> "<<*ptr<<endl;
// cout<<"value of ptr//adress of value-> "<<ptr<<endl;
// cout<<"value of ptr2//adress of ptr1-> "<<ptr2<<endl;
// cout<<"address of value->-> "<<&value<<endl;
// cout<<" value-> "<<value<<endl;
// *ptr2=*ptr2+1;
// cout<<"after :"<<endl;
// cout<<endl<<" *ptr2 before-> "<<*ptr2<<endl;
// cout<<"value at ptr-> "<<*ptr<<endl;
// cout<<"value of ptr//adress of value-> "<<ptr<<endl;
// cout<<"value of ptr2//adress of ptr1-> "<<ptr2<<endl;
// cout<<"address of value->-> "<<&value<<endl;
// cout<<" value-> "<<value<<endl;










}