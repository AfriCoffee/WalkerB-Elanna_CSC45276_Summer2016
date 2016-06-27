/* 
 * File:   main.cpp
 * Author: B'Elanna Walker
 *
 * Created on June 27, 2016 12:55 PM
 //Purpose: First Program
 */

//System Libraries
#include <iostream>
#include <iomanip>//Imput/Output Stream Library

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
    int x;//Number to input 10 times
    int sumAll=0,sumEven=0,sumOdd=0,sumPos=0,sumNeg=0;
    //Input Data
    cout<<"Please input an integer."<<endl;
    cin>>x;
    //Process Data
    sumAll+=x;
    if(x%2==0)sumEven+=x; //block of code with else statement, dependent if.
    else       sumOdd+=x; //block of code with previous if statement
    sumPos += x>0? x:  0; //ternary operator
    if(x<0)    sumNeg+=x; //independent if statement
    
    //Input Data
    cout<<"Please input an integer."<<endl;
    cin>>x;
    //Process Data
    sumAll+=x;
    if(x%2==0)sumEven+=x; //block of code with else statement, dependent if.
    else       sumOdd+=x; //block of code with previous if statement
    sumPos += x>0? x:  0; //ternary operator
    if(x<0)    sumNeg+=x; //independent if statement
    
    //Input Data
    cout<<"Please input an integer."<<endl;
    cin>>x;
    //Process Data
    sumAll+=x;
    if(x%2==0)sumEven+=x; //block of code with else statement, dependent if.
    else       sumOdd+=x; //block of code with previous if statement
    sumPos += x>0? x:  0; //ternary operator
    if(x<0)    sumNeg+=x; //independent if statement
    
    //Input Data
    cout<<"Please input an integer."<<endl;
    cin>>x;
    //Process Data
    sumAll+=x;
    if(x%2==0)sumEven+=x; //block of code with else statement, dependent if.
    else       sumOdd+=x; //block of code with previous if statement
    sumPos += x>0? x:  0; //ternary operator
    if(x<0)    sumNeg+=x; //independent if statement
    
    //Input Data
    cout<<"Please input an integer."<<endl;
    cin>>x;
    //Process Data
    sumAll+=x;
    if(x%2==0)sumEven+=x; //block of code with else statement, dependent if.
    else       sumOdd+=x; //block of code with previous if statement
    sumPos += x>0? x:  0; //ternary operator
    if(x<0)    sumNeg+=x; //independent if statement
    
    //Input Data
    cout<<"Please input an integer."<<endl;
    cin>>x;
    //Process Data
    sumAll+=x;
    if(x%2==0)sumEven+=x; //block of code with else statement, dependent if.
    else       sumOdd+=x; //block of code with previous if statement
    sumPos += x>0? x:  0; //ternary operator
    if(x<0)    sumNeg+=x; //independent if statement
    
    //Input Data
    cout<<"Please input an integer."<<endl;
    cin>>x;
    //Process Data
    sumAll+=x;
    if(x%2==0)sumEven+=x; //block of code with else statement, dependent if.
    else       sumOdd+=x; //block of code with previous if statement
    sumPos += x>0? x:  0; //ternary operator
    if(x<0)    sumNeg+=x; //independent if statement
    
    //Input Data
    cout<<"Please input an integer."<<endl;
    cin>>x;
    //Process Data
    sumAll+=x;
    if(x%2==0)sumEven+=x; //block of code with else statement, dependent if.
    else       sumOdd+=x; //block of code with previous if statement
    sumPos += x>0? x:  0; //ternary operator
    if(x<0)    sumNeg+=x; //independent if statement
    
    //Input Data
    cout<<"Please input an integer."<<endl;
    cin>>x;
    //Process Data
    sumAll+=x;
    if(x%2==0)sumEven+=x; //block of code with else statement, dependent if.
    else       sumOdd+=x; //block of code with previous if statement
    sumPos += x>0? x:  0; //ternary operator
    if(x<0)    sumNeg+=x; //independent if statement
    
    //Input Data
    cout<<"Please input an integer."<<endl;
    cin>>x;
    //Process Data
    sumAll+=x;
    if(x%2==0)sumEven+=x; //block of code with else statement, dependent if.
    else       sumOdd+=x; //block of code with previous if statement
    sumPos += x>0? x:  0; //ternary operator
    if(x<0)    sumNeg+=x; //independent if statement
    //Output Data
    cout<<"Sum All      = "<<setw(5)<<sumAll<<endl;
    cout<<"Sum Even     = "<<setw(5)<<sumEven<<endl;
    cout<<"sumOdd       = "<<setw(5)<<sumOdd<<endl;
    cout<<"Sum Positive = "<<setw(5)<<sumPos<<endl;
    cout<<"Sum Negative = "<<setw(5)<<sumNeg<<endl;
    
    //Exit Stage Right!
    return 0;
}



