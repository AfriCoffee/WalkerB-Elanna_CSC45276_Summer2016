/* 
 * File:   main.cpp
 * Author: B'Elanna Walker
 *
 * Created on August 20, 2014, 2:45 PM
 //Purpose: Program Utilizing a Variable
 */

//System Libraries
#include <iostream> //Imput/Output Stream Library
#include <cstdlib>  //Random
#include <ctime>    //Time
#include <iomanip>  //Format
#include <cmath>
#include <string>
using namespace std; //Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes
int coinToss(int &);
//Execution Begins Here!
/*
 * 
 */
int main(int argc, char** argv) {
//Declare Variables Here, NO DOUBLES
    
    int nToss=100000;
    int answer;
    //Input Data
    
    
    //Process Data
    
    
    //Output Data
    coinToss(answer);
    if(answer==1)cout<<"Heads"<<endl;
    else if(answer==2)cout<<"Tails"<<endl;
     
    //Exit Stage Right!
    return 0;
}
int coinToss(int &answer){
    //create a uniform random number [0,1]
    srand(static_cast<unsigned int>(time(0)));
    answer=(rand()%2+1);
    //Return a fair result
    return answer;
}


