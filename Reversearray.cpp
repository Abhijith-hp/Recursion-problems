#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverseArray(int *arr, int i, int n){
    if(i >= n/2) return;
    swap(&arr[i], &arr[n - i - 1]);
    reverseArray(arr, i + 1, n);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    reverseArray(arr, 0, n);
    
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    
    return 0;
}
