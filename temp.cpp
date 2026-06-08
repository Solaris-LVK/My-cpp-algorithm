#include <iostream>
#include <cmath>
int main(){
    char don_vi;
    double so;
    std::cout << "*******WELCOME*******\n" << "C/F? :  " ;
    std::cin >> don_vi;
    std::cout << "hay nhap so lieu ban dau " << don_vi << ": ";
    std::cin >> so;
    if(don_vi == 'C' || don_vi == 'c'){
        std::cout << "C -> F" ; 
        std::cout << round((so *1.8)+32) << " Fahrenheit";
    }
    else if(don_vi == 'F' || don_vi == 'f'){
        std::cout << "F -> C :" << "\n";
        std::cout << round((so -32)/1.8) << " Celsius";
    }
    else{
        std::cout << "maybe '" << don_vi << "' is not C or F";
        return 0;
    }

    return 0;
}