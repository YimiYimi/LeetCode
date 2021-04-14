// @before-stub-for-debug-begin
#include <vector>
#include <string>
//#include "commoncppproblem53.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 */

// @lc code=start
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
	int maxSubArray(vector<int>& nums) {
        //O(n^2)
		// int r = nums[0], tmp;
		// for (int i = 0; i < nums.size(); i++) {
        //     tmp = 0;
		// 	for (int j = i; j < nums.size(); j++) {
		// 		tmp += nums[j];
		// 		if (tmp > r)	r = tmp;
		// 	}
		// }
		// return r;

        //贪心
        int cur, r;
        r = cur = nums[0];
        for(int i = 1; i < nums.size(); i++){
            cur = max(nums[i], cur + nums[i]);
            r = max(r, cur);
        }
        return r;
	}
};
// @lc code=end

