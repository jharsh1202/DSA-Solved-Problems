#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;

int countPrimes(int n) {
        ll primes = 0;
        vector<ll> vec(n, 0);
        for (ll i=2; i<n; i++) {
            if (!vec[i]) {
                primes++; 
                for(ll j=i*i; j<n; j+=i) {
                    vec[j] = 1; 
                }
            }
        }
        return primes;
    }

int main() {
    cout<<countPrimes(10);
}