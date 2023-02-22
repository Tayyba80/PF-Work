#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
void printMaze();
void logo();
void name();
void printRobo();
void printSniper();
void printMech();
void printScorpius();
void moveMech();
void eraseMech();
void moveRoboDown();
void moveRoboUp();
void moveSniper();
void eraseSniper();
void moveScorpius();
void eraseScorpius();
void generateBullet();
void generateSniperBullet();
void printSniperBullet(int x, int y);
void eraseSniperBullet(int x, int y);
void moveSniperBullet();
void moveBullet();
void printBullet(int x, int y);
void eraseBullet(int x, int y);
void makeBulletInactive(int idx);
void makeSniperBulletInactive(int idx);
void generateMechBullet();
void printMechBullet(int x, int y);
void moveMechBullet();
void eraseMechBullet(int x, int y);
void makeMechBulletInactive(int idx);
void generateScorpiusBullet();
void printScorpiusBullet(int x, int y);
void moveScorpiusBullet();
void eraseScorpiusBullet(int x, int y);
void makeScorpiusBulletInactive(int idx);
void addScore();
void printScore();
void powerOfRobo();
void printPowerOfRobo();
void powerOfSniper();
void printPowerOfSniper();
void powerOfMech();
void printPowerOfMech();
void powerOfScorpius();
void printPowerOfScorpius();
void gotoxy(int x, int y);
char getCharAtxy(short int x, short int y);
void bulletCollionWithSniper();
void bulletCollionWithMech();
void bulletCollionWithScorpius();

void bulletCollisionWithRobo();
void eraseRobo();

int score = 0;
int roboPower = 600;
int sniperPower = 150;
int mechPower = 100;
int scorpiusPower = 250;
int snipertimer = 0;
int sniperBulletTimer = 0;
int scorpiusBulletTimer = 0;
int mechBulletTimer = 0;
int mechTimer = 0;
int scorpiusTimer = 0;
string sniperDirection = "Down";
string mechDirection = "Down";
string scorpiusDirection = "Down";

char face = 12, body = 127, leg = 227, arrow = 175;
char robo1[6] = {' ', face, ' ', '=', '=', arrow};
char robo2[3] = {'{', ' ', '}'};
char robo3[2] = {' ', leg};

char sniper[6] = {' ', ' ', ' ', '-', '-', '-'};
char sniper2[6] = {'<', '=', '=', '(', '-', '('};
char sniper3[6] = {' ', ' ', ' ', '\\', '@', '/'};
char sniper4[6] = {' ', ' ', ' ', '*', '*', '*'};

char face2 = 15, leg1 = 94;
char mech1[5] = {'<', '=', '=', ' ', face2};
char mech2[6] = {' ', ' ', ' ', '(', ' ', ')'};
char mech3[6] = {' ', ' ', ' ', ' ', leg1, ' '};

char face3 = 147, leg2 = 94;
char scorpius1[5] = {'<', '=', '=', ' ', face3};
char scorpius2[6] = {' ', ' ', ' ', '[', ' ', ']'};
char scorpius3[6] = {' ', ' ', ' ', ' ', leg2, ' '};

int roboX = 5;
int roboY = 5;

int sniperX = 30;
int sniperY = 12;

int mechX = 62;
int mechY = 2;

int scorpiusX = 80;
int scorpiusY = 23;

int bulletX[10000];
int bulletY[10000];
bool isBulletActive[10000];
int bulletCount = 0;

int sniperbulletX[10000];
int sniperbulletY[10000];
bool isSniperBulletActive[10000];
int sniperbulletCount = 0;

int mechbulletX[10000];
int mechbulletY[10000];
bool isMechBulletActive[10000];
int mechbulletCount = 0;

int scorpiusbulletX[10000];
int scorpiusbulletY[10000];
bool isScorpiusBulletActive[10000];
int scorpiusbulletCount = 0;
string choice;

main()
{
    logo();
    system("cls");
    name();
}

void keys()
{
    cout << "**********************KEYS***********************" << endl;
    cout << "Press Up key to move Up" << endl;
    cout << "Press Down key to move Down" << endl;
    cout << "Press Space key to shoot" << endl;
}
void instructions()
{
    cout << "***************************INSTRUCTIONS***************************" << endl;
    cout << "Kill enemy robot to gain power" << endl;
    cout << "Every time you shoot an enemy your score will be multiplied" << endl;
    cout << "save the player robot from the bullet of enemy robot" << endl;
}

