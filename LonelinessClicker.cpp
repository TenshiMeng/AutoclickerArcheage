#include <iostream>
#include <windows.h>


using namespace std;

//метод, в котором реализовано добавление CPS 
int x=0, y=0, cps;
bool click=false;

void Menu()
{	
	cout << "Задаём клики в секунду. При значении '1' - пауза между кликами будет равна \n" 
	"3 секундам, при '2' - 1.5, при '3' - 1, и т.д (Ника звездочка кстати):";
	cin >> cps;
}
//локальный цикл
void Clicker()
{
	while (1)
	{
		if (GetAsyncKeyState(VK_LBUTTON))
		{
			click = true;			
		}
		if (GetAsyncKeyState(VK_RBUTTON))
		{
			click = false;
		}
		
		if (click = true)
		{
			mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
			mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
			mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
			mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
			Sleep(3000/cps);
			mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
			mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
			Sleep(3000/cps);
			mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
			mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
			Sleep(3000/cps);
		}
		
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	Menu();
	Clicker();
}
