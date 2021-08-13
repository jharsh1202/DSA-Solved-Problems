#include <iostream>
using namespace std;

int sumOfAllSubArrays(int arr[], int n) {
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += arr[i]*(n-i)*(i+1);
    }
    return sum;
}

int main() {
    int arr[] = {1,2,3,4,5,6};
    cout<<sumOfAllSubArrays(arr, sizeof (arr)/sizeof (arr[0]));
    return 0;
}


//1 1,2 1,2,3 1,2,3,4 
//2 2,3 2,3,4 
//3 3,4
//4 
