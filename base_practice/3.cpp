#include <iostream>

int main()
{
    int val, i = 0;

    while(1)
    {
        std::cout<<"SellPrice(-1 to end) : ";
        std::cin>>val;
        if (val == -1)
        {
            std::cout<<"Program quit";
            break;
        }
        
        std::cout<<"Pay : "<<50+val*0.12<<std::endl;



    }

    return 0;
}