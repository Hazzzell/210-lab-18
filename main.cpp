// COMSC-210 | Lab 18 | Keng C Chan
// IDE used: Visual Studio Code (VS Code)
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int W10 = 10;

struct Node {
    float rating;
    string comment;
    Node *next;
};

// function prototypes
// addToHead() adds a new node with the given value to Head of list
// arguments: head pointer, float rating, string comment
// returns: NA
void addToHead(Node *&head, float rating, string &comment);

// addToTail() adds a new node with the given value to Tail of list
// arguments: head pointer, float rating, string comment
// returns: NA
void addToTail(Node *&head, float rating, string &comment);

// displayReview() display the Review
// arguments: head pointer
// returns: NA
void displayReview(Node *head);



int main() {
    Node *head = nullptr;
    int choice;

    cout << "Which linked list method should we use?\n";
    cout << setw(W10) << "[1] New nodes are added at the head of the linked list\n";
    cout << setw(W10) << "[2] New nodes are added at the tail of the linked list\n";
    cout << setw(W10) << "Choice: ";
    cin >> choice;
    cin.ignore();

    char again = 'y';
    while (again == 'y' || again == 'Y'){
        float rating;
        string comment;
        cout << "Enter Review Rating (0-5): ";
        cin >> rating;
        cin.ignore();
        cout << "Enter Review Comments: ";
        getline(cin, comment);

        if (choice == 1){
            addToHead(head, rating, comment);
        }
        else {
            addToTail(head, rating, comment);
        }

        cout << "Enter another review? Y/N: ";
        cin >> again;
        cin.ignore();
    }
    cout << "Outputting all ";
}
