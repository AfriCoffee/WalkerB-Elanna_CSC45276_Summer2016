/* 
 * File:   main.cpp
 * Author: B'Elanna Walker
 *
 * Created on July 5, 2016, 1:04
 //Purpose: How to double your money
 */

//System Libraries
#include <iostream> //Imput/Output Stream Library
#include <iomanip>
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
    int pennies=1;//Initial pay per day
    int payDay=0;//pay at end of month
    
    //Input Data
    for(int day=1;day<=30;day++){
        payDay+=pennies;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Day "<<setw(2)<<day<<" Pay Rate = $"<<setw(10)<<pennies/100.00;
     cout<<fixed<<setprecision(2)<<showpoint;
    cout<<" Pay earned $"<<setw(10)<<payDay/100.00<<endl;
    pennies*=2;
}
    //Process Data
    
    
    //Output Data
   
    //Exit Stage Right!
    return 0;
}



