/* 
 * File:   main.cpp
 * Author: B'Elanna Walker
 *
 * Created on August 20, 2014, 2:45 PM
 //Purpose: First Program
 */

//System Libraries
#include <iostream> //Imput/Output Stream Library

using namespace std; //Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
/*
 * 
 */
int main(int argc, char** argv) {
//Declare Variables Here, NO DOUBLES
    char cnum;//Character Number
    int inum;//Integer Number
    char cadd;//Character Variable for addition result
    //Input Data
    cout<<"Type in 2 -> 1 digit numbers -> D D"
    ;cin>>cnum>>inum;
    
    //Process Data
    cadd=cnum+inum
    
    //Output Data
    ;cout<<"The character number = "<<cnum<<endl;
    cout<<"which has a value of "<<static_cast<int>(cnum)<<endl;
   cout<<"The integer number  = "<<inum;
     cout<<"which has a value of"<<static_cast<int>(inum)<<endl;
     cout<<"The character number added = "<<cadd;
     cout<<"which has a value of"<<static_cast<int>(cadd)<<endl;
    //Exit Stage Right!
    return 0;
}



