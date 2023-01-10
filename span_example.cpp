#include <span> // span  g++ -std=c++20
#include <memory> // new shared_ptr
#include <iostream> // cout endl

// illustrates new, span, shared_ptr

int main()
{
    std::shared_ptr<int[]> tape(new int[3]);
    std::span<int, std::dynamic_extent> a(tape.get(), 3);
    
    a.front() = 9; // a[0] == tape[0] == a.front()
    std::cout << a.front() << std::endl; // prints 9
}
