#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

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
    static string name, gender;
    int phoneNo;
    int age;
    string add;
    static int cId;
    char arr[100];

    void information()
    {
        cout << "\nEnter the customer ID : " << endl;
        cin >> cId;
        cout << "\nEnter Name : " << endl;
        cin >> name;
        cout << "\nEnter Age : " << endl;
        cin >> age;
        cout << "\nEnter Address : " << endl;
        cin >> add;
        cout << "\nEnter Gender : " << endl;
        cin >> gender;
        cout << "\nEnter Phone number : " << endl;
        cin >> phoneNo;

        cout << "\nYour Details are saved with us" << endl;
    }
};

int Details::cId;
string Details ::name;
string Details ::gender;

class Registration
{
public:
    static int choice;
    int choice1;
    int back;
    static float charges;

    void flight()
    {
        string flightname[] = {"Dubai", "UK", "USA", "Europ", "Austriala", "india"};
        for (int i = 0; i < 6; i++)
        {
            cout << (i + 1) << " flight to " << flightname[i] << endl;
        }
        cout << "Welcome to the airlines !" << endl;
        cout << "Please Enter the number of the country of which you want to book flight " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cout << "_____________________Welcome to Dubai Emirate_____________" << endl;
            cout << "Your comfort is our priority, Enjoy the journy" << endl;
            cout << "Following are the flights \n"
                 << endl;
            cout << "1. DUB - 498" << endl;
            cout << "\t 01-01-2022 0.0034 10hr Rs. 14000" << endl;
            cout << "2. DUB - 321" << endl;
            cout << "\t 20-01-2022 0.0034 12hr Rs. 11000" << endl;
            cout << "3. DUB - 543" << endl;
            cout << "\t 10-01-2022 0.0034 15hr Rs. 13000" << endl;
            cout << "4. DUB - 897" << endl;
            cout << "\t 07-01-2022 0.0034 17hr Rs. 17000" << endl;

            cout << "\nSelect the flight you want to book" << endl;
            cin >> choice1;
            switch (choice1)
            {
            case 1:
            {
                charges = 14000;
                cout << "\nYou have successfully booked the flight DUB - 498" << endl;
                cout << "\nYou can go back to menu and take the tickets" << endl;
            }
            break;

            case 2:
            {
                charges = 11000;
                cout << "\nYou have successfully booked the flight DUB - 321" << endl;
                cout << "\nYou can go back to menu and take the tickets" << endl;
            }
            case 3:
            {
                charges = 13000;
                cout << "\nYou have successfully booked the flight DUB - 587" << endl;
                cout << "\nYou can go back to menu and take the tickets" << endl;
            }
            case 4:
            {
                charges = 17000;
                cout << "\nYou have successfully booked the flight DUB - 656" << endl;
                cout << "\nYou can go back to menu and take the tickets" << endl;
            }

            default:
            {
                cout << "Invalid input, shifting to the privious menu" << endl;
                flight();
            }
            break;
            }
            cout << "Press any key to go back to main menu" << endl;
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
        break;
        case 2:
        {
            cout << "_____________________Welcome to Canadian Airlines_____________" << endl;
            cout << "Your comfort is our priority, Enjoy the journy" << endl;
            cout << "Following are the flights \n"
                 << endl;
            cout << "1. CA - 498" << endl;
            cout << "\t 01-01-2022 0.0034 10hr Rs. 14000" << endl;
            cout << "2. CA - 321" << endl;
            cout << "\t 20-01-2022 0.0034 12hr Rs. 11000" << endl;
            cout << "3. CA - 543" << endl;
            cout << "\t 10-01-2022 0.0034 15hr Rs. 13000" << endl;
            cout << "4. CA - 897" << endl;
            cout << "\t 07-01-2022 0.0034 17hr Rs. 17000" << endl;

            cout << "\nSelect the flight you want to book" << endl;
            cin >> choice1;
            switch (choice1)
            {
            case 1:
            {
                charges = 14000;
                cout << "\nYou have successfully booked the flight AU - 498" << endl;
                cout << "\nYou can go back to menu and take the tickets" << endl;
            }
            break;

            case 2:
            {
                charges = 11000;
                cout << "\nYou have successfully booked the flight AU - 321" << endl;
                cout << "\nYou can go back to menu and take the tickets" << endl;
            }
            case 3:
            {
                charges = 13000;
                cout << "\nYou have successfully booked the flight AU - 587" << endl;
                cout << "\nYou can go back to menu and take the tickets" << endl;
            }
            case 4:
            {
                charges = 17000;
                cout << "\nYou have successfully booked the flight AU - 656" << endl;
                cout << "\nYou can go back to menu and take the tickets" << endl;
            }

            default:
            {
                cout << "Invalid input, shifting to the privious menu" << endl;
                flight();
            }
            break;
            }
            cout << "Press any key to go back to main menu" << endl;
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
        break;
        case 3:
        {
            cout << "_____________________Welcome to Uk Airlines_____________" << endl;
            cout << "Your comfort is our priority, Enjoy the journy" << endl;
            cout << "Following are the flights \n"
                 << endl;
            cout << "1. UK - 498" << endl;
            cout << "\t 01-01-2022 0.0034 10hr Rs. 14000" << endl;
            cout << "2. UK - 321" << endl;
            cout << "\t 20-01-2022 0.0034 12hr Rs. 11000" << endl;
            cout << "3. UK - 543" << endl;
            cout << "\t 10-01-2022 0.0034 15hr Rs. 13000" << endl;
            cout << "4. UK - 897" << endl;
            cout << "\t 07-01-2022 0.0034 17hr Rs. 17000" << endl;

            cout << "\nSelect the flight you want to book" << endl;
            cin >> choice1;
            switch (choice1)
            {
            case 1:
            {
                charges = 14000;
                cout << "\nYou have successfully booked the flight UK - 498" << endl;
                cout << "\nYou can go back to menu and take the tickets" << endl;
            }
            break;

            case 2:
            {
                charges = 11000;
                cout << "\nYou have successfully booked the flight UK - 321" << endl;
                cout << "\nYou can go back to menu and take the tickets" << endl;
            }
            case 3:
            {
                charges = 13000;
                cout << "\nYou have successfully booked the flight UK - 587" << endl;
                cout << "\nYou can go back to menu and take the tickets" << endl;
            }
            case 4:
            {
                charges = 17000;
                cout << "\nYou have successfully booked the flight UK - 656" << endl;
                cout << "\nYou can go back to menu and take the tickets" << endl;
            }

            default:
            {
                cout << "Invalid input, shifting to the privious menu" << endl;
                flight();
            }
            break;
            }
            cout << "Press any key to go back to main menu" << endl;
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
        break;

        case 4:
        {
            cout << "_____________________Welcome to US Airlines_____________" << endl;
            cout << "Your comfort is our priority, Enjoy the journy" << endl;
            cout << "Following are the flights \n"
                 << endl;
            cout << "1. US - 498" << endl;
            cout << "\t 01-01-2022 0.0034 10hr Rs. 14000" << endl;
            cout << "2. US - 321" << endl;
            cout << "\t 20-01-2022 0.0034 12hr Rs. 11000" << endl;
            cout << "3. US - 543" << endl;
            cout << "\t 10-01-2022 0.0034 15hr Rs. 13000" << endl;
            cout << "4. US - 897" << endl;
            cout << "\t 07-01-2022 0.0034 17hr Rs. 17000" << endl;

            cout << "\nSelect the flight you want to book" << endl;
            cin >> choice1;
            switch (choice1)
            {
            case 1:
            {
                charges = 14000;
                cout << "\nYou have successfully booked the flight US - 498" << endl;
                cout << "\nYou can go back to menu and take the tickets" << endl;
            }
            break;

            case 2:
            {
                charges = 11000;
                cout << "\nYou have successfully booked the flight US - 321" << endl;
                cout << "\nYou can go back to menu and take the tickets" << endl;
            }
            case 3:
            {
                charges = 13000;
                cout << "\nYou have successfully booked the flight US - 587" << endl;
                cout << "\nYou can go back to menu and take the tickets" << endl;
            }
            case 4:
            {
                charges = 17000;
                cout << "\nYou have successfully booked the flight US - 656" << endl;
                cout << "\nYou can go back to menu and take the tickets" << endl;
            }

            default:
            {
                cout << "Invalid input, shifting to the privious menu" << endl;
                flight();
            }
            break;
            }
            cout << "Press any key to go back to main menu" << endl;
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
        break;

        case 5:
        {
            cout << "_____________________Welcome to Europian Airlines_____________" << endl;
            cout << "Your comfort is our priority, Enjoy the journy" << endl;
            cout << "Following are the flights \n"
                 << endl;
            cout << "1. EU - 498" << endl;
            cout << "\t 01-01-2022 0.0034 10hr Rs. 14000" << endl;
            cout << "2. EU - 321" << endl;
            cout << "\t 20-01-2022 0.0034 12hr Rs. 11000" << endl;
            cout << "3. EU - 543" << endl;
            cout << "\t 10-01-2022 0.0034 15hr Rs. 13000" << endl;
            cout << "4. EU - 897" << endl;
            cout << "\t 07-01-2022 0.0034 17hr Rs. 17000" << endl;

            cout << "\nSelect the flight you want to book" << endl;
            cin >> choice1;
            switch (choice1)
            {
            case 1:
            {
                charges = 14000;
                cout << "\nYou have successfully booked the flight EU - 498" << endl;
                cout << "\nYou can go back to menu and take the tickets" << endl;
            }
            break;

            case 2:
            {
                charges = 11000;
                cout << "\nYou have successfully booked the flight EU - 321" << endl;
                cout << "\nYou can go back to menu and take the tickets" << endl;
            }
            case 3:
            {
                charges = 13000;
                cout << "\nYou have successfully booked the flight EU - 587" << endl;
                cout << "\nYou can go back to menu and take the tickets" << endl;
            }
            case 4:
            {
                charges = 17000;
                cout << "\nYou have successfully booked the flight EU - 656" << endl;
                cout << "\nYou can go back to menu and take the tickets" << endl;
            }

            default:
            {
                cout << "Invalid input, shifting to the privious menu" << endl;
                flight();
            }
            break;
            }
            cout << "Press any key to go back to main menu" << endl;
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
        break;
            break;

        case 6:
        {
            cout << "_____________________Welcome to Indian Airlines_____________" << endl;
            cout << "Your comfort is our priority, Enjoy the journy" << endl;
            cout << "Following are the flights \n"
                 << endl;
            cout << "1. Ind - 498" << endl;
            cout << "\t 01-01-2022 0.0034 10hr Rs. 14000" << endl;
            cout << "2. Ind - 321" << endl;
            cout << "\t 20-01-2022 0.0034 12hr Rs. 11000" << endl;
            cout << "3. Ind - 543" << endl;
            cout << "\t 10-01-2022 0.0034 15hr Rs. 13000" << endl;
            cout << "4. Ind - 897" << endl;
            cout << "\t 07-01-2022 0.0034 17hr Rs. 17000" << endl;

            cout << "\nSelect the flight you want to book" << endl;
            cin >> choice1;
            switch (choice1)
            {
            case 1:
            {
                charges = 14000;
                cout << "\nYou have successfully booked the flight Ind - 498" << endl;
                cout << "\nYou can go back to menu and take the tickets" << endl;
            }
            break;

            case 2:
            {
                charges = 11000;
                cout << "\nYou have successfully booked the flight Ind - 321" << endl;
                cout << "\nYou can go back to menu and take the tickets" << endl;
            }
            case 3:
            {
                charges = 13000;
                cout << "\nYou have successfully booked the flight Ind - 587" << endl;
                cout << "\nYou can go back to menu and take the tickets" << endl;
            }
            case 4:
            {
                charges = 17000;
                cout << "\nYou have successfully booked the flight Ind - 656" << endl;
                cout << "\nYou can go back to menu and take the tickets" << endl;
            }

            default:
            {
                cout << "Invalid input, shifting to the privious menu" << endl;
                flight();
            }
            break;
            }
            cout << "Press any key to go back to main menu" << endl;
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
        break;

        default:
        {
            cout << "Invalid input, shifting to the privious menu" << endl;
            flight();
        }
        break;
        }
        cout << "Press any key to go back to main menu" << endl;
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
};

float Registration ::charges;
int Registration ::choice;
class Ticket : public Registration, public Details
{
public:
    void Bill()
    {
        string destination = "";
        ofstream outf("records.txt");
        {
            // outf << "___________________XYZ Airlines________________\n";
            // outf << "___________________ Tickets ____________________\n";
            // outf << "________________________________________________\n";

            outf << "Customer ID : " << Details::cId << endl;
            outf << "Customer Name : " << Details::name << endl;
            outf << "Customer Gender : " << Details::gender << endl;
            outf << "Description :  \n" << endl;

            if (Registration::choice == 1)
            {
                destination = "Dubai";
            }
            else if (Registration::choice == 2)
            {
                destination = "Canada";
            }
            else if (Registration::choice == 3)
            {
                destination = "UK";
            }
            else if (Registration::choice == 4)
            {
                destination = "USA";
            }
            else if (Registration::choice == 5)
            {
                destination = "Europ";
            }
            else if (Registration::choice == 6)
            {
                destination = "India";
            }
            outf << "\tDestination\t\t" << destination << endl;
            outf << "\tFlights cost : \t\t" << Registration::charges << endl;
            outf.close();
        }
    }
    void display()
    {
        ifstream ifs("records.txt");
        char arr[100];

        if (!ifs)
        {
            cout << "File error!" << endl;
            return;
        }

        while (ifs.getline(arr, 100))
        {
            cout << arr << endl;
        }

        ifs.close();
    }
};

int main()
{
    Management Mobj;

    return 0;
}

void mainMenu()
{
    int lchoice;
    int schoice;
    int back;

    cout << "\t                       XYZ Airlines  \n"
         << endl;
    cout << "\t ________________________Main Menu______________________" << endl;
    cout << "\t _______________________________________________________" << endl;
    cout << "\t|\t\t\t\t\t\t\t|" << endl;

    cout << "\t|\t Press 1 to add the Customer Details    \t|" << endl;
    cout << "\t|\t Press 2 for Flight registration        \t|" << endl;
    cout << "\t|\t Press 3 for Ticket charges             \t|" << endl;
    cout << "\t|\t Press 4 to Exit                        \t|" << endl;
    cout << "\t|\t\t\t\t\t\t\t|" << endl;
    cout << "\t _______________________________________________________" << endl;

    cout << "Enter the choice : ";
    cin >> lchoice;

    Details d;
    Registration r;
    Ticket t;

    switch (lchoice)
    {
    case 1:
    {
        cout << "____________________Customers_______________\n"
             << endl;
        d.information();
        cout << "Press 1 to go back to Main menu" << endl;
        cin >> back;
        if (back != 1)
        {
            mainMenu();
        }
        else
        {
            mainMenu();
        }
        break;
    }
    case 2:
    {
        cout << "_________Book a flight using this system___________\n"
             << endl;
        r.flight();
        break;
    }
    case 3:
    {
        cout << "_______Get you Ticket________\n"
             << endl;
        t.Bill();
        cout << "Your ticket is priented, you can collect it \n"
             << endl;
        cout << "Press 1 to display your ticket" << endl;

        cin >> back;
        if (back == 1)
        {
            t.display();
            cout << "Press any key to go back to main menu";
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
    }
    case 4:
        cout << "\n\n\t___________Thank You_____________" << endl;
        break;
    default:
    {
        cout << "Invalid input please try again \n  " << endl;
        // mainMenu();
    }
    break;
    }
}