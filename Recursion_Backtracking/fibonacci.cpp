#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if(n == 0)
    {
        return n;
    }
    if(n == 1)
    {
        return n;
    }
    int ans = fibonacci(n-1) + fibonacci(n-2);
    return ans;
}
int main()
{
    int n ;
    cin >> n;
    int answer = fibonacci(n);
    cout << "Answer is " << answer << endl;
    return 0;
}