#include <iostream>
#include <functional>

float add(int x, int y)
{
    return x + y;
}

int operation(std::function<float(int, int)> &&some_func, int param1, int param2)
{
    return some_func(param1, param2);
}

int main()
{
    std::cout << operation(add, 2, 3) << std::endl;
}

/*HOW THE ABOVE WORKS:

    The function called operation, has as its first parameter,
    a function that returns a float and takes two int parameters.
    And as its second parameter, it takes two integers.
    
    operation then passes its 2nd and 3rd arguments to the function
    which is referenced in its first parameter. [which ends up being add.]
    function.

*/
