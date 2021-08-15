#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

int getFirstRepeatingElement(vector<int> arr) {
    int min = -1;
    int n = sizeof arr/sizeof arr[0];
    
    set<int> myset;
 
    for (int i = n - 1; i >= 0; i--) {
        if (myset.find(arr[i]) != myset.end())
            min = i;
        else myset.insert(arr[i]);
    }
    if (min != -1) return arr[min];
    return -1;
}

int main() {
    vector<int> v={1,2,3,3,4,5,5,6,7,8};
    cout<<getFirstRepeatingElement(v);
    return 0;
}
