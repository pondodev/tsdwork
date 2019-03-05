#include <iostream>
#include <string>

int main()
{
    std::string name;
    std::cout << "type in your name: ";
    getline(std::cin, name);

    int count;
    std::cout << "how many greetings: ";
    std::cin >> count;
    for (int i = 0; i < count; i++)
    {
        std::cout << "welcome to my world " << name << std::endl;
    }

    return 0;
}
