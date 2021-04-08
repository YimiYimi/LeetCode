/*
将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。
*/

#include<iostream>
using namespace std;
//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		ListNode* l, *l0;
		l0 = l = new ListNode();
		while (l1 && l2) {
			if (l1->val < l2->val) {
				l->next = l1;
				l1 = l1->next;
			}
			else {
				l->next = l2;
				l2 = l2->next;
			}
			l = l->next;
		}
		if (l1)	l->next = l1;
		else l->next = l2;
		return l0->next;
	}
};
int main() {
	Solution so;
	ListNode *l1, *h1, *l2, *h2, *l;
	h1 = l1 = new ListNode(1);
	l1->next = new ListNode(2);
	l1 = l1->next;
	l1->next = new ListNode(4);

	h2 = l2 = new ListNode(1);
	l2->next = new ListNode(3);
	l2 = l2->next;
	l2->next = new ListNode(4);
	
	l = so.mergeTwoLists(h1, h2);
	while (l) {
		cout << l->val << " ";
		l = l->next;
	}
	system("pause");
}