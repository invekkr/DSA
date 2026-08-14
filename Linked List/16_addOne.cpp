// https://www.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1

#include <bits/stdc++.h>
using namespace std;
/* Structure of linked list Node
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* addOne(Node* head) {
        // reverse the list
        Node* prev = nullptr;
        Node* curr = head;
        
        while(curr!=nullptr){
            Node* front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }
        
        int sum=0,carry=1;
        curr = prev;
        
        while(curr!=nullptr && carry){
            sum = carry + curr->data;
            
            curr->data = sum%10;
            carry = sum/10;
            
            if(curr->next==nullptr && carry){
                curr->next = new Node(carry);
                carry = 0;
            }
            curr = curr->next;
        }
        
        // Reverse again
        curr = prev;
        prev = nullptr;

        while (curr != nullptr) {
            Node* front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }

        return prev;
        
        
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}