void aboutGame()
{
    string key;
    while (key != "3")
    {
        cout << "1.keys" << endl;
        cout << "2.Instructions" << endl;
        cout << "3.exit" << endl;
        cout << "Enter your option:" << endl;
        cin >> key;

        if (key == "1")
        {
            system("cls");
            keys();
            cout<<endl;
            cout << "Press any key to go back";
            getch();
            system("cls");
            aboutGame();
        }
        else if (key == "2")
        {
            system("cls");
            instructions();
            cout<<endl;
            cout << "Press any key to go back" << endl;
            getch();
            system("cls");
            aboutGame();
        }
        else if (key == "3")
        {
        	system("cls");
            name();
        }
    }
}

void logo()
{
    cout << "                   ()                                 " << endl;
    cout << "               ___________                            " << endl;
    cout << "              /    < >    \\                          " << endl;
    cout << "             |             |                          " << endl;
    cout << "           __|_____________|__                        " << endl;
    cout << "          |  |  =   =   =  |  |                       " << endl;
    cout << "          |  |             |  |                       " << endl;
    cout << "          |__|      o      |__|                       " << endl;
    cout << "           | |      o      | |                        " << endl;
    cout << "           | |             | |                        " << endl;
    cout << "           | | ____ * ____ | |                        " << endl;
    cout << "          .~ |             | ~.                       " << endl;
    cout << "           |  \\___________/  |                       " << endl;
    cout << "          /==\\    /==\\     /==\\                    " << endl;
    cout << "         [ __ ]  [ __ ]   [ __ ]                      " << endl;
    cout << endl;
    cout << "Press any key to continue" << endl;
    getch();
}

