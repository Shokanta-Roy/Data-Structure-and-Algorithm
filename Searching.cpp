//Author: SHOKANTA ROY
//linkedin: https://www.linkedin.com/in/shokanta-roy-746387255/
//github: https://github.com/Shokanta-Roy/
#include<iostream>
#include<algorithm>
using namespace std;

//Linear Search.
//For linear search, it's not necessary that array have to be sorted.
//Here the complexity is O(n);
int linearSearch(int arr[],int size, int target)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]==target)
        {
            return i;//Found
        }
    }
    return -1;//not found;
}

//binary Search.
//For binary search, it's necessary that array have to be sorted.
//Here the complexity is O(n log n).
int binarySearch(int arr[],int size, int target)
{
    int left=0, right= size-1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            return mid;// found
        }

        if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;//not found
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr,arr+size); ////For binary search, it's necessary that array have to be sorted.
    //int finalResult = linearSearch(arr, n, value);
    int target;
    cin>>target;
    int finalResult = binarySearch(arr, n, target);
    if (finalResult != -1)
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }



}
