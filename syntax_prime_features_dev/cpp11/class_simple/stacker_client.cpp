#include<iostream>
#include "stack.h"

int main()
{
    Stack stack;

    std::cout << "test stack:\n" 
        << "a|A to push || p|P to pop || q|Q to quit!\n";
    char c;
    std::cin >> c;
    while (std::cin && (c != 'q' && c != 'Q'))
    // while (std::cin || toupper(c) != 'Q')
    {
        unsigned long num;
        
        switch (c)
        {
        case 'a':
        case 'A':
            std::cin >> num;
            stack.push(num);
            break;
        
        case 'p':
        case 'P':
            stack.pop(num);
            std::cout << num << std::endl;
            break;
        default:
            break;
        }
        std::cin >> c;
        // std::cout << "c : " << c <<"\n";
    }
    std::cout << "successful! \n";    
    return 0;
}