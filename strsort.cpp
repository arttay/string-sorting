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



int main(int argc, char *argv[])
{
    const int ARRAYMAX = 10;                                                    //sets const int to 10
    const int STRINGMAX = 256;                                                  //sets cont int to 256
    int left;                                                                   //declares int left
    int right;                                                                  //declares int right
    left = 0;                                                                   //left set to 0
    right = 9;                                                                  //sets right to 9
                                                                                //acts as if the array is tilt to its side
    char* dataArray[ARRAYMAX];
//*************************
// declares a char pointer array
// called dataArray, there are 
// ARRAYMAX elements, which is 
// 10 as of writing this
//************************
    
    initStrArray(dataArray, ARRAYMAX, STRINGMAX);                               //calls function initStrArray
                                                                                //includes user prompts
    sortStrArray(dataArray, left, right);                                       //calls function sortStrArray, 
                                                                                //sorts array of strings entered above
    printArray(dataArray, ARRAYMAX);                                            //calls function printArray
                                                                                //prints array of strings entered by user
    
    
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
