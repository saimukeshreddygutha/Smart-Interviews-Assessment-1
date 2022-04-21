
#include<bits/stdc++.h>
using namespace std;


int rangeSum(int nums[], int n, int a, int b){
    int ans = 0;
    
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n;j++){
            sum += nums[j];
            if(sum >= a && sum <= b)
                ans++;
        }
    }
    return ans;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int t;
    cin>>t;
    while(t--){
        int n, a, b;
        cin>>n>>a>>b;
        int nums[n];
        for(int i = 0; i< n;i++)
            cin>>nums[i];
        
        cout<<rangeSum(nums, n, a, b)<<endl;
    }
    return 0;
}