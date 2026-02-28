#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;

int maxSum(vector<int>& nums, int k){
    unordered_map<int, int>freq;
    int n =nums.size();
    int sum=0,maxSum=0;
    for(int i=0;i<k;i++){
        sum+=nums[i];
        freq[nums[i]]++;
    }
    if(freq.size()==k) maxSum=sum;
    int l=0,r=k;
    while(r<n){
        sum=sum-nums[l];
        freq[nums[l]]--;
        if(freq[nums[l]]==0){
            freq.erase(nums[l]);
        }
        l++;
        sum=sum+nums[r];
        freq[nums[r]]++;
        r++;
        if(freq.size()==k) maxSum=max(maxSum,sum);
    }
    return maxSum;
}
int main(){
    vector<int>arr={1,5,4,2,9,9,9};
    int k=3;
    cout<< maxSum(arr,k);
}