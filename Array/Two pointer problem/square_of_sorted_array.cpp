// Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

// Example 1:

// Input: nums = [-4,-1,0,3,10]
// Output: [0,1,9,16,100]
// Explanation: After squaring, the array becomes [16,1,0,9,100].
// After sorting, it becomes [0,1,9,16,100].
// Example 2:

// Input: nums = [-7,-3,2,3,11]
// Output: [4,9,9,49,121]

#include<iostream>
#include<vector>
using namespace std;

class Sum {
    public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n= nums.size();
        vector<int> res(n);
        for(int i=0; i<n; i++){
            nums[i]=nums[i]*nums[i];
        }
        int start = 0;
        int end = n-1;
        int index = n-1;

        while(start<=end){
            if(nums[end]>nums[start])
            {
                res[index--] = nums[end];
                end--;
            }
            else 
            {
                res[index--] = nums[start];
                start++;
            } 
        }

        return res;
    }   
 
};

int main(){
    Sum obj;
    vector<int> nums = {-4, -1, 0, 3, 10};
        vector<int> result = obj.sortedSquares(nums);

    for(int num : result){
        cout << num << " ";
    }
    return 0;
}