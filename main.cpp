/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <vector>

int main()
{
    int n1, n2;
    std::cout << "n1 = ";
    std::cin >> n1;
    std::vector<std::string> l1(n1, "");
    for(int i = 0; i < n1; i++) {
            std::cin >> l1[i];
    }
    std::cout << "n2 = ";
    std::cin >> n2;
    std::vector<std::string> l2(n2, "");
    for(int i = 0; i < n2; i++) {
            std::cin >> l2[i];
    }
    std::vector<std::string> l1l2(n1*n2, "");
    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < n2; j++) {
            l1l2[i*(n2-1)+j]=l1[i]+l2[j];
            std::cout << l1l2[i*(n2-1)+j] << " ";
        }
    }
    
    
    return 0;
}
