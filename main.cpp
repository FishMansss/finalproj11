


#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <chrono>
#include <thread>
#include<windows.h>
#include<ctime>
#define _WIN32_WINNT 0x0502
using namespace std;
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds




void day() {

	// empty container? Why?
}


void fortress3() {

	cout << "                                                     #                                                " << endl;
	cout << "                                         ###           ###                                " << endl;
	cout << "                                         ####        ### #                              " << endl;
	cout << "                                             ##           # #                              " << endl;
	cout << "                                               #            # #                            " << endl;
	cout << "                                                ||____      __||__       |_|_|_|_|         " << endl;
	cout << "                                               /      ]    /      ]_     |_______|         " << endl;
	cout << "                                            {{{{{{}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}       " << endl;
	cout << "                                             ||||||||||||||||||||||||||||||||||||||        " << endl;
	cout << "                                             |||||||||||| |      _ |   ||||||||||||        " << endl;
	cout << "                                             |||||||||||| |     |_||   ||||||||||||        " << endl;
	cout << "                                             |||||||||||| | _      |   ||||||||||||        " << endl;
	cout << "                                             |||||||||||| ||_|   _ |   ||||||||||||        " << endl;
	cout << "                                             |||||||||||| |     |.||   ||||||||||||        " << endl;
	cout << "                                     ________||||||||||||_|_____|_||_ _||||||||||||________" << endl;
}
void fortress2() {
	cout << "                                      #  ## ## #     ________                          " << endl;
	cout << "                                          # ## ##   /_______/                          " << endl;
	cout << "                                            __#_#____|-----|| ________                 " << endl;
	cout << "                                           /    ||   |     ||        /|                " << endl;
	cout << "                                          /{{{{{||{{{|_____||}}}}}}}/ |                " << endl;
	cout << "                                          ||------------------------| |                " << endl;
	cout << "                                          ||       ___________      | |                " << endl;
	cout << "                                          ||       ||///////||      | |                " << endl;
	cout << "                                          ||       ||///////||      | /                " << endl;
	cout << "                                          ||%%%%%%%||///////||%%%%%%|/                 " << endl;
}
void fortress1() {
	cout << "                                                        # ###  #            " << endl;
	cout << "                                                        # #  #####          " << endl;
	cout << "                                                               # #_         " << endl;
	cout << "                                                                 ||         " << endl;
	cout << "                                                                 ||         " << endl;
	cout << "                                            ___-____-__-______---||_        " << endl;
	cout << "                                           /                       /)       " << endl;
	cout << "                                          /                       /  )      " << endl;
	cout << "                                         /_-____-___________-__-_/----)     " << endl;
	cout << "                                          1|   ||       l|     ||   ||      " << endl;
	cout << "                                          ||   |!       ||     ||   i|      " << endl;
}

void enemy3() {

	cout << "                                                                        | _                 " << endl;
	cout << "                                                                 ^ _    |*_*}   ^ _         " << endl;
	cout << "                                                                 | @    T   }   | @         " << endl;
	cout << "                                                                 t-|#    ] ]    t-|#        " << endl;
}
void enemy2() {

	cout << "                                                                 | @    | @    | @         " << endl;
	cout << "                                                                 t-|#   t-|#   t-|#        " << endl;
}
void enemy1() {

	cout << "                                                                 | @                 " << endl;
	cout << "                                                                 t-|                 " << endl;
}




