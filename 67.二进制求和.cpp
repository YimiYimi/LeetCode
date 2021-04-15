// @before-stub-for-debug-begin
#include <vector>
#include <string>
// #include "commoncppproblem67.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=67 lang=cpp
 *
 * [67] 二进制求和
 *
 * https://leetcode-cn.com/problems/add-binary/description/
 *
 * algorithms
 * Easy (54.39%)
 * Likes:    597
 * Dislikes: 0
 * Total Accepted:    160.4K
 * Total Submissions: 295K
 * Testcase Example:  '"11"\n"1"'
 *
 * 给你两个二进制字符串，返回它们的和（用二进制表示）。
 * 
 * 输入为 非空 字符串且只包含数字 1 和 0。
 * 
 * 
 * 
 * 示例 1:
 * 
 * 输入: a = "11", b = "1"
 * 输出: "100"
 * 
 * 示例 2:
 * 
 * 输入: a = "1010", b = "1011"
 * 输出: "10101"
 * 
 * 
 * 
 * 提示：
 * 
 * 
 * 每个字符串仅由字符 '0' 或 '1' 组成。
 * 1 <= a.length, b.length <= 10^4
 * 字符串如果不是 "0" ，就都不含前导零。
 * 
 * 
 */

// @lc code=start
#include<string>
#include<vector>
#include<sstream>
#include<iterator>
#include<iostream>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
        int bit = 0, i, tmp;
        vector<int> r;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        for(i = 0; i < a.length() && i < b.length(); i++){
            tmp = (bit + (a[i] - '0') + (b[i] - '0')) / 2;
            r.push_back((bit + (a[i] - '0') + (b[i] - '0')) % 2);
            bit = tmp;
        }
        while(i < a.length()){
            tmp = (bit + (a[i] - '0')) / 2;
            r.push_back((bit + (a[i] - '0') + (b[i] - '0')) % 2);
            bit = tmp;
            i++;
        }
        while(i < b.length()){
            tmp = (bit + (b[i] - '0')) / 2;
            r.push_back((bit + (a[i] - '0') + (b[i] - '0')) % 2);
            bit = tmp;
            i++;
        }
        stringstream ss;
        copy(r.rend(), r.rbegin(), ostream_iterator<int>(ss, ""));
        cout << ss.str();
        return ss.str();
    }
};
// @lc code=end

