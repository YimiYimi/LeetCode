/*
给定一个整数数组 nums ，找到一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		int r = nums[0], tmp;
		for (int i = 0; i < nums.size(); i++) {
			tmp = nums[i];
			for (int j = i + 1; j < nums.size(); j++) {
				if (tmp > r)	r = tmp;
				tmp += nums[j];
			}
		}
		return r;
	}
};
int main() {
	Solution so;
	vector<int> nums = { -2,1,-3,4,-1,2,1,-5,4 };
	cout << so.maxSubArray(nums);
	system("pause");
}