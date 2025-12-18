#include <iostream>
#include <climits>
#include <chrono>
using namespace std;
int main()
{
    // cout<< "Hello C++"<<endl;

    // Array Declaration -----

    /*

    //  1
    int arr[5] = {5,4,6,7,8};

      for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"-----------"<<endl;

    //  2
    int arr1[] = {8,6,54,3,21,3,4,5};

    int n = sizeof(arr1)/sizeof(arr1[0]);

      for(int i=0;i<n;i++){
        cout<<arr1[i]<<endl;
    }
    cout<<"-----------"<<endl;


    //  3
    // int arr2[6];
    // cout<<"Enter values ........"<<endl;
    // for(int i=0; i<6;i++){
    //     cin >> arr2[i];
    // }

    // for(int i=0;i<6;i++){
    //     cout<<arr2[i]<<" ";
    // }
    // cout<<endl;
    // cout<<"-----------"<<endl;


    //  4
    int arr3[5] = {2,3};
    for(int i=0; i<5;i++){
        cout<<arr3[i]<<" ";
    }
    cout << endl;
    cout<<"-----------"<<endl;



    //  5

    int arr4[4] = {0};
     for(int i=0; i<4;i++){
        cout<<arr4[i]<<" ";
    }
    cout << endl;

    */

    // -------------------------------------------

    /*

    int arr[5] = {1,2,3,4,5};
    cout<<arr<<" ";           // It prints the address of arr[0]

    cout <<endl;

    for(int i=0;i<5;i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;

     int arr[5];
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";          // It will print Garbage value
    }

    */

    //       ------ Size of Data Types  -------------

    /*
    cout<<"Size oc Char: "<<sizeof(char)<<" Byte"<<endl;
    cout<<"Size of Short: "<<sizeof(short)<<" Byte"<<endl;
    cout<<"Size of Int: "<<sizeof(int)<<" Byte"<<endl;
    cout<<"Size of Long: "<<sizeof(long)<< " Byte"<<endl;
    cout<<"Size of Long Long: "<<sizeof(long long)<<" Byte"<<endl;
    cout<<"Size of Float: "<<sizeof(float)<<" Byte"<<endl;
    cout<<"Size of double: "<<sizeof(double)<<" Byte"<<endl;
    cout<<"Size of Long Double: "<<sizeof(long double)<<" Byte"<<endl;
    cout<<INT_MAX<< "  "<< INT_MIN;

    */

    //  --------  Find Minimum Element of Array -------------------

    // int arr[7] = {76, 98, 34, 20, 550, 100, 12};

    // int ans = INT_MAX;
    // int index = 0;
    // for(int i=0; i<7; i++){
    //     if(arr[i] < ans){
    //         ans = arr[i];
    //         index = i;
    //     }

    // }
    // cout<<"Minimum elemenr of Array is: "<<ans<<" and at the index : "<<index<<endl;

    //---------------------------

    // int ans = arr[0], index = 0;
    // for(int i=1; i<7; i++){
    //     if(arr[i] < ans){
    //         ans = arr[i];
    //         index = i;
    //     }
    // }
    // cout<<"Minimum elemenr of Array is: "<<ans<<" and at the index : "<<index<<endl;

    // ----------------- Find Maximum Element of the Array -----------------

    // int ans = INT_MIN, index = 0;
    // for(int i=0; i<7; i++){
    //     if(arr[i] > ans){
    //         ans = arr[i];
    //         index = i;
    //     }
    // }
    // cout<<"Maximum elemenr of Array is: "<<ans<<" and at the index : "<<index<<endl;

    // ---------------------

    // using namespace std::chrono;

    // auto start = high_resolution_clock::now();

    // int ans = arr[0], index = 0;
    // for (int i = 0; i < 7; i++)
    // {
    //     if (arr[i] > ans)
    //     {
    //         ans = arr[i];
    //         index = i;
    //     }
    // }
    // cout << "Maximum elemenr of Array is: " << ans << " and at the index : " << index << endl;

    //   auto stop = high_resolution_clock::now();
    // auto duration = duration_cast<nanoseconds>(stop - start);

    // cout << "Time taken: " << duration.count() << " ns" << endl;



    // - -----------------------  SUM of N Elements -----------

    // int arr[10];
    // int sum = 0;
    //  cout<<"Enter the Elements to sum: "<<endl;1 11
    // for(int i=0; i<10; i++){
       
    //     cin>>arr[i];
    //     sum+=arr[i];
    // }
    // cout<<"Sum of these elements is: "<<sum<<endl;

    //  --------------  SUM of N Natural Numbers ----------

    // int n;
    // cout<<"Enter the value of n: "<<endl;
    // cin>> n;
    // cout<<"Sum on n Natural numbers is: "<<n*(n+1)/2<<endl;


    //  ----XOR Operation -------- Bit Wise XOR 
    // int a = 5;
    // int b = 6;
    //  int result = a ^ b;
    //  cout<< result<<endl;
    //  cout<< (5 ^ 5)<<endl;


    // Find the missing Element 
    int n = 8;
    int arr[7] = {8,3,1,6,7,4,2};

    int ans = 0; // 0 ^ 1 = 1 and 1 ^ 1 = 0
    for(int i=0; i<7; i++){
        ans = ans ^ arr[i] ^ (i+1);
    }
    ans = ans ^ 8;
    cout<<"Missing number is: "<< ans<<endl;

    // ---------------------




    return 0;
}