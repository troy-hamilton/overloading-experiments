class holder
{
    private:
    
        signed int secret;
    
    public:
    
        holder(signed int);
        
        void operator = (signed int num)
        {
            secret = num;
        }
        
        signed int getsecret();
};

holder::holder(signed int num)
{
    secret = num;
}

int holder::getsecret()
{
    return secret;
}

#include <iostream>
int main()
{
    int num = 9;
    
    //holder obj(num);
    holder obj = num;
    
    std::cout << obj.getsecret() << std::endl;
}
