#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

inline int factorial(int n) {
    if(n <= 1)
        return 1;
    return n * factorial(n-1);
}

inline unsigned long long CombinationRecursive(int m, int n) {
    if(m == n)
        return 1;
    else if(n == 1)
        return m;

    return CombinationRecursive(m-1, n) + CombinationRecursive(m-1, n-1);
}

inline unsigned long long CombinationDPArray(int m, int n) {

    unsigned long long ary[101][101] = {0};
    for(int i = 1; i < 101; ++i) {
        ary[i][1] = i;
        ary[i][i-1] = i;
        ary[i][i] = 1;
    }

    for(int i = 1; i < 101; ++i)
        for(int j = 2; j <= (i-2); ++j)
            ary[i][j] = ary[i-1][j-1] + ary[i-1][j];

    return ary[m][n];
}

int main(void)
{
    cout << "Factorial of 5: " << endl;
    cout << factorial(5) << endl;

    cout << "\nCombination (DP array) of C(20, 10): " << endl;
    cout << CombinationDPArray(20, 10) << endl;

    cout << "\nCombination (Recursive) of C(20, 10): " << endl;
    cout << CombinationRecursive(20, 10) << endl;
    return 0;
}
