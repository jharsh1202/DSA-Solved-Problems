#include <iostream>
#include <vector>
using namespace std;

//Selection Sort	Ω(n^2)	θ(n^2)	O(n^2)
int* selectionSort(int v[], int len) { 
    for(int i=0; i<len; i++) {
        for(int j=i+1; j<len; j++) {
            if(v[j]<v[i]) swap(v[i], v[j]); 
        }
    }
    return v;
}

//Bubble Sort	Ω(n)	θ(n^2)	O(n^2)
int* bubbleSort(int v[], int len) {
    bool sorted;
    for(int i=0; i<len; i++) {
        sorted = true;
        for(int j=0; j<len-i-1; j++) {
            if(v[j]>v[j+1]) {
                swap(v[j], v[j+1]); sorted = false;
            }
        }
        if(sorted) break;
    }
    return v;
}

//Insertion Sort	Ω(n)	θ(n^2)	O(n^2)
int* insertionSort(int v[], int len) { 
    for(int i=1; i<len; i++) {
        for(int j=i; j>=0 && v[j]<v[j-1]; j--) {
            swap(v[j], v[j-1]);
        }
    }
    return v;
}

int main() {
    int arr[] = {42,12,54,69,48,45,63,58,38,60,24,42,30,79,17,36,91,43,89,7,41,43,65,49,47,6,91,30,71,51,7,2,94,49,30,24,85,55,57,41,67,77,32,9,45,40,27,24,38,39,19,83,30,42,34,16,40,59,5,31,78};
    int len = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, len);
    for(int i=0; i<len; i++) {
        cout<<arr[i]<<" ";
    }
}

//T1a T1b T1
//T2
//T3
//
//