#include <iostream>
#include <vector>
using namespace std;

int longestArithmeticArrayLength(vector<int> v) {
    int maxcount = 0, count = 0;
    int prevDiff=v[0]-v[1];count=2;maxcount=2;
    for (int i = 1; i < v.size()-1; i++) {
        if(v[i]-v[i+1]==prevDiff) {count++; if(count>maxcount)maxcount=count;}
        else {prevDiff=v[i]-v[i+1];count=2;}
    }
    return maxcount;
}

int main() {
    long int t;
    cin>>t;
    for(long int j=1; j<=t; j++) {
        int n; cin>>n; vector<int> vec;
        for(int i=0; i<n; i++) {
            int v; cin>>v; vec.push_back(v);
        }
        cout<<"case #"<<j<<": "<<longestArithmeticArrayLength(vec)<<endl;
    }
    return 0;
}
