// PasswordApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <time.h>
#include<iostream>
#include<cstdlib>
#include <ctime>

using namespace std;

int main()
{	
	srand(time(0));
	string sayi[4] = {};
	for(int x = 0 ; x < 4; x++){
    	sayi[x] = (rand()%10) + 48 ;
        cout << sayi[x];
	}
	cout <<""<<endl;
	// aldýðýn sayýyý diziye böl indexleri karþýlaþtýr.
	string getNum="";
	cin >> getNum;
	int correctMatch=0;
	int halfMatch=0;
	string getNumIndex[4] = {};
	
	for(int y = 0 ; y < 4 ; y++){
		getNumIndex[y] = getNum[y];
	}
    
    for (int i = 0; i < 4; i++) {
        
        for(int ia = 0 ; ia < 4; ia++){
        	if(getNumIndex[ia] == sayi[i] && i == ia){
        		correctMatch++;
			}
			else if(getNumIndex[ia] == sayi[i] && i != ia){
				halfMatch++;
			}
		}
    }
	cout << "-----------" << endl;
	cout << "Correct Match" << endl;
	cout << correctMatch << endl;
	cout << "Half Match" << endl;
	cout << halfMatch << endl;
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

