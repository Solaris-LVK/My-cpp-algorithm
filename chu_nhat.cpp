#include <iostream>
#include <cmath>

int main(){
    double chieu_dai;
    double chieu_rong;
    double chu_vi;
    double dien_tich;
    std::cout << "hay chọn 1 thu ma ban muon tinh chu vi / dien tich" << "\n";
    std::string zx;
    std::getline(std::cin >> std::ws ,  zx);
    if(zx == "dien tich" || zx == "chu vi"){
        if(zx == "dien tich"){
            std::cout << "ban da chon tinh dien tich" << "\n";
            std::cout << "hay lan luot nhap chieu dai va chieu rong" << "\n";
            std::cin >> chieu_dai >> chieu_rong;
            if(chieu_dai < chieu_rong ){
                std::cout << "co ve ban da nham giua chieu dai va chieu rong" << "\n";
                return 0;}
            else{
                std::cout << "vay dien tich cua hinh chu nhat cho chieu dai = "<<chieu_dai <<"va chieu rong= " << chieu_rong << "\n";
                 dien_tich = chieu_dai * chieu_rong;
                std::cout << "la = " << dien_tich;
            }}
        else if(zx == "chu vi"){
            std::cout << "ban da chon tinh chu vi" << "\n";
            std::cout << "hay lan luot nhap chieu dai va chieu rong" << "\n";
            std::cin >> chieu_dai >> chieu_rong;
            if(chieu_dai < chieu_rong ){
                std::cout << "co ve ban da nham giua chieu dai va chieu rong" << "\n";
                return 0;}
            else{
                std::cout << "vay chu vi cua hinh chu nhat cho chieu dai = "<<chieu_dai <<"va chieu rong= " << chieu_rong << "\n";
                 chu_vi = (chieu_dai + chieu_rong)*2;
                std::cout << "la = " << chu_vi;
            }}}
    else{
        std::cout << "co ve ' " << zx <<" ' ko phai chu vi hay dien tich";
        return 0;}
    return 0;
}