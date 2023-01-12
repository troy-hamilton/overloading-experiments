#include <thread>
#include <iostream>

class name
{
    public:
    
        void func1(int num){std::cout << num << std::endl;}
    
        void func2()
        {
            std::thread t(func1, this, 2);
            t.join(); //prevents a std::terminate
        }
};

template<typename T>
class name2
{
    public:
    
        void func1(int);
    
        void func2()
        {
            std::thread t(func1, this, 55);
            t.join(); //prevents a std::terminate
        }
};

template<typename T>
void name2<T>::func1(int num)
{
    std::cout << num << std::endl;
}

int main()
{
    name a;
    a.func2();
    
    name2<int> b;
    b.func2();
}
// outputs:
//2
//55
