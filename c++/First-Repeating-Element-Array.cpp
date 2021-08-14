#include <iostream>
#include <vector>
#include <map>
using namespace std;

int getFirstRepeatingElement(vector<int> v) {
    int element=INT_MAX;
    map<int, int> mp;
    for(int i=v.size()-1; i>=0; i--) {
        mp[v[i]]++;
        if(mp[v[i]]>1) { if(i<element) element = i; }
    }
    return element;
}

int main() {
    vector<int> v={1,2,3,3,4,5,5,6,7,8};
    cout<<getFirstRepeatingElement(v);
    return 0;
}
