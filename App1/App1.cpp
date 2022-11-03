//Input and output library
#include <iostream>

//using the standard library namespace
using namespace std;

int main() {

    //lowest/highest number can be
    int lower, higher;
    
    //character out
    cout << "Lower value: ";
    //character in
    cin >> lower;
    
    cout << "Higher value: ";
    cin >> higher;

    //endl, end line or \n
    cout << "Lowest value: " << lower << endl << "Hightest value: " << higher << endl;

    //generate the random value between higher and lower
    int rndm = rand() % (higher - lower + 1) + lower;
    cout << rndm << endl;

    //amount of guesses
    int count = 0;

    while (count < 3) {

        count++;

        int guess;
        cout << endl << "Guess the number: ";
        cin >> guess;

        if (rndm == guess) {

            cout << endl << "Congrats you guessed the right number";
            break;

        }

        else if (rndm < guess) {

            cout << endl << "Guess was too big";

        }

        else if (rndm > guess) {

            cout << endl << "Guess was too small";

        }

    }

    if (count >= 3) {

        cout << endl << "Unfortunatly you couldn't do it, better try better next time";

    }

}

