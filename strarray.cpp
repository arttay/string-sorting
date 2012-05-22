#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cstring>
#include "strarray.h"
//***********************************
//  c++ library's, 
//  strarray.h, a header file made by 
//  the progreammer 
//*************************************
using namespace std;

void initStrArray(char* A[], int arraySize, int STRINGMAX)                      //function prototype for initStrArray
{
     int i;
     char inLine[STRINGMAX];                                             
//***********************************
// declares a char array of length STRINGMAX
//  named inLine
//***************************************
     for(i=0;i<arraySize;i++)                                                   //for loop, until i is greater than arraysize 
     {
        cerr << "Please enter a string: " << endl;                              //uses cerr to output a statement
        cin.getline(inLine, STRINGMAX);                                        
//**************************
//  gets lines entered by the user
//  and stores them into a(n) array
//  inLine in this case, while the string
//  does not exced STRINGMAX(char's)
//******************************
        A[i] =  new char[strlen(inLine)+ 1];
//**********************************
//  sets the current position of A[i]
//  to a dynamically allocated pointer 
//  array. checks the length of the line 
//  gotten by the cin.getline, and adds one
//  to it.
//*************************************
        strcpy(A[i], inLine);
//*************************************
//  copys the string, array location [i]
//  which is the current input by the user,
//  intot the array inLine.
//*************************************
     }                                                                          //endfor
}                                                                               //end function initStrArray
     
void printArray(char* A[], int arraySize)                                       //function prototype, printArray
{
     int i;
     cout << endl;
     for(i = 0; i < arraySize; i++)                                             //starts for loop, till arraySize is greater than I
                                                                                
           cout << A[i] << endl;                                                //outputs element place i of array A
     
       
}                                                                               //end function printArray

void sortStrArray(char* A[], int left, int right)                               //function prototype, sortStrArray 
{
     int i;                                                                     //declares int i
     int j;                                                                     //declares int j
     char* pivot;                                                               //declares pointer pivot of type char
     char* temp;                                                                //declares pointer temp of type char
     
     i = left;                                                                  //sets i to left
     j = right;                                                                 //sets j to right
     
     pivot = A[(left+right)/2];                                                 //pivot is set to an algorithem element of array A
     while(i<=j)                                                                //starts while loop, while i is less than or equal to j
     {
         while(strcmp(A[i], pivot)< 0)    
                      i++;
                                               
//***********************************
//  nested while loop
//  compares string element i of array A
//  to element pivot, which is an element
//  of array, as defined above. It then
//  compares the result of the function to 
//  0, and executes the loop.
//  The body of the loop increases i by 1
//***********************************
                   
          
         while(strcmp(pivot, A[j]) < 0)
         
                j--;
//*******************************************
//  Another nested while loop, it uses the function
//  strcmp, to compare pivot(the position of the algorithem
//  above, of array A) to position j of array A
//  then compare the result of the comparison to 0
//  procedes to execute loop while the comparision is 
//  less than 0.
//  loop decreses j by 1
//*********************************************
      
         if(i <= j)                                                             //starts if statement, if i is less than 
         {                                                                      //or equal to j
              temp = A[i];                                                      
              A[i] = A[j];                                                  
              A[j] = temp;
              i++;
              j--;
         }                                                                      //end if 
//*********************************
// loop sets temp to position i of array A
// sets position i of array A to position j of array A
// sets position j of array A to temp
// increments i by 1
// decrements j by 1
//***********************************          
    }                                                                           //while
    
    if(left < j)                                                                //if statment, if left is less than j
    
        sortStrArray(A, left, j);                                               //calls sortStrArray function
                                                                                //params: A, left, j
    if(i < right)                                                               //if statment, if i is less than right
    
        sortStrArray(A, i, right);                                              //calls sortStrArray with different params
                                                                                //params: A, i, right
}                                                                               //end function sortStrArray
     

