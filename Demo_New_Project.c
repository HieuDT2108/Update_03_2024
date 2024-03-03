#include <iostream> // Include the I/O stream library for input and output

// Main function, the starting point of the program
int main()
{
    std::cout << "Welcome to the Dragon Realm!" << std::endl;

    // Declare a string variable to store the player name
    std::string playerName;

    // Prompt the user to enter their player name
    std::cout << "Please enter your name: ";
    std::cin >> playerName;

    // Display a personalized welcome message to the player with their name
    std::cout << "Welcome " << playerName << " to The Dragon Realm!" << std::endl;

    // Declare an int variable to capture the user's choice
    int choice;
    // Declare an int variable to capture the user's nested choice
    int nestedChoice;

    // Initialize a flag to control the loop and signify the player's intent to explore.
    bool exploring = true;
    // As long as the player wishes to keep exploring, this loop will run.
    while(exploring) {

        // If still exploring, ask the player where they want to go next
        std::cout << "Where will " << playerName << " go next?" << std::endl;
        std::cout << "1. Moonlight Markets" << std::endl;
        std::cout << "2. Grand Library" << std::endl;
        std::cout << "3. Shimmering Lake" << std::endl;
        std::cout << "Please enter your choice: ";
        // Update value of choice
        std::cin >> choice;

        // Respond based on the player's main choice
        switch(choice) {
            //  Handle the Moonlight Markets scenario
            case 1:
                std::cout << "You chose Moonlight Markets." << std::endl;
                break;
            // Handle the Grand Library scenario.
            case 2:
                std::cout << "You chose Grand Library." << std::endl;
                break;
            // Handle the Shimmering Lake scenario.
            case 3:
                std::cout << playerName << " arrives at Shimmering Lake. It is one of the most beautiful lakes that" << playerName << " has seen. They hear a mysterious melody from the water. They can either: " << std::endl;
                std::cout << "1. Stay quiet and listen" << std::endl;
                std::cout << "2. Sing along with the melody" << std::endl;
                std::cout << "Please enter your choice: ";

                // Capture the user's nested choice
                std::cin >> nestedChoice;

                // If the player chooses to remain silent
                if (nestedChoice == 1)
                {
                    std::cout << "Remaining silent, " << playerName << " hears whispers of the merfolk below, but nothing happens." << std::endl;
                }
                // If the player chooses to sing along with the melody
                else if (nestedChoice == 2)
                {
                    std::cout << "Singing along, a merfolk surfaces and gifts " << playerName
                            << " a special blue gem as a token of appreciation for their voice."
                            << std::endl;
                }
                break;
            // Option to exit the game
            case 4:
                exploring = false;
                break;
            // If 'choice' is not 1, 2, or 3, this block is executed.
            default:
                std::cout << "You did not enter a valid choice." << std::endl;
                continue; // Errors continue with the next loop iteration
        }
    }

    // Return 0 to indicate successful execution
    return 0;
}
