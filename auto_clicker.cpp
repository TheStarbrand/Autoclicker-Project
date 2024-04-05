#include <iostream>
#include <windows.h>
using namespace std;

void menu(){
    cout << "Press x to enable and z to disable autoclicker\n";
}

string getInput(){

    string input;
    cin >> input;
    return input;

}

void clicker(){
    string stateInput = getInput();
    stateInput = tolower(stateInput[0]); //converts input to lowercase
    
    bool click = false; //sets default value to false or off
    while (true){
        if(stateInput == "x"){   //if x is pressed
            click = true; //sets click to true
           // cout << "Autoclicker enabled\n"; //prints message
        }
        else if(stateInput == "z" ){ //if z is pressed
            click = false; //sets click to falsex
            // cout << "Autoclicker disabled\n"; //prints messagex
        
        }
        if(click == true){ //if click is true
            mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0); //clicks the mouse
            mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0); //releases the mouse
            cout << "Clicked!\n"; //prints message
            Sleep(10); //waits 10 milliseconds before clicking and releasing again
            
        }
    }
}

int main(){
    menu();
    clicker();
    return 0;
}