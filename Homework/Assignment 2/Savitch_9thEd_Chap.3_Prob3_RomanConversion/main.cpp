/* 
 * File:   main.cpp
 * Author: B'Elanna Walker
 *
 * Created on June 30, 2016, 2:45 PM
 //Purpose: Convert Roman Numerals
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
    char card;
    int value=0,excess=0;
    //Input Data
    cout<<"Input a card A,T,J,Q,K,2-9.";
    cin>>card;
    
    //Process Data
    
    
    //Output Data
     
    //Evaluate 1st card
    switch (card){
        case 'K':
        case 'Q':
        case 'J':
        case 'T':value+=10;break;
        case '9':
        case '8':
        case '7': 
        case '6': 
        case '5': 
        case '4': 
        case '3':
        case '2':value+=(card-48);break;
        case 'A':value+=11;excess=10;break;
    }
   
    cout<<"The Value of the hand at this point = "<<value<<endl;
    
    //Input Data
    cout<<"Input a card A,T,J,Q,K,2-9.";
    cin>>card;
    
    //Evaluate 2nd card
    switch (card){
        case 'K':
        case 'Q':
        case 'J':
        case 'T':value+=10;break;
        case '9':
        case '8':
        case '7': 
        case '6': 
        case '5': 
        case '4': 
        case '3':
        case '2':value+=(card-48);break;
        case 'A':value+=11;excess=10;
    }
    if (value>21)value-=excess;
    cout<<"The Value of the hand at this point = "<<value<<endl;
    
    cout<<"Input a card A,T,J,Q,K,2-9.";
    cin>>card;
    
    //Evaluate 3nd card
    switch (card){
        case 'K':
        case 'Q':
        case 'J':
        case 'T':value+=10;break;
        case '9':
        case '8':
        case '7': 
        case '6': 
        case '5': 
        case '4': 
        case '3':
        case '2':value+=(card-48);break;
        case 'A':value+=11;excess=10;
    }
    cout<<"The Value of the hand at this point = "<<value<<endl;
    //Exit Stage Right!
    return 0;
}



