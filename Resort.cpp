// Resort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::string name, cottage, food, alcohol;
    int age;
    std::cout << "Welcome to Bida Resort!\n";
    std::cout << "Please Enter Your Name: \n";
    std::cin >> name;
    std::cout << "Please Enter Your Age\n";
    std::cin >> age;

    system("cls");

    if (0 > age)
    {
        std::cout << "Sorry Your Age is Not Applicable" << std::endl;

        system("pause");
        std::exit(0);
    }
    std::cout << "Welcome to Bida Resord! " << name << " Your Age is " << age << std::endl;

    if (1 <= age && 18 > age)
    {
        std::cout << "Your a Youngster and your Entrance Fee will be 10$" << std::endl;
    }
    else if (18 <= age && 50 > age)
    {
        std::cout << "Your a Adult and your Entrance Fee will be 30$" << std::endl;
    }
    else if (50 <= age && 99 > age)
    {
        std::cout << "Your a Senior and your Entrane Fee will be 20$" << std::endl;
    }
    else
    {
        std::cout << "YOUR SUPER OLD" << std::endl;
    }
    std::cout << "\n\n\n\n\n\n\n";
    std::cout << "Pick your Cottage: Cottage1, Cottage2, Cottage3 " << std::endl;
    switch
    {
        case cottage1
    }
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
