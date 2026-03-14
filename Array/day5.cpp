#include<iostream>
#include <vector>

using namespace std;

int main()
{
        // Two Product problem

    int nums[] = {1,2,3,4,5,6,7,8,9,10};
    int target = 40;

    //  Find all the possible results 

    vector<vector<int>>ans;

    int n = sizeof(nums)/ sizeof(nums[0]);

    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(nums[i]*nums[j] == target){
                ans.push_back({i,j});
            }
        }
    }

    int a = ans.size();
    // cout<<a;
    int b = ans[0].size();
    // cout<<b;
    for(int i=0; i<a;i++){
        for(int j=0; j<b; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }











}