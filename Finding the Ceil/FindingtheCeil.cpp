#include<bits/stdc++.h>
using namespace std;
int findCeil(int a[], int t, int n){
    int l = 0;
    int h = n-1;
    int ans = INT_MAX;
    while(l <= h){
        int m = (l + h)/2;
        if(a[m]>= t){
            ans = a[m];
            h = m -1;
        }else
            l = m +1;
            
    }
    
    
    return ans;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n;i++)
        cin>>a[i];
    
    sort(a, a+n);
    
    int q;
    cin>>q;
    for(int i = 0; i < q;i++){
        int t;
        cin>>t;
        cout<<findCeil(a, t, n)<<endl;
    }
    return 0;
}