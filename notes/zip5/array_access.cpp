#include <iostream> 
using namespace std; 
  
int main() 
{ 
  
    //int arr[3]; 
    int arr[]= {4,5,6};
  
    // Inserting elements in an array 
    /*arr[0] = 1; 
    arr[1] = 2; 
    arr[2] = 3;*/ 
  
    // Accessing and printing elements of the array 
    cout << "arr[0]: " << arr[0] << endl; 
    cout << "arr[1]: " << arr[1] << endl; 
    cout << "arr[2]: " << arr[2] << endl; 

    for (int i =0;i<3;i++){
        cin >> arr[i];
    }
    for (int i=0; i<3; i++){
        cout << "array element  " << i <<" is " << arr[i] << endl;
    }
    return 0; 
}