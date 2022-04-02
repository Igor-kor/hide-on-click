
#include <windows.h> 
#include <iostream>
using namespace std;
#include <conio.h>
#include <Windows.h>


int main(int argc,char *argv[])
{
 
HWND Wnd = NULL;
Sleep (1000);
while(1){
         if(GetKeyState(2) < 0 ){
	           Wnd=GetForegroundWindow();
	           if (Wnd>0)
		       ShowWindow(Wnd,SW_HIDE);
		        cout<<"zakrito!";    
		      // break;
               }
	           Sleep (1);
}                   
                
           
    getch();
    return 0;
}
