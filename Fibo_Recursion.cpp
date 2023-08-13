
#include <iostream>


int fibo(int n)
{
  // для аргумента 0
  if(n == 0) return 0;
  // для аргументов 1 и 2 
  if(n == 1 || n == 2) return 1;

  return fibo(n-1) + fibo(n-2);
}

int main() 
{ 
    int n, fibo_value;
    std::cout << "Введите число:";
    std::cin >> n ;
    
    std::cout << "Числа Фибоначчи:";
    
    for(int i = 0 ; i < n ; i++)
    {
        fibo_value = fibo(i);
        std::cout << fibo_value << " ";
    }
    
    std::cout << std::endl;
    
    std::cout << "Your code is over ! \n";

    
    return 0;
    
}