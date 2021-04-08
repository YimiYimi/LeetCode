/*
给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。

有效字符串需满足：

左括号必须用相同类型的右括号闭合。
左括号必须以正确的顺序闭合。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/valid-parentheses
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

#include<iostream>
#include<string>
#include<stack>
using namespace std;
class Solution {
public:
	bool isValid(string s) {
		stack<char> stack;
		for (int i = 0; i < s.length(); i++) {
			switch (s[i]) {
			case ')':	!stack.empty() && (stack.top() == '(') ? stack.pop() : stack.push(s[i]);	break;
			case '}':	!stack.empty() && (stack.top() == '{') ? stack.pop() : stack.push(s[i]);	break;
			case ']':	!stack.empty() && (stack.top() == '[') ? stack.pop() : stack.push(s[i]);	break;
			default:	stack.push(s[i]);	break;
			}
		}
		return stack.empty() ? true : false;
	}
};
void main() {
	Solution so;
	cout << so.isValid("[]");
	system("pause");
}