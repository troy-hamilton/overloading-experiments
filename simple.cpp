// this file is used to experiment with operator overloading

class blueprint
{
    private:
        char letter;
    
    public:
    
    void insert(char symbol)
    {
        letter = symbol;
    }
    
    char extract()
    {
        return letter;
    }
    
    // overloads
    void operator << (char T) // passes T to insert()
    {
        insert(T);
    }
    
    void operator >> (char &T) // states a reference should be overwritten by extract() return value
    {
        T = extract();
    }

};

#include <iostream>
using namespace std;

int main()
{
    blueprint bp;
    
    bp.insert('a');                 // insert a letter
    
    cout << bp.extract() << endl;   // print out the letter that was inserted
    
    // now replicate that functionality with overloaded stream operators
    
    bp << 'x';                      // insert a letter
    cout << bp.extract() << endl;   // print out the letter that was inserted
    
    char buf;
    bp >> buf;                      // extract the letter from bp into buf
    cout << buf << endl;            // print out buf
}
