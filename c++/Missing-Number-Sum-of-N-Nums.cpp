#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;

int missingNumber(vector<int>& nums) {
    int expSum = ((nums.size())*(nums.size()+1))/2, arrSum=0;
    for(int i=0; i<nums.size(); i++) arrSum+=nums[i];
    return expSum-arrSum;
}

