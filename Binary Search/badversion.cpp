#include<iostream>
#include <bits/stdc++.h>
using namespace std; 
bool isBadVersion(int y)
{
    if (y>=2)
        return true;
    else
        return false;
}
int firstBadVersion(int n) 
{
     if(n==0)
        return -1;
    if(n==1)
    {
        if(isBadVersion(1)==true)
        {
            return 1;
        }
    }

    int left=0,right=n;
    while (left<right)
    {
        int mid = left + (right-left)/2;
        cout<<"Initial Mid"<<mid<<endl;
        if (isBadVersion(mid)==true && isBadVersion(mid-1)==false)
        {
            cout<<"mid"<<mid<<endl;
            return mid;
        }
        else if (isBadVersion(mid)==true && isBadVersion(mid-1)==true)
        {
            right = mid;
            cout<<"right"<<right<<endl;
        }
        else 
        {
            left = mid+1;
            cout<<"left"<<left<<endl;
        }
    }
    if (left == right)
    {
        if(isBadVersion(right)==true && isBadVersion(right-1)==false)
         return right;
    }
    return -1;

}
int main()
{
    int n = 2;
    cout<<firstBadVersion(n)<<endl;
}