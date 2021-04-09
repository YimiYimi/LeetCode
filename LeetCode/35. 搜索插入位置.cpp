/*
给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。

你可以假设数组中无重复元素。
*/

#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		int i = 0;
		for (; i < nums.size(); i++) {
			if (nums[i] >= target)	return i;
		}
		return i;
	}
};
int main() {
	Solution so;
	vector<int> nums = { 1, 3, 5, 6 };
	int target = 5;
	cout << so.searchInsert(nums, target);
	system("pause");
}