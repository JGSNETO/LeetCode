#include<iostream>
#include<vector>

int main(){

    std::vector<int> arr= {1,2,3,4};
    int size = arr.size();
    int lastElement  = arr[size-1];
    arr.pop_back();
    arr.insert(arr.begin(), lastElement);
    for(int i=0; i<arr.size(); i++){
        std::cout<< arr[i];
    }
    system("PAUSE");
    return 0;
}

// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//        int n = nums.size(),tmp;
//         vector<int>v(nums);
//         for(int i=0; i<nums.size(); i++){
//             nums[(i+k)%n] = v[i];
//         }
//     }
// };