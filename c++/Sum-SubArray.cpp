#include <iostream>
#include <vector>
using namespace std;
vector<int> sumOfSubArray(vector<int> v) {
    vector<int> res;
    for(int i=0; i<v.size(); i++) {
        int sum = 0;
        for (int j=i; j<v.size(); j++) {
            sum += v[j];
            res.push_back(sum);
        }        
    }
    return res;
}

int main() {
    vector<int> v{1, 2, 0, 7, 2};
    //for(int i=0; i<10; i++) v.push_back(rand()%11);
    vector<int> res = sumOfSubArray(v);
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
    cout<<"\n";
    for(int i=0; i<res.size(); i++) cout<<res[i]<<" ";
    return 0;
}
