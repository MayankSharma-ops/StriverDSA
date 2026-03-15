#include <iostream>
using namespace std;
int maxLen(string st){
    int l=0,r=0,maxLen=0;
    int n=st.length();
    int hash[256] = {0};
    while(r<n){
        if(hash[st[r]]!=0){
            if(hash[st[r]]>l){
                l=hash[st[r]]+1;
            }
        }
        maxLen=max(maxLen,r-l+1);
        hash[st[r]]=r;
        r++;
    }
    return maxLen; 
}
int main(){
    string st ="cadbzabcd";
    cout<<maxLen(st);
}