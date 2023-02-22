#include <iostream>
#include <windows.h>
#include <conio.h>
#include <sstream>
using namespace std;
void header();
void header2();
void adminInterfaceHeader();
void adminMenu();
bool customerSignIn(string name, string pass);
bool AdminSignIn(string name, string pass);
void mainScreen();
string admnOrCust();
void signUp();
void signIn();
void menuthingsAdmin();
void adminMenuChoice2();
bool isValid(string amount, int length);
void adminMenuChoice3();
void adminMenuChoice4();
void adminMenuChoice5();
void adminMenuChoice6();
void adminMenuChoice7();
void adminMenuChoice8();
void customerMenuChoice2();
void customerMenuChoice3();
void customerMenuChoice4();
void customerMenuChoice6();
void customerMenuChoice7();
void customerMenuChoice8();
int customerMenuChoice9half();
void customerMenuChoice9();
int discountFunc(string discount);
int cngPrcVld(string priceUp);
int addOrder(string temp);
int addOrderN(string numberofItem);
int moreOrder(string temp);
int moreOrderN(string moreItem);
int cashInt(string cash);
int positionRInt(string positionR);
int ratingInt(string rating);
int numOfBuyingItemInt(string numberOfbuyingItem);

const int length = 50;
string adminUserName[length];
string adminPassword[length];
string custUserNames[length];
string custPasswords[length];
string menuThings[length] = {"Doughnuts", "CupCakes", "Pastery", "Cookies", "Bread", "Cakes"};
int thingsPrices[length] = {60, 70, 100, 120, 90, 500};
int custCounter = 0, adminCounter = 0, count = 6;
string choiceMainScreen;
int selectedItemPrice[length];
string selectedItem[length];
int cart[length];
string numberofItem; // validation also locally
int amountOfSelectedItem[length];
string moreItem; // can make locally
int moreItema;
int totalPrice;
string ratingName[length];
int ratingCollector[length];
int recomN[length];
string recomW[length];
int rattingCounter = 0;
int recCounter = 0;
string positionR;
int positionRa;
string discountName;
string discount;
string priceUp;
int numberofItema;
string numberOfbuyingItem;

main()
{
    header2();

    while (choiceMainScreen != "3")
    {
        mainScreen();
    }
}

void header()
{
    cout << "***********************************************************" << endl;
    cout << "******************------------------------*****************" << endl;
    cout << "******************Bakery Management System*****************" << endl;
    cout << "******************------------------------*****************" << endl;
    cout << "***********************************************************" << endl;
}

void header2()
{
    cout << "***********************************************************" << endl;
    cout << "******************------------------------*****************" << endl;
    cout << "******************Bakery Management System*****************" << endl;
    cout << "******************------------------------*****************" << endl;
    cout << "***********************************************************" << endl;
    cout << "press any key to continue";
    getch();
}

