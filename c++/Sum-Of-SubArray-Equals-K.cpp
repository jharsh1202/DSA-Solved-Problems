//https://www.youtube.com/watch?v=20v8zSo2v18
#include <iostream>
#include <vector>
#include<map>
using namespace std;

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
