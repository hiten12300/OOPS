#include <iostream>

extern int array_sum(int array[], int n);

int main(){

    int number[] = {1, 2, 3, 4, 5};
   

    int sums = array_sum(number ,5);

    std::cout << "Sum: " << sums << std::endl;
}


