#include <iostream>
#include <limits>

int choices();

int main() 
{

    int x;

    while(true)
    {
        // Reloads all changes
        x = choices();

        switch (x)
        {
        case 1:
            std::cout << "You selected option 1." << std::endl;
            break;

        case 2:
            std::cout << "You selected option 2." << std::endl;
            break;

        case 3:
            std::cout << "You selected option 3." << std::endl;
            break;

        case 4:
            std::cout << "You selected option 4." << std::endl;
            break;

        default:
            std::cout << "Invalid choice. Please enter a number between 1 and 4." << std::endl;
            
            // clear any error flags
            std::cin.clear();

            // discard unwanted input
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            break;
        }
    }
}

// Ask for inputs
int choices()
{
    int choice;
    std::cout << "Enter a number between 1 and 4: ";
    std::cin >> choice;
    return choice;
}
