#include <iostream>
#include <cmath>
int main(){
    double canh_1 ; 
    double canh_2;
    double canh_huyen;
    std::cout << "hãy nhap 2 canh goc vuông ";
    std::cin >>  canh_1 >> canh_2;
    canh_huyen = sqrt(pow(canh_1 , 2) + pow(canh_2 , 2));
    std::cout << "cạnh huyền của m nè" << canh_huyen;

    return 0;
};
