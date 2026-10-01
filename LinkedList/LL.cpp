#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;

    }
};
Node* convertArr2LL(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
Node* removek(Node* head,int k){
    if(head == NULL || k<=0) return head;
    if(k == 1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;

    }
    int cnt = 0;
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){
        cnt++;
        if(cnt ==k){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;

    }
    return head;
}
void print(Node* head){
    while(head != NULL){
        cout<< head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}
int main(){
    vector<int> arr = {12,5,8,7};
    Node* head = convertArr2LL(arr);
    head = removek(head,3);
    print(head);
    return 0;
}