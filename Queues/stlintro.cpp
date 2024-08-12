#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<int> q;

    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);

    cout<<"size of queue is: "<<q.size()<<endl;
    cout<<"Front: "<<q.front()<<endl;

    q.pop();

    cout<<"size of queue is: "<<q.size()<<endl;
    cout<<"Front: "<<q.front()<<endl;

    if(q.empty()){
        cout<<"Queue is empty "<<endl;
    }else{
        cout<<"Queue is not empty "<<endl;
    }

    return 0;
}