/**
 * Definition of ListNode
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *         this->val = val;
 *         this->next = NULL;
 *     }
 * }
 */
class Solution {
public:
    /**
     * @param head: The first node of linked list.
     * @return: True if it has a cycle, or false
     */
   bool hasCycle(ListNode *head) {
        if(NULL == head)
			return false;
		if(NULL == head->next)
			return false;
        if(NULL == head->next->next)
			return false;
		ListNode* NextNode = head;
		ListNode* DNextNode = head->next->next;

		while(NextNode != DNextNode)
		{
			if(NULL != DNextNode->next && NULL != DNextNode->next->next)
			{
				DNextNode = DNextNode->next->next;
				NextNode = NextNode->next;
			}
			else
			{
				return false;
			}
		}

		return true;//循环结束

	}
};

