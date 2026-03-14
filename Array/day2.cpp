#include <iostream>
#include <climits>
using namespace std;

int main()
{

    // ---------- Search an Element in the Array ----------

    /*

    int arr[7] = {23,34,45,56,67,78,89};
    int x = 78; // search this element and return index ---------------
    int index = -1;
    for(int i=0; i<7; i++){
        if(arr[i] == x){
            index = i;
            break;
        }

    }
    if(index > 0){
    cout<<"Element "<< x << " is present at index: "<< index<<endl;
    }
    else{
        cout<<"Element is not present in the Array !"<< endl;
    }

    */

    //  -- REVERSE ARRAY --------------------------------------

    /*

    int arr[] = {9,4,5,7,80,34,23,12,25,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Actual Array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<< "  ";
    }
    cout<<endl;

    // Using Another Array -------------------

    cout<<"Array after Reverse is: "<<endl;
    int temp[n];
    int j = 0;
    for(int i=n-1; i>=0; i--){
        temp[j] = arr[i];
        j++;
    }
    for(int i=0; i<n;i++){
        cout<<temp[i]<<"  ";
    }
    cout<<endl;

    // --------- Without Extra Array ------------------------------


    cout<<"Array after Reverse is: "<<endl;
    int i = 0, k = n-1;
    while(i<k){
        swap(arr[i],arr[k]);
        i++;
        k--;
    }
    for(int i=0; i<n;i++){
        cout<<arr[i]<< "  ";
    }

    */

    //  ----------  Find Second Largest Element of Array -----------
    /*

    int arr[] = {30, 10,95,35,45,50,65,70,85,900,100};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = -1;
    for(int i=0; i<n; i++){
        if(arr[i] > ans){
            ans = arr[i];
        }
    }

    int second = -1;
    for(int i=0; i<n; i++){
        if(arr[i] != ans){
            second = max(second,arr[i]);
        }
    }

    int third = -1;
    for(int i=0; i<n; i++){
        if(arr[i] != ans  && arr[i] != second){
            third = max(third,arr[i]);
        }
    }



    cout<<"Largest Element of the Array is: "<<ans<<endl;
    cout<<"Second Largest Element of the Array is: "<<second<<endl;
    cout<<"Third Largest Element of the Array is: "<<third<<endl;

    */

    // Find Maximum of three number --------------------

    /*

    int a, b, c;
    cout << "enter values of a b & c " << endl;
    cin >> a >> b >> c;
    cout << "Maximum of a b & c is: " << max(max(a, b), c) << endl;

    int maximum = INT_MIN;
    if (a > b && a > c)
    {
        maximum = a;
    }
    else if (b > a && b > c)
    {
        maximum = b;
    }
    else if (c > a && c > b)
    {
        maximum = c;
    }
    cout << "Maximum of a b & c is: " << maximum<<endl;


    */

    // --------------------- Shift Operators --------------------

    /*

    // Left shift << is multiplication
    // Right shift >> is division

    int a = 20;
    int b = 60;
    cout<< (a<<2)<<endl;
    cout<< (b>>2)<<endl;

    */

    // --------------- Fibonacci Series -----------------

    //  0 1 1 2 3 5 8 13 21 34 55 89 144 233 377

    /*
    int arr[1000];
    int n;
    cout<< "Enter the value of n: ";
    cin>>n;
    cout<<endl;

    arr[0] = 0;
    arr[1] = 1;
    for(int i=2; i<=n;i++){
        arr[i] = arr[i-1] + arr[i-2];
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    */

    //----------- Print the mth term of Fibonacci series ---------

    //  0 1 1 2 3 5 8 13 21 34 55 89 144 233 377

    
    int m;
    cout<<"Enter the value of m: ";
    cin>> m ;
    cout<<endl;
    int arr[1000];
    arr[0] = 0;
    arr[1] = 1;
    for(int i=2; i<m; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
    cout<<arr[m-1]<<endl;


//------------------- Another way to print Fibonacci ----------------
/*
    int num1 = 0;
    int num2 = 1;
    int n;
    int num3;
    cout<<"Enter the nth value: ";
    cin>> n;
    cout<<endl;
    for(int i=0; i<n;i++){
        cout<<num1<<" ";
        num3 = num2+num1;
        num1 = num2;
        num2 = num3;

    }
*/
    

    //------------- Cyclically Rotate Array by One / Right Rotate -------------

    /*

    int arr[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int temp = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = temp;

    cout << "Right rotated Array by one: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // -----------------------  Left Rotate Array by one ----------

    int arr1[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};

    int t = arr1[0];
    for (int i = 0; i < n - 1; i++)
    {
        arr1[i] = arr1[i + 1];
    }
    arr1[n - 1] = t;

    cout << "Left rotated Array by one: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    */

    //  Left Rotate Array by K times ------------------------------------

    /*

    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    cout << "Enter value of K: ";
    cin >> k;
    cout << endl;
    cout<<"Original Array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    cout<<"Left Rotated Array "<<k<<" times: " <<endl;

    for (int i = 0; i < k; i++)
    {
        int temp = arr[0];
        for (int j = 0; j < n - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    */


    // ------------ Missing Number from Array --------------- Iterative Method ------------

    /*

    int arr[10] = {1,8,9,6,2,5,7,4,3};
    
    for(int i=1; i<=10; i++){
        bool ans = false;
        for(int j=0; j<10; j++){
            if(arr[j] == i){
                ans = true;
                break;

            }
        }
        if(ans == false){
            cout<<"Missing number in the Array is is: "<<i<<endl;
        }
    }

*/


}