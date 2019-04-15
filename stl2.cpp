// C++ program to demonstrate working of distance() 
#include <algorithm> 
#include <iostream> 
#include <vector> 
using namespace std; 

int main() 
{ 
	// Initializing vector with array values 
	int arr[] = {20,20,33,42,51,7}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	vector<int> vect(arr, arr+n); 

	// Return distance of first to maximum element 
	cout << "Distance between first to max element: "; 
	cout << distance(vect.begin(), 
					min_element(vect.begin(), vect.end())); 
	return 0; 
} 
