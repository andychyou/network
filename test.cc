#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr1 = {1,2,3};
    vector<int> arr2;
    arr2 = arr1;
    arr1.pop_back();
    for(int i = 0; i < arr1.size();i++){
        cout << arr1[i];
    }
    cout << endl;
    for(int i = 0; i < arr2.size();i++){
        cout << arr2[i];
    }
    vector<int>().swap(arr2);
    cout << endl;
    cout << "arr1 cap : " << arr1.capacity() << endl;
    cout << "arr2 cap : " << arr2.capacity() << endl;
    return 0;
}