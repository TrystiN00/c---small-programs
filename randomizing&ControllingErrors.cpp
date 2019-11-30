#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
using namespace std;


void rand(int MIN, int MAX)
{
 int random[5];



 for (int i=0; i<5; i++)
 {
     random[i] = rand() % (MAX - MIN +1) + MIN;

     for (int y=0; y<5; y++)
        {
            while(random[i] == random[y] && i!=y)	//while zamiast if, bo jest szansa ze wyranda ta sama liczbe i trzeba powtorzyc
            {
                //cout << "Repeated: " << random[i] <<endl;
                random[i] = rand() % (MAX - MIN +1) + MIN;
            }


        }
    cout << random[i] <<endl;

 }

}



int main()
{
    srand(time(NULL));
    cout << "Program is randomizing 5 numbers without repeat \n";
    int MIN, MAX;
    cout << "Put randomizing range \n MIN: ";
    cin >> MIN;
        if(cin.fail()==1)
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "ERROR";
                Sleep(1000);
                system("cls");
                main();
                return 0;   // musi byc bo inaczej MAX sie powtarza bo kontynuuje funkcje za if'em
            }
    cout << "MAX: ";
    cin >> MAX;
        if(cin.fail()==1)
            {
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "ERROR";
                Sleep(1000);
                system("cls");
                main();
                return 0;
            }
    rand(MIN, MAX);


   // cout << "XXXX";

    return 0;
}
