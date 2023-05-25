#include <iostream>
using namespace std;

int findSqrt(int n)
{
    int s = 0 ;
     int e = n;
     int ans = -1;
     int mid = s + (e - s) / 2;
     while(s <= e)
     {
        if(mid * mid == n)
        {
            return mid;
        }
        if(mid * mid > n)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid ;
            s = mid + 1;
        }
        mid = s + (e - s ) / 2;
     }
     return ans;
}
int main()
{
    int n ;
    cout << "Enter the number " << endl;
    cin >> n;
    int ans = findSqrt(n);
    cout << "Ans is " << ans << endl;
    double precision;
    cout << "Enter the number of floating digits in precision: " << endl;
    cin >> precision;
    double step = 0.1;
    double   finalAnswer = ans;
    for(int i = 0 ; i < precision ; i++)
    {
        for(double j = ans; j * j <= n ; j = j + step)
        {
            finalAnswer = j ;
        }
        step = step / 10;
    }
    cout << "final result after the precision is : " << finalAnswer << endl;
    return 0; 
}