void name()
{
    cout << "    __________      ___.           __     __      __                _____                  " << endl;
    cout << "\\______   \\____\\_ |__   _____/  |_  / \\    / \\_____ ________/ ____\\____ _______ ____  " << endl;
    cout << " |       _//  _ \\| __ \\/  _ \\  __\\  \\/\\/  /\\__ \\_  __\\   __\\__  \\_  __\\_/ __\\ " << endl;
    cout << " |    |   (  <_> )\\_\\(  <_> )  |   \\        /  / __\\|  |\\/|  |   / __\\|  |\\/\\ ___/ " << endl;
    cout << " |____|_  //\\____/|___  /\\___//|__|  \\__/\\ /  (____  /__|   |__|  (____  /__|   \\___  >" << endl;
    cout << "        \\/          \\/                    \\/       \\/                 \\/           \\/ " << endl;
    cout << endl;
    cout << "1-Start" << endl;
    cout << "2-Option" << endl;
    cout << "3-Exit" << endl;
    cout << "Enter your choice:";
    cin >> choice;
    if (choice == "1")
    {
        bool runningGame = true;
        system("cls");
        printMaze();
        printRobo();
        printSniper();
        printMech();
        printScorpius();
        while (runningGame)
        {
            printScore();
            bulletCollisionWithRobo();
            printPowerOfRobo();
            printPowerOfSniper();
            printPowerOfMech();
            printPowerOfScorpius();

            if (GetAsyncKeyState(VK_UP))
            {
                moveRoboUp();
            }
            if (GetAsyncKeyState(VK_DOWN))
            {
                moveRoboDown();
            }
            if (GetAsyncKeyState(VK_SPACE))
            {
                generateBullet();
            }
            moveBullet();
            if (snipertimer == 2 && sniperPower > 0)
            {
                moveSniper();
                snipertimer = 0;
            }
            moveSniperBullet();

            if (mechTimer == 3 && mechPower > 0)
            {
                moveMech();
                mechTimer = 0;
            }
            moveMechBullet();

            if (scorpiusTimer == 2 && scorpiusPower > 0)
            {
                moveScorpius();
                scorpiusTimer = 0;
            }
            moveScorpiusBullet();

            if (sniperPower > 0)
            {
                bulletCollionWithSniper();
            }
            snipertimer++;
            if (mechPower > 0)
            {
                bulletCollionWithMech();
            }
            mechTimer++;
            if (scorpiusPower > 0)
            {
                bulletCollionWithScorpius();
            }
            scorpiusTimer++;
            Sleep(70);

            if (sniperPower == 0)
            {
                eraseSniper();
            }
            if (mechPower == 0)
            {
                eraseMech();
            }
            if (scorpiusPower == 0)
            {
                eraseScorpius();
            }
            if (GetAsyncKeyState(VK_ESCAPE))
            {
                runningGame = false;
                system("cls");
            }
        }
    }
    else if (choice == "2")
    {
        system("cls");
        aboutGame();
    }
    else if (choice == "3")
    {
        cout<<"Going to exit";
        Sleep(90);
        system("cls");
    }
}
void printMaze()
{
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "| |                                                                                                     | |" << endl;
    cout << "| |                                                                                                     | |" << endl;
    cout << "| |                                                                                                     | |" << endl;
    cout << "| |                                                                                                     | |" << endl;
    cout << "| |                                                                                                     | |" << endl;
    cout << "| |                                                                                                     | |" << endl;
    cout << "| |                                                                                                     | |" << endl;
    cout << "| |                                                                                                     | |" << endl;
    cout << "| |                                                                                                     | |" << endl;
    cout << "| |                                                                                                     | |" << endl;
    cout << "| |                                                                                                     | |" << endl;
    cout << "| |                                                                                                     | |" << endl;
    cout << "| |                                                                                                     | |" << endl;
    cout << "| |                                                                                                     | |" << endl;
    cout << "| |                                                                                                     | |" << endl;
    cout << "| |                                                                                                     | |" << endl;
    cout << "| |                                                                                                     | |" << endl;
    cout << "| |                                                                                                     | |" << endl;
    cout << "| |                                                                                                     | |" << endl;
    cout << "| |                                                                                                     | |" << endl;
    cout << "| |                                                                                                     | |" << endl;
    cout << "| |                                                                                                     | |" << endl;
    cout << "| |                                                                                                     | |" << endl;
    cout << "| |                                                                                                     | |" << endl;
    cout << "| |                                                                                                     | |" << endl;
    cout << "| |                                                                                                     | |" << endl;
    cout << "| |                                                                                                     | |" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
}
void printRobo()
{
    gotoxy(roboX, roboY);
    for (int idx = 0; idx < 6; idx++)
    {
        cout << robo1[idx];
    }
    gotoxy(roboX, roboY + 1);
    for (int idx = 0; idx < 3; idx++)
    {
        cout << robo2[idx];
    }
    gotoxy(roboX, roboY + 2);
    for (int idx = 0; idx < 2; idx++)
    {
        cout << robo3[idx];
    }
}
void printSniper()
{
    gotoxy(sniperX, sniperY);
    for (int idx = 0; idx < 6; idx++)
    {
        cout << sniper[idx];
    }

    gotoxy(sniperX, sniperY + 1);
    for (int idx = 0; idx < 6; idx++)
    {
        cout << sniper2[idx];
    }

    gotoxy(sniperX, sniperY + 2);
    for (int idx = 0; idx < 6; idx++)
    {
        cout << sniper3[idx];
    }

    gotoxy(sniperX, sniperY + 3);
    for (int idx = 0; idx < 6; idx++)
    {
        cout << sniper4[idx];
    }
}

void printMech()
{
    gotoxy(mechX, mechY);
    for (int idx = 0; idx < 5; idx++)
    {
        cout << mech1[idx];
    }
    gotoxy(mechX, mechY + 1);
    for (int idx = 0; idx < 6; idx++)
    {
        cout << mech2[idx];
    }
    gotoxy(mechX, mechY + 2);
    for (int idx = 0; idx < 6; idx++)
    {
        cout << mech3[idx];
    }
}

void printScorpius()
{
    gotoxy(scorpiusX, scorpiusY);
    for (int idx = 0; idx < 5; idx++)
    {
        cout << scorpius1[idx];
    }
    gotoxy(scorpiusX, scorpiusY + 1);
    for (int idx = 0; idx < 6; idx++)
    {
        cout << scorpius2[idx];
    }
    gotoxy(scorpiusX, scorpiusY + 2);
    for (int idx = 0; idx < 6; idx++)
    {
        cout << scorpius3[idx];
    }
}

