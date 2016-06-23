/* 
 * File:   main.cpp
 * Author: B'Elanna Walker
 *
 * Created on June 23, 1:37 PM
 //Purpose: Paycheck Calculation with Ternary Operator
 */

//System Libraries
#include <iostream> //Imput/Output Stream Library
#include <iomanip>  //Format Library

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
    float hrsWrkd=50;//Hours Worked
    float payRate=10;//$'s per hour
    char ovrTime=40;//Overtime starts at 40 hrs.
    float payChck;//Paycheck in $'s
    //Input Data
    
    //Process Data
    payChck=hrsWrkd<ovrTime?//Test
        hrsWrkd*payRate://True 
        hrsWrkd*payRate+(hrsWrkd-ovrTime)*payRate*0.5;
       // ovrTime*payRate+(hrsWrkd-ovrTime)*payRate*1.5;//False
    //Output Data
            cout<<"Hours worked = "<<hrsWrkd<<"hrs"<<endl;
    cout<<"Pay Rate = $"<<payRate<<"/hr"<<endl;
    cout<<"Overtime starts at "<<static_cast<int>(ovrTime)<<" hrs"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Paycheck = $"<<payChck<<endl;
    
    //Exit Stage Right!
    return 0;
}



