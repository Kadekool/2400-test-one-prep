#include <iostream>
#include <string>
#include <math.h> 

using namespace std;

#include <iostream>
#include <string>
#include <math.h> 

using namespace std;

void fp(string bits, int exp, int frac){
    string exponent_string = bits.substr(1,exp);
    string fraction_string = bits.substr(1+exp,frac);
    cout<< exponent_string<<" "<<fraction_string<<endl;
    float fraction = 0;
    string fract = "";
    for (int i =0; i< fraction_string.length(); i++){
        if (fraction_string[i] == '0') continue;
        if (i != 0) fract += " + ";
        float add = (1/pow(2,i+1));
        fraction += add;
        string addition = to_string(add);
        fract += addition;
        
    }
    cout<<fract<<endl;
    int exponent = 0;
    exponent_string = string(exponent_string.rbegin(),exponent_string.rend());
    for (int i =0; i< exponent_string.length(); i++){
        if (exponent_string[i] == '0') continue;
        int add = pow(2,i);
        exponent += add;
    }
    cout<<"exponent (e) is "<<exponent<<endl;
    cout << "Bias is " << (pow(2,(exponent_string.length()-1))-1)<<endl; 
    int E;
    if (exponent == 0){
        cout<<"E is "<< 1 - (pow(2,(exponent_string.length()-1))-1) <<endl;
        E = 1 - (pow(2,(exponent_string.length()-1))-1);
    }else{
        cout<<"E is "<< exponent - (pow(2,(exponent_string.length()-1))-1) <<endl;
        E = exponent - (pow(2,(exponent_string.length()-1))-1);
    }

    cout << "2 ^ E is " << pow(2, E) <<endl;

    cout<<"Fraction is "<<fraction<<" or "<< fract<<endl;
    
    float M = fraction;
    if (stoi(exponent_string) != 0){
        cout<<"M is "<<1 + fraction<<" or "<< "1" << fract <<endl;
        M += 1;
    }else{
        cout<<"M is "<<fraction<<" or "<< fract <<endl;
    }
    if (bits[0] == '1'){
        cout<<"The value is " << M * float(pow(2, E)) * float(-1) <<endl;
    }else{
        cout<<"The value is " << M * float(pow(2, E)) * float(1) <<endl;
    }



}

int main(){
    fp("010101",3,2);
}