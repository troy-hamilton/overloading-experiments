#include <iostream>
#include <queue>

int main()
{
    std::queue<char>q;
    
    q.push('H');
    q.push('E');
    q.push('L');
    q.push('L');
    q.push('O');
    
    // prints "H\nE\n..."
    while(q.empty() == false)
    {
        std::cout << q.front() << std::endl;
        q.pop();
    }
    
}
