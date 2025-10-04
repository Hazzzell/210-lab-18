// COMSC-210 | Lab 18 | Keng C Chan
// IDE used: Visual Studio Code (VS Code)
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int SIZE = 7;  

struct Node {
    double rating;
    string comments;
    Node *next;
};

// function prototypes
// addToHead() adds a new node with the given value to Head of list
// arguments: head pointer, float value
// returns: NA
void addToHead(Node *&head, double rating, string &comments);
