// Linked List
/*
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
*/

#include <iostream>
using namespace std;

 // Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
  
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    	int extra = 0;
    	int sum = 0;
    	ListNode * head = new ListNode(0), * p = head;
    	while(l1 || l2 || extra) 
    	{
    		sum = (l1 ? l1->val:0) + (l2 ? l2->val:0) + extra;
    		extra = sum/10;
    		p->next = new ListNode(sum%10);
    		p = p->next;
    		l1 = l1 ? l1->next : l1;
    		l2 = l2 ? l2->next : l2;
    	}

    	return head->next;
    }
};


int main() 
{
	ListNode * firstNode = new ListNode(2), * secondNode = new ListNode(5);
	firstNode->next = new ListNode(4);
	(firstNode->next)->next = new ListNode(3);
	secondNode->next = new ListNode(6);
	(secondNode->next)->next = new ListNode(4);
	cout << firstNode->val << endl;

	Solution test;
	ListNode * addresult;
	addresult = test.addTwoNumbers(firstNode, secondNode);
	cout << addresult->val << " - " << (addresult->next)->val \
			 << " - " << ((addresult->next)->next) -> val<< endl;


	return 0;
}