void moveRoboUp()
{
    char next = getCharAtxy(roboX, roboY - 1);
    if (next == ' ')
    {
        eraseRobo();
        roboY = roboY - 1;
        printRobo();
    }
}
void moveRoboDown()
{
    char next = getCharAtxy(roboX, roboY + 3);
    if (next == ' ')
    {
        eraseRobo();
        roboY = roboY + 1;
        printRobo();
    }
}
void moveSniper()
{
    if (sniperBulletTimer == 2)
    {
        generateSniperBullet();
        sniperBulletTimer = 0;
    }
    sniperBulletTimer++;

    if (sniperDirection == "Up")
    {
        char next = getCharAtxy(sniperX, sniperY - 1);
        if (next == ' ')
        {
            eraseSniper();
            sniperY--;
            printSniper();
        }
        else if (next == '-' || next == '*')
        {
            sniperDirection = "Down";
        }
    }
    if (sniperDirection == "Down")
    {
        char next = getCharAtxy(sniperX, sniperY + 4);
        if (next == ' ')
        {
            eraseSniper();
            sniperY++;
            printSniper();
        }
        if (next == '-' || next == '*')
        {
            sniperDirection = "Up";
        }
    }
}
void moveMech()
{
    if (mechBulletTimer == 3)
    {
        generateMechBullet();
        mechBulletTimer = 0;
    }
    mechBulletTimer++;

    if (mechDirection == "Up")
    {
        char next = getCharAtxy(mechX, mechY - 1);
        if (next == ' ')
        {
            eraseMech();
            mechY--;
            printMech();
        }
        else if (next == '-' || next == '*')
        {
            mechDirection = "Down";
        }
    }
    if (mechDirection == "Down")
    {
        char next = getCharAtxy(mechX, mechY + 3);
        if (next == ' ')
        {
            eraseMech();
            mechY++;
            printMech();
        }
        if (next == '-' || next == '*')
        {
            mechDirection = "Up";
        }
    }
}

void moveScorpius()
{
    if (scorpiusBulletTimer == 2)
    {
        generateScorpiusBullet();
        scorpiusBulletTimer = 0;
    }
    scorpiusBulletTimer++;

    if (scorpiusDirection == "Up")
    {
        char next = getCharAtxy(scorpiusX, scorpiusY - 1);
        if (next == ' ')
        {
            eraseScorpius();
            scorpiusY--;
            printScorpius();
        }
        else if (next == '-' || next == '*')
        {
            scorpiusDirection = "Down";
        }
    }
    if (scorpiusDirection == "Down")
    {
        char next = getCharAtxy(scorpiusX, scorpiusY + 3);
        if (next == ' ')
        {
            eraseScorpius();
            scorpiusY++;
            printScorpius();
        }
        if (next == '-' || next == '*')
        {
            scorpiusDirection = "Up";
        }
    }
}
void eraseSniper()
{
    gotoxy(sniperX, sniperY);
    for (int idx = 0; idx < 6; idx++)
    {
        cout << " ";
    }
    gotoxy(sniperX, sniperY + 1);
    for (int idx = 0; idx < 6; idx++)
    {
        cout << " ";
    }
    gotoxy(sniperX, sniperY + 2);
    for (int idx = 0; idx < 6; idx++)
    {
        cout << " ";
    }
    gotoxy(sniperX, sniperY + 3);
    for (int idx = 0; idx < 6; idx++)
    {
        cout << " ";
    }
}
void eraseMech()
{
    gotoxy(mechX, mechY);
    for (int idx = 0; idx < 5; idx++)
    {
        cout << " ";
    }
    gotoxy(mechX, mechY + 1);
    for (int idx = 0; idx < 6; idx++)
    {
        cout << " ";
    }
    gotoxy(mechX, mechY + 2);
    for (int idx = 0; idx < 6; idx++)
    {
        cout << " ";
    }
}

void eraseScorpius()
{
    gotoxy(scorpiusX, scorpiusY);
    for (int idx = 0; idx < 5; idx++)
    {
        cout << " ";
    }
    gotoxy(scorpiusX, scorpiusY + 1);
    for (int idx = 0; idx < 6; idx++)
    {
        cout << " ";
    }
    gotoxy(scorpiusX, scorpiusY + 2);
    for (int idx = 0; idx < 6; idx++)
    {
        cout << " ";
    }
}
void eraseRobo()
{
    gotoxy(roboX, roboY);
    for (int idx = 0; idx < 6; idx++)
    {
        cout << " ";
    }
    gotoxy(roboX, roboY + 1);
    for (int idx = 0; idx < 3; idx++)
    {
        cout << " ";
    }
    gotoxy(roboX, roboY + 2);
    for (int idx = 0; idx < 2; idx++)
    {
        cout << " ";
    }
}
void generateBullet()
{
    bulletX[bulletCount] = roboX + 7;
    bulletY[bulletCount] = roboY;
    isBulletActive[bulletCount] = true;
    gotoxy(roboX + 7, roboY);
    cout << "*";
    bulletCount++;
}

