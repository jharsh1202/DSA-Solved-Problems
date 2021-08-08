#include <iostream>
#include<vector>
#include<map>
using namespace std;

int findElementsToRemove(vector<int> a, int m) {
    int count = 0; map<int, int> mp;
    for(int x=0; x<a.size(); x++) {
        mp[a[x]]++;
    }
    for (map<int, int>::iterator itr = mp.begin(); itr != mp.end(); ++itr) {
        // cout << '\t' << itr->first
        //      << '\t' << itr->second << '\n';
        
    }
    return count;
}

int main() {
    vector<int> v = {1,1,1,2,3,2};
    findElementsToRemove(v, 2);
    return 0;
}
