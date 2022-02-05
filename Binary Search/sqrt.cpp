#include<iostream>
using namespace std; 
int mySqrt(int x) 
    {
     if (x==0)
         return 0;
     long long left = 0, right =x,sqrt,mid,midsqr;
     while (right>0)
    {
        //Prevent (left+right) overflow
        mid = left+((right-left)/2);
        midsqr = mid*mid;
        cout<<"mid="<<mid;
        cout<<"midsqr="<<midsqr;
        if (midsqr==x || mid*mid<x && (mid+1)*(mid+1)>x)
        {
            cout<<"mid="<<mid<<endl;
            return mid;
        }
        else if (midsqr > x)
        {           
            right = mid - 1;
            cout<<"Right="<<right<<endl;
        }
        else
        {
            left = mid + 1;
            cout<<"Left="<<left<<endl;
        }
    }
    return -1;
    }
int main()
{
    int x;
    cin>>x;
    cout<<mySqrt(x);
}