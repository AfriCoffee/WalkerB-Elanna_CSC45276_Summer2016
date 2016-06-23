/* 
 * File:   main.cpp
 * Author: B'Elanna Walker
 *
 * Created on August 20, 2014, 2:45 PM
 //Purpose: Calculate the Military Budget
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
    float milbdgt=6e12f;
    float fdbdgt=3.8e12f;
    float percent;
    const int SIZE=81;
    char guess[SIZE];
    
    //Input Data
    cout<<"Guess the percentage of the Federal Budget attributed to the Military"<<endl;
    cin.getline(guess,SIZE);
    
    //Process Data
    percent=milbdgt/fdbdgt*10;
    
    //Output Data
    cout<<"The military = $"<<milbdgt<<endl;
    cout<<"The Federal Budget = $"<<fdbdgt<<endl;
    cout<<fixed<<setprecision (2) <<showpoint;
    cout<<"The military budget percentage = "<<percent<<"%"<<endl;
    cout<<"Your guess was = "<<guess<<"%"<<endl;
    //Exit Stage Right!
    return 0;
}



