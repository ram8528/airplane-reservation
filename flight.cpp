#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>
#include <conio.h>
#include <string>
using namespace std;
char arr[100];
void mainMenu();

class Management
{
public:
    Management()
    {
        mainMenu();
    }
};

class Details
{
public:
    static string name, gender, clsst;
    int phone;
    int age;
    string add;
    static int cId;

    void information()
    {
        cout << "\tEnter the name                :   ";
        cin >> name;
        cout << "\tEnter the Id number           :   ";
        cin >> cId;
        cout << "\tEnter the age                 :   ";
        cin >> age;
        cout << "\tEnter the address             :   ";
        cin >> add;
        cout << "\tEnter the gender              :   ";
        cin >> gender;
        cout << "\tWhich Class Ticket do you want:  ";
        cin>>clsst;
        cout << "\t----------Your Details are saved With us--------- \n"
             << endl;
    }
};

int Details::cId;
string Details::name;
string Details::gender;
string Details::clsst;

class registration
{
public:
    static int choice;
    int choice1;
    int back;
    static float charges;

    void flights()
    {
        string flightN[] = {"Dubai", "Canada", "UK", "USA", "Australia", "Europe"};

        for (int a = 0; a < 6; a++)
        {
            cout << (a + 1) << ".flight to " << flightN[a] << endl;
        }

        cout << "\nWelcome to the Indigo Airlines " << endl;
        cout << "Press the number of the country of which you want to book the flight";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\t-------------Welcome to Dubai Emerits------------" << endl;
            cout << "Your Comfort is our priority. Enjoy the Journey. All the Very Best " << endl;

            cout << "Following are the flights\n"
                 << endl;
            cout << "1.  DUB - 389" << endl;
            cout << "\t08-09-2022  7:10AM  10Hours  Rs.  14500" << endl;

            cout << "2.  DUB - 469" << endl;
            cout << "\t10-09-2022  10:10AM  9.5Hours  Rs.  14950" << endl;

            cout << "3.  DUB - 534" << endl;
            cout << "\t17-09-2022  05:50AM  14Hours  Rs.  13200" << endl;

            cin >> choice1;
            if (choice1 == 1)
            {
                charges = 14500;
                cout << "\nYou have successfully Booked the flight  DUB - 389" << endl;
                cout << "You can go back to main menu and take the tickets" << endl;
            }

            else if (choice1 == 2)
            {
                charges = 14950;
                cout << "\nYou have successfully Booked the flight  DUB - 469" << endl;
                cout << "You can go back to main menu and take the tickets" << endl;
            }

            else if (choice1 == 3)
            {
                charges = 13200;
                cout << "\nYou have successfully Booked the flight  DUB - 534" << endl;
                cout << "You can go back to main menu and take the tickets" << endl;
            }

            else
            {
                cout << "Invalid Input ,Shifting to the previous Menu" << endl;
                flights();
            }

            cout << "Press any numeric key to go back to the Main Menu" << endl;
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }

            break;

        case 2:

            cout << "\t------------Welcome to Canadian Airlines---------" << endl
                 << endl;
            cout << "Your Comfort is our priority. Enjoy the Journey. All the Very Best " << endl;

            cout << "Following are the flights\n"
                 << endl;
            cout << "1.  CND - 189" << endl;
            cout << "\t02-09-2022  4:30PM  5.5Hours  Rs.  8500" << endl;

            cout << "2.  CND - 269" << endl;
            cout << "\t04-09-2022  10:10AM  9.5Hours  Rs.  8250" << endl;

            cout << "3.  CND - 504" << endl;
            cout << "\t17-09-2022  05:50AM  4Hours  Rs.  9900" << endl;

            cin >> choice1;
            if (choice1 == 1)
            {
                charges = 8500;
                cout << "\nYou have successfully Booked the flight  CND - 189" << endl;
                cout << "You can go back to main menu and take the tickets" << endl;
            }

            else if (choice1 == 2)
            {
                charges = 8250;
                cout << "\nYou have successfully Booked the flight  CND - 269" << endl;
                cout << "You can go back to main menu and take the tickets" << endl;
            }

            else if (choice1 == 3)
            {
                charges = 9900;
                cout << "\nYou have successfully Booked the flight  CND - 504" << endl;
                cout << "You can go back to main menu and take the tickets" << endl;
            }

            else
            {
                cout << "Invalid Input ,Shifting to the previous Menu" << endl;
                flights();
            }

