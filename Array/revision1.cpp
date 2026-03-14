#include <iostream>
#include <string>
#include <climits>
#include <cstring>

using namespace std;

int main()
{

    // Q1. Initialize Array using 5 different ways.

    /*

    int arr1[5] = {1,2,3,4,5};
    int l1 = sizeof(arr1)/sizeof(arr1[0]);
    cout<<"Array1 is: ";
    for(int i=0; i<l1; i++){
        cout<<arr1[i]<< " ";
    }
    cout<<endl;
    int arr2[] = {9,8,7,6,5,4,3,2,1};
    int l2 = sizeof(arr2)/sizeof(arr2[0]);
      cout<<"Array2 is: ";
    for(int i=0; i<l2; i++){
        cout<<arr2[i]<< " ";
    }
    cout<<endl;
    int arr3[8] = {1,2,3,4};

      int l3 = sizeof(arr3)/sizeof(arr3[0]);
      cout<<"Array3 is: ";
    for(int i=0; i<l3; i++){
        cout<<arr3[i]<< " ";
    }
    cout<<endl;

    int arr4[7];
    for(int i=0; i<7; i++){
        arr4[i] = (i+5);
    }
    cout<<"Array4 is: ";
     for(int i=0; i<7; i++){
        cout<<arr4[i]<< " ";
    }
    cout<<endl;

    int arr5[10];
    cout<<"Enter Array5 Elements: ";
    for(int i=0; i<10; i++){
        cin>> arr5[i];
    }
      cout<<"Array5 is: ";
     for(int i=0; i<10; i++){
        cout<<arr5[i]<< " ";
    }
    cout<<endl;

    // Q1-a   Initialize all elements with zero

    int arr6[10] = {0};
      cout<<"Array6 is: ";
     for(int i=0; i<10; i++){
        cout<<arr6[i]<< " ";
    }
    cout<<endl;

    */

    // Q2. Find the smallest & largest element from the ARRAY

    /*

    int arr[] = {23,89,3,9,10,198,1,890,90,235};
    int l = sizeof(arr)/sizeof(arr[0]);
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i=0; i<l; i++){
        if(arr[i] < min){
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout<<"Minimum Element of Array is: "<<min<<endl;
    cout<<"Maximum Element of Array is: "<<max<<endl;

    */

    // Q3. Find size of array using all possible ways

    /*

    int arr[] = {3,6,9,5,1,0,2,4,7,10};
    // int l1 = arr.size();  // Applicable for Vector class
    int l2 = sizeof(arr)/sizeof(arr[0]);
    // cout<<"Size of Array is: "<<l1<<endl;
    cout<<"Size of Array is: "<<l2<<endl;

    char ch[] = {'A','e','i','o','u'};
    char ch1[] = "Welcome";
    cout<<"Length of character Array is: "<<strlen(ch)<<endl; //
    cout<<"Length of character Array is: "<<sizeof(ch)/sizeof(ch[0])<<endl;
    cout<<"Length of character Array1 is: "<<strlen(ch1)<<endl;

    string str = "Welcome to CPP Cohort";
    cout<<str<<endl;
    cout<<"Length of string str is: "<<str.length()<<endl;
    cout<<"Length of string str is: "<<str.size()<<endl;

    */

    // Q4. Find sum of elements of Array

    /*

    cout<<INT_MAX<<endl;
    cout<<INT_MIN<<endl;

    int arr[] = {23,45,56,67,78,89,90,12,10};
    int l = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;

    for(int i=0; i<l; i++){
        sum+=arr[i];

    }
    cout<<"Sum of Array Elements is: "<<sum<<endl;

    // Q4.a  Find sum of N Elements
    long long  n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    // int sumN = 0;
    // long sumN;
    long long sumN;
    sumN = n*(n+1)/2;
    cout<<"Sum of n elements is: "<<sumN<<endl;

    */

    // Q5. Search an Element in Array

    /*

    int arr[] = {11, 12, 22, 23, 33, 34, 44, 45, 55, 56, 66, 67, 77, 78, 88, 89, 90};
    int target = 77;
    int n = sizeof(arr)/sizeof(arr[0]);
    int index = -1;
    for(int i=0; i<n; i++){
        if(arr[i] == target){
            index = i;
            break;

        }
    }
    if(index == -1){
        cout<<"Element not found in Array "<<endl;
    }
    else{
         cout<<"Element is at index: "<<index<<endl;

    }

    */

    // Q6. Reverse Array

    /*

    int arr[] = {10,20,30,40,50,60,70,80,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    int rev[n];
    cout<<"Reversed Array using EXTRA ARRAY: ";
    for(int i=0; i<n; i++){
        rev[i] = arr[n-1-i];
    }
    for(int i=0; i<n; i++){
        cout<<rev[i]<< " ";
    }
    cout<<endl;
    cout<<"Original Array is: ";
     for(int i=0; i<n; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    cout<<"Reversed Array using same ARRAY:  ";
    int s = 0;
    int end = n-1;
    while(s <= end){
        int temp = arr[s];
        arr[s] = arr[end];
        arr[end] = temp;
        s++;
        end--;
    }
     for(int i=0; i<n; i++){
        cout<<arr[i]<< " ";
    }

    */

    // Q7. Find Largest, Second Largest & Third L:argest Elements from Array

    /*

    int arr[] = {34,23,12,45,35,56,67,89,900,87,540,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int largest = -1;
    for(int i=0; i<n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    cout<<"Largest Element is: "<<largest<<endl;

    int second = -1;
    for(int i=0; i<n; i++){
        if(arr[i] != largest && arr[i] > second){
            second = arr[i];
        }
    }
    cout<<"Second Largest Element is: "<<second<<endl;

      int third = -1;
    for(int i=0; i<n; i++){
        if(arr[i] != largest && arr[i] != second && arr[i] > third){
            third = arr[i];
        }
    }
    cout<<"Third Largest Element is: "<<third<<endl;

    */

    // Q8. Find the missing number from the Array of n positive numbers [0,n]

    /*

    int n = 9;
    int arr[n] = {1, 4, 0, 6, 5, 7, 2, 8, 9};
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << "Missing number is: " << n * (n + 1) / 2 - sum << endl;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i] ^ (i + 1);
    }
    cout << "Missing number is: " << ans << endl;

    for(int i = 0; i <= n; i++){
        bool found = false;
        for(int j = 0; j < n; j++){
            if(arr[j] == i){
                found = true;
                break;
            }
        }
        if(found == false){
            cout<<"Missing number is: "<<i<<endl;
        }
    }

    */

    


























    return 0;
}