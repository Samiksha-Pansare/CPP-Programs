// I/P: 5
// 1
// 12
// 123
// 1234
// 12345
#include<iostream>
using namespace std;
 int main(){
     int n,k=1;
     cin>>n;

     for(int i=1;i<=n;i++){
         for(int j=1;j<=i;j++){
            cout<<j;
         }
         cout<<endl;
     }

     return 0;
 }