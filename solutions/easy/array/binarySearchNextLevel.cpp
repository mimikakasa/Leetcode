#include<iostream>
#include<vector>
using namespace std;

//找到target一样大的值返回下标否则返回target在数组中应该插入的位置
//nums[pos-1]<target<=nums[pos]存在这个值返回的也是pos 不存在也是返回pos
//转换为找到第一个大于target的下标

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int len = nums.size();
        int left = 0, right = len - 1, ans=len;//ans等于数组长度 方便target大于数组任意值时
        while (left<=right)
        {
            int mid = ((right - left) >> 1) + left;//右移运算符 本质上也是右加左除2 但是避免了两数之和太大溢出的情况
            if (target<=nums[mid])
            {
                ans = mid;
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        return ans;
       
    }
};
