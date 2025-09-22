#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

int main() {
    // Seed random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Word list
    string words[] = {"computer", "jumble", "programming", "game", "player", "puzzle"};
    int wordCount = sizeof(words) / sizeof(words[0]);

    // Pick a random word
    string word = words[rand() % wordCount];
    string jumbled = word;

    // Shuffle the word
    random_shuffle(jumbled.begin(), jumbled.end());

    cout << "Welcome to Word Jumble!\n";
    cout << "Unscramble the letters to make a word.\n";
    cout << "Jumbled word: " << jumbled << endl;

    string guess;
    int attempts = 0;

    do {
        cout << "Your guess: ";
        cin >> guess;
        attempts++;

        if (guess == word) {
            cout << "🎉 Correct! You solved it in " << attempts << " attempts.\n";
        } else {
            cout << "❌ Wrong guess, try again!\n";
        }
    } while (guess != word);

    return 0;
}