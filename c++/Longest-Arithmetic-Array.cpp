#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v={1,2,35,36,3246,3,46,34,6,8,10,12,14,12,10,8,6,4};
    int maxcount = 0, count = 0; //int maxs=-1, maxe=-1; 
    for (int i = 0; i < v.size(); i++) {
        //int s=-1, e=-1;
        if(i<v.size()-2 && (v[i]-v[i+1]==v[i+1]-v[i+2])) {
            ++count;
            if(count>maxcount) maxcount=count;
            // if(s==-1) {
            //     s=i;
            //     cout<<i<<"   ";
            //     cout<<"v[i] "<<v[i]<<" v[i+1] "<<v[i+1]<<" v[i+1] "<<v[i+1]<<" v[i+2]"<<v[i+2]<<endl;
            // }
            // else e=i;
        } else {
            count=0;
            // s=-1;e=-1;
        }
        //if(e-s>maxe-maxs){ maxe=e; maxs=s;}
    }
    //cout<<maxs<<" "<<maxe;
    if(maxcount>0)cout<<maxcount+1; 
    else cout<<maxcount;
    return 0;
}
