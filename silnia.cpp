#include <iostream>

int silnia(int n){
    if( n == 0 ){
        return 1;
    }
    else {
        n*= silnia(n-1);
    }
    return n;
}

int main(){
    std::cout << silnia(5) << std::endl;
    
    std::cin.get();
}