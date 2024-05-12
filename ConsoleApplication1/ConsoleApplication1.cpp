#include <iostream>
#include <string>
using namespace std;

string getChoice(string prompt) {
    string response;
    cout << prompt << endl;
    cin >> response;
    return response;
}

int main()
{
    setlocale(LC_ALL, "");
    cout << "Kladoiskatel!";

    cout << "Вы обнаружили бутылку с запиской, которая приплыла не берег";
    cout << "В записке говорится, что рядом с вами находится клад закопанный в лесу";
    string choice1;
    while (true) {
        choice1 = getChoice("Куда пойти?");
        if (choice1 == "налево") {

        }
        else if (choice1 == "НАПРАВО") {

        }

        cout << "Введите правильную команду";
    }
}