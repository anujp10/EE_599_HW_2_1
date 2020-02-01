#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution;
    std::cout << solution.Add(3, 5) << std::endl;
    std::cout << solution.Add("abc", "def") << std::endl;
    std::cout << solution.Add("EE", 599) << std::endl;

    return EXIT_SUCCESS;
}