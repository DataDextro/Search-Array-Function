#include <iostream>
#include <string>

int searchArray(std::string arrayp[], int size, std::string element);

int main(){

    std::string passwords[] = {"password", "password123", "enzo"};
    int size = sizeof(passwords) / sizeof(passwords[0]);
    int index;
    std::string user_input;
    
    std::cout << "Enter a password for: ";
    std::cin >> user_input;

    index = searchArray(passwords, size, user_input);

    if(index != -1){
        std::cout << user_input << " is at index " << index << '\n';
    }
    else{
        std::cout << user_input << " is not in the array" << '\n';
    }

    return 0;
}

int searchArray(std::string array[], int size, std::string element) {
    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1;
}
