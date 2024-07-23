#include<bits/stdc++.h>
using namespace std;

void pair1(){
	//Pairs makes a pair in any data type.
	pair<int ,int> a = {1,2};

	cout<<a.first<<" "<<a.second<<endl;
	pair<int, pair<int,int>> b = {1,{3,2}};
	cout<<b.first<<" "<<b.second.second<<endl;

	pair<int ,int> arr[] = {{1,2},{2,3},{3,4}};
	cout<<arr[2].second<<endl;
}

// void vector1(){
// 	// Vector are same like array we can modify them as well. We can't modify array;
// 	vector<int> v; // empty vector []

// 	v.push_back(1); // [1] push number at back
// 	v.emplace_back(2); // [1,2] emplace is faster than pushback

// 	vector<pair<int, int>> v_in_p; // vector in pair datatype
// 	v_in_p.push_back({1,2}); // both are same
// 	v_in_p.emplace_back(1,2);

// 	vector<int> vec2(5 /*size*/,100); // [100,100,100,100,100]

// 	vector<int> vec3(5); // vector of size 5 of garbage value

// 	vector<int> vec4(4,20); // [20,20,20,20]
// 	vector<int> vec4_dub(vec4); // copy of vector4

// 	//Iterate 
// 	// simply We can iterate in vector same as array like vec[0] accessing the first element of vector
// 	// OR through memory.

// 	vector<int> v1 = {10,20,30,40,50};
// 	// cout<<v1[0];

// 	vector<int>::iterator v1_it = v1.begin(); // .begin shows that we are at memory address of v1[0].
// 	cout<<*v1_it<<endl; // * represent we entered in the memory and cout its value or it will cout the memory location
// 	v1_it += 2;
// 	cout<<*v1_it<<endl;

// 	vector<int>::iterator v1_it2 = v1.end(); // its at the end of vector [10,20,30,40,50] its after 50 if we want to access 50 then we have to do v1_it-- .
// 	v1_it2--;
// 	cout<<*v1_it2<<endl;

// 	cout<<v1.back()<<endl; // last element of vector


// 	//Print vector
// 	for(vector<int>::iterator it = v1.begin(); it != v1.end() ; it++){
// 		cout<<*(it)<<" ";
// 	}
// 	cout<<endl;
// 	// Short way
// 	for(auto it = v1.begin(); it!= v1.end(); it++){ // auto is auto data type which depends upon input
// 		cout<<*(it)<<" ";
// 	}
// 	cout<<endl;

// 	for(auto it:v1){ // here it is the value
// 		cout<<it<<" ";
// 	}

// 	//{1,2,3,4}
// 	v.erase(v.begin()+1) // {1,3,4}

// 	//{10,20,30,40,50}
// 	v.erase(v.begin()+1, v.begin()+3) // {10,40,50} [start,end)

// 	vector<int>v(2,200); // {200,200}
// 	v.insert(v.begin(),300); //{300,200,200}
// 	v.insert(v.begin()+1,2,400); // {300,400,400,200,200}

// 	vector<int>copy(2,500);
// 	v.insert(v.begin(),copy.begin(),copy.end()) // {500,500,300,400,400,200,200}

// 	//{10,20}
// 	cout<<v.size(); //2

// 	v.pop_back(); // {10}

// 	// v1 = {20,30}
// 	// v2 = {50,60}
// 	v1.swap(v2); // v1 = {50,60} v2 = {20,30}

// 	v.clear(); // erase the entire vector


// }

void explainlist(){
	list<int> ls;
	ls.push_back(1); // {1}
	ls.emplace_back(2); // {1,2}

	ls.push_front(0); //{0,1,2}
	ls.emplace_front(-1); // {-1,0,1,2}

	//rest fuction same as vector
	//begin ,end ,clear,insert,size,swap

}

void explainstack(){
	//LIFO:- Last in first out
	stack<int> st;
	st.push(1); // {1}
	st.push(2); // {2,1}
	st.push(3); // {3,2,1}
	st.push(5); // {5,3,2,1}

	cout<<st.top()<<endl; // 5 // st[0] is invalid
	st.pop(); // {3,2,1}
	cout<<st.top()<<endl; // 3
	cout<< st.size()<<endl; // 3

	stack<int>st1,st2;
	st1.swap(st2);
}

void explainQueue(){
	// FIFO:- first in first out
	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4); // {1,2,3,4}
	q.back() +=5;

	cout<<q.back(); //9
	cout<<q.front(); // 1

	q.pop();
	cout<<q.front(); // 2

	// size ,swap, empty same as stack
}

void explainpq(){
	// Largest element stay at top

	priority_queue<int>pq;
	pq.push(2); // {2}
	pq.push(1); // {2,1}
	pq.push(5); // {5,2,1}
	pq.emplace(3); // {5,3,2,1}

	cout<<pq.top()<<endl; 

	pq.pop();
	cout<<pq.top()<<endl; // 3


	priority_queue<int, vector<int>,greater<int>> pq1; // this help in acending order;
	pq1.push(2); // {2}
	pq1.push(1); // {1,2}
	pq1.push(5); // {1,2,5}
	pq1.emplace(3); // {1,2,3,5}

	cout<<pq1.top()<<endl;

	// time comp
	// push.pop:- log
	// top:- o(1)

}

// void explainset(){
// 	// Sorted and Unique

// 	set<int>st;
// 	st.insert(1); // {1}
// 	st.insert(1); // {1}
// 	st.insert(2); // {1,2}
// 	st.insert(4); // {1,2,4}
// 	st.insert(3); // {1,2,3,4}

// 	//begin, end, size,swap,empty are same as above;
// 	auto it =  st.find(3); // address of 3 to get 3 we do *it
// 	auto it1 = st.find(6); // it gives the address of st.end() we have to -1 to get address of last element
// 	cout<<*(it1);

// 	st.erase(2); // {1,3,4}
// 	st.count(1); // 1 cuz its uniquq

// 	auto it2 = st.find(3);
// 	st.erase(it); //{1,4}


// 	// {1,2,3,4,5,6}
// 	st.erase(st.find(2), st.find(5)); // {1,5,6} [first, end)
// 	auto it = st.upper_bound(3);
// 	auto it = st.lower_bound(2);
// }

void explainmultiset(){
	// Sorted only not unique it can store same item many time
	// All is same as set;
}

void explainUset(){
	//Its unique but not sorted
	// all are same as set but upper and lower bound function do not work
}

void explainmap(){
	// Ordered according to keys
	map<int, int> mpp; // [key: value]
	map<int, pair<int, int>> mpp1;
	map<pair<int, int>,int> mpp2;

	mpp[1] = 2; //  [1:2]
	// mpp.emplace({2,3}); // [1:2, 2:3]
	mpp.insert({3,6}); 

	// mpp[{1,2}] = 3; //[{1,2}: 3]

	for(auto it : mpp){
		cout<<it.first<<" "<<it.second<<endl;
	}

	cout<<mpp[1]<<" ";
	cout<<mpp[3];

	auto it1 = mpp.find(1);
	cout<< *(it1).second <<endl;

	auto it = mpp.lower_bound(2);
	auto it = mpp.upper_bound(2);

}

void explainmultimap(){
	// same as map it can store multiple keys
	//only map[key] can't be accessed here

}

int main(){
	// pair1();
	// vector1();
	// explainstack();
	// explainQueue();
	// explainpq();
	// explainset();
	explainmap();
}