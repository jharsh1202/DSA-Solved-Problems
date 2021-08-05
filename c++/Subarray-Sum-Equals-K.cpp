#include <iostream>
#include <vector>
using namespace std;


int subarraySumOptimized(vector<int>& nums, int k) {
    int  res=0;
    for(int i=0; i<nums.size(); i++) {
        int sum=0;
        for(int j=i; j<nums.size(); j++) {
            sum+=nums[j];
            if(sum==k) res++;
        }
    }
    return res;
}

//0(n^2)
int subarraySum(vector<int>& nums, int k) {
    int  res=0;
    for(int i=0; i<nums.size(); i++) {
        int sum=0;
        for(int j=i; j<nums.size(); j++) {
            sum+=nums[j];
            if(sum==k) res++;
        }
    }
    return res;
}

int main() {
    vector<int> v{1,1,1};
    cout<<subarraySum(v, 2);
}