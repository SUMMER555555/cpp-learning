#include <iostream>

bool isEven(int x)
{
    if(x%2==0)
        return 0;
    else
        return 1;
}

int main()
{
    std::cout<<"Enter an integer";
    int x;
    std::cin>>x;

    if (isEven(x))
        std::cout<<x<<" is odd";
    else
        std::cout<<x<<" is double";

    return 0;
}