void generateSniperBullet()
{
    sniperbulletX[sniperbulletCount] = sniperX - 1;
    sniperbulletY[sniperbulletCount] = sniperY;
    isSniperBulletActive[sniperbulletCount] = true;
    gotoxy(sniperX - 1, sniperY);
    cout << ".";
    sniperbulletCount++;
}

void generateMechBullet()
{
    mechbulletX[mechbulletCount] = mechX - 1;
    mechbulletY[mechbulletCount] = mechY;
    isMechBulletActive[mechbulletCount] = true;
    gotoxy(mechX - 1, mechY);
    cout << "`";
    mechbulletCount++;
}

void generateScorpiusBullet()
{
    scorpiusbulletX[scorpiusbulletCount] = scorpiusX - 1;
    scorpiusbulletY[scorpiusbulletCount] = scorpiusY;
    isScorpiusBulletActive[scorpiusbulletCount] = true;
    gotoxy(scorpiusX - 1, scorpiusY);
    cout << ":";
    scorpiusbulletCount++;
}

void moveBullet()
{
    for (int x = 0; x < bulletCount; x++)
    {
        if (isBulletActive[x] == true)
        {
            char next = getCharAtxy(bulletX[x] + 1, bulletY[x]);
            if (next != ' ')
            {
                eraseBullet(bulletX[x], bulletY[x]);
                makeBulletInactive(x);
            }
            else
            {
                eraseBullet(bulletX[x], bulletY[x]);
                bulletX[x] = bulletX[x] + 1;
                printBullet(bulletX[x], bulletY[x]);
            }
        }
    }
}

void printBullet(int x, int y)
{
    gotoxy(x, y);
    cout << "*";
}

void printSniperBullet(int x, int y)
{
    gotoxy(x, y);
    cout << ".";
}

void printMechBullet(int x, int y)
{
    gotoxy(x, y);
    cout << "`";
}

void printScorpiusBullet(int x, int y)
{
    gotoxy(x, y);
    cout << ":";
}

void moveSniperBullet()
{
    for (int x = 0; x < sniperbulletCount; x++)
    {
        if (isSniperBulletActive[x] == true)
        {
            char next = getCharAtxy(sniperbulletX[x] - 1, sniperbulletY[x]);
            if (next != ' ')
            {
                eraseSniperBullet(sniperbulletX[x], sniperbulletY[x]);
                makeSniperBulletInactive(x);
            }
            else
            {
                eraseSniperBullet(sniperbulletX[x], sniperbulletY[x]);
                sniperbulletX[x] = sniperbulletX[x] - 1;
                printSniperBullet(sniperbulletX[x], sniperbulletY[x]);
            }
        }
    }
}

void moveMechBullet()
{
    for (int x = 0; x < mechbulletCount; x++)
    {
        if (isMechBulletActive[x] == true)
        {
            char next = getCharAtxy(mechbulletX[x] - 1, mechbulletY[x]);
            if (next != ' ')
            {
                eraseSniperBullet(mechbulletX[x], mechbulletY[x]);
                makeMechBulletInactive(x);
            }
            else
            {
                eraseMechBullet(mechbulletX[x], mechbulletY[x]);
                mechbulletX[x] = mechbulletX[x] - 1;
                printMechBullet(mechbulletX[x], mechbulletY[x]);
            }
        }
    }
}

void moveScorpiusBullet()
{
    for (int x = 0; x < scorpiusbulletCount; x++)
    {
        if (isScorpiusBulletActive[x] == true)
        {
            char next = getCharAtxy(scorpiusbulletX[x] - 1, scorpiusbulletY[x]);
            if (next != ' ')
            {
                eraseScorpiusBullet(scorpiusbulletX[x], scorpiusbulletY[x]);
                makeScorpiusBulletInactive(x);
            }
            else
            {
                eraseScorpiusBullet(scorpiusbulletX[x], scorpiusbulletY[x]);
                scorpiusbulletX[x] = scorpiusbulletX[x] - 1;
                printScorpiusBullet(scorpiusbulletX[x], scorpiusbulletY[x]);
            }
        }
    }
}

