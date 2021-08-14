#include <iostream>
#include <vector>
using namespace std;

int numberOfRecordBreak(vector<int> vec) {
    int recordBreakingDays=0;
    int max=INT_MIN;
    for(int i=0; i<vec.size(); i++) {
        if(vec[i]>max) {
            max = vec[i];
            if(i==vec.size() || max>vec[i+1]) {
                recordBreakingDays++;
            }
        }
    }
    return recordBreakingDays;
}

int main() {
    int t=1; //cin>>t;
    for(int j=0; j<t; j++) {
        int n; //cin>>n;
         vector<int> vec={4, 8 ,15, 16, 23, 42};
        // for(int i=0; i<n; i++) {
        //     int val; cin>>val;
        //     vec.push_back(val);
        // }
        cout<<numberOfRecordBreak(vec)<<endl;
    }
    return 0;
}
