#include <iostream>
#include <windows.h>
using namespace std;

void menu(){
    cout << "Press x to enable and z to disable autoclicker\n";
}

void clicker(){
    bool click = false; //sets default value to false or off
    while (true){
        if(GetAsyncKeyState('x')){   //if x is pressed
            click = true; //sets click to true
        }
        else if(GetAsyncKeyState('z')){ //if z is pressed
            click = false; //sets click to false
        
        }
        if(click){ //if click is true
            mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0); //clicks the mouse
            mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0); //releases the mouse
            Sleep(10); //waits 10 milliseconds
        }
    }
}
