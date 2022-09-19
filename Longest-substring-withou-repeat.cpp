
/*
- While iterating mark the position of each character
- At i'th character, check the previous occurency and decide the start of the substring
accordinly
*/
#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

int main(){

    std::string s = "pwwkew";
    std::vector <int> dict(256,-1);
    int uniqueSequenceCounter = -1,  maxSequence = 0;

    for(int i =0; i<s.size(); i++){
        //std::cout<< "Dict: " << dict[s[i]] << " " << "Unique counter " << uniqueSequenceCounter << std::endl;
        if(dict[s[i]] > uniqueSequenceCounter){
            uniqueSequenceCounter = dict[s[i]];
        }
        dict[s[i]] = i;
        maxSequence = std::max(maxSequence, i-uniqueSequenceCounter);
        //std::cout<< "Depois " <<  "Dict: " << dict[s[i]] << " " << "Unique counter " << uniqueSequenceCounter << std::endl;
        
    }
    std::cout << "Max sequence: " << maxSequence << std::endl; 
    system("PAUSE");
    return 0;
}