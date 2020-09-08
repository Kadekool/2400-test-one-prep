#include <iostream>
#include <string>
#include <math.h> 

using namespace std;

void fp(string bits, int exp, int frac){
    string exponent_string = bits.substr(1,exp);
    string fraction_string = bits.substr(2+exp,frac);

    for (int i =0; i< fraction_string.length(); i++){

    }
    int exponent = stoi(exponent_string);


    cout << "Bias is " << (pow(2,(exponent-1)) -1)<<endl; 
    int E;
    if (exponent == 0){
        cout<<"E is"<< 1 - (pow(2,(exponent-1)) -1) <<endl;
        E = 1 - (pow(2,(exponent-1)) -1);
    }else{
        cout<<"E is"<< exponent - (pow(2,(exponent-1)) -1) <<endl;
        E = exponent - (pow(2,(exponent-1)) -1);
    }

    cout << " 2 ^ E is " << pow(2, E) <<endl;



}

int main(){

}