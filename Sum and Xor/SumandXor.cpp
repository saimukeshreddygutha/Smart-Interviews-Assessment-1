#include<bits/stdc++.h>
using namespace std;


long long int findAns(long long int n){
    long long int ans = 0;
    while(n != 0){
        if((n&1) == 0)
            ans++;
        n = n>>1;
    }
    
    return pow(2, ans)-1;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        
        cout<<findAns(n)<<endl;
    }
    return 0;
}