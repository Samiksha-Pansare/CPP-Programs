#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int sum =0;
    int m=n;
    int cube;
    while(n>0)
    {
        //This function shows 153 as not armstrong!
        int lastdigit = n%10;
        cube = pow(lastdigit,3);
        sum = sum + cube;
        n=n/10;
    }
    if (sum == m)
    {
        cout<<"Its a armstrong Number"<<endl;
    }
    else 
    {
        cout<<"Its not a Armstrong Number";
    }
    cout<<m<<endl;
    cout<<sum<<endl;
    return 0;
}