void adminInterfaceHeader()
{
    header();
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "*************WELCOME TO THE INTERFACE OF ADMIN***************" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

void customerInterfaceHeader()
{
    header();
    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "*************WELCOME TO THE INTERFACE OF Customer************" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}
void customerMenu()
{
    string choiceCustomerMenu;
    system("cls");
    while (choiceCustomerMenu != "11")
    {
        // system("cls");
        customerInterfaceHeader();
        cout << "1)To see Food menu" << endl;
        cout << "2)To select the amount of items he want to buy" << endl;
        cout << "3)Update order" << endl;
        cout << "4)To place order" << endl;
        cout << "5)To cancel order" << endl; // remaining
        cout << "6)To check whether discount is available or not" << endl;
        cout << "7)To pay bill" << endl;
        cout << "8)Can update login password" << endl;
        cout << "9)Rating" << endl;
        cout << "10)Can see Recommendations" << endl;
        cout << "11)To exit" << endl;
        cout << "Enter choice:";
        cin >> choiceCustomerMenu;

        if (choiceCustomerMenu == "1")
        {
            system("cls");
            menuthingsAdmin();
        }
        else if (choiceCustomerMenu == "2")
        {
            system("cls");
            menuthingsAdmin();
            customerMenuChoice2();
        }
        else if (choiceCustomerMenu == "3")
        {
            system("cls");
            menuthingsAdmin();
            customerMenuChoice3();
        }
        else if (choiceCustomerMenu == "4")
        {
            system("cls");
            customerMenuChoice4();
        }
        else if (choiceCustomerMenu == "5")
        {
            // menuthingsAdmin();
        }
        else if (choiceCustomerMenu == "6")
        {
            system("cls");
            customerMenuChoice6();
        }
        else if (choiceCustomerMenu == "7")
        {
            system("cls");
            customerMenuChoice7();
        }
        else if (choiceCustomerMenu == "8")
        {
            system("cls");
            customerMenuChoice8();
        }
        else if (choiceCustomerMenu == "9")
        {
            system("cls");
            menuthingsAdmin();
            customerMenuChoice9();
        }
        else if (choiceCustomerMenu == "10")
        {
            system("cls");
            adminMenuChoice7();
        }
        else
        {
            system("cls");
            cout << "Invalid input" << endl;
            cout << "Try Again" << endl;
        }
    }
    system("cls");
}
void adminMenu() 
{
    string choiceAdminMenu;
    system("cls");
    while (choiceAdminMenu != "9")
    {
        adminInterfaceHeader();
        cout << "1)To see Menu" << endl;
        cout << "2)To add number of Item in Menu" << endl;
        cout << "3)To Delete Item in Menu" << endl;
        cout << "4)To Update price of any item in Menu" << endl;
        cout << "5)To Give discount on any item" << endl;
        cout << "6)To Check feedbacks" << endl; 
        cout << "7)To Add Recommendations" << endl;
        cout << "8)To Display Bill" << endl;
        cout << "9)sign out" << endl;
        cout << "Enter choice";
        cin >> choiceAdminMenu;

        if (choiceAdminMenu == "1")
        {
            system("cls");
            menuthingsAdmin();
        }
        else if (choiceAdminMenu == "2")
        {
            system("cls");
            adminMenuChoice2();
        }
        else if (choiceAdminMenu == "3")
        {
            system("cls");
            menuthingsAdmin();
            adminMenuChoice3();
        }
        else if (choiceAdminMenu == "4")
        {
            system("cls");
            menuthingsAdmin();
            adminMenuChoice4();
        }
        else if (choiceAdminMenu == "5")
        {
            system("cls");
            menuthingsAdmin();
            adminMenuChoice5();
        }
        else if (choiceAdminMenu == "6")
        {
            adminMenuChoice6();
        }
        else if (choiceAdminMenu == "7")
        {
            adminMenuChoice7();
        }
        else if (choiceAdminMenu == "8")
        {
            system("cls");
            adminMenuChoice8();
        }
        else
        {
            system("cls");
            cout << "Invalid choice " << endl;
            cout << "Try Again" << endl;
        }
    }
}

void mainScreen()
{
    system("cls");
    header();
    cout << "1) Sign Up" << endl;
    cout << "2) Sign In" << endl;
    cout << "3) Exit" << endl;
    cout << "Enter your choice: " << endl;
    cin >> choiceMainScreen;

    if (choiceMainScreen == "1")
    {
        signUp();
    }
    else if (choiceMainScreen == "2")
    {
        signIn();
    }
    else if (choiceMainScreen == "3")
    {
        cout << "going to exit" << endl;
    }
    else
    {
        cout << "Invalid Input" << endl;
        cout << "Try Again" << endl;
        Sleep(500);
    }
}

string admnOrCust()
{
    string choiceType;
    system("cls");
    header();

    cout << "Enter choice" << endl;
    cout << "1)As an Admin" << endl;
    cout << "2)As a Customer" << endl;
    cout << "Enter choice: ";
    cin >> choiceType;

    return choiceType;
}

void signUp()
{
    string choiceType = admnOrCust();
    system("cls");

    header();
    if (choiceType == "1")
    {
        cout << "Enter your name: ";
        cin >> adminUserName[adminCounter];
        cout << "Enter your password: ";
        cin >> adminPassword[adminCounter];
        adminCounter++;
        cout << "Admin added successfully" << endl;
        Sleep(500);
    }
    else if (choiceType == "2")
    {
        cout << "Enter your name: ";
        cin >> custUserNames[custCounter];
        cout << "Enter your password: ";
        cin >> custPasswords[custCounter];
        custCounter++;
        cout << "Customer added successfully" << endl;
        Sleep(500);
    }
    else
    {
        cout << "Invalid choice" << endl;
        Sleep(500);
    }
}

void signIn()
{
    string choiceType = admnOrCust();
    system("cls");
    header();
    string name = "", pass = "";
    bool isValid = false;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your password: ";
    cin >> pass;

    if (choiceType == "1")
    {
        isValid = AdminSignIn(name, pass);
        if (isValid)
        {
            adminMenu();
        }
    }
    else if (choiceType == "2")
    {
        isValid = customerSignIn(name, pass);
        if (isValid)
        {
            customerMenu();
        }
    }
    else
    {
        cout << "Invalid choice" << endl;
        Sleep(500);
    }

    if (isValid == false)
    {
        cout << "Invalid username or password" << endl;
        Sleep(1000);
    }
}

bool AdminSignIn(string name, string pass) 
{
    bool flagA = false;
    for (int i = 0; i < length; i++)
    {
        if (name == adminUserName[i] && pass == adminPassword[i])
        {
            flagA = true;
            break;
        }
        else
        {
            flagA = false;
        }
    }
    return flagA;
}

bool customerSignIn(string name, string pass)
{
    bool flagC = false;
    for (int i = 0; i < length; i++)
    {
        if (name == custUserNames[i] && pass == custPasswords[i])
        {
            flagC = true;
            break;
        }
        else
        {
            flagC = false;
        }
    }
    return flagC;
}

void menuthingsAdmin()
{
    for (int i = 0; i < count; i++)
    {
        cout << i + 1 << "-" << menuThings[i] << "............" << thingsPrices[i] << endl;
    }
}

void adminMenuChoice2()
{
    string amount;
    cout << "Enter number of item you want to add" << endl;
    cin >> amount;
    int length = amount.length();
    bool check = isValid(amount, length);

    int amounta;
    stringstream ss;
    ss << amount;
    ss >> amounta;

    if (check == true)
    {
        for (int i = 0; i < amounta; i++)
        { // if(count<50)else(invalid)
            cout << "Enter the name of item you want to add" << endl;
            cin >> menuThings[count];

            cout << "Enter Price of item" << endl;
            cin >> thingsPrices[count];

            count++;
            cout << "Item has been Added Successfully" << endl;
        }
    }
    else
    {
        cout << "Invalid input" << endl;
        cout << "Try Again" << endl;
    }
}

void adminMenuChoice3()
{
    string position;
    cout << "Enter position of item you want to remove" << endl;
    cin >> position;
    int lengtha = position.length();
    bool check = isValid(position, lengtha);

    int positiona;
    stringstream ss;
    ss << position;
    ss >> positiona;

    if (check == true)
    {
        for (int i = positiona; i < count; i++)
        {
            menuThings[i - 1] = menuThings[i];
            thingsPrices[i - 1] = thingsPrices[i];
        }
        count--;
        cout << "Item has been Removed Successfully" << endl;
    }
    else
    {
        cout << "Invalid Input" << endl;
        cout << "Try Again" << endl;
    }
}

void adminMenuChoice4()
{
    string position;

    cout << "Enter position of item";
    cin >> position;
    int lengthe = position.length();
    bool checke = isValid(position, lengthe);
    int positiona;
    stringstream ss;
    ss << position;
    ss >> positiona;

    cout << "Enter new price:";
    cin >> priceUp;
    int lengthd = priceUp.length();
    bool checkd = isValid(priceUp, lengthd);

    int pricea = cngPrcVld(priceUp);
    if (checkd == true && checke == true)
    {
        for (int i = 0; i < count; i++)
        {
            if (i == positiona - 1)
            {
                thingsPrices[i] = pricea;
            }
            else
            {
                cout << "Invalid Input" << endl;
            }
        }
        cout << "Price has been updated Successfully" << endl;
    }
    else
    {
        cout << "Invalid Input" << endl;
        cout << "Try Again" << endl;
    }
}

int cngPrcVld(string priceUp)
{
    int pricea;
    stringstream ss;
    ss << priceUp;
    ss >> pricea;
    return pricea;
}
void adminMenuChoice5()
{
    string position;
    int temp;
    cout << "Enter position of item you want to give discount: " << endl;
    cin >> position;
    int lengthb = position.length();
    bool check = isValid(position, lengthb);

    int positiona;
    stringstream ss;
    ss << position;
    ss >> positiona;

    cout << "Enter the percentage of discount you want to add: ";
    cin >> discount;
    int lengthc = discount.length();
    bool checkd = isValid(discount, lengthc);

    int discounta = discountFunc(discount);

    if (check == true && checkd == true)
    {
        for (int i = 0; i < count; i++)
        {
            if (i == (positiona - 1))
            {
                temp = (thingsPrices[i] * discounta) / 100;
                thingsPrices[i] = thingsPrices[i] - temp;
            }
        }
        discountName = menuThings[positiona - 1];
        cout << "Discount has been added Successfully" << endl;
    }
    else
    {
        cout << "Invalid Input" << endl;
        cout << "Try Again" << endl;
    }
}

int discountFunc(string discount)
{
    int discounta;
    stringstream ss;
    ss << discount;
    ss >> discounta;
    return discounta;
}

void adminMenuChoice6()
{
    for (int i = 0; i < rattingCounter; i++)
    {
        cout << ratingName[i] << "......" << ratingCollector[i] << endl;
    }
}
void adminMenuChoice7()
{
    for (int i = 0; i < recCounter; i++)
    {
        for (int j = i + 1; j < recCounter; j++)
        {
            if (recomN[i] < recomN[j])
            {
                int tempR2 = recomN[i];
                recomN[i] = recomN[j];
                recomN[j] = tempR2;

                string tempR = recomW[i];
                recomW[i] = recomW[j];
                recomW[j] = tempR;
            }
        }
    }
    cout << "Famous item in our menu is '" << recomW[0] << "' because it has the highest ratting of '" << recomN[0] << "' stars" << endl;
}

void adminMenuChoice8()
{
    totalPrice = 0;
    cout << "Your bill is:" << endl;
    for (int j = 0; j < numberofItema + moreItema; j++)
    {
        selectedItem[j] = menuThings[cart[j]];
        selectedItemPrice[j] = thingsPrices[cart[j]] * amountOfSelectedItem[j];
        cout << selectedItem[j] << "\t" << selectedItemPrice[j] << endl;

        totalPrice = totalPrice + selectedItemPrice[j];
    }
    cout << "Total"
         << "\t" << totalPrice << endl;
}

void customerMenuChoice2() // agr order update hota ha or user dobara wohi cheez jo phly order ki hoi ha usi
{                          // ki or amount leta ha to woh phly wali main plus ho k aayy bill main
    string temp;           // abhi separete show ho rah ha

    cout << "Enter the amount of items you want to buy: ";
    cin >> numberofItem;
    int lengthg = numberofItem.length();
    bool checkg = isValid(numberofItem, lengthg);
    numberofItema = addOrderN(numberofItem);

    if (checkg == true)
    {
        for (int i = 0; i < numberofItema; i++)
        {
            cout << "Enter the position of item in the menu:";
            cin >> temp;
            int lengthf = temp.length();
            bool checkf = isValid(temp, lengthf);
            int tempa = addOrder(temp);
            if (checkf == true)
            {
                /* for (int i = 0; i < count; i++)                    // it works if choice > than things in menu no response
                 {
                     if(i!=tempa - 1)
                     {
                         cout<<"Item not in the menu "<<endl;
                         cout<<"Try Again"<<endl;
                     }*/
                //if (i == tempa - 1)
                //{
                    cart[i] = tempa - 1;
                    cout << "how many " << menuThings[cart[i]] << " you want to buy: ";
                    cin >> numberOfbuyingItem;
                    int lengtho = numberOfbuyingItem.length();
                    bool checko = isValid(numberOfbuyingItem, lengtho);
                    int numberOfbuyingItema = numOfBuyingItemInt(numberOfbuyingItem);
                    if (checko == true)
                    {
                        amountOfSelectedItem[i] = numberOfbuyingItema;
                    }
                    else
                    {
                        cout << "Invalid Input" << endl;
                        cout << "Try Again" << endl;
                    }
                //}
            }
            else
            {
                cout << "Invalid Input" << endl;
                cout << "Try Again" << endl;
                break;
            }
        }
    }
    else
    {
        cout << "Invalid Input" << endl;
        cout << "Try Again" << endl;
    }
}

int addOrder(string temp)
{
    int tempa;
    stringstream ss;
    ss << temp;
    ss >> tempa;
    return tempa;
}

int addOrderN(string numberofItem)
{
    int numberofItema;
    stringstream ss;
    ss << numberofItem;
    ss >> numberofItema;
    return numberofItema;
}

void customerMenuChoice3() // experiment
{
    string temp;
    cout << "Enter number of item you want to add more";
    cin >> moreItem;
    int lengthj = numberofItem.length();
    bool checkj = isValid(numberofItem, lengthj);

    moreItema = moreOrderN(moreItem);

    if (checkj == true)
    {
        for (int i = numberofItema; i < numberofItema + moreItema; i++)
        {
            cout << "Enter the position of item in the menu:";
            cin >> temp;
            int lengthi = temp.length();
            bool checki = isValid(temp, lengthi);
            int tempa = moreOrder(temp);

            if (checki == true)
            {
                cart[i] = tempa - 1;
                cout << "how many " << menuThings[cart[i]] << " you want to buy: ";
                cin >> numberOfbuyingItem;
                int lengtho = numberOfbuyingItem.length();
                bool checko = isValid(numberOfbuyingItem, lengtho);
                int numberOfbuyingItema = numOfBuyingItemInt(numberOfbuyingItem);
                if (checko == true)
                {
                    amountOfSelectedItem[i] = numberOfbuyingItema;
                    cout << "New item has been added to the order Successfully" << endl;
                }
                else
                {
                    cout << "Invalid Input" << endl;
                    cout << "Try Again" << endl;
                }
            }
            else
            {
                cout << "Invalid Input" << endl;
                cout << "Try Again" << endl;
                break;
            }
        }
    }
    else
    {
        cout << "Invalid Input" << endl;
        cout << "Try Again" << endl;
    }
}
int numOfBuyingItemInt(string numberOfbuyingItem)
{
    int numberOfbuyingItema;
    stringstream ss;
    ss << numberOfbuyingItem;
    ss >> numberOfbuyingItema;
    return numberOfbuyingItema;
}

int moreOrder(string temp)
{
    int tempa;
    stringstream ss;
    ss << temp;
    ss >> tempa;
    return tempa;
}
int moreOrderN(string moreItem)
{
    int moreItema;
    stringstream ss;
    ss << moreItem;
    ss >> moreItema;
    return moreItema;
}

void customerMenuChoice4()
{

    for (int j = 0; j < numberofItema + moreItema; j++)
    {
        selectedItem[j] = menuThings[cart[j]];
        selectedItemPrice[j] = thingsPrices[cart[j]] * amountOfSelectedItem[j];
        cout << selectedItem[j] << "............." << selectedItemPrice[j] << endl;
    }
    cout << "Your order has been placed" << endl;
}

void customerMenuChoice6()
{
    cout << discountName << ", is on " << discount << "% discount" << endl;
}

void customerMenuChoice7()
{
    adminMenuChoice8();
    string cash;
    cout << "Enter Cash to pay bill:";
    cin >> cash;
    int lengthk = cash.length();
    bool checkk = isValid(cash, lengthk);
    int casha = cashInt(cash);

    int change;
    if (checkk == true)
    {
        while (totalPrice > casha)
        {
            cout << "Your Cash is less then bill" << endl;

            cout << "Add more Cash" << endl;

            cout << "Enter Cash to pay bill:";
            cin >> cash;
            int lengthl = cash.length();
            bool checkl = isValid(cash, lengthl);

            if (checkl == false)
            {
                cout << "Invalid Input" << endl;
                cout << "Try Again" << endl;
                break;
            }
            else
            {
                casha = cashInt(cash);
            }
        }

        if (totalPrice < casha)
        {
            change = casha - totalPrice;
            cout << "Your change:" << change << endl;
        }
        else if (totalPrice == casha)
        {
            cout << "Thank You For choosing This bakery" << endl;

            cout << "Have a Nice Day" << endl;
        }
    }
    else
    {
        cout << "Invalid Input" << endl;
        cout << "Try Again" << endl;
    }
}

int cashInt(string cash)
{
    int casha;
    stringstream ss;
    ss << cash;
    ss >> casha;
    return casha;
}

void customerMenuChoice8() // reamaining valid
{
    string prevPass, newPassword;
    cout << "Enter your previous password:";
    cin >> prevPass;
    cout << "Enter new password:";
    cin >> newPassword;
    for (int i = 0; i < custCounter; i++)
    {
        if (prevPass == custPasswords[i])
        {
            custPasswords[i] = newPassword;
        }
    }
    cout << "Your Password has been updated:" << endl;
    Sleep(500);
}

void customerMenuChoice9()
{
    string rating;
    cout << "Enter the position of item you want to give rating";
    cin >> positionR;
    int lengthm = positionR.length();
    bool checkm = isValid(positionR, lengthm);
    positionRa = positionRInt(positionR);
    if (checkm == true)
    {
        if (positionRa <= count)
        {
            for (int i = 0; i < count; i++)
            {
                if (i == positionRa - 1)
                {
                    cout << "Enter rating from (1-5)";
                    cin >> rating;
                    int lengthn = rating.length();
                    bool checkn = isValid(rating, lengthn);
                    int ratinga = ratingInt(rating);
                    if (checkn == true)
                    {
                        if (ratinga > 5 && ratinga < 0)
                        {
                            cout << "Invalid input" << endl;
                            cout << "Try again" << endl;
                        }
                        else
                        {
                            ratingCollector[rattingCounter] = ratinga;
                            recomN[recCounter] = ratinga;
                            ratingName[rattingCounter] = menuThings[positionRa - 1];
                            recomW[recCounter] = menuThings[positionRa - 1];
                            cout << "Thanks for your remarks" << endl;
                            cout << ratingName[rattingCounter] << "......" << ratingCollector[rattingCounter] << endl; 
                            rattingCounter++;
                            recCounter++;
                        }
                    }
                    else
                    {
                        cout << "Invalid Input" << endl;
                        cout << "Try again" << endl;
                    }
                }
            }
        }
        else
        {
            cout << "Item is not in the menu" << endl;
            cout << "Try again" << endl;
        }
    }
    else
    {
        cout << "Invalid Input" << endl;
        cout << "Try again" << endl;
    }
}
int positionRInt(string positionR)
{
    int positionRa;
    stringstream ss;
    ss << positionR;
    ss >> positionRa;
    return positionRa;
}

int ratingInt(string rating)
{
    int ratinga;
    stringstream ss;
    ss << rating;
    ss >> ratinga;
    return ratinga;
}

bool isValid(string amount, int length)
{
    bool check = false;
    int count = 0;
    for (int i = 0; i <= length; i++)
    {
        if (amount[i] >= 48 && amount[i] <= 57)
        {
            count++;
        }
    }
    if (count == length)
    {
        check = true;
    }
    return check;
}
