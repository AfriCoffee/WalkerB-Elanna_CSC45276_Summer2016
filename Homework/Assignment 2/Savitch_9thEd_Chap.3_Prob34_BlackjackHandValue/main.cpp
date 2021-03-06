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
    unsigned short x; //number to convert
    unsigned char n1000s,n100s,n10s,n1s;//Strip off the digits
    //Input Data
    cout<<"input a number from 1,000 to 3,000 ro convert ";
    cout<<"to converto to a Roman Numeral"<<endl;
    cin>>x;
    
    //Process Data
    if (x<100||x>3000)return 1;
    
    //Output Data
     //Thousands Position
    n1000s=(x-x%1000)/1000;
    switch (n1000s){
        case 3 : cout<<"M";
        case 2 : cout<<"M";
        case 1 : cout<<"M";
        
    }
    //Hundreds  Position
    x-=n1000s*1000;
    n100s=(x-x%100)/100;
    switch (n1000s){
        case 9 : cout<<"CM";break;
        case 8 : cout<<"DCCC";break;
        case 7 : cout<<"DCC";break;
        case 6 : cout<<"DC";break;
        case 5 : cout<<"D";break;
        case 4 : cout<<"CD";break;
        case 3 : cout<<"C";
        case 2 : cout<<"C";
        case 1 : cout<<"C";
    }
    x-=n1000s*1000;
    n10s=(x-x%10)/10;
    switch (n1000s){
        case 9 : cout<<"XC";break;
        case 8 : cout<<"LXXX";break;
        case 7 : cout<<"LXX";break;
        case 6 : cout<<"LX";break;
        case 5 : cout<<"L";break;
        case 4 : cout<<"XL";break;
        case 3 : cout<<"X";
        case 2 : cout<<"X";
        case 1 : cout<<"X";
    }
    x-=n1000s*1000;
    n1s=(x-x%1)/1;
    switch (n1000s){
        case 9 : cout<<"IX";break;
        case 8 : cout<<"VIII";break;
        case 7 : cout<<"VII";break;
        case 6 : cout<<"VI";break;
        case 5 : cout<<"V";break;
        case 4 : cout<<"IV";break;
        case 3 : cout<<"I";
        case 2 : cout<<"I";
        case 1 : cout<<"I";
    }
    
    //Exit Stage Right!
    return 0;
}



