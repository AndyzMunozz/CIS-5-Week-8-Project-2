#include <iostream>
#include <cstdlib>
#include <ctime>

const int scoreAt0 = 67; // change this number / Changed

// Project 2 — Andy Munoz
// CIS 5 Week 08
// Do not edit the boilerplate. It randomly generates 30 elements into the array.
// One main only. No vector. No extra functions. No files.

int main() {
    const int N = 30;
    int scores[N];
    const int scoreAt10 = 93; // change this number / Changed

    // Do not edit this boilerplate. It randomly generates 30 elements into the array.
    srand(static_cast<unsigned>(time(nullptr)));

    const int scoreAt20 = 77; // change this number / Changed

    for (int i = 0; i < N; ++i) {
        scores[i] = rand() % 100;
    }

    scores[0] = scoreAt0;
    const int scoreAt27 = 100; // change this number / Changed
    scores[10] = scoreAt10;
    scores[20] = scoreAt20;
    scores[27] = scoreAt27;

    // TODO: print each index and scores[i]

    std::cout << "Scores:\n";
    for (int i = 0; i < N; i++) {
        std::cout << "[" << i << "]:" << scores[i] << " ";
    }

    int As = 0, Bs = 0, Cs = 0, Ds = 0, Fs = 0;

    for (int i = 0; i < N; ++i) {
        if (scores[i] > 89 && scores[i] <= 100) {
            As += 1;
        }
        else if (scores[i] > 79 && scores[i] < 90) {
            Bs += 1;
        }
        else if (scores[i] > 69 && scores[i] < 80) {
            Cs += 1;
        }
        else if (scores[i] > 59 && scores[i] <= 70) {
            Ds += 1;
        }
        else {
            Fs += 1;
        }
    }
    std::cout << "\n\nA's: " << As;
    std::cout << "\nB's: " << Bs;
    std::cout << "\nC's: " << Cs;
    std::cout << "\nD's: " << Ds;
    std::cout << "\nF's: " << Fs;

    // TODO: one for loop. Count A, B, C, D, and failing.
    // 90 and up is A. 80 to 89 is B. 70 to 79 is C. 60 to 69 is D.
    // Below 60 is failing. A score of 60 is a D.
    // Print A:, B:, C:, D:, and F:. The five totals add up to 30.

    // TODO: one while loop. If scores[i] is under 60, print:
    // Student at index i needs to come to office hours.
    // Put ++i in the loop or it never ends.

    std::cout << "\n";

    int i = 0;

    while (i < N) {
        if (scores[i] < 60) {
            std::cout << "\nStudent at index " << "[" << i << "] " << "needs to come to office hours.";
        }
        i++;
    }
    std::cout << "\n";
        return 0;
}
