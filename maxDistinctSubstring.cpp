#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int maximumLength(string st){
    int n=st.length();
    int maxLen=0;
    string best="";
    for(int i=0;i<n;i++){
        int hash[256]={0};
        string s="";
        for(int j=i;j<n;j++){
            if(hash[st[j]]==1) break;
            hash[st[j]]=1;
            s+=st[j];
            if(s.length()>maxLen){
                maxLen=s.length();
                best=s;
            }
        }
    }
    cout<< best<<endl;
    return maxLen;
}
int main(){
    string st = "cadbzabcd";
    cout<< maximumLength(st);
}