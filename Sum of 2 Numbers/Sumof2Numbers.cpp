#include<bits/stdc++.h>
using namespace std;

bool isExists(int a[], int n, int totalSum){
    
    sort(a, a+n);
    
    int l = 0;
    int h = n - 1;
    
    while(l < h){
        int remSum = totalSum - a[l] - a[h];
        if(remSum == a[l] + a[h])return true;
        else if(remSum > (a[l] + a[h]))
            l++;
        else
            h--;
    }
    return false;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],totalSum =0;
        for(int i =0;i < n;i++){
            cin>>a[i];
            totalSum += a[i];
        }
        if(isExists(a, n, totalSum))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
