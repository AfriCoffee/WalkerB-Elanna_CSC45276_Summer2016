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
const float CNVFTAC=4.356e4f;//Conversion from ft^2 to Acres
const float CNVMFT=1/5.28e3f;//Conversion from Miles to Ft
//Function Prototypes

//Execution Begins Here!
/*
 * 
 */
int main(int argc, char** argv) {
//Declare Variables Here, NO DOUBLES
    float nAcres;//Number of Acres
    float nSqMls;//Number of Square Miles
    //Input Data
    cout<<"Enter the number of Acres to convert to Square Miles"<<endl;
    cin>>nAcres;
    //Process Data
    nSqMls=nAcres*CNVFTAC*CNVMFT*CNVMFT*CNVMFT;
    //Output Data
    cout<<nAcres<<" acres = "<<nSqMls<<"Miles^2"<<endl;
    
    //Exit Stage Right!
    return 0;
}



