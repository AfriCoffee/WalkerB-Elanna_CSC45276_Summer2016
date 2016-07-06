/* 
 * File:   main.cpp
 * Author: B'Elanna Walker
 *
 * Created on Jully 5, 2016 1:14 PM
 //Purpose: First Program
 */

//System Libraries
#include <iostream> //Imput/Output Stream Library
#include <cmath>//Math Library
#include <iomanip>//Format Library
using namespace std; //Iostream uses the standard namespace

//User Libraries

//Global Constants
const float PI=4*atan(1);

//Function Prototypes

//Execution Begins Here!
/*
 * 
 */
int main(int argc, char** argv) {
//Declare Variables Here, NO DOUBLES
    float apprxPI=0,tol;
    
    //Input Data
    cout<<"Tolerance of the approximate PI to a power of -10^-"<<endl;
    cin>>tol;
    tol=pow(10,-tol);
    cout<<"The Tolerance ="<<tol<<endl;
    
    //Process Data
    float sumTerm=1;
    int nTerm=0;
    for (int denom=1;sumTerm>tol;nTerm+=2,denom+=4){
        sumTerm=1.0f/denom-1.0f/(denom+2);
        apprxPI+=sumTerm;
    }
    apprxPI*=4;
    //Output Data
    cout<<PI<<" is approximated by "<<apprxPI<<"with "<<nTerm<<" terms."<<endl;
    //Exit Stage Right!
    return 0;
}



