//https://www.youtube.com/watch?v=20v8zSo2v18
#include <iostream>
#include <vector>
#include<map>
using namespace std;

//0(n)
vector<int> subarraySumOptimized(vector<int>& nums, int k) {
    vector<int> vec;
    
    return vec;
}

//0(n^2)
int subarraySum(vector<int>& nums, int k) {
    int  res=0, sum;
    for(int i=0; i<nums.size(); i++) {
        sum=0;
        for(int j=i; j<nums.size(); j++) {
            sum+=nums[j];
            if(sum==k) res++;
        }
    } return res;
}

//0(n^2) //T 0(n) //S 0(n) 
int subarraySum(vector<int>& nums, int k) {    
    map<int,int>mp; mp[0]++;
    int cumm_sum = 0, count  = 0;
    
    for(int i=0; i<nums.size(); i++) { 
        cumm_sum += nums[i];
        count += mp[cumm_sum-k];
        mp[cumm_sum]++;
    } return count;
}    

int main() {
    vector<int> v{5,2,5,52,51,34,55,43};
    cout<<subarraySum(v, 5);
    return 0;
}
