#include <iostream>
using namespace std;

void pypart2(int n)
{
    int i, j, k = n;

    // Outer loop to handle number of rows
    for (i = 1; i <= n; i++) {

        // Inner loop for columns
        for (j = 1; j <= n; j++) {

            // Condition to print star pattern
            if (j >= k)
                cout << "* ";
            else
                cout << " ";
        }
        k--;
        cout << "\n";
    }
}

// Driver Code
int main()
{
    int n = 5;
    // Function Call
    pypart2(n);
    return 0;
}