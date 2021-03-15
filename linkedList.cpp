#include <iostream>

class Node {
    public:
        int val;
        Node *next;
        Node *prev;

        Node(int _val, Node *_next, Node *_prev) {
            val = _val;
            next = _next;
            prev = _prev;
        }
};

class LinkedList {
    private:
        Node *first;
        Node *last;
        int _length;
    public:
        LinkedList() {
            first = NULL;
            last = NULL;
            _length = 0;
        }
        void append(int _val) {
            if(_length > 0) {
                Node *valNode = new Node(_val, NULL, last);
                last->next = valNode;
                last = valNode;
                _length++;
            }
            else {
                Node *valNode = new Node(_val, NULL, NULL);
                first = valNode;
                last = valNode;
                _length++;
            }
        }
        void unshift(int _val) {
            if(_length > 0) {
                Node *valNode = new Node(_val, first, NULL);
                first->prev = valNode;
                first = valNode;
                _length++;
            }
            else {
                Node *valNode = new Node(_val, NULL, NULL);
                first = valNode;
                last = valNode;
                _length++;
            }
        }
        Node *shift() {
            if(_length > 0) {
                Node *tempFirst = first;
                first->next->prev = NULL;
                first = first->next;
                _length--;
                return tempFirst;
            } 
            else {
                return NULL;
            }
        }
        Node *pop() {
            if(_length > 0) {
                Node *tempLast = last;
                last->prev->next = NULL;
                last = last->prev;
                _length--;
                return tempLast;
            } 
            else {
                return NULL;
            }
        }
        void print() {
            Node *curr = first;
            while(curr != NULL) {
                std::cout << curr->val << "\n";
                curr = curr->next;
            }
        }

        Node *find(int query) {
            Node *curr = first;
            while(curr != NULL) {
                if(curr->val == query) {
                    return curr;
                }
                curr = curr->next;
            }
            return NULL;
        }
        Node *operator[](int index) {
            if(index >= _length - 1 || index < 0) {
                std::cout << "IndexError\n";
                return NULL;
            }

            Node *curr = first;
            for (int i = 0; i < index; i++)
            {
                curr = curr->next;
            }
            return curr;
        }
        int length() {
            return _length;
        }
};

int main() {
    LinkedList list;
    for (int i = 0; i < 10; i++) {
        list.append(i);
    }
    std::cout << list.find(12) << "\n";
    return 0;
}

// Queues and Stacks can be implemented by taking this class and only leaving the push/pop or unshift/pop methods