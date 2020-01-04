#include <iostream>
#include <list>

using namespace std;


class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> value;
        ListNode *p=NULL;
        p=head;
        stack<int> stk;
        while(p!=NULL){
            stk.push(p->val);
            p=p->next;
        }
        while(!stk.empty()){
            value.push_back(stk.top());
            stk.pop();
        }
        return value;
    }
};
