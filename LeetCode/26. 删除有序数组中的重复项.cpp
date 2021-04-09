/*
给你一个有序数组 nums ，请你 原地 删除重复出现的元素，使每个元素 只出现一次 ，返回删除后数组的新长度。

不要使用额外的数组空间，你必须在 原地 修改输入数组 并在使用 O(1) 额外空间的条件下完成。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		int j = 0;
		if (nums.empty())	return 0;
		for (int i = 1; i < nums.size(); i++) {
			if (nums[j] != nums[i])	nums[++j] = nums[i];
		}
		return j + 1;
	}
};
int main() {
	Solution so;
	vector<int> nums = { 1, 1, 2, 3, 3, 4 };
	int len = so.removeDuplicates(nums);
	for (int i = 0; i < len; i++) {
		cout << nums[i];
	}
	system("pause");
}