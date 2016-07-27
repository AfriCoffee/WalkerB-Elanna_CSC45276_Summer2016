/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 27, 2016, 12:20 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
       int num;
       int guess;
       int atmpts=0;
       char answer;
       int x;
       int exp10(x);
       unsigned long int log2(x);
       
       srand(time(0));
       cout<<"Enter a number. ";
       cin>>x;
       cout<<"I have a number between 1 and 10^"<<x<<". Can you guess my number?";
       cout<<"You will be given a maximum of log2(10^"<<x<<")+1 guesses. Please type your first guess."<<endl;
       
          
        num=rand()%10^x+1;
        do{   
        cin>>guess;
           if (num<guess){
                   cout<<"Too low try again"<<endl;
           atmpts++;}
           else if (num>guess){
                   cout<<"Too high try again"<<endl;
                   atmpts++;}
           else if(num==guess){
                   cout<<"Congratulations!! "<<endl;
           cout<<"You got the right number in "<<atmpts<<" tries";}
        }while(atmpts<=log(10^x));
       if(atmpts>log(10^x)){    
       cout<<"Would you like to play again?  Enter Y/N";
       cin>>answer;
       
       if ('N')
                   cout<<"Thanks for playing!";}


    
    return 0;
}

