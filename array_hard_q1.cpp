#include<bits/stdc++.h>
using namespace std;
// Function to compute binomial coefficient (nCr)
    long long findPascalElement(int r, int c) {
        // Element is C(r-1, c-1)
        int n = r - 1;
        int k = c - 1;

        long long result = 1;

        // Compute C(n, k) using iterative formula
        for (int i = 0; i < k; i++) {
            result *= (n - i);
            result /= (i + 1);
        }

        return result;
    }

int main() 
{
    int r = 5, c = 3;
    cout <<findPascalElement(r, c);
    return 0;
}