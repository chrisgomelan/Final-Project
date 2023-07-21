#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdio.h>
#include <direct.h>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <cctype> // for isspace
#include <random>
#include <string>
#include <sstream>
using namespace std; 
              

void printAscii(){
        string asciiArt = R"(      
                                                                                                                                                                                                    
             .d8888b. Y88b   d88P 888b    888 88888888888     d8888 Y88b   d88P                   
            d88P  Y88b Y88b d88P  8888b   888     888        d88888  Y88b d88P                    
            Y88b.       Y88o88P   88888b  888     888       d88P888   Y88o88P                     
             "Y888b.     Y888P    888Y88b 888     888      d88P 888    Y888P                      
                "Y88b.    888     888 Y88b888     888     d88P  888    d888b                      
                  "888    888     888  Y88888     888    d88P   888   d88888b                     
            Y88b  d88P    888     888   Y8888     888   d8888888888  d88P Y88b                    
             "Y8888P"     888     888    Y888     888  d88P     888 d88P   Y88b
                             _____  ______   ________  ____  _____  _________  _____  ________  _____   ______       _     _________  _____   ___   ____  _____  
                            |_   _||_   _ `.|_   __  ||_   \|_   _||  _   _  ||_   _||_   __  ||_   _|.' ___  |     / \   |  _   _  ||_   _|.'   `.|_   \|_   _| 
                              | |    | | `. \ | |_ \_|  |   \ | |  |_/ | | \_|  | |    | |_ \_|  | | / .'   \_|    / _ \  |_/ | | \_|  | | /  .-.  \ |   \ | |   
                              | |    | |  | | |  _| _   | |\ \| |      | |      | |    |  _|     | | | |          / ___ \     | |      | | | |   | | | |\ \| |   
                             _| |_  _| |_.' /_| |__/ | _| |_\   |_    _| |_    _| |_  _| |_     _| |_\ `.___.'\ _/ /   \ \_  _| |_    _| |_\  `-'  /_| |_\   |_  
                            |_____||______.'|________||_____|\____|  |_____|  |_____||_____|   |_____|`.____ .'|____| |____||_____|  |_____|`.___.'|_____|\____|                                                                                                                                                                                                               
             .d8888b.         d8888 888b     d888 8888888888                                      
            d88P  Y88b       d88888 8888b   d8888 888                                             
            888    888      d88P888 88888b.d88888 888                                             
            888            d88P 888 888Y88888P888 8888888                                         
            888  88888    d88P  888 888 Y888P 888 888                                             
            888    888   d88P   888 888  Y8P  888 888                                             
            Y88b  d88P  d8888888888 888   "   888 888                                             
             "Y8888P88 d88P     888 888       888 8888888888                                      
                                                                                                  
                                                                                                  )";
cout << asciiArt << endl;
}

void mechanicsTitle() {
    string asciiArt = R"(
                                                               __  ______________ _____   _  _______________
                                                              /  |/  / __/ ___/ // / _ | / |/ /  _/ ___/ __/
                                                             / /|_/ / _// /__/ _  / __ |/    // // /___\ \
                                                            /_/  /_/___/\___/_//_/_/ |_/_/|_/___/\___/___/
    )";
    cout << asciiArt << endl;
}
void modeTitle() {
    string asciiArt = R"(
                                                      
                                    ._____  .______  ._____.___ ._______     ._____.___ ._______  .______  ._______.________
                                    :_ ___\ :      \ :         |: .____/     :         |: .___  \ :_ _   \ : .____/|    ___/
                                    |   |___|   .   ||   \  /  || : _/\      |   \  /  || :   |  ||   |   || : _/\ |___    \
                                    |   /  ||   :   ||   |\/   ||   /  \     |   |\/   ||     :  || . |   ||   /  \|       /
                                    |. __  ||___|   ||___| |   ||_.: __/     |___| |   | \_. ___/ |. ____/ |_.: __/|__:___/ 
                                    :/ |. |    |___|      |___|   :/              |___|   :/      :/         :/      :     
                                    |   :/                                                :       :                        
                                        :                                                 :                                                                          
                                                                                      
                                                                                    
    )";
    cout << asciiArt << endl;
}

void thanks(){
     string asciiArt = R"(    
                        ::::::'########:'##::::'##::::'###::::'##::: ##:'##:::'##::::'##:::'##::'#######::'##::::'##:                    
                        ::::::... ##..:: ##:::: ##:::'## ##::: ###:: ##: ##::'##:::::. ##:'##::'##.... ##: ##:::: ##:                    
                        ::::::::: ##:::: ##:::: ##::'##:. ##:: ####: ##: ##:'##:::::::. ####::: ##:::: ##: ##:::: ##:                    
                        ::::::::: ##:::: #########:'##:::. ##: ## ## ##: #####:::::::::. ##:::: ##:::: ##: ##:::: ##:                    
                        ::::::::: ##:::: ##.... ##: #########: ##. ####: ##. ##::::::::: ##:::: ##:::: ##: ##:::: ##:                    
                        ::::::::: ##:::: ##:::: ##: ##.... ##: ##:. ###: ##:. ##:::::::: ##:::: ##:::: ##: ##:::: ##:                    
                        ::::::::: ##:::: ##:::: ##: ##:::: ##: ##::. ##: ##::. ##::::::: ##::::. #######::. #######::                    
                        :::::::::..:::::..:::::..::..:::::..::..::::..::..::::..::::::::..::::::.......::::.......:::                    
                    '########::'#######::'########:::::'########::'##::::::::::'###::::'##:::'##:'####:'##::: ##::'######:::'####::::
                    ##.....::'##.... ##: ##.... ##:::: ##.... ##: ##:::::::::'## ##:::. ##:'##::. ##:: ###:: ##:'##... ##:: ####::::
                    ##::::::: ##:::: ##: ##:::: ##:::: ##:::: ##: ##::::::::'##:. ##:::. ####:::: ##:: ####: ##: ##:::..::: ####::::
                    ######::: ##:::: ##: ########::::: ########:: ##:::::::'##:::. ##:::. ##::::: ##:: ## ## ##: ##::'####:: ##:::::
                    ##...:::: ##:::: ##: ##.. ##:::::: ##.....::: ##::::::: #########:::: ##::::: ##:: ##. ####: ##::: ##:::..::::::
                    ##::::::: ##:::: ##: ##::. ##::::: ##:::::::: ##::::::: ##.... ##:::: ##::::: ##:: ##:. ###: ##::: ##::'####::::
                    ##:::::::. #######:: ##:::. ##:::: ##:::::::: ########: ##:::: ##:::: ##::::'####: ##::. ##:. ######::: ####::::
                    ..:::::::::.......:::..:::::..:::::..:::::::::........::..:::::..:::::..:::::....::..::::..:::......::::....:::::
         )";
        cout << asciiArt << endl;

}void play(){
     string asciiArt = R"(                                     
                                                  ----------------------------------------------        
                                                    You've survived the game's challenges and       
                                                     conquered every obstacle in your path...
       
                                                      But beware, the adventure isn't over!       
                                                  The game continues, and more challenges await!        
                                                  ----------------------------------------------
         )";
     cout << asciiArt << endl;

    }


void bye(){
     string asciiArt = R"(    
                                                             ++=-.-+*%%@@@@@@%#*=..-==:  
                                                             @@@@@@@@@@@@@@@@@@@@@@@@@+  
                                                             *@@%#++++*#@@@%#*+==+#@@@:  
                                                             -@+:     .=+#*=-      -#@   
                                                             +*.  =#@%- =++- =#@@=  -#.  
                                                             @+  .%@@@# ===- @@@@%  :#=  
                                                            =@%=. .=+-.-=-==:.=+=  :*@%  
                                                           .@@@@#+---=+*%@@#*+=--=*%@@@@.
                                                           *@@@@@@@@@@@%%##%%@@@@@@@@@@@*
                                                           @@@@@@@@@#+++++++++*%@@@@@@@@@
                                                           @@@@@@@@++++++++++++=*@@@@@@@@
                                                           %@@@@@@@+***++**++***=@@@@@@@%
                                                           =@+:#@@+++++++++++++++*@%%-=@=
                                                            .   .+*++++++++++++=+*-    . 
                                                                   .:=-----=-..         
                                                                    .=:    :-.          
         )";                                                                                                                                                                                                                                                                                                                                                                                                      
        cout << asciiArt << endl;

}

//gotoxy function                  
void gotoxy(int x, int y){
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);

}

//Mechanics Function with an argument name from the user input
void Mechanics(char name[100]){
    
    //Mechanics of the Game store in variables  
     string mech = "- Choose your difficulty level (Easy, Medium, Hard) and identify whether the provided syntax is correct or incorrect. ";
     string mech1 = "- If incorrect, input the right syntax within 3 attempts. Earn points for each correct identification or input the right syntax.";
   

    //new screen or clearscreen for mechanics
    system("cls"); 
    
   
   //Header of Mechanics 
    // gotoxy(70,5);{
    //   cout << "==================";
    // }
    // gotoxy(70,6);{
    //   cout << "  Game Mechanics";
    // }
    // gotoxy(70,7);{
    //   cout << "==================";
    // }
 mechanicsTitle();
   //First Mechanic w/ type writing logic
    gotoxy(17,9);{
        
        for(int i = 0; mech[i] != '\0'; i++){
           cout << mech[i];
         if(mech[i] == ' '){
           Sleep(200);
          } 
       }
     
    }
  
  //Second Mechanic w/ type writing logic
   gotoxy(17,11);{
        
        for(int a = 0; mech1[a] != '\0'; a++){
           cout << mech1[a];
         if(mech1[a] == ' '){
           Sleep(200);
          } 
       }
    }

   //Good Luck and the name of user
    gotoxy(65,14);{
      cout << "Goodluck " << name << "! <3<3";
    }

    //Tapping any button to continue
    gotoxy(62,17);{    
      cout << "Tap any button to proceed in game...."; 
     }
     getch();
}

char name[100]; //variable for name of the user

int main(){
system("cls");
    system("Color 0E");
  int attempts = 0;
  bool correct = false; 

  
//   /*left side*/  for(int i = 9; i<12;i++){
//                     gotoxy(57,i);{
//                     cout << "*";
//                      }
//                     }
//   /*right side*/  for(int i = 9; i<12;i++){
//                     gotoxy(92,i);{
//                     cout << "*";
//                       }
//                     }
//    /*bottom side*/ for(int i = 57; i<93;i++){
//                     gotoxy(i,12);{
//                     cout << "*";
//                       }
//                     }
//   /*top side*/     for(int i = 57; i<93;i++){
//                     gotoxy(i,8);{
//                     cout << "*";
//                       }
//                    }
 

//This section is for Welcoming and Prompting user to input his/her name

    // ASCII art as a string
 printAscii();
    gotoxy(15,31);{
      cout << "Welcome to the Syntax Identification Game!";
    }
    gotoxy(15, 32);{
      cout << "Please enter your name: ";
    }

    //input name of user
    cin.get(name,100); 
    cin.ignore(); //The cin. ignore() function is used which is used to ignore or clear one or more characters from the input buffer.

    //Mechanics function call
    Mechanics(name); 
   // getch();
    
 
   bool playAgain = true; // INDICATOR whether to play again or not
   bool validChoice = false;
  while (playAgain)

    {
    // Difficulty Levels Menu
   int choice = 0; // variable for choice of user's difficulty level
while (true) {
    system("cls");
    modeTitle();
    gotoxy(62, 9);
    cout << "Select difficulty levels: ";

    gotoxy(64, 11);
    cout << "1 - Easy";
    gotoxy(64, 12);
    cout << "2 - Medium";
    gotoxy(64, 13);
    cout << "3 - Hard";

    gotoxy(62, 15);
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice >= 1 && choice <= 3) {
        break; // Exit the loop if the choice is valid
    } else {
        gotoxy(62, 16);
        cout << "Invalid input. Please try again.";
        Sleep(2000); // Sleep for 2 seconds
               
    
       cin.clear();    // Clear input buffer
       cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore (discard) characters in the input buffer until a newline character ('\n') is found
                                                                     // numeric_limits<streamsize>::max() specifies the maximum number of characters to ignore.
                                                                     // It is set to the maximum value for the streamsize type, ensuring all characters are ignored.
            }
}


//start of switch
 
switch(choice){ 
case 1: {
    system("cls");
   srand(time(NULL));

    string syntax[13] = {
        "cout<<variable_name;",
        "cin>>variable;",
        "dataType variableName = value;",
        "const type name = value;",
        "// comment",
        "/* comment */",
        "dataType arrayName[arraySize];",
        "dataType arrayName [rowSize][columnSize];", //2D
        "dataType arrayName [size1][size2]...[sizeN];", //Multi
        "dataType *identifier;", //pointers
        "class_name object_name;", // object
        "using namespace std;", //
        "any_statement ;" //semicolon
    };

    string syntaxWithErrors[13] = {
        "cout<<<variable_name;",
        "cin<<variable;",
        "dataType variableName == value;",
        "const type name = value;", // correct
        ".. comment",
        "/ comment /",
        "dataType arraySize [arrayName];",
        "dataType arrayName [columnSize][rowSize];",
        "dataType arrayName [size1][size2]...[sizeN];",//correct
        "dataType *identifier;", //correct
        "class_name object_name;", //correct
        "using namespace sti;",
        "any_statement ;" //correct
    };

    string description[13] = {
        "Displaying the output value of the variable",
        "Receiving input from the user.",
        "Syntax of variable declaration",
        "Constant variable declaration", 
        "Single-Line comment",
        "Multi-line comment",
        "Syntax of One-Dimensional Array",
        "Syntax of Two-Dimensional Array",
        "Syntax of Multi-Dimensional Array",
        "Syntax of Pointers", 
        "Syntax of object declaration", 
        "Syntax of C++ Namespace",
        "C++ statement terminator" 
    };

    int score = 0; //score variable

    for (int i = 1; i <= 6; i++) {
        system("cls");

        string random;
        string descript;

        int errorIndex = (rand() % 13);  //random number
        random = syntaxWithErrors[errorIndex]; //random storing syntaxWithErrors array with index of random numbers
        descript = description[errorIndex];

        gotoxy(70, 6);
        cout << "Mode: Easy" << endl;
        gotoxy(72, 7);
        cout << "Test " << i << endl;
        gotoxy(57,9);
        cout << "Identify if the syntax is RIGHT or WRONG:";

        for (int i = 11; i < 16; i++) {
            gotoxy(50, i);
            cout << "*";
        }
        for (int i = 11; i < 17; i++) {
            gotoxy(108, i);
            cout << "*";
        }
        for (int i = 50; i < 108; i++) {
            gotoxy(i, 16);
            cout << "*";
        }
        for (int i = 50; i < 108; i++) {
            gotoxy(i, 11);
            cout << "*";
        }
        gotoxy(60,12);
        cout << descript;
        gotoxy(58, 14);
        cout << random;

        string userAnswer;
        string correctAnswer = syntax[errorIndex];
        string choice1;

        gotoxy(55, 17);
        cout << "Is the syntax right? (Yes/No): ";
        while (true) {
            cin >> choice1;

            // Convert the input to lowercase for case-insensitive comparison
            transform(choice1.begin(), choice1.end(), choice1.begin(), ::tolower);

            if (choice1 == "yes" || choice1 == "YES" || choice1 == "Yes" || choice1 == "no" || choice1 == "NO" || choice1 == "No") {
                break;
            } else {
                gotoxy(53, 19);
                cout << "Invalid input! Please enter either 'Yes' or 'No'.";
                getch();
                gotoxy(53, 17);
                cout << string(30, ' '); // Clear previous input
                gotoxy(53, 19);
                cout << string(60, ' '); // Clear previous message
                
                gotoxy(55, 17);
                 cout << "Is the syntax right? (Yes/No): ";

            }
        }
                cin.clear();   // Clear any error flags that may be set on the input
                cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore (discard) characters in the input buffer until a newline character ('\n') is found
                                                                     // numeric_limits<streamsize>::max() specifies the maximum number of characters to ignore.
                                                                     // It is set to the maximum value for the streamsize type, ensuring all characters are ignored.
        if (choice1 == "yes" || choice1 == "YES" || choice1 == "Yes") {
            if (random == correctAnswer) {
                gotoxy(53, 20);
                cout << "Congratulations! Your answer is correct.";
                score++;
                getch();
            } else {
                int attempts = 0;
                bool correct = false; // Track if the user enters the correct syntax

                while (attempts < 3) {
                    attempts++;

                    gotoxy(53, 19);
                    cout << "Your answer is incorrect. Please input the right syntax.";
                    gotoxy(53, 20);
                    cout << "Your answer: ";

                    gotoxy(65, 20);
                    cout << string(120, ' '); // Clear previous input

                    gotoxy(65, 20);
                    getline(cin, userAnswer);

                    // Remove whitespaces from userAnswer and correctAnswer
                    userAnswer.erase(remove_if(userAnswer.begin(), userAnswer.end(), [](unsigned char c) {
                        return isspace(c);
                    }), userAnswer.end());

                    correctAnswer.erase(remove_if(correctAnswer.begin(), correctAnswer.end(), [](unsigned char c) {
                        return isspace(c);
                    }), correctAnswer.end());

                    if (userAnswer == correctAnswer) {
                        gotoxy(53, 22);
                        cout << "Congratulations! Your answer is correct.";
                        score++;
                        correct = true; // Set correct to true
                        getch();
                        break; // Break out of the while loop if the answer is correct
                    } else {
                        gotoxy(53, 22);
                        cout << "Sorry, your answer is incorrect.";
                        gotoxy(53, 23);
                        cout << "Attempts left: " << 3 - attempts << endl;
                        getch();
                    }
                }

                if (!correct) { // Display the correct answer if the user couldn't provide the correct syntax
                    gotoxy(53, 22);
                    cout << "Sorry, you have used all 3 attempts.";
                    gotoxy(53, 23);
                    cout << "The correct syntax is: " << correctAnswer;
                    break;
                    getch();
                }
            }
        } else if (choice1 == "no" || choice1 == "NO" || choice1 == "No") {
            if (random != correctAnswer) {
                int attempts = 0;
                bool correct = false; // Track if the user enters the correct syntax

                while (attempts < 3) {
                    attempts++;
                    gotoxy(53, 19);
                    cout << "Please input the right syntax.";
                    gotoxy(53, 20);
                    cout << "Your answer: ";

                    gotoxy(65, 20);
                    cout << string(80, ' '); // Clear previous input

                    gotoxy(65, 20);
                    getline(cin, userAnswer);

                    // Remove whitespaces from userAnswer and correctAnswer
                    userAnswer.erase(remove_if(userAnswer.begin(), userAnswer.end(), [](unsigned char c) {
                        return isspace(c);
                    }), userAnswer.end());

                    correctAnswer.erase(remove_if(correctAnswer.begin(), correctAnswer.end(), [](unsigned char c) {
                        return isspace(c);
                    }), correctAnswer.end());

                    if (userAnswer == correctAnswer) {
                        gotoxy(53, 22);
                        cout << "Congratulations! Your answer is correct.";
                        score++;
                        correct = true; // Set correct to true
                        getch();
                        break;
                    } else {
                        gotoxy(53, 22);
                        cout << "Sorry, your answer is incorrect.";
                        gotoxy(53, 23);
                        cout << "Attempts left: " << 3 - attempts << endl;
                        getch();
                    }
                }

                if (!correct) { // Display the correct answer if the user couldn't provide the correct syntax
                    gotoxy(53, 22);
                    cout << "Sorry, you have used all 3 attempts.";
                    gotoxy(53, 23);
                    cout << "The correct syntax is: " << correctAnswer;
                    break;
                    getch();
                }
            } else {
                gotoxy(53, 19);
                cout << "Sorry, your answer is incorrect.";
                gotoxy(53, 20);
                cout << "The correct syntax is: " << correctAnswer;
                getch();
            }
        } else { // INVALID
            gotoxy(53, 19);
            cout << "Invalid input! Please enter either 'Yes' or 'No'.";
            getch();
            i--; // Decrease the loop counter to repeat the current test
        }
    }

    gotoxy(53, 25);
    cout << "Your score is: " << score << "/6" << endl;
   gotoxy(53, 27);
   cout << "Press any key to proceed...";
    getch();
    break;
}

  //===========================================================================================================================
  case 2:    //1 for easy
  {
  system("cls");
 
        string syntax[13] = {
            "void function_name (void){ //statements }",
            "void function_name (dataType variable_name){ //statements }",
            "returnType function_name(void){ //statements }",
            "returnType function_name(dataType variable_name) { //statements }",
            "switch(expression){case value1: //statements break; ...}", 
            "if (condition) { //statements if true } else { //statements if false}",  
            "for (initialization; condition; iteration){ //statements }", 
            "do { //statements } while (condition);",
            "while (condition) {// statements}",
            "#define constant_name value",
            "typedef existingType newName;",
            "using newTypeName = existingType;",
            "enum newType = {valueList};" 
        };                               

        string syntaxWithErrors[13] = {
            "void variable_name (void) { //statements}",
            "void function_name (dataType value_name { //statements}",   
            "returnType function_name(void){ //statements }", //correct
            "valueType function_name(dataType variable_name) { //statements }",
            "switch(condition){case value1: //statements break; ...}", //guds na y
            "if (variable) { //statements if true } else if { //statements if false}",
            "for (initialization: condition: iteration){ //statements }", 
            "do { //statements } while (condition);",//correct
            "while (initialization) {// statements}",
            "#define constant_name value",
            "typedef existingType newName;",
            "using newTypeName = existingType;",
            "enum newType = {valueList};"

        }; 
         string description[13] = {
            "Function with no arguments and no return value.",
            "Function with argument and no return value.",   
            "Function with no arguments but with return value", 
            "Function with arguments and return value",
            "Syntax of switch statement", 
            "Syntax of if-else statement",
            "Syntax of for loop", 
            "Syntax of do-while loop",
            "Syntax of while loop",
            "Syntax of C++ macro definition",
            "Syntax that creates name for an existing data type",
            "Syntax that creates name for an existing data type",
            "Syntax of enumeration declaration."
        }; 
 
   int score = 0; //score variable

  for (int i = 1; i <= 5; i++) {
        system("cls");
        string random;
        string descript;

        int errorIndex = (rand() % 13);  //random number
        random = syntaxWithErrors[errorIndex]; //random storing syntaxWithErrors array with index of random numbers
        descript = description[errorIndex];

        gotoxy(70, 6);
        cout << "Mode: Medium" << endl;
        gotoxy(72, 7);
        cout << "Test " << i << endl;
        gotoxy(57, 9);
        cout << "Identify if the syntax is RIGHT or WRONG:";
       
        for (int i = 10; i < 15; i++) {
            gotoxy(40, i);
            cout << "*";
        }
        for (int i = 10; i < 16; i++) {
            gotoxy(120, i);
            cout << "*";
        }
        for (int i = 40; i < 120; i++) {
            gotoxy(i, 15);
            cout << "*";
        }
        for (int i = 40; i < 120; i++) {
            gotoxy(i, 10);
            cout << "*";
        }
        gotoxy(53,11);
        cout << descript;
         gotoxy(48, 13);
        cout << random;

        string userAnswer;
        string correctAnswer = syntax[errorIndex];
        string choice1;

        gotoxy(55, 17);
        cout << "Is the syntax right? (Yes/No): ";
   
   while (true) {
    cin >> choice1;

    // Convert the input to lowercase for case-insensitive comparison
    transform(choice1.begin(), choice1.end(), choice1.begin(), ::tolower);

    if (choice1 == "yes" || choice1 == "YES" || choice1 == "Yes" || choice1 == "no" || choice1 == "NO" || choice1 == "No") { // Simplified condition
        break;
    } else {
        gotoxy(53, 19);
        cout << "Invalid input! Please enter either 'Yes' or 'No'.";
        getch();
        gotoxy(53, 17);
        cout << string(30, ' '); // Clear previous input
        gotoxy(53, 19);
        cout << string(60, ' '); // Clear previous message

        gotoxy(55, 17);
        cout << "Is the syntax right? (Yes/No): ";

    }

        
        }
                cin.clear();   // Clear any error flags that may be set on the input
                cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore (discard) characters in the input buffer until a newline character ('\n') is found
                                                                     // numeric_limits<streamsize>::max() specifies the maximum number of characters to ignore.
                                                                     // It is set to the maximum value for the streamsize type, ensuring all characters are ignored.
     
        if (choice1 == "yes" || choice1 == "YES" || choice1 == "Yes") {
            if (random == correctAnswer) {
                gotoxy(53, 19);
                cout << "Congratulations! Your answer is correct.";
                score++;
                getch();
            } else {
                int attempts = 0;
                bool correct = false; // Track if the user enters the correct syntax

                while (attempts < 3) {
                    attempts++;

                    gotoxy(47, 19);
                    cout << "Your answer is incorrect. Please input the right syntax.";
                    gotoxy(47, 20);
                    cout << "Your answer: ";

                    gotoxy(59, 20);
                    cout << string(120, ' '); // Clear previous input

                    gotoxy(59, 20);
                    getline(cin, userAnswer);

                    // Remove whitespaces from userAnswer and correctAnswer
                    userAnswer.erase(remove_if(userAnswer.begin(), userAnswer.end(), [](unsigned char c) {
                        return isspace(c);
                    }), userAnswer.end());

                    correctAnswer.erase(remove_if(correctAnswer.begin(), correctAnswer.end(), [](unsigned char c) {
                        return isspace(c);
                    }), correctAnswer.end());

                    if (userAnswer == correctAnswer) {
                        gotoxy(53, 22);
                        cout << "Congratulations! Your answer is correct.";
                        score++;
                        correct = true; // Set correct to true
                        getch();
                        break; // Break out of the while loop if the answer is correct
                    } else {
                        gotoxy(53, 22);
                        cout << "Sorry, your answer is incorrect.";
                        gotoxy(53, 23);
                        cout << "Attempts left: " << 3 - attempts << endl;
                        getch();
                    }
                }

                if (!correct) { // Display the correct answer if the user couldn't provide the correct syntax
                    gotoxy(53, 22);
                    cout << "Sorry, you have used all 3 attempts.";
                    gotoxy(53, 23);
                    cout << "The correct syntax is: " << correctAnswer;
                    break;
                    getch();
                }
            }
        } else if (choice1 == "no" || choice1 == "NO" || choice1 == "No") {
            if (random != correctAnswer) {
                int attempts = 0;
                bool correct = false; // Track if the user enters the correct syntax

                while (attempts < 3) {
                    attempts++;
                    gotoxy(47, 19);
                    cout << "Please input the right syntax.";
                    gotoxy(47, 20);
                    cout << "Your answer: ";

                    gotoxy(59, 20);
                    cout << string(120, ' '); // Clear previous input

                    gotoxy(59, 20);
                    getline(cin, userAnswer);

                    // Remove whitespaces from userAnswer and correctAnswer
                    userAnswer.erase(remove_if(userAnswer.begin(), userAnswer.end(), [](unsigned char c) {
                        return isspace(c);
                    }), userAnswer.end());

                    correctAnswer.erase(remove_if(correctAnswer.begin(), correctAnswer.end(), [](unsigned char c) {
                        return isspace(c);
                    }), correctAnswer.end());

                    if (userAnswer == correctAnswer) {
                        gotoxy(53, 22);
                        cout << "Congratulations! Your answer is correct.";
                        score++;
                        correct = true; // Set correct to true
                        getch();
                        break;
                    } else {
                        gotoxy(53, 22);
                        cout << "Sorry, your answer is incorrect.";
                        gotoxy(53, 23);
                        cout << "Attempts left: " << 3 - attempts << endl;
                        getch();
                    }
                }

                if (!correct) { // Display the correct answer if the user couldn't provide the correct syntax
                    gotoxy(53, 22);
                    cout << "Sorry, you have used all 3 attempts.";
                    gotoxy(53, 23);
                    cout << "The correct syntax is: " << correctAnswer;
                    break;
                    getch();
                }
            } else {
                gotoxy(53, 19);
                cout << "Sorry, your answer is incorrect.";
                gotoxy(53, 20);
                cout << "The correct syntax is: " << correctAnswer;
                getch();
            }
        } else { // INVALID
            gotoxy(53, 19);
            cout << "Invalid input! Please enter either 'Yes' or 'No'.";
            getch();
            i--; // Decrease the loop counter to repeat the current test
        }
    }

    gotoxy(53, 25);
    cout << "Your score is: " << score << "/5" << endl;
    gotoxy(53, 27);
    cout << "Press any key to proceed...";
    getch();
    break;
}
 //================================================================================================================================
 
  case 3:
  {
   system("cls");
       string syntax[6] = {
    "struct type_name{dataType identifier1; dataType identifier2;} object_name;",
    "union type_name{member_type member_name1, member_type member_name2} object_name;",
    "fstream fstream_name; fstream_name.open( \"file_name.txt\", mode_flag); //statement  fstream_name.close();",
    "class class_name{ specifier: // Class members and methods } object_name;",
    "while(condition) { while(condition){ //statement of inside loop } //statement of outerloop }",
    "do{ do{ //statement of inside loop } while(condition); //statement of outerloop } while (condition)"

    };

    string syntaxWithErrors[6] = {
    "struct type_name[dataType identifier1; dataType identifier2;] object_name;",
    "union type_name{member_type member_name1, member_type member_name2} object_name",
    "fstream fstream_name; fstream_name.open[ \"file_name.txt\", mode_flag]; //statement  fstream_name.close();",
    "class class_name{ specifier: // Class members and methods } object_name;", //correct
    "while(condition) { while(expression){ //statement of inside loop } //statement of outerloop }",
    "do{ do{ //statement of inside loop } while(condition); //statement of outerloop } while (condition)" //correct
    };

    string description[6] = {
    "Syntax of Structure",
    "Syntax of Union",
    "Syntax of File Handling",
    "Syntax of Class and Object", 
    "Syntax of Nested while loop",
    "Syntax of Nested do-while loop" 
    };

 
   int score = 0; //score variable

 for (int i = 1; i <= 5; i++) {
        system("cls");
        string random;
        string descript;

        int errorIndex = (rand() % 13);  //random number
        random = syntaxWithErrors[errorIndex]; //random storing syntaxWithErrors array with index of random numbers
        descript = description[errorIndex];

        gotoxy(70, 6);
        cout << "Mode: Hard" << endl;
        gotoxy(72, 7);
        cout << "Test " << i << endl;
        gotoxy(57, 9);
        cout << "Identify if the syntax is RIGHT or WRONG:";
       
        for (int i = 10; i < 14; i++) {
            gotoxy(30, i);
            cout << "*";
        }
        for (int i = 10; i < 15; i++) {
            gotoxy(140, i);
            cout << "*";
        }
        for (int i = 30; i < 140; i++) {
            gotoxy(i, 14);
            cout << "*";
        }
        for (int i = 30; i < 140; i++) {
            gotoxy(i, 10);
            cout << "*";
        }
        gotoxy(68,11);
        cout << descript;
        gotoxy(33, 13);
         cout << random;

        string userAnswer;
        string correctAnswer = syntax[errorIndex];
        string choice1;

        gotoxy(55, 16);
        cout << "Is the syntax right? (Yes/No): ";
        while (true) {
            cin >> choice1;

            // Convert the input to lowercase for case-insensitive comparison
            transform(choice1.begin(), choice1.end(), choice1.begin(), ::tolower);

            if (choice1 == "yes" || choice1 == "YES" || choice1 == "Yes" || choice1 == "no" || choice1 == "NO" || choice1 == "No") {
                break;
            } else {
                gotoxy(53, 18);
                cout << "Invalid input! Please enter either 'Yes' or 'No'.";
                getch();
                gotoxy(53, 16);
                cout << string(200, ' '); // Clear previous input
              
                
                gotoxy(55, 16);
                cout << "Is the syntax right? (Yes/No): ";
                 }
        }  cin.clear();   // Clear any error flags that may be set on the input
                cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignor  e (discard) characters in the input buffer until a newline character ('\n') is found
                                                                     // numeric_limits<streamsize>::max() specifies the maximum number of characters to ignore.
                                                                     // It is set to the maximum value for the streamsize type, ensuring all characters are ignored.
     

        if (choice1 == "yes" || choice1 == "YES" || choice1 == "Yes") {
            if (random == correctAnswer) {
                gotoxy(53, 18);
                cout << "Congratulations! Your answer is correct.";
                score++;
                getch();
            } else {
                int attempts = 0;
                bool correct = false; // Track if the user enters the correct syntax

                while (attempts < 3) {
                    attempts++;

                    gotoxy(20, 18);
                    cout << "Your answer is incorrect. Please input the right syntax.";
                    gotoxy(20, 19);
                    cout << "Your answer: ";

                    gotoxy(32, 19);
                    cout << string(200, ' '); // Clear previous input

                    gotoxy(32, 19);
                    getline(cin, userAnswer);

                    // Remove whitespaces from userAnswer and correctAnswer
                    userAnswer.erase(remove_if(userAnswer.begin(), userAnswer.end(), [](unsigned char c) {
                        return isspace(c);
                    }), userAnswer.end());

                    correctAnswer.erase(remove_if(correctAnswer.begin(), correctAnswer.end(), [](unsigned char c) {
                        return isspace(c);
                    }), correctAnswer.end());

                    if (userAnswer == correctAnswer) {
                        gotoxy(53, 21);
                        cout << "Congratulations! Your answer is correct.";
                        score++;
                        correct = true; // Set correct to true
                        getch();
                        break; // Break out of the while loop if the answer is correct
                    } else {
                        gotoxy(53, 21);
                        cout << "Sorry, your answer is incorrect.";
                        gotoxy(53, 22);
                        cout << "Attempts left: " << 3 - attempts << endl;
                        getch();
                    }
                }

                if (!correct) { // Display the correct answer if the user couldn't provide the correct syntax
                    gotoxy(53, 21);
                    cout << "Sorry, you have used all 3 attempts.";
                    gotoxy(18, 22);
                    cout << "The correct syntax is: " << correctAnswer;
                    break;
                    getch();
                }
            }
        } else if (choice1 == "no" || choice1 == "NO" || choice1 == "No") {
            if (random != correctAnswer) {
                int attempts = 0;
                bool correct = false; // Track if the user enters the correct syntax

                while (attempts < 3) {
                    attempts++;
                    gotoxy(20, 18);
                    cout << "Please input the right syntax.";
                    gotoxy(20, 19);
                    cout << "Your answer: ";

                    gotoxy(32, 19);
                    cout << string(200, ' '); // Clear previous input

                    gotoxy(32, 19);
                    getline(cin, userAnswer);

                    // Remove whitespaces from userAnswer and correctAnswer
                    userAnswer.erase(remove_if(userAnswer.begin(), userAnswer.end(), [](unsigned char c) {
                        return isspace(c);
                    }), userAnswer.end());

                    correctAnswer.erase(remove_if(correctAnswer.begin(), correctAnswer.end(), [](unsigned char c) {
                        return isspace(c);
                    }), correctAnswer.end());

                    if (userAnswer == correctAnswer) {
                        gotoxy(53, 21);
                        cout << "Congratulations! Your answer is correct.";
                        score++;
                        correct = true; // Set correct to true
                        getch();
                        break;
                    } else {
                        gotoxy(53, 21);
                        cout << "Sorry, your answer is incorrect.";
                        gotoxy(53, 22);
                        cout << "Attempts left: " << 3 - attempts << endl;
                        getch();
                    }
                }

                if (!correct) { // Display the correct answer if the user couldn't provide the correct syntax
                    gotoxy(53, 21);
                    cout << "Sorry, you have used all 3 attempts.";
                    gotoxy(18, 22);
                    cout << "The correct syntax is: " << correctAnswer;
                    break;
                    getch();
                }
            } else {
                gotoxy(53, 18);
                cout << "Sorry, your answer is incorrect.";
                gotoxy(18, 19);
                cout << "The correct syntax is: " << correctAnswer;
                getch();
            }
        } else { // INVALID
            gotoxy(53, 18);
            cout << "Invalid input! Please enter either 'Yes' or 'No'.";
            getch();
            i--; // Decrease the loop counter to repeat the current test
        }
    }

    gotoxy(53, 25);
    cout << "Your score is: " << score << "/5" << endl;
    gotoxy(53, 27);
    cout << "Press any key to proceed...";
    getch();
    break;
  }
    
       default:      
            cout << "Invalid choice! Please select a valid difficulty level.";
            continue;
        }

//==============================================================================================================================

// PLAYAGAIN

      char playAgainChoice;
       gotoxy(53,27);
        cout << "Do you want to play again? (Y/N): ";
        cin >> playAgainChoice;

        if (playAgainChoice == 'Y' || playAgainChoice == 'y') {

            continue;  // go back to the beginning of the while loop (main menu)
        } else {
          system("cls");
               thanks();
             play();
              bye();
            playAgain = false;  // end the program
        }
        
    }  
        getch();
    return 0;
}