            cout << "Press any numeric key to go back to the Main Menu" << endl;
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }

            break;

        case 3:

            cout << "\t---------------Welcome to UK Airways-------------" << endl;
            cout << "Your Comfort is our priority. Enjoy the Journey. All the Very Best " << endl;

            cout << "Following are the flights\n"
                 << endl;
            cout << "1.  UK - 09" << endl;
            cout << "\t02-09-2022  4:30PM  13Hours  Rs.  38500" << endl;

            cout << "2.  UK - 54" << endl;
            cout << "\t07-09-2022  03:50AM  14Hours  Rs.  37900" << endl;

            cin >> choice1;
            if (choice1 == 1)
            {
                charges = 38500;
                cout << "\nYou have successfully Booked the flight  UK - 09" << endl;
                cout << "You can go back to main menu and take the tickets" << endl;
            }

            else if (choice1 == 2)
            {
                charges = 37900;
                cout << "\nYou have successfully Booked the flight  UK - 54" << endl;
                cout << "You can go back to main menu and take the tickets" << endl;
            }

            else
            {
                cout << "Invalid Input ,Shifting to the previous Menu" << endl;
                flights();
            }

            cout << "Press any numeric key to go back to the Main Menu" << endl;
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;

        case 4:

            cout << "\t--------------Welcome to US Airways--------------" << endl;
            cout << "Your Comfort is our priority. Enjoy the Journey. All the Very Best " << endl;

            cout << "Following are the flights\n"
                 << endl;
            cout << "1.  US - 029" << endl;
            cout << "\t02-09-2022  4:30PM  13Hours  Rs.  38500" << endl;

            cout << "2.  US - 154" << endl;
            cout << "\t07-09-2022  03:50AM  14Hours  Rs.  37900" << endl;

            cin >> choice1;
            if (choice1 == 1)
            {
                charges = 38500;
                cout << "\nYou have successfully Booked the flight  US - 029" << endl;
                cout << "You can go back to main menu and take the tickets" << endl;
            }

            else if (choice1 == 2)
            {
                charges = 37900;
                cout << "\nYou have successfully Booked the flight  US - 154" << endl;
                cout << "You can go back to main menu and take the tickets" << endl;
            }

            else
            {
                cout << "Invalid Input ,Shifting to the previous Menu" << endl;
                flights();
            }

            cout << "Press any numeric key to go back to the Main Menu" << endl;
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }

            break;

        case 5:

            cout << "\t----------Welcome to Australian Emirates---------" << endl;
            cout << "Your Comfort is our priority. Enjoy the Journey. All the Very Best " << endl;

            cout << "Following are the flights\n"
                 << endl;
            cout << "1.  AUS - 289" << endl;
            cout << "\t02-09-2022  4:30PM  7.5Hours  Rs.  12300" << endl;

            cout << "2.  AUS - 269" << endl;
            cout << "\t04-09-2022  10:10AM  9.5Hours  Rs.  10250" << endl;

            cout << "3.  AUS - 504" << endl;
            cout << "\t17-09-2022  05:50AM  14Hours  Rs.  9900" << endl;

            cin >> choice1;
            if (choice1 == 1)
            {
                charges = 12300;
                cout << "\nYou have successfully Booked the flight  AUS - 289" << endl;
                cout << "You can go back to main menu and take the tickets" << endl;
            }

            else if (choice1 == 2)
            {
                charges = 10250;
                cout << "\nYou have successfully Booked the flight  AUS - 269" << endl;
                cout << "You can go back to main menu and take the tickets" << endl;
            }

            else if (choice1 == 3)
            {
                charges = 9900;
                cout << "\nYou have successfully Booked the flight  AUS - 504" << endl;
                cout << "You can go back to main menu and take the tickets" << endl;
            }

            else
            {
                cout << "Invalid Input ,Shifting to the previous Menu" << endl;
                flights();
            }

            cout << "Press any numeric key to go back to the Main Menu" << endl;
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }

            break;

        case 6:
            cout << "\t------------Welcome to European Emirates---------" << endl;
            cout << "Your Comfort is our priority. Enjoy the Journey. All the Very Best " << endl;

            cout << "Following are the flights\n"
                 << endl;
            cout << "1.  EU - 189" << endl;
            cout << "\t02-09-2022  4:30PM  5.5Hours  Rs.  18500" << endl;

            cout << "2.  EU - 269" << endl;
            cout << "\t04-09-2022  10:10AM  3Hours  Rs.  28250" << endl;

            cout << "3.  EU - 504" << endl;
            cout << "\t17-09-2022  05:50AM  6Hours  Rs.  19900" << endl;

            cin >> choice1;
            if (choice1 == 1)
            {
                charges = 18500;
                cout << "\nYou have successfully Booked the flight  EU - 189" << endl;
                cout << "You can go back to main menu and take the tickets" << endl;
            }

            else if (choice1 == 2)
            {
                charges = 28250;
                cout << "\nYou have successfully Booked the flight  EU - 269" << endl;
                cout << "You can go back to main menu and take the tickets" << endl;
            }

            else if (choice1 == 3)
            {
                charges = 19900;
                cout << "\nYou have successfully Booked the flight  EU - 504" << endl;
                cout << "You can go back to main menu and take the tickets" << endl;
            }

            else
            {
                cout << "Invalid Input ,Shifting to the previous Menu" << endl;
                flights();
            }

            cout << "Press any numeric key to go back to the Main Menu" << endl;
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }

            break;

        default:

            cout << "Invalid Inputs,Shifting to the Main menu" << endl;
            mainMenu();
            break;
        }
    }
};

