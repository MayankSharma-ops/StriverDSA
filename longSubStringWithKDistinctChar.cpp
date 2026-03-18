#include <iostream>
using namespace std;
    int kDistinctChar(string& s, int k) {
        //your code goes here
        int n=s.length();
        int maxlen=0;
        for(int i=0;i<n;i++){
            int hash[256]={0};
            int count=0;
            for(int j=i;j<n;j++){
                if(hash[s[j]]==0) count++;
                hash[s[j]]=1;
                if(count<=k){
                    maxlen=max(maxlen,j-i+1);
                }
            }
        }
        return maxlen;
    }
int main(){
    string s="aababbcaacc";
    int k=2;
    cout<<kDistinctChar(s,k);
    return 0;
}