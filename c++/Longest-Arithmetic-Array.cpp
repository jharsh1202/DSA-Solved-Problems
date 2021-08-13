#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v={1,2,35,36,37,38,39,3246,3,46,34,14,12,10,6,4,2,0};
    int maxcount = 0, count = 0;
    for (int i = 0; i < v.size()-2; i++) {
        if(v[i]-v[i+1]==v[i+1]-v[i+2]) {
            ++count;
            if(count>maxcount) maxcount=count;
        } else 
            count=0;
    }
    if(maxcount>0) maxcount+=2; 
    cout<<maxcount;
    return 0;
}
