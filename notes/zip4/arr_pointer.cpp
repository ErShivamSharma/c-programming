#include <iostream> 
using namespace std; 
  
int main() 
{ 
    // Defining an array 
    int arr[] = { 1, 2, 3, 4 }; 
  
    // Define a pointer 
    int* ptr = arr;   //We are able to assign arr to ptr because arr is also a pointer. 
  
    // Printing address of the arrary using array name 
    cout << "Memory address of arr: " << &arr << endl;   //memory address of arr using reference operator (&) 
  
    // Printing address of the array using ptr 
    cout << "Memory address of arr: " << ptr << endl; 

    // Print elements of an array 
    cout << "first element: " << *arr << endl; 
    cout << "Second element: " << *(arr + 1) << endl; 
    cout << "Third element: " << *(arr + 2) << endl; 
    cout << "fourth element: " << *(arr + 3) << endl; 

    // Print elements of an array 
    cout << "first element: " << *ptr << endl; 
    cout << "Second element: " << *(ptr + 1) << endl; 
    cout << "Third element: " << *(ptr + 2) << endl; 
    cout << "fourth element: " << *(ptr + 3) << endl; 

    // Print elements of an array 
    cout << "first element: " << *ptr << endl; 
    cout << "Second element: " << *ptr++ << endl; 
    cout << "Third element: " << *(ptr + 2) << endl; 
    cout << "fourth element: " << *(ptr + 3) << endl; 
  
    return 0; 
}