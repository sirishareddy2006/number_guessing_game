#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    int target_number, my_guess;

    srand(time(0));
    target_number = rand() % 100 + 1;

    cout << "Number Guessing Game\n";

    do {
        cout << "Enter a number between 1 and 100: ";
        cin >> my_guess;

        if (my_guess > target_number)
            cout << "Higher..requires lower number\n";
        else if (my_guess < target_number)
            cout << "Lower..requires higher number\n";
        else
            cout << "Correct! The number is found\n";

    } while (my_guess != target_number);

    return 0;
}
