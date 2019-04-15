// CPP program to illustrate the 
// list::resize() function 
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	// Creating a list 
	list<int> demoList; 

	// Adding elements to the list 
	demoList.push_back(10); 
	demoList.push_back(20); 
	demoList.push_back(30); 
	demoList.push_back(40); 

	// Initial list: 
	cout << "Initial List: "; 
	for (auto itr = demoList.begin(); itr != demoList.end(); itr++) 
		cout << *itr << " "; 

	// Resize list to contain less elements 
	//demoList.resize(2); 
	cout << "\n\nList after first resize: "; 
	for (auto itr = demoList.begin(); itr != demoList.end(); itr++) 
		cout << *itr << " "; 

	// Resize list to contain more elements 
	//demoList.resize(4); 
	cout << "\n\nList after second resize: "; 
	for (auto itr = demoList.begin(); itr != demoList.end(); itr++) 
		cout << *itr << " "; 

	// resize list to contain more elements 
	// with a specified value 
	demoList.resize(9, 50); 
	cout << "\n\nList after third resize: "; 
	for (auto itr = demoList.begin(); itr != demoList.end(); itr++) 
		cout << *itr << " "; 

	return 0; 
} 
