/**
通常，正整数 n 的阶乘是所有小于或等于 n 的正整数的乘积。例如，factorial(10) = 10 * 9 * 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1。

相反，我们设计了一个笨阶乘 clumsy：在整数的递减序列中，我们以一个固定顺序的操作符序列来依次替换原有的乘法操作符：乘法(*)，除法(/)，加法(+)和减法(-)。

例如，clumsy(10) = 10 * 9 / 8 + 7 - 6 * 5 / 4 + 3 - 2 * 1。然而，这些运算仍然使用通常的算术运算顺序：我们在任何加、减步骤之前执行所有的乘法和除法步骤，并且按从左到右处理乘法和除法步骤。

另外，我们使用的除法是地板除法（floor division），所以 10 * 9 / 8 等于 11。这保证结果是一个整数。

实现上面定义的笨函数：给定一个整数 N，它返回 N 的笨阶乘。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/clumsy-factorial
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
#include<iostream>
using namespace std;
class Solution {
public:
	int clumsy(int N) {
		int chengchu[10000] = { 0 }, result = 0;
		int j = 0;
		for (int i = 0; i < N; i++) {
			switch (i % 4) {
			case 0:chengchu[j] = N - i;	break;
			case 1:chengchu[j] *= N - i;	break;
			case 2:chengchu[j++] /= N - i;	break;
			case 3:chengchu[j++] = N - i;	break;
			}
		}
		result = chengchu[0];
		for (int i = 1; i < sizeof(chengchu) / sizeof(chengchu[0]); i++) {
			switch (i % 2) {
			case 0:result -= chengchu[i];	break;
			case 1:result += chengchu[i];	break;
			}
		}
		return result;
	}
};
int main() {
	Solution so;
	cout << so.clumsy(10);
	system("pause");
}
