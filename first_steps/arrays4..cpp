#include <iostream>

int main(){
    int nums[4] = {2, 7, 1, 15};
    int target;

    std::cout << "What is the value of the target?" << std::endl;
    std::cin >> target;

    bool foundSum = false;

    for(int i=0; i<4; i++){
        if(nums[i]+nums[i+1]==target){
            std::cout << "Index of the nums that sum to " << target << " are -> [" << i << "," << i+1 << "]" << std::endl;
            return foundSum = true;
        }
    }

    if(foundSum==false){
        std::cout << "No pair of numbers in the array sum to " << target << std::endl;
    }

    return 0;
}