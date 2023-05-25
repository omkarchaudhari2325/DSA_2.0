#include <iostream>
using namespace std;
int factorial(int n)
{
    cout << "Factorial function is called for " << n << endl;
    if(n == 1)
    {
        return n;
    }
    int ans = n * factorial(n-1);
    cout << "Anser is " << n << " * "<< (n-1) << " = " << ans << endl;
    return ans;
}
int main()
{
    int n; 
    cout << "Enter the value of n : " << endl;
    cin >> n;
    int ans = factorial(n);
    cout << "Answer is " << ans << endl;
    return 0;
}