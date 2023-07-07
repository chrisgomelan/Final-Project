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
    gotoxy(70,5);{
      cout << "==================";
    }
    gotoxy(70,6);{
      cout << "  Game Mechanics";
    }
    gotoxy(70,7);{
      cout << "==================";
    }


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

  
  /*left side*/  for(int i = 9; i<12;i++){
                    gotoxy(57,i);{
                    cout << "*";
                     }
                    }
  /*right side*/  for(int i = 9; i<12;i++){
                    gotoxy(92,i);{
                    cout << "*";
                      }
                    }
   /*bottom side*/ for(int i = 57; i<93;i++){
                    gotoxy(i,12);{
                    cout << "*";
                      }
                    }
  /*top side*/     for(int i = 57; i<93;i++){
                    gotoxy(i,8);{
                    cout << "*";
                      }
                   }
 

//This section is for Welcoming and Prompting user to input his/her name

    gotoxy(68,9);{
    system("Color F0"); //Color: F means Bright White background and 0 means black text; this is from windows.h library
    cout << "Welcome to";
    }
    gotoxy(62,10);{
      cout << "Syntax Identification Game!";
    }
    gotoxy(58, 15);{
      cout << "Enter your name: ";
    }

    //input name of user
    cin.get(name,100); 
    cin.ignore(); //The cin. ignore() function is used which is used to ignore or clear one or more characters from the input buffer.

    //Mechanics function call
    Mechanics(name); 
    getch();
    
    int choice; // variable for choice of user's difficulty level


// Difficulty Levels Menu
 system("cls");
    gotoxy(62,8);
    cout << "Select difficulty levels: "; 

    gotoxy(64,10); cout<<"1 - Easy";
    gotoxy(64,11); cout<<"2 - Medium";
    gotoxy(64,12); cout<<"3 - Hard";

  gotoxy(62,14); cout << "Enter you choice: ";
  cin>>choice;          

  getch();

//start of switch
switch(choice){

  case 1:
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
            "// comment //",
            "/ comment /",
            "dataType arraySize [arrayName];",
            "dataType arrayName [columnSize][rowSize];",
            "dataType arrayName [size1][size2]...[sizeN];",//correct
            "dataType *identifier;", //correct
            "class_name object_name;", //correct
            "using namespace sti;",
            "any_statement ;" //correct
        };

   int score = 0; //score variable

  for(int i = 1; i<=6; i++){
      system("cls");
      string random;
   
          int errorIndex = (rand() % 13);  //random number
          random = syntaxWithErrors[errorIndex]; //random storing syntaxWithErrors array with index of random numbers
        
        gotoxy(70,6);
          cout << "Mode: Easy" << endl;
        gotoxy(72,7);{
          cout << "Test " << i << endl;
        }
        gotoxy(57,9);{
          cout << "Identify if the syntax is RIGHT or WRONG:";
        }

 for(int i = 10; i<14;i++){
                    gotoxy(53,i);{
                    cout << "*";
                     }
                    }
  /*right side*/  for(int i = 10; i<15;i++){
                    gotoxy(105,i);{
                    cout << "*";
                      }
                    }
   /*bottom side*/ for(int i = 53; i<105;i++){
                    gotoxy(i,14);{
                    cout << "*";
                      }
                    }
  /*top side*/     for(int i = 53; i<105;i++){
                    gotoxy(i,10);{
                    cout << "*";
                      }
                   }

        gotoxy(58,12);{ 
          cout << random;
        }





        string userAnswer;   
        string correctAnswer = syntax[errorIndex];
        string choice1;
      
      gotoxy(55,16);{
        cout<<"Is the syntax is right? (Yes/No): ";
        cin >> choice1;
      }

   if(choice1 == "yes"||choice1 =="Yes"||choice1 =="YES"){

              
              if (random == correctAnswer){
                 gotoxy(53,18);
                  cout << "Congratulations! Your answer is correct.";
                  score++;
                  getch();
                   }

              else {
                gotoxy(53,18);
                cout<<"Your answer is incorrect. Please input the right syntax";
                gotoxy(53,19);{
                cout << "Your answer: ";
                cin.ignore();
                getline(cin,userAnswer);
                }
                //cin.get(userAnswer,100);

                // Remove whitespaces from userAnswer and correctAnswer
                userAnswer.erase(remove_if(userAnswer.begin(), userAnswer.end(), [](unsigned char c) {
                    return isspace(c);
                }), userAnswer.end());

                // correctAnswer.erase(remove_if(correctAnswer.begin(), correctAnswer.end(), [](unsigned char c) {
                //     return isspace(c);
                // }), correctAnswer.end());
             correctAnswer.erase(remove_if(correctAnswer.begin(), correctAnswer.end(), [](unsigned char c) {
                  return isspace(c);
              }), correctAnswer.end());
        if (userAnswer == correctAnswer)
        {
            gotoxy(53,21);{
            cout << "Congratulations! Your answer is correct.";
            score++;
            getch();
            }
        }
        else if(userAnswer != correctAnswer)
        {
            gotoxy(53,21);
            cout << "Sorry, your answer is incorrect. ";
            
            gotoxy(53,22);{
            cout << "The correct syntax is: ";
            cout << correctAnswer ;
            getch();
            }
    }
   
                    }
                  
   }
  
    // string userAnswer;
   else if(choice1 == "no"||choice1 =="No"||choice1 =="NO") { //  else if(choice1 ==  "no"||"No"||"NO"){ 
    
    if(random != correctAnswer){
             gotoxy(53,18);
              cout<<"Please input the right syntax";
              gotoxy(53,19);{
              cout << "Your answer: ";
              cin.ignore();
              getline(cin,userAnswer);
              }

                    // Remove whitespaces from userAnswer and correctAnswer
              userAnswer.erase(remove_if(userAnswer.begin(), userAnswer.end(), [](unsigned char c) {
                  return isspace(c);
              }), userAnswer.end());

              correctAnswer.erase(remove_if(correctAnswer.begin(), correctAnswer.end(), [](unsigned char c) {
                          return isspace(c);
                      }), correctAnswer.end());
                  if (userAnswer == correctAnswer)
                {
                    gotoxy(53,21);{
                      cout << "Congratulations! Your answer is correct.";
                      score++;
                      getch();
                    }
                }
                else if(userAnswer != correctAnswer)
                {
                   gotoxy(53,21);
                    cout << "Sorry, your answer is incorrect."; 
                   gotoxy(53,22);{
                    cout << "The correct syntax is: ";
                    cout << correctAnswer ;
                    getch();
                   }
            }
    }
    else if(random == correctAnswer){
                 gotoxy(53,18);
                    cout << "Sorry, your answer is incorrect."; 
                   gotoxy(53,19);{
                    cout << "The correct syntax is: ";
                    cout << correctAnswer ;
                    getch();
                   }
    }
  

   
 
 
   }
    //score += score; 
    gotoxy(53,25);{ 
    cout<<"Your score is: "<<score<<"/6"<<endl;
                     }
   }
   getch();
  break;
  
}
 getch();
    return 0;
}