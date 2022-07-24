#include <bits/stdc++.h>
using namespace std;

int binarySearch(int array[], int x, int lb, int ub)
{
    if(lb <= ub)
    {
        int mid = (lb + ub) / 2;
        //x == arr[MID]
        if(x == array[mid]) return mid; //Center

        //x > arr[MID]
        else if(x > array[mid]) return binarySearch(array, x, mid+1, ub);//Move Right

        //x < arr[MID]
        else return binarySearch(array, x, lb, mid-1);//Move Left
    }
    else return -1;
}

int main(void)
{
    int size;
    cin >> size;

    int array[size];

    for(int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    int checkValue;
    cout << "Please Enter the Value You want to Search: ";
    cin >> checkValue;

    int indexNumber = binarySearch(array, checkValue, 0, size-1);

    if(indexNumber != -1)
    {
        cout << "Index No: " << indexNumber << "Position No: " << indexNumber + 1 << endl;
    }
    else
    {
        cout << "Not Found";
    }
}
