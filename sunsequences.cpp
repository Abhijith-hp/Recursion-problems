#include <iostream>
#include <vector>
using namespace std;
void printSubSequence(vector<int>&arr,int index,vector<int>&ds){
   
   
   if(index>=arr.size()){
      for (int i = 0; i <  ds.size(); ++i) {
        cout << ds[i] << " ";
    } 
    cout << endl;
    return;
   }
   
   ds.push_back(arr[index]);
   printSubSequence(arr,index+1,ds);
   ds.pop_back();
   printSubSequence(arr,index+1,ds);
   
}
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> v(n);  
    vector<int> ds;
    
    cout << "Enter elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    
    cout << "Subsequences:\n";
    printSubSequence(v,0,ds);
    cout << endl;

    return 0;
}
