#include<iostream>
#include<climits> 
#include<algorithm>
using namespace std;
int main(){

/*
STARTING ARRAYS 
-> it is a first data structure we are going to study
-> used to store data of diff variables of same kind of datatype like the data is related to integer, character etc in a single data structure 

*/
int marks [5]; // creating an array with size of '5' ie. it contains 5 elements.
int marks1 [5] = {12,232,42,23,34}; // initilising an array
int marks2 [] = {12,232,42,23,34}; // this means the array marks2--> is of size 5 as we initiate only 5 elements in the array.
int marks3[500]= {12,232,42,23,34}; //this array is of size equals 500 with first 5 elements as intiated.

//ARRAY INDEX --> POSITION OF ELEMENT IN AN ARRAY  
// ->  index starts from 0 (position of first element) and goes till (size-1)


cout<< marks1 [0]<< endl;
cout<< marks1[1]<< endl;
cout<< marks1 [2]<< endl;
cout<< marks1 [3]<< endl;
cout<< marks1 [4]<< endl;
// cout<< marks1 [5]<< endl;// last index is 4 and prints any garbage value 


// ABOVE WAY IS VERY BORING TO PRINT ELEMENTS ONE BY ONE FROM THE ARRAY.

cout<< endl ;

int marks11 [5] = {12,232,42,23,34};
for(int i=0 ; i<5; i++){
  cout<< marks11[i]<< endl;
}
 cout << "\n";

//HOW TO CALCULATE SIZE OF AN ARRAY 
cout<< sizeof(marks1)<<endl; // total memory stored by an array 
cout<< sizeof(marks1)/sizeof(int) <<endl; //---> gives size of an array 

// how to take input in a declared array 

cout<< endl;

int size=5;
int marks00[size];

for (int i=0; i<size ; i++){

  cin>>marks00[i];
}

cout<< endl;

for(int i=0 ; i<5; i++){
  cout<< marks00[i]<< endl;
}

cout<< endl;

// FINDING THE SMALLEST NUMBER ...

int nums[] = {12,6,78,43,-23}; // if are initilising values then there is no need of specifing size of array.

int size1=5;
int smallest = INT_MAX ; // to use this we have to include {#include<climits>}

for (int i=0; i<size1 ;i++){
  if (nums[i] <smallest){
smallest = nums[i];}
  }
cout<<"THE SMALLEST NO. IN NUMS ARRAY IS = "<< smallest << endl<< endl;

// USING MIN AND MAX FUNCTION , the logic already written in the algorithm header file

int smallest1= INT_MAX;

for (int i=0; i<size1;i++){
 smallest1 = min(nums[i] , smallest1);
}
cout << "THE SMALLEST  NO. IN NUMS ARRAY IS = "<< smallest1<< endl<<endl;

// FIND THE LARGEST NUMBER 

int nums1[] = {10,20,-30,40,50,60};
int size2=6;

int largest = INT_MIN;
for (int i= 0; i<size2;i++){
  if (nums1[i] > largest ){
      largest = nums1[i];}
  }

cout << "THE LARGEST NUMBER IN NUMS1 ARRAY IS : " << largest<< endl;
cout<< endl;

// USING MIN AND MAX FUNCTION , the logic already written in the algorithm header file
 int largest1= INT_MIN;
for (int i=0;i<size2 ; i++){
  largest1 = max(nums1[i] , largest1);
}
cout << "THE LARGEST NUMBER IN NUMS1 ARRAY IS : " << largest1<< endl;








return 0;
}