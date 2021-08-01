#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;

int main() {
    int arr[] = {3,3,2, 2, 1};
    for (int i = 0; i < sizeof arr / sizeof arr[0]; i++) {
        for (int j = i+1; j < sizeof arr / sizeof arr[0] && arr[i]>arr[j]; j++) {
            for (int k = j+1; k < sizeof arr / sizeof arr[0] && arr[i]>arr[k]; k++) {
                cout<<arr[i]<<arr[j]<<arr[k]<<endl;
            }
        }
    }
}
