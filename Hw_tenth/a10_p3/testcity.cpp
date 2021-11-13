/*
CH-230-A
a10 p3.[c++]
Shyam Yadav
s.yadav@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "City.h"

using namespace std;
int main () {
    City Bremen;
    City Paris;
    City London;

    string name1;
    int numofinhab1;
    string mayor1;
    double area1;

    string name2;
    int numofinhab2;
    string mayor2;
    double area2;

    string name3;
    int numofinhab3;
    string mayor3;
    double area3;


    cout << "Please enter the data for Bremen:" << endl;
    cout << "Name: ";
    getline (cin, name1);
    Bremen.setName(name1);

    cout << "Number of inhabitants: ";
    cin >> numofinhab1;
    Bremen.setNumofinhab(numofinhab1);

    cout << "Mayor: ";
    getchar();
    getline(cin, mayor1);
    Bremen.setMayor(mayor1);

    cout << "Area: ";
    cin >> area1;
    Bremen.setArea(area1);
    cout << "You have entered the data for Bremen." << endl;

    cout << "Please enter the data for Paris:" << endl;
    cout << "Name: ";
    getchar();
    getline (cin, name2);
    Paris.setName(name2);

    cout << "Number of inhabitants: ";
    cin >> numofinhab2;
    Paris.setNumofinhab(numofinhab2);

    cout << "Mayor: ";
    getchar();
    getline(cin, mayor2);
    Paris.setMayor(mayor2);

    cout << "Area: ";
    cin >> area2;
    Paris.setArea(area2);
    cout << "You have entered the data for Paris." << endl;

    cout << "Please enter the data for London:" << endl;
    cout << "Name: ";
    getchar();
    getline (cin, name3);
    London.setName(name3);

    cout << "Number of inhabitants: ";
    cin >> numofinhab3;
    London.setNumofinhab(numofinhab3);

    cout << "Mayor: ";
    getchar();
    getline(cin, mayor3);
    London.setMayor(mayor3);

    cout << "Area: ";
    cin >> area3;
    London.setArea(area3);
    cout << "You have entered the data for London." << endl;

    Bremen.print();
    Paris.print();
    London.print();

    return 0;
}