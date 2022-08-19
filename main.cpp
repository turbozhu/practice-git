#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

inline int factorial(int n) {
    if(n <= 1)
        return 1;
    return n * factorial(n-1);
}

inline int CombinationDP(int m, int n) {
    if(m == n)
        return 1;
    else if(n == 1)
        return m;

    return CombinationDP(m-1, n) + CombinationDP(m-1, n-1);
}

int main(void)
{
    cout << "Factorial of 5: " << endl;
    cout << factorial(5) << endl;

    cout << "\nCombination of C(10, 5): " << endl;
    cout << CombinationDP(10, 5) << endl;
    return 0;
}
