#include<bits/stdc++.h>
using namespace std;


bool findAns(string s1, string s2){
    int l1 = s1.size();
    int l2 = s2.size();
    
    int last = 0;

    int i = 0;
    for(;i < l1;i++){
        int j = last;
        for(;j < l2;j++){
            if(s1[i] == s2[j]){
                last = j + 1;
                break;
            }
            
        }
        if(j == l2)
            return false;
    }
    return true;
    
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        string s1, s2;
        cin>>s1>>s2;
        if(findAns(s1,s2))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}