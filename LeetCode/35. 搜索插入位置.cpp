/*
����һ�����������һ��Ŀ��ֵ�����������ҵ�Ŀ��ֵ�������������������Ŀ��ֵ�������������У����������ᱻ��˳������λ�á�

����Լ������������ظ�Ԫ�ء�
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