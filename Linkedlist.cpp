#include<bits/stdc++.h>
using namespace std;

// Basic Declaration of LinkedList
class Node{
public:
	int data;
	Node* next;

	// Node(int data1, Node* next1){
	// 	data = data1;
	// 	next = next1;
	// }

	Node(int data1){
		data = data1;
		next = nullptr;
	}
};


Node* ConvertArrtoLL(vector<int> &arr){
	Node* head = new Node(arr[0]);
	Node* mover = head;

	for(int i = 1 ; i< arr.size(); i++)
	{
		Node* temp = new Node(arr[i]);
		mover->next = temp;
		mover = temp; // or mover = mover->next;
	}
	return head;
}

int LinkedListLength(Node* head){
	int cnt = 0;
	Node* temp = head;

	while(temp != nullptr)
	{
		cnt++;
		temp = temp->next;
	}
	return cnt;
}

bool checkifpresent(Node* head, int key){
	Node* temp = head;
	while(temp){
		if(temp->data == key) return true;
		temp = temp->next;
	}
	return false;
}

int main()
{ 
	// Basic Declaration of LinkedList
	// {
		vector<int> v = {2,5,8,9};
		// // Node* x = new Node(v[0], nullptr);
		// Node* x = new Node(v[0]);
		// cout<<x->data<<endl;
	// }

	Node* head = ConvertArrtoLL(v);
	// cout<<head->data<<endl; 
	// Traverse in Linked List
	Node* temp = head;

	while(temp != nullptr)
	{
		cout<<temp->data<<endl;
		temp = temp->next;
	}

	// cout<<"Length of linked list is: "<<LinkedListLength(head)<<endl;
	// cout<<checkifpresent(head, 8)<<endl;

	
}