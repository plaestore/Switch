//a switch statement - saves u from typing a lot of if statements //
#include <iostream>
using namespace std;

int main(){

       int age = 18;

       switch(age){
        case 16:
            cout <<"You can drive now "<< endl;
            break;
        case 18:
            cout <<"Go buy some lotto tickets!"<<endl;
            break; //no need to test the rest of the loop//
        case 21:
            cout <<"buy me some beer "<< endl;
            break;
        default:
            cout <<"Sorry you get nothing "<<endl;
       }




    return 0;
}
