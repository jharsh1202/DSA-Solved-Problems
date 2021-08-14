#include<iostream>
#include<vector>
using namespace std;

int maxMoney(vector<int> v) {
    int money=0;
    for(int i=0; i<v.size(); i++) {
        
    }
    return money;
}

int main(){
    int N; cin>>N;
    int val; vector<int> vec;
    for(int i=0; i<N; i++) {
        cin>>val;
        vec.push_back(val);
    }
    cout<<maxMoney(vec);
    return 0;
}