void eraseBullet(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}
void eraseSniperBullet(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}
void eraseMechBullet(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}
void eraseScorpiusBullet(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}

void makeBulletInactive(int idx)
{
    isBulletActive[idx] = false;
}

void makeSniperBulletInactive(int idx)
{
    isSniperBulletActive[idx] = false;
}
void makeMechBulletInactive(int idx)
{
    isMechBulletActive[idx] = false;
}
void makeScorpiusBulletInactive(int idx)
{
    isScorpiusBulletActive[idx] = false;
}

void bulletCollionWithSniper()
{
    for (int x = 0; x < bulletCount; x++)
    {
        if (isBulletActive[x] == true)
        {

            if (bulletX[x] + 1 == sniperX && (bulletY[x] == sniperY || bulletY[x] == sniperY + 2 || bulletY[x] == sniperY + 3))
            {
                addScore();
                powerOfSniper();
            }
            if (sniperX - 1 == bulletX[x] && sniperY + 1 == bulletY[x])
            {
                addScore();
                powerOfSniper();
            }
        }
    }
}
void bulletCollionWithMech()
{
    for (int x = 0; x < bulletCount; x++)
    {
        if (isBulletActive[x] == true)
        {

            if (bulletX[x] + 1 == mechX && (bulletY[x] == mechY || bulletY[x] == mechY + 2))
            {
                addScore();
                powerOfMech();
            }
            if (mechX - 1 == bulletX[x] && mechY + 1 == bulletY[x])
            {
                addScore();
                powerOfMech();
            }
        }
    }
}

void bulletCollionWithScorpius()
{
    for (int x = 0; x < bulletCount; x++)
    {
        if (isBulletActive[x] == true)
        {

            if (bulletX[x] + 1 == scorpiusX && (bulletY[x] == scorpiusY || bulletY[x] == scorpiusY + 2))
            {
                addScore();
                powerOfScorpius();
            }
            if (scorpiusX - 1 == bulletX[x] && scorpiusY + 1 == bulletY[x])
            {
                addScore();
                powerOfScorpius();
            }
        }
    }
}

void bulletCollisionWithRobo()
{
    char next = getCharAtxy(roboX + 7, roboY - 1);
    if (next == '.')
    {
        roboPower = roboPower - 2;
    }
    if (next == '`' || next == ':')
    {
        roboPower--;
    }
    char next1 = getCharAtxy(roboX + 3, roboY + 1);
    if (next1 == '.')
    {
        roboPower = roboPower - 2;
    }
    if (next1 == '`' || next1 == ':')
    {
        roboPower--;
    }
    char next2 = getCharAtxy(roboX + 2, roboY + 2);
    if (next2 == '.')
    {
        roboPower = roboPower - 2;
    }
    if (next2 == '`' || next2 == ':')
    {
        roboPower--;
    }
    char next3 = getCharAtxy(roboX + 2, roboY + 3);
    if (next3 == '.')
    {
        roboPower = roboPower - 2;
    }
    if (next3 == '`' || next3 == ':')
    {
        roboPower--;
    }
}
void addScore()
{
    score++;
}
void printScore()
{
    gotoxy(110, 4);
    cout << "score : " << score;
}
void powerOfSniper()
{
    sniperPower = sniperPower - 2;
}
void printPowerOfSniper()
{
    gotoxy(8, 32);
    cout << "Snipers's Power : " << sniperPower<<" "<<" ";
}

void powerOfMech()
{
    mechPower = mechPower - 2;
}
void printPowerOfMech()
{
    gotoxy(35, 32);
    cout << "Mech's Power : "<< mechPower<<" " <<" ";
}

void powerOfScorpius()
{
    scorpiusPower = scorpiusPower - 2;
}
void printPowerOfScorpius()
{
    gotoxy(58, 32);
    cout << "Scorpius's Power : "<< scorpiusPower <<" "<<" ";
}

void printPowerOfRobo()
{
    gotoxy(8, 30);
    cout << "Robo's Power : " << roboPower<<" "<<" ";
}

// supporting functions
char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
