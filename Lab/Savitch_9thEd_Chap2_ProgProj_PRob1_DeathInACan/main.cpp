/* 
 * File:   main.cpp
 * Author: B'Elanna Walker
 *
 * Created on June 23, 1:11 PM
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
    float msMass=35;//Mass of Mouse is 35 grams
    float msKill=5;//5 Grams of sweetener kills the mouse
    float hmMass=45400;//Grams or about 100 lb PErson
    float msSoda=350;//Mass of soda can content (grams)
    float consin=1e-3;//1/10 of 1% Concentration in soda of sweetener
    int   nCans;//Number of Cans to kill
    
    //Input Data
    
    //Process Data
    nCans=hmMass*msKill/(msMass*msSoda*consin);
    //Output Data
            cout<<"The Number of Cans that a dieter with Mass = ";
    cout<<hmMass<<"(grams) may consume is = "<<nCans<<"(cans)";
    cout<<endl;
    
    //Exit Stage Right!
    return 0;
}



