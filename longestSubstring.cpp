#include <iostream>
#include <string>
using namespace std;
string consecutiveString(string str){
    int n=str.length();
    for(int i=0;i<n;i++){
        int hash[256]={0};
        string s="";
        for(int j=i;j<n;j++){
            if(hash[str[j]]==1){
                break;
            }
            hash[str[j]]=1;
            s+=str[j];
            cout<<s<<endl; 
        }
    }
};
int main(){
    string st="SubString";
    consecutiveString(st);
}