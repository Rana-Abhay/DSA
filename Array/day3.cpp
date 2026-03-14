#include<iostream>
using namespace std;

int main()
{
// selection sort---------------

/*

// int arr[] = {100,29,6,75,304,43,10,3,208,50};  // sort in ascending order
int arr[] = {9,7,3,1,6};

int n = sizeof(arr)/sizeof(arr[0]);
cout<<"Array before swap: ";
for(int i=0; i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n;j++){
        if(arr[j] < arr[i]){
            swap(arr[i], arr[j]);
            // int temp = arr[i];
            // arr[i] = arr[j];
            // arr[j] = temp;
        }
    }
}
cout<<"Array after swap ASC: ";
for(int i=0; i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;



// sort in descending order ------------------
for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n;j++){
        if(arr[j] > arr[i]){
            swap(arr[i], arr[j]);
        }
    }
}
cout<<"Array after swap DESC: ";
for(int i=0; i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

// Another form 

int arr1[] = {30,50,12,90,9,25};

int m = sizeof(arr1)/sizeof(arr1[0]);

for(int i=0; i<m; i++){
    cout<<arr1[i]<<" ";
}
cout<<endl;

for(int i=m-1; i>0;i--){
    for(int j=i-1; j>=0; j--){
        if(arr1[j] > arr1[i]){
            swap(arr1[i], arr1[j]);
        }
    }
}
for(int i=0; i<m; i++){
    cout<<arr1[i]<<" ";
}

*/

// BUBBLE SORT -------------------------

/*

int arr[] = {23,7,12,9,34,43,567,67,803,95};

int n = sizeof(arr)/sizeof(arr[0]);

for(int i=0; i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

cout<<"ASC order sort: ";

for(int i=0; i<n-1; i++){
    for(int j=0; j<n-1-i;j++){
        if(arr[j] > arr[j+1]){
            swap(arr[j], arr[j+1]);
        }
    }
}

for(int i=0; i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

cout<<"DESC OREDER SORT:  ";

for(int i=0; i<n-1; i++){
    for(int j=0; j<n-1-i;j++){
        if(arr[j] < arr[j+1]){
            swap(arr[j], arr[j+1]);
        }
    }
}

for(int i=0; i<n;i++){
    cout<<arr[i]<<" ";
}

*/


//    INSERTION SORT  ---------------------------------

/*

int arr[] = {40,78,39,21,500,100};
int n = sizeof(arr)/sizeof(arr[0]);
cout<<"Original Array: ";
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

for(int i=1; i<n; i++){
    for(int j=i; j>0; j--){
        if(arr[j] < arr[j-1]){
            swap(arr[j], arr[j-1]);
        }
        else{
            break;
        }
    }
}
cout<<"Array after Sort: ";
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

*/




}