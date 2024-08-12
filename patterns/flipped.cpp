#include<iostream>
using namespace std;

void simple(int n){

    for (int i = n; i > 0; i--) {
        for (int j = 1; j <= n; j++) 
        {
            if (j >= i) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
int main(){

    int n;
    simple(5);
    return 0;
}