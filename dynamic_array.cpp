/**
* author: asif_102
* created: 2023-01-04 12:23:41
**/
#include <bits/stdc++.h>
using namespace std;

// Memory Complexity O(n)
class Array{
private:
    int* arr;
    int sz;
    int idx;

    void Increase_size(){
        sz *= 2;
        int* tmp = new int[sz];
        for(int i = 0; i < idx; i++){
            tmp[i] = arr[i];
        }
        delete[]arr;
        arr = tmp;
    }
public:
    Array(){
        arr = new int[1];
        sz = 1;
        idx = 0;
    }
    // Time Complexity O(1)
    void Push_back(int x){
        if(sz == idx){
            Increase_size();
        }
        arr[idx] = x;
        idx++;
    }
    void Insert(int pos, int val){
        if(idx == sz){
            Increase_size();
        }
        for(int i = idx; i >= pos; i--){
            arr[i] = arr[i-1];
        }
        arr[pos] = val;
        idx++;
    }
    // O(sz)
    void Print(){
        for(int i = 0; i < idx; i++){
            cout << arr[i] << " ";
        }
        cout << '\n';
    }
    // O(1)
    int getSize(){
        return sz;
    }
    // O(1)
    int getElement(int idx){
        if(idx >= sz){
            cout << "Error " << idx << " is out of bound!\n";
            return -1;
        }
        return arr[idx];
    }
};

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    Array a;
    a.Push_back(20);
    a.Push_back(30);
    a.Push_back(40);
    a.Print();
    // cout << a.getSize() << '\n';
    // for(int i = 0; i < a.getSize(); i++){
    //     cout << a.getElement(i) << " ";
    // }
    a.Insert(1, 99);
    a.Print();
    a.Push_back(88);
    a.Push_back(77);
    a.Print();
    return 0;
}
