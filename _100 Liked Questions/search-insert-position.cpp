#include <iostream>
#include <vector>
#include <cstdio>

int findNumber(std::vector<int> list, int target){
    /*If number exist, return the position*/
    int position;
    for(int i=0; i< list.size(); i++){
        if(list[i] == target){
            printf("Targer %d found in position %d\n", target, i);
            return i;
        }
    }
    printf("Targer not found\n");
    printf("Searching for the insert position\n");
    for(int i = 0; i<list.size();i++){
        if(list[i] < target && list[i+1] > target){
            printf("Position %d found in the middle of vector\n", i);
            position=i+1;
            return position;
        }
    }
    position = list.size();
    return position;  
}

int main(){

    std::vector<int> list = {1,3,5,6};
    int target = 7;
    int rslt = findNumber(list, target);
    printf("Result: %d\n", rslt);
    system("PAUSE");
    return 0;
}