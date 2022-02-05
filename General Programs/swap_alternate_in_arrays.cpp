#include<iostream>
using namespace std;

int main()
{
    int arr[8] = {1,2,3,4,5,6,7,8};
    for (int i=0;i<8;i=i+2)
    {
        if (i+1<8)
        {
            int swap;
            swap=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=swap;
        }
    }
    cout<<"Alternately Swapped Array: ";
    for (int j=0;j<8;j++)
    {
        cout<<arr[j];
    }

    return 0;
}
