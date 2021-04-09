/*
����һ���������� nums ������ ԭ�� ɾ���ظ����ֵ�Ԫ�أ�ʹÿ��Ԫ�� ֻ����һ�� ������ɾ����������³��ȡ�

��Ҫʹ�ö��������ռ䣬������� ԭ�� �޸��������� ����ʹ�� O(1) ����ռ����������ɡ�

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
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