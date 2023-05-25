#include <iostream>
using namespace std;
int solve(int dividend , int divisor)
{
    int s = 0;
    int e = abs(dividend);
    int mid = s + (e - s) / 2;
    int ans = -1;
    while(s <= e)
    {
       
        if(abs(mid * divisor) == abs(dividend))
        {
            ans = mid;
            break;
        }
        if(abs(mid * divisor) > abs(dividend))
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e -s) / 2;
    }
    if((divisor < 0 && dividend < 0) || (divisor > 0 && dividend > 0)){
        return ans;
    }
    else
    {
        return -ans;
    }

}
int main(){
    int dividend = 36;
    int divisor = -7;
    
    int ans = solve(dividend,divisor);
    cout << "Answer is : " << ans << endl;
    double precision;
    cout << "Enter the precision you want your answer : " << endl;
    cin >> precision;
    double step = 0.1;
    double answer = ans;
    for(int i = 0 ;i < precision ; i++)
    {
        for(double j = answer ; j * j <= dividend ; j = j + step){
           answer = j;
        }
        step = step / 10;
    }
    cout << answer << endl;
    return 0;
}