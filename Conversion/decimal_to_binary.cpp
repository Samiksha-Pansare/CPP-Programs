#include<iostream>
using namespace std;

int decimalToBinary(int n)
{
    int ans = 0;
    int x=1;
    while(x<=n)
    {
        x *= 2;//x=x*2
    }
    
    return ans;
}

int main ()
{
    int n,ans;
    cin>>n;
    ans=decimalToBinary(n);    
    cout<<ans;
    return 0;
}