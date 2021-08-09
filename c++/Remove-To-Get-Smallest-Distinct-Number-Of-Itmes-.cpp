#include <iostream>
#include<vector>
#include<map>
using namespace std;

int findElementsToRemove(vector<int> a, int m) {
    int count = 0; map<int, int> mp; vector<int> v;
    for(int x=0; x<a.size(); x++) {
        mp[a[x]]++;
    }
    for (map<int, int>::iterator itr = mp.begin(); itr != mp.end(); ++itr) {
        v.push_back(itr->second);
    }
    sort(v.begin(), v.end(), greater<int>());
    for (int i = 0; i < count; i++) {
        if(v[i]<=m) count+=v[i]-m;
    }
    
    return count;
}

int main() {
    vector<int> v = {1,1,1,2,3,2};
    findElementsToRemove(v, 2);
    return 0;
}
