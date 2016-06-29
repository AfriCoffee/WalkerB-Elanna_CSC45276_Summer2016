/* 
 * File:   main.cpp
 * Author: B'Elanna Walker
 *
 * Created on June 27, 2016 PM
 //Purpose: Equal Monthly Loan PAyments
 */

//System Libraries
#include <iostream> //Imput/Output Stream Library
#include <iomanip>  //Format Library
#include <cmath>    //Math Library
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
    float loanAmt,intRate,nPymnts;//inputs to the problem
    float mPymnt,totPaid,intPaid;  //Outputs to the problem
    
    //Input Data
    cout<<"Loan Calculator for Equal Monthly Payments"<<endl;
    cout<<"Input all 3 at once"<<endl;
    cout<<"Loan Amount $'s, Interest Rate %/month, Number of Monthly Payments"<<endl;
    cin>>loanAmt>>intRate>>nPymnts;
    
    //Process Data
    //float temp=pow((1+intRate),nPymnts);
    float temp=exp(nPymnts*log(1+intRate));//Intermediate Value
    mPymnt=intRate*temp*loanAmt/(temp-1);//Equal Payment
    totPaid=nPymnts*mPymnt;//total Paid with interest
    intPaid=totPaid-loanAmt;//Financed Opportunity cost
    //Output Data
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    cout<<"Monthly Payment = $"<<setw(10)<<mPymnt<<endl;
    cout<<"Total Paid =      $"<<setw(10)<<totPaid<<endl;
    cout<<"Interest Paid =   $"<<setw(10)<<intPaid<<endl;
    
    //Exit Stage Right!
    return 0;
}