// float registration::charges;
// int registration::choice;

float registration::charges;
int registration::choice;
class ticket : public registration, Details
{
public:
    void Bill()
    {
        string destination = " ";
        ofstream outf("records.txt");
        {
            cout << "\t*************************************************" << endl;
            outf << "\t-----------------Indigo Airlines-----------------" << endl;
            outf << "\t---------------------Tickets---------------------" << endl;
            outf << "\t*************************************************" << endl;
            outf << "\tCustomer ID          :   " << Details::cId << endl;
            outf << "\tCustomer Name        :   " << Details::name << endl;
            outf << "\tCustomer Gender      :   " << Details::gender << endl;
            outf << "\tTicket Type          :   " << Details::clsst << endl;
            outf << "\t\t  Description " << endl;

            if (registration::choice == 1)
            {
                destination = "Dubai";
            }
            else if (registration::choice == 2)
            {
                destination = "Canada";
            }

            else if (registration::choice == 3)
            {
                destination = "UK";
            }

            else if (registration::choice == 4)
            {
                destination = "USA";
            }
            else if (registration::choice == 5)
            {
                destination = "Australia";
            }

            else if (registration::choice == 6)
            {
                destination = "Europe";
            }

            outf << "\tDestination \t\t" << destination << endl;
            outf << "\tFlight cost \t\t" << registration::charges << endl;
        }
        outf.close();
    }
    void dispBill()
    {
        ifstream ifs("Records.txt");
        {
            if (!ifs)
            {
                cout << "File Error" << endl;
            }
            while (!ifs.eof())
            {
                ifs.getline(arr, 100);
                cout << arr << endl;
            }
        }
        ifs.close();
    }
};

void mainMenu()
{
    int lchoice, schoice;
    int back;
    cout << "\t             \t Indigo Airlines" << endl;
    cout << "\t---------------------Main Menu-------------------" << endl;
    cout << "\t*************************************************" << endl;
    // cout << "\t\t\t\t\t\t|" << endl;

    cout << "\t*\t Press 1 to add Customer Details   \t*" << endl;
    cout << "\t*\t Press 2 to add Flight Details   \t*" << endl;
    cout << "\t*\t Press 3 to for Tickets and Charges   \t*" << endl;
    cout << "\t*\t Press 4 to Exit  \t\t \t*" << endl;
    cout << "\t*************************************************" << endl;
    // cout << "\t|\t\t\t\t\t\t|" << endl;

    cout << "Enter the choice" << endl;
    cin >> lchoice;

    Details d;
    registration r;
    ticket t;

    switch (lchoice)
    {
    case 1:

        //
        cout << "\t---------------------Customer---------------------" << endl;
        d.information();
        // fflush(stdin);

        cout << "Press any numerical key to go back to Main Menu";
        cin >> back;

        if (back == 1)
        {
            mainMenu();
        }
        else
        {
            mainMenu();
        }

        break;

    case 2:
    {
        cout << "\t------------------Book A flight------------------" << endl;
        r.flights();
        break;
    }

    case 3:

        cout << "\t------------------Get Your Ticket----------------" << endl;
        t.Bill();

        cout << "\tYour Ticket is printed , you can get it \n"
             << endl;
        cout << "\t----------Press 1 to display your ticket--------- ";
        cin >> back;

        if (back == 1)
        {
            t.dispBill();
            cout << "Press any numeric key to go back to Main Menu" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }

        else
        {
            mainMenu();
        }
        break;

    case 4:
    {
        cout << "\t-------------Thank You for Visting us------------" << endl;
        break;
    }

    default:
    {
        cout << "Invalid Input , Please try again\n"
             << endl;
        mainMenu();
        break;
    }
    }
}

int main()
{
    Management Mobj;
    return 0;
}