#include <iostream>
#include <random>

int main()
{
   
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(1, 1000);

    int question1 = dist(gen);
    int question2 = dist(gen);
    int answer;

    std::cout << "What is " << question1 << " + " << question2 << "?" << std::endl;
    if (!(std::cin >> answer)) {
        std::cerr << "Invalid input. Please enter an integer." << std::endl;
        return 1;
    }

    if (answer == question1 + question2) {
        std::cout << "Correct!" << std::endl;
    } else {
        std::cout << "Incorrect. The correct answer is " << (question1 + question2) << "." << std::endl;
    }
    return 0;
}



