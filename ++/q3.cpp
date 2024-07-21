#include<iostream>
using namespace std;

int main(){
    int x = 5, y;
    int y1 = ++x ;
    int y2 = x++;
    y = y1 +y2;
    cout<<y;

    return 0;
}