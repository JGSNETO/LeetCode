#include <iostream>
#include <string>


int main(){

    std::string tst = {"["}
    ;

    if(tst[0] == '['){
        std::cout <<"Igual\n"; 
    }else{
        std::cout << "Diferente\n";
    }
    system("PAUSE");
    return 0;
}