int main()
{
	using namespace std::this_thread; // sleep_for, sleep_until
	using namespace std::chrono; // nanoseconds, system_clock, seconds





	HWND hwnd = GetConsoleWindow();
	if (hwnd != NULL) { SetWindowPos(hwnd, 0, 0, 0, 1000, 600, SWP_SHOWWINDOW | SWP_NOMOVE); }
	///////////////////////////////////////////////////////////////////////////////////////////////////////////	
	int delay = 5;
	cout << "                        F" << endl;
	sleep_for(milliseconds(delay));
	system("cls");
	cout << "                        Fo" << endl;
	sleep_for(milliseconds(delay));
	system("cls");
	cout << "                        For" << endl;
	sleep_for(milliseconds(delay));
	system("cls");
	cout << "                        Fort" << endl;
	sleep_for(milliseconds(delay));
	system("cls");
	cout << "                        Fortr" << endl;
	sleep_for(milliseconds(delay));
	system("cls");
	cout << "                        Fortre" << endl;
	sleep_for(milliseconds(delay));
	system("cls");
	cout << "                        Fortres" << endl;
	sleep_for(milliseconds(delay));
	system("cls");
	cout << "                        Fortress" << endl;
	sleep_for(milliseconds(delay*4));



	cout << "______________________________________________________________________________________________________________" << endl;

	cout << "----------------------Press enter to continue-----------------------------------------------------------------" << endl;
	std::cin.ignore();
	sleep_for(seconds(2));
	cout << "your Fortress needs a name..." << endl;
	char name[50];

	cin.getline(name, 50);
	sleep_until(system_clock::now() + seconds(1));
	cout << name << " it is!" << endl;
	sleep_for(seconds(2));
	system("cls");

	srand(time(NULL));
	int people = (rand() % 10) + 2;;



	// setup
	int gate = 1;
	int fortress = 1;
	int time = 0;
	int resources = 3;
	int turns = 0;      //turns = turns + 3; 
	int guards = 1;
	int health = 10;
	int bonusturn = 0;
	int dam = 0;
setup:
	turns = turns + 3 + bonusturn;
	time = time + 1;   
day:
	
	cout << "-----------------" << name << "-----------------" << endl;
	cout << "" << endl;

	cout << "day = " << time << endl;


	system("cls");

	cout << "-----------------" << name << "-----------------" << endl;
	cout << "" << endl;
	cout << "day =" << time << endl;
	if (fortress == 3) { fortress3(); }
	if (fortress == 2) { fortress2(); }
	if (fortress == 1) { fortress1(); }
	cout << "                                                    Village health = " << health << endl;
	cout << " " << endl;
	cout << "# of people = " << people << "  <<   resources = " << resources << endl;
	cout << "# of Guards = " << guards << endl;
	cout << "                                                            turns left = " << turns + bonusturn << endl;
	cout << "                                                          ------------------" << endl;
	sleep_until(system_clock::now() + seconds(1));
	cout << "" << endl;
	//Day
	if (turns < 1) { goto night; }
	retry:
	int day;
	//char input[5];
	cout << "# What would you like to do?" << endl;
	cout << "\t >> Enter '1' FORAGE" << endl;
	cout << "\t >> Enter '2' FORGE" << endl;
	cout << "\t >> Enter '3' RECRUIT" << endl;
	//sleep_until(system_clock::now() + seconds(1));
	cout << "\nEnter your choice: ";
	cin.clear();
	cin >> day;

	
	//try {
		//day = atoi(input);
		//throw (0);
	//} catch(int errval) {
		//day = errval;
	//}


	//sleep_until(system_clock::now() + seconds(1));

	//foraging
	if (day == 1)
	{
		system("cls");
		cout << "your people forrage the forest around" << endl;
		//sleep_for(seconds(1));
		cout << "     *       *      *            *         *        " << endl;
		cout << "*          *  *    *       *           *  *         " << endl;
		cout << "   *   *              *  *        *      *   *      " << endl;
		cout << " *             *  *                   *             " << endl;
		cout << "        /|  /}         /]                  *   *    " << endl;
		cout << "       / / / .}  /}  /  ]       /)      *           " << endl;
		cout << "   /} / .|/.   }/  } /  . ]    /  )  /)             " << endl;
		cout << "  /  }.  |   . / .  /._____]  / .. )/  )            " << endl;
		cout << " / ._ } _|.__ /.___.__  ||   /__..__) __)        o  " << endl;
		cout << "___||__||__||____||_____||______||____||-________|8 " << endl;
		sleep_for(seconds(1));
		system("cls");
		cout << "your people forrage the forest around" << endl;
		//sleep_for(seconds(1));
		cout << "     *       *      *            *         *        " << endl;
		cout << "*          *  *    *       *           *  *         " << endl;
		cout << "   *   *              *  *        *      *   *      " << endl;
		cout << " *             *  *                   *             " << endl;
		cout << "        /|  /}         /]                  *   *    " << endl;
		cout << "       / / / .}  /}  /  ]       /)      *           " << endl;
		cout << "   /} / .|/.   }/  } /  . ]    /  )  /)             " << endl;
		cout << "  /  }.  |   . / .  /._____]  / .. )/  )            " << endl;
		cout << " / ._ } _|.__ /.___.__  ||   /__..__) __)    o      " << endl;
		cout << "___||__||__||____||_____||______||____||-____|8____ " << endl;
		sleep_for(seconds(1));
		system("cls");
		cout << "your people forrage the forest around" << endl;
		//sleep_for(seconds(1));
		cout << "     *       *      *            *         *        " << endl;
		cout << "*          *  *    *       *           *  *         " << endl;
		cout << "   *   *              *  *        *      *   *      " << endl;
		cout << " *             *  *                   *             " << endl;
		cout << "        /|  /}         /]                  *   *    " << endl;
		cout << "       / / / .}  /}  /  ]       /)      *           " << endl;
		cout << "   /} / .|/.   }/  } /  . ]    /  )  /)             " << endl;
		cout << "  /  }.  |   . / .  /._____]  / .. )/  )            " << endl;
		cout << " / ._ } _|.__ /.___.__  ||   /__..__) __)o          " << endl;
		cout << "___||__||__||____||_____||______||____||-|8________ " << endl;
		sleep_for(seconds(1));
		system("cls");
		cout << "your people forrage the forest around" << endl;
		//sleep_for(seconds(1));
		cout << "     *       *      *            *         *        " << endl;
		cout << "*          *  *    *       *           *  *         " << endl;
		cout << "   *   *              *  *        *      *   *      " << endl;
		cout << " *             *  *                   *             " << endl;
		cout << "        /|  /}         /]                  *   *    " << endl;
		cout << "       / / / .}  /}  /  ]       /)      *           " << endl;
		cout << "   /} / .|/.   }/  } /  . ]    /  )  /)             " << endl;
		cout << "  /  }.  |   . / .  /._____]  / .. )/  )            " << endl;
		cout << " / ._ } _|.__ /.___.__  ||   /__..__) __)           " << endl;
		cout << "___||__||__||____||_____||______||____||-__________ " << endl;
		sleep_for(seconds(2));
		resources = resources + ((rand() % 10) * fortress);
		turns = turns - 1;
		system("cls");
		goto day;
	}
	//building
	if (day == 2)
	{
		system("cls");

		sleep_for(seconds(1));
		int forge;
	forge:
		system("cls");
		cout << "FORGE MENU:" << endl;
		cout << "-----------" << endl;
		cout << "" << endl;
		cout << "               ### ## ###      " << endl;
		cout << "                   # ## ##     " << endl;
		cout << "       __________________||__  " << endl;
		cout << "      // __..............|| |  " << endl;
		cout << "     // __               || |  " << endl;
		cout << "    // __     __      ------|  " << endl;
		cout << "   || __     (==)     |____||  " << endl;
		cout << "   ||.........||......|mmmm||  " << endl;
		cout << "_______________________________" << endl;
		cout << "" << endl;
		cout << "\t >> Enter '1' Upgrade Turns [20 resources]" << endl;
		cout << "\t >> Enter '2' Upgrade Borders [5 resources + 1 people]" << endl;
		cout << "\t >> Enter '3' Upgrade Fortress [15 resources + 1 guard]" << endl;
		cout << "\t >> Enter '4' Add health [2 resources per #]" << endl;
		cout << "\t >> Enter '5' Cancel..." << endl;
		cout << "\nEnter your choice: ";
		cin >> forge;
		if (forge == 1) { if (resources > 19) { cout << "adding turn..." << endl; bonusturn = bonusturn + 1; turns - 1; resources = resources - 10; goto forge; } goto forge; }

		if (forge == 2) {
			resources = resources - 5; people = people - 1; gate = gate + 1; turns - 1;
			sleep_for(seconds(2)); cout << "fortifying gates..." << endl; sleep_for(seconds(2)); 
			if (resources < 1) { resources + 5; people + 1; }
			if (people < 1) { resources + 5; people + 1; }
			goto forge;
		}
		if (forge == 3) {
			if (resources > 14) {
				if (guards > 0) {
					if (fortress == 3) { cout << "already max level!" << endl; sleep_for(seconds(4)); goto forge; }
					fortress = fortress + 1; resources = resources - 15; guards = guards - 1; cout << "Expanding Fortress..." << endl;
					sleep_for(seconds(2)); turns - 1; goto forge;
				}
			}
		}
		if (forge == 4) {
			cout << "amount of health to add...." << endl;
			cout << "[2 resources per #]" << endl;
			int add; add = 0;
			sleep_for(seconds(2));
			cin >> add;
			resources = resources - (add * 2);
			health = health + add;
			if (resources < 0) { cout << "adding health..." << endl; sleep_for(seconds(2)); resources = resources + (add * 2); health = health - add; goto forge; }
			turns = turns - 1; system("cls"); goto forge;

		}
		if (forge == 5) { goto day; }
		else {
			cout << "!" << endl; sleep_for(seconds(2));
			goto retry;
		}
	}
	//recruiting
	if (day == 3)
	{
		int convert;
		convert = 0;
		sleep_for(seconds(1));
		cout << "HOW MANY GUARDS DO YOU WANT TO RECRUIT" << endl;
		cout << "       [cost: 1 people, 3 resources...]" << endl;
		cout << "Type 0 to cancel" << endl;
		sleep_for(seconds(1));

		cin >> convert;
		sleep_for(seconds(1));
		if (convert == 0) { goto day; }
		if (people > 1)
		{
			if (resources > 3)
			{
				guards = guards + convert;
				people = people - convert;
				resources = resources - (3 * convert);	
				cout << "training guards..." << endl;
				sleep_for(seconds(2));
				turns = turns - 1;
				//system("cls");
			if (resources < 0)
				{ resources = resources + (3 * convert); people = people + convert; guards = guards - convert; }
			goto day;
			}
			if (resources < 2) { cout << "not enough resources" << endl; sleep_for(seconds(2)); goto day; }
		}

		if (people < 2) { cout << "not enough people" << endl; sleep_for(seconds(2)); goto day; }
	}
	else
	{
		cout << day << "!" << endl;
		goto retry;
	}
	if (turns > 0) { goto day; }
night:
	//night 
	system("cls");
	sleep_for(seconds(2));
	cout << "the sun sets..." << endl;
	sleep_for(seconds(3));
	//enemy difficulty scaling
	int enemy;
	enemy = (rand() % 10) * time;;
	// #add random events?

turn:

	dam = guards;
	system("cls");
	if (fortress == 3) { fortress3(); }
	if (fortress == 2) { fortress2(); }
	if (fortress == 1) { fortress1(); }
	sleep_for(seconds(1));
	cout << "         Village health = " << health << endl;
	cout << "                 guards = " << guards << endl;

	if (enemy > 15) { enemy3(); }
	if (enemy > 5) { enemy2(); }
	if (enemy > 0) { enemy1(); }
	if (enemy < 1) { cout << "" << endl; }
	cout << "             raiders =" << enemy << endl;
	sleep_for(seconds(3));

	if (health < 1) { goto end; }
	if (enemy < 1) { goto win; }

	cout << "time we strike...." << endl;
	sleep_for(seconds(2));
	enemy = enemy - guards;



	system("cls");
	if (fortress == 3) { fortress3(); }
	if (fortress == 2) { fortress2(); }
	if (fortress == 1) { fortress1(); }
	cout << "         Village health = " << health << endl;
	cout << "                 guards = " << guards << endl;



	if (enemy > 15) { enemy3(); }
	if (enemy > 5) { enemy2(); }
	if (enemy > 0) { enemy1(); }
	if (enemy < 1) { cout << "" << endl; }
	cout << "             raiders =" << enemy << endl;
	sleep_for(seconds(2));

	health = health - (dam/3+1);

	sleep_for(seconds(2));



win:
	if (enemy < 1)
	{
		system("cls");
		cout << "The raiders are staved another day...." << endl;
		sleep_for(seconds(4));
		system("cls");

		goto border;
	}

	if (health < 1) {
		system("cls");
		cout << "" << endl;
		cout << "Village health = 0" << endl;
		cout << "" << endl;

		cout << "with the walls gone, the fortress falls..." << endl;
		sleep_for(seconds(2));
		cout << "[GAME OVER]" << endl;
		sleep_for(seconds(10));
		goto end;
	}
	goto turn;
border:
	sleep_for(seconds(2));
	cout << "some refugee(s) have arrived..." << endl;
	sleep_for(seconds(1));
	people = people + ((rand() % 5) * gate);
	cout << "people =" << people << endl;
	sleep_for(seconds(3));
	goto setup;


end:
	return 0;
}
