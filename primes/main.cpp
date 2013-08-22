//
//  main.cpp
//  primes
//
//  Created by Colin Murphy on 8/20/13.
//  Copyright (c) 2013 Goosnek. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int upTo;

    int isPrime;
    int counter = 0;
    int number = 3; //this is the number that it starts at.
    cout << "Enter what number you want to test up to :" << endl;
    cin >> upTo; //This is the number that it ends at.
    while(number < upTo) { //you can switch the number on this line. It will loop up to that number. But it always starts at 3. 1 and 2 are weird.
        int divisor = number-1;
    while(divisor>1) {
        //
        if (number%divisor == 0) {
            if(divisor==1){
                break;
            }else{
                cout << number <<" is Not Prime" << endl;
                divisor--;
                break;
                }
            
            }else{
                //cout << number <<" is prime so far" << endl;
                isPrime = true;
                if (divisor==2 && isPrime==true) {
                    cout << number << " is prime" << endl;
                }
                divisor--;
                if(divisor==0)
                {
                    break;
                }

                    }
    }
        number++;
    }
    /* while(counter < number-1){
        if(number%number-1 == 0){
            cout << "Not Prime" << endl;
        
        }else{
            cout << "Prime" << endl;
        }; */
    
        counter++;
    }



