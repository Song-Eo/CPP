#include <iostream>

int main()
{
    int val, i;
    std::cout<<"Enter the Number : "<<std::endl;
    std::cin>>val;

    for(i = 1; i<=9; i++)
    {
        std::cout<<val<<" * "<<i<<" = "<<val*i<<"\n";
    }

    return 0;
}