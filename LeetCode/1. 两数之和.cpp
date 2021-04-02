/**
给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 的那 两个 整数，并返回它们的数组下标。

你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。

你可以按任意顺序返回答案。
*/

#include<vector>
#include<iostream>
#include<map>
using namespace std;
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		map<int, int> m;
		for (int i = 0; i < nums.size(); i++) {
			int t = target - nums[i];
			if (m.find(t) != m.end()) {
				return {i, m[t]};
			}
			m[nums[i]] = i;
		}
		return{0, 0};
	}
};
int main() {
	Solution so;
	vector<int> nums = {3, 2, 4}, r;
	r = so.twoSum(nums, 6);
	for (int i = 0; i < r.size(); i++)
		cout << r[i];
	system("pause");
}
