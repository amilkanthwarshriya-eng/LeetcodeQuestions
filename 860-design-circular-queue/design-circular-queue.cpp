class MyCircularQueue {
public:
    int n = 0;
    ListNode* head;
    ListNode* curr;
    ListNode* prev;

    MyCircularQueue(int k) {
       n = k;
       ListNode* h = new ListNode(-1);
       ListNode* temp = h;

       for(int i=1;i<k;i++)
       {
            temp->next = new ListNode(-1);
            temp  = temp->next;
       }

       temp->next = h;

       head = h;
       curr = head;
       prev = head;

    }
    int totEle = 0;
    bool enQueue(int value) {
        if(totEle<n)
        {
            curr->val = value;
            prev = curr;
            curr = curr->next;
            totEle++;
            return true;
        }else{
            return false;
        }
    }
    
    bool deQueue() {
        if(totEle>0)
        {
            ListNode* temp = head;
            head = head->next;
            temp->val = -1;
            totEle--;
            return true;
        }else{
            return false;
        }
    }
    
    int Front() {
        return head->val;
    }
    
    int Rear() {
        return prev->val;
    }
    
    bool isEmpty() {
        if(totEle==0) return true;
        return false;
    }
    
    bool isFull() {
        if(totEle==n) return true;
        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */