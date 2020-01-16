#include <iostream>

int pow (int n, int val){
    
    if (n == 0){
        return 1;
    }
    else {
        val *= pow(n-1,val);
    }

    return val;
}

int main(){
    std::cout << pow(5,5) << std::endl;

}