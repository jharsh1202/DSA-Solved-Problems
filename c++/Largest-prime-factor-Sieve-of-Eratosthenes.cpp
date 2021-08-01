#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;

long long int largestPrimeFactor(int N){
    long long int largestPrime = 1; 
    vector <long long> vec(N+1, 0);
    for (int i=0; i<=N; i++) {
        vec[i]=i;
    }
    
    for (long long i=2; i<=N; i++) {
        if(vec[i] == i){
            for(long long j=i*i; j<=N; j+=i) {
            vec[j] = i;
            }
        }
    }
    
    while(N!=1) {
        int prime = vec[N];
        if(prime>largestPrime) largestPrime = prime;
        N = N/vec[N];
    }
    
    return largestPrime;
}

int main() {
    cout<<largestPrimeFactor(10);
}