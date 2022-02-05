#include<iostream>
using namespace std;

int binaryToDecimal(int n)
{
    int ans = 0;
    int x=1;
    while(n>0)
    {
        int y = n%10;
        ans += x*y;//ans = and + x*y
        x *= 2;//x=x*2
        n /= 10;//n = n/10
    }
    return ans;
}

int main ()
{
    int n,ans;
    cin>>n;
    ans=binaryToDecimal(n);    
    cout<<ans;
    return 0;
}