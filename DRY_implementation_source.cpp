
# include<iostream>

int main(int argc, char** argv)
{

    //для  пятерки степень 2 
    int value = 5, power = 2, result = 1;

    for(int i = 0 ; i < power; i++ )
    {
        result *= value;
    }

    std::cout << value << " в степени " << power  << " = " << result << std::endl;

    // для тройки  
    value = 3;
    power = 3;
    result = 1;

    for(int i = 0 ; i < power; i++ )
    {
        result *= value;
    }

    std::cout << value << " в степени " << power  << " = " << result << std::endl;

    // для четверки 
    value = 4;
    power = 4;
    result = 1;

    for(int i = 0 ; i < power; i++ )
    {
        result *= value;
    }

    std::cout << value << " в степени " << power  << " = " << result << std::endl;

    return 0;

}