#include <iostream>
#include <string>
#include <vector>

int main (){

    std::string s = {"([{}])"};
    std::vector <bool> pair; 
    if(s.size()%2 == 0){
        for (int i = 0; i < s.size(); i=i+1){
            for(int j = 0; j <s.size(); j=j+1){
                if (s[i] == '['){
                    if(s[j] == ']'){
                        //std::cout << "True\n";
                        pair.push_back(true);
                    } else
                        continue;
                }
            
                if (s[i] == '{'){
                    if(s[j] == '}'){
                        //std::cout << "True\n";
                        pair.push_back(true);
                    } else{
                        continue;
                    }
                }
                if (s[i] == '('){
                    if(s[j] == ')'){
                        //std::cout << "True\n";
                        pair.push_back(true);
                    } else{
                        continue;
                    }
                }
            }
        }
    }
    else{return false;}
    if(s.size()/2 == pair.size()){
        std::cout << "true\n";
    }else {
        std::cout << "false\n";
    }
    system("PAUSE");
    return 0;
}