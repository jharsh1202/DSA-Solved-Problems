#include <iostream>
#include <vector>
using namespace std;

int timeRequired(int N, vector<int> P, vector<int> E, vector<int> A) {
    int time = 0;
    
    return time;
}

int main() {
    int N; cin>>N; vector<int> P, E, A;
    for(int i=0; i<N; i++) {
        int val; cin>>val;
        P.push_back(val);
    }
    for(int i=0; i<N; i++) {
        int val; cin>>val;
        E.push_back(val);
    
    for(int i=0; i<N; i++) {
        int val; cin>>val;
        A.push_back(val);
    }
    cout<<timeRequired(N,P,E,A);
    return 0;
}
