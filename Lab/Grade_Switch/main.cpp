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

//Function Prototypes

//Execution Begins Here!
/*
 * 
 */
int main(int argc, char** argv) {
//Declare Variables Here, NO DOUBLES
    unsigned int score; //Input [0, 100}]
    char grade; //Output [A,B,C,D,F]]
    //Input Data
    cout<<"Input the score [0,100] output will b the  grade."<<endl;
    cin>>score;
    //Process Data
    switch(score/10){
        case 11:
        case 10:
        case  9:grade='A';break;
        case  8:grade='B';break;
        case  7:grade='C';break;
        case  6:grade='D';break;
        default:grade='F';
    } 
    
    //Ternary operator (is easier than if-else, if spaced correctly).
      //grade=(score>=90)?'A': 
            //(score>=80)?'B':
            //(score>=70)?'C':
            //(score>=60)?'D':'F';
    //if-else statement 
     //if      (score>=90)grade='A';
      //else if (score>=80)grade='B';
      //else if (score>=70)grade='C';
      //else if (score>=60)grade='D';
      //else               grade='F';
     //Output Data
    cout<<score<<" equates to a "<<grade<<" grade!"<<endl;
    
    //Exit Stage Right!
    return 0;
}



