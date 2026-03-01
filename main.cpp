#include <iostream>     //for input and output
#include <string>      //For text handling
#include <windows.h>  // For color display,beep,and fast timing
#include <ctime>     // TO track time ,works on every computer

using namespace std; //TO enable the use of standard names

int main() {

system("color 0B");//Color of greeting screen

//=========Greetings=========
cout << "=====================" << endl;
cout << "      INTELSCOPE     " << endl;
cout << "=====================" << endl;
cout << "WELCOME TO INTELSCOPE :)" << endl;//Greeting message
//=========User enter password==========
string enterPassword;
cout << "\nPlease enter your password: ";
cin >> enterPassword;//so the system knows user must input password here

if (enterPassword.length() < 8) {  //Password length must be 8 or more digits
        system("color 0C");//Red color for entering digits less than 8
        cout << "\n[ALERT] SECURITY RISK: Password is too short!" << endl;
    }
else {
system("color 0A");//Green color for entering 8 or more digits
cout << "\n[SUCCESS] SECURITY STATUS: Length is sufficient." << endl;

//=====The password cracking engine===
int guess = 0;//Guess is 0 at begining
int totalTries = 0;//Total tries is also 0 at begining

cout << "\n[STARTING] Simulating Brute Force attack..." << endl;

//===recording start time=====
double startTime = GetTickCount();

while (to_string(guess) != enterPassword) {
guess++;//Continue guessing if password not found
totalTries++;

if (totalTries % 50000 == 0) { //Display every 50000 try
cout << "[SCANNING] Current Guess: " << guess << "..." << endl;
            }

if (totalTries > 100000000) break;//The limit of combining numbers to guess password
        }

//===recording end time=====
double endTime = GetTickCount();

//====calculating(milliseconds / 1000)======
double secondsTaken = (endTime - startTime) / 1000.0;

if (to_string(guess) == enterPassword) {
            system("color 0E");

//Beep if password found
cout << "\a";
Beep(800, 400);

cout << "\n************************************" << endl;
cout << "[CRACKED] PASSWORD IDENTIFIED!" << endl;
cout << "[ATTEMPTS] " << totalTries << " tries." << endl;

//============Time taken to crack password============
cout << "[TIME TAKEN] " << secondsTaken << " seconds." << endl;
cout << "************************************" << endl;
        }
else {
cout << "\n[TIMEOUT] Security is strong!" << endl;
        }
    }

return 0;
}
