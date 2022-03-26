// this is a text based game set in Hyrule
#include <iostream>
using namespace std;
int option; //int for options
string name;
void menu(); //menu start
void HowToPlay(); //explains how to play the game
void game(); //game
void ganondorf();

int main()
{
    menu(); //starts menu
    //system("PAUSE"); //pauses system
    return 0;
}
void HowToPlay() {
    cout << "HOW TO PLAY THE GAME: \n";
    cout << "Throughout this game there are times were the game pauses- press any button and carry on\n";
    cout << "When there are options please click the correct number for your choices otherwise there'll be an error\n";
    cout << "When the end of a question has a '<' symbol it means to write a string so go ahead and write that string!\n";
    cout << "Got that?:\n1)yes\n2)no";
    cin >> option; 
    switch (option) {
    case 1:
        cout << "If thats the case than menu is loading...........";
        system("PAUSE");
        menu(); //if user understands than the menu is loaded back up
    case 2:
        cout << "restarting How To Play section\n";
        HowToPlay();//if not undertood than brings back the how to play section
    default:
        cout << "Error......... \nreloading .............. \nasdsd....... \nhtedht........ \nbcvfxsdfdsfc....";
        HowToPlay(); //if something isnt right than there is an error message displayed
    }
  
    system("PAUSE");
    menu(); //goes to menu
}
void ganondorf() {
    cout << "This is the bad version of the story\nThis will be added soon so please be patient\n";
}
void game() { //code for the game
    cout << "On a normal day a Hylian called... called.. what is his name? >";
    cin >> name;
    //cout << name << endl;
    
    if (name == "Link") {
        cout << name << " " << name << " What a propper Hylian name!\n";
    }
    else if (name == "link") {
        cout << name << " " << name << " What a propper Hylian name!\n";
    }
    else if (name == "Zelda") {
        cout << name << " " << name << " What a propper Hylian name!\n";
    }
    else if (name == "zelda") {
        cout << name << " " << name << " What a propper Hylian name!\n";
    }
    else if (name == "Ganondorf") {
        ganondorf();
    }
    else if (name == "Ganon") {
        ganondorf();
    }
    else if (name == "ganondorf") {
        ganondorf();
    }
    else if (name == "ganon") {
        ganondorf();
    }
    else {
        cout << name << " " << name << " That's a great name!\n";
    } //if else if and else options to give different options and stuff
    system("PAUSE");
    cout << "So on this normal day " << name << " woke up and started to do normal chores\nWhat chores do you start with?:\n";
    cout << "1)tidy house\n2)go to stables and exercise the horses\n3)sword practise\n4)go back to bed";
    cin >> option;
    switch (option) {
    case 1:
        cout << "Your tidy your house\n";
        break;
    case 2:
        cout << "The horses are now exercised\n";
        break;
    case 3:
        cout << "your left arm is hurting but its okay as your getting better\n";
        break;
    case 4:
        cout << "zzzzzzzZZZZzzzzzZZZZZZZZzzzzzzZZZZZZZzzzzzzZZZZZZZZzzzzzzzZZZZZZZZZZZAZZAZzzz\nWAAAAAAAAAKKKKKKKEEEEEEE UUUUUUUUUUUUUUPPPPPPPPPPPP\n";
        break;
    default:
        cout << "INVALID INPUT\nRESTARTING\n";
        system("PAUSE");
        menu(); //invalid input and restarts to the menu
    }

    cout << "Final Options:\n1)Restart\n2)Quit"; //allows the player to quit or to restart
    cin >> option;
    switch (option) {
    case 1: //retarts the game
        game();
        break;
    case 2:
        cout << "QUITTING.......\n"; //quits the system
        exit(1);
        break;
    default:
        cout << "Sorry, this is not a correct option. Game quitting";
        exit(1);
        break;
    }
}

void menu() {
    
    cout << "HAPPY HYRULE DAY'S\n\n\n\n"; //title with line breaks after
    cout << "1)Play game\n2)How to play\n3)Quit";
    cin >> option;
    //cout << option;
    switch (option) { //switches between each option to not have if else statements as im lazy
    case 1:
        game();
        break;
    case 2:
        HowToPlay();
        break; //goes to how to play
    case 3:
        cout << "QUITTING.......\n"; //quits the system
        exit(1);
        break;
    default:
        cout << "INVALID INPUT\nRESTARTING\n";
        system("PAUSE");
        menu(); //invalid input and restarts to the menu
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file