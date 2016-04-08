//
//  Rachel Roegiers
//  CS 172-1
//  HW05
//  11.3: Increase Array Size

#include <iostream>
using namespace std;

// function prototype
int* doubleCapacity (const int* list, int size);

int main()
{
    // declaring variables
    int size, *list, num;
    
    // asking user for size of the array and inputing
    cout << "Enter the size of the array: " << endl;
    cin >> size;
    
    //intitializing the array
    list = new int[size];
    
    // ask user for numbers and store them in the array
    cout << "Enter integers: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> num;
        *(list + i) = num;
    }
    
    // doubling the size of the array
    list = doubleCapacity(list, size);
    cout << "The array was doubled in size... So enter more values: " << endl;
    for (int i = size; i < (size * 2); i++){
        cin >> num;
        *(list +i) = num;
    }
    
    // using for loop to display the elements stored in the array
    cout << "Elements in the array after doubling the size: " << endl;
    for(int j = 0; j< (size * 2); j++){
        cout << *(list + j) << " ";
    }
    cout << endl;
    delete list;
    
    return 0;
}
int* doubleCapacity (const int* list, int size){
    int* newlist = new int [2 * size];
    for (int i = 0; i < size; i++){
        newlist[i] = *(list + i);
    }
    return newlist;
}
