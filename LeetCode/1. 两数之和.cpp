/**
����һ���������� nums ��һ������Ŀ��ֵ target�������ڸ��������ҳ� ��ΪĿ��ֵ ���� ���� ���������������ǵ������±ꡣ

����Լ���ÿ������ֻ���Ӧһ���𰸡����ǣ�������ͬһ��Ԫ���ڴ��ﲻ���ظ����֡�

����԰�����˳�򷵻ش𰸡�
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
