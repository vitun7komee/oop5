#include "Choice.h"
#include "Bubble.h"
#include <iostream>

enum actions {
    BubbleSort, ChoiceSort, createB, createC, printB, printC, endsession
};

int main()
{
    bool stop = false;
    int choice;
    std::cout << "enter size :";
    size_t size;
    std::cin >> size;
    Bubble mainb(size);
    Choice mainc(size);
    int z;
    std::cout << " 0 - BubbleSort  1 - ChoiceSort  2 - createB  3 -  createC  " << std::endl;
    std::cout << " 4 - printB  5 - printC  6 - endsession  " << std::endl;
    while (!stop) {
        std::cout << " Select action : ";
        std::cin >> choice;
        switch (choice) {
        case actions::createB:
            std::cout << "random fill(1) or fill in console(2) ?\n";
            int z;
            std::cin >> z;
            if (z == 1) { mainb.randomfill(); }
            else if (z == 2) { std::cin >> mainb; }
            break;
        case actions::createC:
            std::cout << "random fill(1) or fill in console(2) ?\n";
            std::cin >> z;
            if (z == 1) { mainc.randomfill(); }
            else if (z == 2) { std::cin >> mainc; }
            break;
        case actions::printB:
            std::cout << mainb;
            std::cout << std::endl;
            break;
        case actions::printC:
            std::cout << mainc;
            std::cout << std::endl;
            break;
        case actions::BubbleSort:
            mainb.sort();
            std::cout << "bubble sort done\n";
            break;
        case actions::ChoiceSort:
            mainc.sort();
            std::cout << "selection sort done\n";
            break;
        case actions::endsession:
            std::cout << "cya!";
            stop = true;
            break;
        }

    }
}
