#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* next;
	Node* back;

	Node(int data1){
		data = data1;
		next = nullptr;
		back = nullptr;
	}

	Node(int data1, Node* next1, Node* back1){
		data = data1;
		next = next1;
		back = back1;
	}
};

void print(Node* head){
	Node* temp = head;
	while(temp){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

Node* ConvertArrToDLL(vector<int> &arr){
	Node* head = new Node(arr[0]);
	Node* prev = head;
	for(int i = 1; i<arr.size(); i++){
		Node* temp = new Node(arr[i], nullptr, prev);
		prev->next = temp;
		prev = temp;
	}
	return head;
}

Node* DeleteHead(Node* head){
	if(head == NULL || head->next == NULL) return NULL;
	Node* prev = head;
	head = head->next;
	head->back = NULL;
	prev->next = NULL;
	delete prev;
	return head;
}

Node* DeleteTail(Node* head){
	Node* tail = head;
	while(tail->next!= NULL){
		tail = tail->next;
	}

	Node* prev = tail->back;
	prev->next = NULL;
	tail->back = NULL;
	free(tail);
	return head;
}

Node* DeleteKthElement(Node* head, int k){
	if(head == NULL) return NULL;
	int cnt = 0;
	Node* KNode = head;
	while(KNode != NULL){
		cnt++;
		if(k == cnt) break;
		KNode = KNode->next;
	}
	Node* prev = KNode->back;
	Node* front = KNode->next;
	if(front == NULL && prev == NULL) return NULL;
	else if(front == NULL) return DeleteTail(head);
	else if(prev == NULL) return DeleteHead(head);
	
	prev->next = front;
	front->back = prev;
	KNode->next = nullptr;
	KNode->back = nullptr;
	delete KNode;
	return head;

}

void deleteNode(Node* temp){
	Node* prev = temp->back;
	Node* front = temp->next;
	if(front == NULL){
		prev->next = nullptr;
		temp->back = nullptr;
		return;
	}
	prev->next = front;
	front->back = prev;

	temp->back = nullptr;
	temp->next = nullptr;
	free(temp);
	return;
}

Node* InsertBeforeHead(Node* head, int val){
	Node* newHead = new Node(val,head, nullptr);
	head->back = newHead;
	return newHead;
}

Node* InsertBeforeTail(Node* head, int val){
	if(head->next == NULL) return InsertBeforeHead(head, val);
	Node* tail = head;
	while(tail->next != nullptr){
		tail = tail->next;
	}
	Node* prev = tail->back;
	Node* newNode = new Node(val, tail, prev);
	tail->back = newNode;
	prev->next = newNode;
	return head;
}

Node* InsertBeforeKthElement(Node* head, int k, int val){
	if(k == 1) return InsertBeforeHead(head,val);
	int cnt= 0;
	Node* temp = head;
	while(temp->next != nullptr)
	{
		cnt++;
		if(cnt == k) break;
		temp = temp->next;

	}

	Node* prev = temp->back;
	Node* newNode = new Node(val, temp, prev);
	temp->back = newNode;
	prev->next = newNode;
	return head;
}

void InsertBeforeNode(Node* node, int val){
	Node* prev = node->back;
	Node* newNode = new Node(val,node, prev);
	prev->next = newNode;
	node->back = newNode;
}

int main(){
	vector<int> arr = {10,20,30,40,50};
	cout<<"Original Linked List: ";
	Node* head = ConvertArrToDLL(arr);
	print(head);
	cout<<endl;

	cout<<"Deleted Head of LL: ";
	head = DeleteHead(head);
	print(head);
	cout<<endl;

	cout<<"Deleted Tail of LL: ";
	head = DeleteTail(head);
	print(head);
	cout<<endl;

	cout<<"Deleted 2nd Node of LL: ";
	head = DeleteKthElement(head, 2);
	print(head);
	cout<<endl;

	cout<<"Deleted 40 Node of LL: ";
	deleteNode(head->next);
	print(head);
	cout<<endl;

	cout<<"Inserted 10 at head: ";
	head = InsertBeforeHead(head, 10);
	print(head);
	cout<<endl;

	cout<<"Inserted 15 at before tail: ";
	head = InsertBeforeTail(head, 15);
	print(head);
	cout<<endl;

	cout<<"Inserted 12 at 2nd Position: ";
	head = InsertBeforeKthElement(head, 2, 12);
	print(head);
	cout<<endl;

	cout<<"Insert before 15: ";
	InsertBeforeNode(head->next->next, 13);
	print(head);
}