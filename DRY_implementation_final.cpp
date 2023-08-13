 

#include<iostream>
#include <string>

std::string value_power_of_number (int value, int power)
 {
    int result = 1;
    // конвертим все в строки
    std:: string value_as_string = std::to_string(value);
    std:: string power_as_string = std::to_string(power);
    std:: string result_as_string;

    for(int i = 0 ; i < power; i++ )
    {
        result *= value;
    }
    
    result_as_string = std::to_string(result);
    result_as_string =  value_as_string + " в степени " +  power_as_string + " = " + result_as_string;
    return result_as_string;
 }

int main(int argc, char** argv)
{
    std:: string result_as_string;
    //для  пятерки степень 2 
    result_as_string = value_power_of_number(5, 2);
    std::cout << result_as_string << std::endl;
    
     // для тройки 3 в 3
    result_as_string = value_power_of_number(3, 3);
    std::cout << result_as_string << std::endl;

    // для четверки  4 в 4 
    result_as_string = value_power_of_number(4, 4);
    std::cout << result_as_string << std::endl;
    
    std::cout << std::endl;
    std::cout << "Your code is over !"<< std::endl;
    
    return 0;

}