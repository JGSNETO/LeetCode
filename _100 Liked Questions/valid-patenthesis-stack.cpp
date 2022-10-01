#include<iostream>
#include<string>
#include<stack>
bool balancedBrakets(std::string s) {
    std::stack<char> stk;
    for(int i=0; i<s.size(); i++){
        if(s[i] =='{' || s[i] == '(' || s[i]== '['){
            stk.push(s[i]);
        }else if(s[i] == '}' || s[i] == ')' || s[i] == ']'){
            if(s.empty()){
                return false;
            }else if(s[i] == '}' && stk.top() != '{'){
                return false;
            }else if(s[i] == ')' && stk.top() != '('){
                return false;
            }else if(s[i] == ']' && stk.top() != '['){
                return false;
            }else {
                stk.pop();
            }
        }
    }
    if(!s.empty()){
        return true;
    }else{
        return false;
    }
}

int main(){

    std::string s = {"()"}, ss = {"()[]{}"}, sss = {"(]"};

    bool rslt = balancedBrakets(s), rslt2 = balancedBrakets(ss), rslt3 = balancedBrakets(sss); 
    std::cout << "s: " << rslt << " " << "ss: " << rslt2 << " " << "sss: " << rslt3 << std::endl;
    system("PAUSE");
    return 0;    
}

