//Singly Linked List

#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* next;
	Node(int data1){
		data = data1;
		next = nullptr;
	}

	Node(int data1, Node* next1){
		data = data1;
		next = next1;
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

Node* converArrtoLL(vector<int> arr){
	Node* head = new Node(arr[0]);
	Node* mover = head;
	for(int i =1 ; i<arr.size(); i++)
	{
		Node* temp = new Node(arr[i]);
		mover->next = temp;
		mover = temp;
	}
	return head;
}

Node* removesHead(Node* head){
	if(head == nullptr) return head;
	Node* temp = head;
	head = head->next;
	free(temp); delete head;
	// cout<<head->data;
	return head;
}

Node* removeTail(Node* head){

	Node* temp = head;
	if(temp == NULL || temp->next == NULL) return NULL;
	while(temp->next->next != NULL){
		temp = temp->next;
	}
	free(temp->next);
	temp->next = nullptr;

	return head;
}

Node* removek(Node* head, int k){

	if(head == NULL) return head;
	
	if(k==1){
		Node* temp = head;
		head = head->next;
		free(temp);
		return head;
	}
	
	int cnt = 0;
	Node* temp = head;
	Node* prev = NULL;
	while(temp != NULL){
		cnt++;
		if(k == cnt ){
			prev->next = prev->next->next;
			free(temp);
			break;
		}
		prev = temp;
		temp = temp->next;
	}

	return head;
}

Node* removeEle(Node* head, int el){

	if(head == NULL) return head;
	
	if(head->data == el){
		Node* temp = head;
		head = head->next;
		free(temp);
		return head;
	}
	
	Node* temp = head;
	Node* prev = NULL;
	while(temp != NULL){
		if(temp->data == el){
			prev->next = prev->next->next;
			free(temp);
			break;
		}
		prev = temp;
		temp = temp->next;
	}

	return head;
}

Node* InsertHead(Node* head, int val){
	Node* temp = new Node(val);
	temp->next = head;
	return temp;
}

Node* InsertTail(Node* head, int val){
	if(head == NULL) return new Node(val);
	Node* temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	Node* tail = new Node(val);
	temp->next = tail;
	return head;
}

Node* InsertElement(Node* head, int ele, int k){
	if(head == NULL){
		if(k == 1) return new Node(ele, head);
		else return head;
	}
	if(k == 1)
	{
		return new Node(ele, head);
	}
	int cnt = 0;
	Node* temp = head;
	while(head->next != NULL){
		cnt++;
		if(cnt == k-1)
		{
			Node* x = new Node(ele, temp->next);
			// x->next = temp->next;
			temp->next = x;
			break;
		}
		temp = temp->next;
	}
	return head;
}

Node* InsertBeforeK(Node* head, int ele, int k){
	if(head == NULL){
		return head;
	}
	if(head->data == k)
	{
		return new Node(ele, head);
	}
	bool check = false;
	Node* temp = head;
	while(temp->next != NULL){
		if(temp->next->data == k)
		{
			Node* x = new Node(ele, temp->next);
			// x->next = temp->next;
			temp->next = x;
			check = true;
			break;
		}
		temp = temp->next;
	}
	if(!check) cout<<"Not found"<<endl;
	return head;
}

int main()
{
	vector<int> arr = {10,20,30,40,50,60,70,80,90,100};

	Node* head = converArrtoLL(arr);
	cout<<"Original Linked List: ";
	print(head);
	cout<<endl;


	head = removesHead(head);
	cout<<"Removed Head of Linked list: ";
	print(head);
	cout<<endl;

	cout<<"Removed Tail of Linked List: ";
	head = removeTail(head);
	print(head);
	cout<<endl;

	cout<<"Reomved 3rd element from linked list: ";
	head = removek(head,3);
	print(head);	
	cout<<endl;

	cout<<"Remove 50 from linked list: ";
	head = removeEle(head, 50);
	print(head);
	cout<<endl;

	cout<<"Add 10 at head: ";
	head = InsertHead(head, 10);
	print(head);
	cout<<endl;

	cout<<"Add 100 at tail: ";
	head = InsertTail(head, 100);
	print(head);
	cout<<endl;

	cout<<"Add 40 at 4th: ";
	head = InsertElement(head, 40, 4);
	print(head);
	cout<<endl;

	cout<<"Add 50 at before 60: ";
	head = InsertBeforeK(head, 50, 60);
	print(head);
	cout<<endl;

}