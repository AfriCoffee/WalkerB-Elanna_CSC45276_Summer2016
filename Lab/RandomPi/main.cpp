/* 
 * File:   main.cpp
 * Author: B'Elanna Walker
 *
 * Created on July 6th, 2016 1:41 PM
 //Purpose: Random Approximation or Stochastic Calculus
 */

//System Libraries
#include <iostream> //Imput/Output Stream Library
#include <cmath>//Math Library
#include <ctime>//Time Library
#include <cstdlib> //Random Number Library


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
    srand(static_cast<unsigned int>(time(0)));
    float approxPI;
    int nDarts,nCirc=0;
    float maxRnd=pow(2,31)-1;
    float max=-1,min=2;
    //Input Data
    cout<<"How many darts to throw to approximate PI"<<endl;
    cin>>nDarts;
    
    //Process Data
    for(int dart=1;dart<=nDarts;dart++){
        float x=rand()/maxRnd;
        float y=rand()/maxRnd;
        if(x*x+y*y<=1)nCirc++;
        if(max<x)max=x;
        if(min>x)min=x;
         if(max<y)max=y;
        if(min>y)min=y;
    }
    approxPI=4.0f*nCirc/nDarts;
    
    //Output Data
    cout<<"Max Random = "<<max<<" Min Random = "<<min<<endl;
    cout<<PI<<" approximated by "<<nDarts<<" darts = "<<approxPI<<endl;
    
    //Exit Stage Right!
    return 0;
}



