#include <iostream>
using namespace std;

int main()
{
    // Kth missing positive number

    /*

    int arr[] = {2,3,4,7,11,12,21};
    // int arr[] = {1,2,3,4,5,6,7};
    int k = 7;
    int count = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    int current = 1;  // start checking from 1
    int i = 0;
    while(count < k){
        if(i<n && arr[i] == current){
            i++;
        }
        else{
            count++;

            if(count == k){
                cout<< current;
                break;
            }
        }
        current++;
    }

    */

    // Q.  Find peak Element in mountain Array

    /*

    int arr[] = {2,4,6,18,100,700,5,1};
    // int arr[] = {2,8,5,2,1};              end  = mid (Exceptional case )
    int n = sizeof(arr)/sizeof(arr[0]);
    int start = 0;
    int end = n-1;
    int ans = -1;
    while(start <= end){
        int mid = start + (end-start)/2;
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
            ans = mid;
            break;
        }
        else if(arr[mid] > arr[mid-1]){
            start = mid+1;
        }
        else{
            end = mid - 1;
        }
    }
    cout<<ans<<endl;

    */

    // Q. Find minimum element in rotated sorted array

   
    int arr[] = {9,11, 13, 15, 17, 19};
    int n = sizeof(arr) / sizeof(arr[0]);

   




    int start = 0;
    int end = n - 1;
    int ans = arr[0];
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            ans = arr[mid];
            end = mid - 1;
        }
    }

    cout << ans << endl;
}