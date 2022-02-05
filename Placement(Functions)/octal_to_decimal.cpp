#include<bits/stdc++.h>
using namespace std;
// Octal to decimal
int sum(int n){
    int ans = (n*(n+1))/2;
    return ans;
}

int32_t main() {
    int n;
    cin>>n;
    cout<< sum(n)<<endl;

}
