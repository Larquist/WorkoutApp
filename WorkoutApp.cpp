#include <iostream>

using namespace std;

static bool running = true;             // Tells if program should loop or not

void menu();
void workout();
void createWorkout();

void menu() {
    cout << "-- Welcome to the all in one Workout App! --\n\n" << "Please select an option below:\n";
    /*cout << "1. Login\n";             // This will be used once authorization is implemented
    cout << "2. Register\n";*/
    cout << "1. Start a workout\n";
    cout << "2. Create a workout\n";

    int input{};
    cin >> input;
    cin.clear();

    switch (input) {
    case 1:
        workout();
        break;
    case 2:
        createWorkout();                // Once users are implemented, could add id parameter to specify which user to save it to
        break;
    default:
        cout << "Please enter a valid selection!\n\n";
        return;
    }
}

void workout() {
    cout << "-- Workout --";
}

void createWorkout() {
    cout << "-- Create a Workout --\n";

    
}

int main()
{
    while (running) {
        menu();
    }
    
    return 0;
}
