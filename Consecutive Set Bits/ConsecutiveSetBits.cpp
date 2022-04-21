#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int findMax(long long int n){
    int count = 0, maxcount = 0;
    
    while(n != 0){
        if((n&1) == 0)
            count = 0;
        else
            count++;
        maxcount = max(count, maxcount);
        n = n>>1;
    }
    
    return maxcount;
    
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        cout<<findMax(n)<<endl;
    }
    return 0;
}