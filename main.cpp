# include <iostream>

using namespace std;
int main()
{
    cout << "hello C++!" << endl; 
    return 0;
}

/*struct ListNode* removeDuplicateNodes(struct ListNode* head){
    // 判断是否需要遍历
    if(head == NULL) return NULL;
    struct ListNode* current = head;
    // 双指针逐个比较
    while (current)
    {
        struct ListNode* p = current;
        while(p->next){
            if(p->next->val == current->cal){
                p->next = p->next->next;
            }else{
                p = p->next;
            }
        }
        current = current->next;
    }
    return head;
}*/