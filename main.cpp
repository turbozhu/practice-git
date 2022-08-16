#include <iostream>

using namespace std;

inline int factorial(int n) {
    if(n <= 1)
        return 1;
    return n * factorial(n-1);
}


int main(void)
{
    cout << "Factorial of 5: " << endl;
    cout << factorial(5) << endl;
    return 0;
}
