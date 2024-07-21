#include<iostream>
#include<stack>
using namespace std;

class Stack{

    public:
       int *arr;
       int top;
       int size;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    } 

    void push(int element){
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }else{
            cout<<"Stack overflow"<<endl;
        }
        
    } 

    void pop(){
        if(top>=0){
            top--;
        }else{
            cout<<"stack underflow"<<endl;
        }
    }

    int peek(){
        if(top>=0){
            return arr[top];
        }else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if (top==-1)
        {
            return true;
        }else{
            return false;
        }
        
    }

};
int main(){

    Stack s(5);

    s.push(22);
    s.push(43);
    s.push(54);
    s.push(44);
    s.push(94);
    s.push(24);

    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;

    if(s.isEmpty()){

        cout<<"stack is empty "<<endl;
    }else{
        cout<<"stack is not empty "<<endl;
    }
     

}