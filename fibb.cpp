#include <iostream>

int fibb(int n){
    
    if(n==0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }
    else {
        n = fibb(n-1) + fibb(n - 2);
    }
    return n;
}

int main(){
    std::cout << fibb(6) << std::endl;
}