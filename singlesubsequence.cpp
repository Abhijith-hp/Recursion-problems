#include <iostream>
#include <vector>

using namespace std;


bool printS(vector<int>& arr, vector<int>& ds, int i, int n, int sum, int res) {
    if (i == n) {
        if (res == sum) {
            for (int val : ds) {
                cout << val << " ";
            }
            cout << endl;
            return true;
        }
        return false;
    }

    
    ds.push_back(arr[i]);
    res += arr[i];
    if (printS(arr, ds, i + 1, n, sum, res)) return true;

    
    ds.pop_back();
    res -= arr[i];
    if (printS(arr, ds, i + 1, n, sum, res)) return true;

    return false;
}

int main() {
    vector<int> arr = {1, 2, 1};
    vector<int> ds;
    int sum = 2;
    int res = 0;
    int n = arr.size();

    cout << "One subset with sum " << sum << " is:" << endl;
    printS(arr, ds, 0, n, sum, res);

    return 0;
}
