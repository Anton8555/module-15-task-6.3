#include <iostream>
#include <vector>

int main() {
    std::vector<int> number;

    while(true) {
        int num;

        // input number
        std::cin >> num;

        // work
        // command output
        if(num == -1) {
            if(number.size() < 5)
                std::cout << "Few numbers have been entered.\n";
            else
                std::cout << "number #5 = " << number[4] << std::endl;
        }
        // command exit
        else if(num == -2) {
            break;
        }
        // other: adder
        else {
            bool fAdd = false;
            for(int i=0; (i<number.size()) && !fAdd; i++)
                if(num < number[i]) {
                    number.insert(number.begin() + i, num);
                    fAdd = true;
                    if( number.size() > 5 )
                        number.pop_back();
                }
            if( !fAdd && (number.size()<5) )
                number.push_back(num);
        }
    }

    return 0;
}
