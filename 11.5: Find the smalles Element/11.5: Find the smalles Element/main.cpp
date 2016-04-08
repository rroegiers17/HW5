//
//  Rachel Roegiers
//  CS 172-1
//  HW05
//  11.5: Find the Smalles Element
//


#include <iostream>
using namespace std;

// function prototype to find smallest element in the array
int minElements(double *list, int size);

int main()
{
    // declare variables, pointer and non
    double *list;
    int size;
    
    // ask user for array size
    cout << "Enter the array size: " << endl;
    cin >> size;
    
    // create the array with the new size
    list = new double [size];
    
    // get user input for array with for loop
    for (int i= 0; i < size; i++){
        cout << "Enter number " << (i + 1) << ":";
        cin >> list [i];
    }
    cout << "The index of the minumum value is " << minElements(list, size)+1<< endl;
    cout << "The minimum value in the array is " << list[minElements(list, size)]<< endl;
    
    delete list;
    
    return 0;
}

// function definition to find the smallest element in the array
int minElements(double *list, int size)
{
    // declare variables
    double min = list[0];
    int num = 0;
    
    // use loop to find minumum value in array
    for (int i = 1; i < size; i++)
    {
        if (list[i] < min){
            min = list[i];
            num = i;
        }
            
    }
    return num;
}