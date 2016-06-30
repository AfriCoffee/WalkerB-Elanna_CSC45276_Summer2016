/* 
 * File:   main.cpp
 * Author: B'Elanna Walker
 *
 * Created on June 30, 2016, 12:29 PM
 //Purpose: Fibonacci Crud
 */

//System Libraries
#include <iostream> //Imput/Output Stream Library
#include <iomanip>  //formatting Libraries
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
    float crudWt,curntWt;//Crud weight in lbs
    int fi=1, fip1=1,fip2;//Fibonacci sequence
    int days=0;
    //Input Data
    cout<<"How many pounds of crud do you have?"<<endl;
    cin>>crudWt;
    
    //Process Data
    curntWt=crudWt*fi;
    cout<<" Fi Days Weight"<<endl;
    cout<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curntWt<<endl;
    
    curntWt=crudWt*fi;
    days+=5;
    cout<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curntWt<<endl;
    
    
    fip2=fip1;
    fip1=fi;
    fi=fip1+fip2;
    curntWt=crudWt*fi;
    days+=5;
    cout<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curntWt<<endl;
    
     fip2=fip1;
    fip1=fi;
    fi=fip1+fip2;
    curntWt=crudWt*fi;
    days+=5;
    cout<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curntWt<<endl;
    
     fip2=fip1;
    fip1=fi;
    fi=fip1+fip2;
    curntWt=crudWt*fi;
    days+=5;
    cout<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curntWt<<endl;
    
    //Output Data
    
    //Exit Stage Right!
    return 0;
}



