// MoviePortal.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<string>
#include<map>
#include "Movie.h"
#include "Theater.h"

#define MAX_CITIES 3
using namespace std;

class MoviePortal
{
private:
	string cities[MAX_CITIES+1]={ "","hyd","blr","mad" };
	map<int, list<Movie>> cityMovieMap;
	map<int, list<Theater>> movieTheaterMap;

public:
	int getCities();
	list<Movie> getMovies(int cityId);
	list<Theater> getTheaters(int movieId);
	list<Audi> getAudis(int theaterId,int movieId);
	void selectSeat(int row,int column);
	void removeSeat(int row, int column);
	void doPayment();
	Ticket getTicket();
};

int main()
{
    std::cout << "Hello World!\n"; 
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
