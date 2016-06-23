/* 
 * File:   main.cpp
 * Author: B'Elanna Walker
 *
 * Created on August 20, 2014, 2:45 PM
 //Purpose: To Randomize numbers and simulate dice
 */

//System Libraries
#include <iostream> //Imput/Output Stream Library
#include <cstdlib>  //Random Number function
#include <ctime>    //Time Function
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
   unsigned char die1,die2,sum;
    //Input Data
   srand(static_cast<unsigned int>(time(0)));
    //Process Data
   die1=rand()%6+1;  //Random number [1-6]
    die2=rand()%6+1;//Random number [1-6]
    sum=die1+die2; //Random number [2-12]]
    //Output Data
    cout<<"Die 1= "<<static_cast<int>(die1)<<endl;
    cout<<"Die 2 = "<<static_cast<int>(die2)<<endl;
    cout<<"Sum = "<<static_cast<int>(sum)<<endl;
    
    //Exit Stage Right!
    return 0;
}



