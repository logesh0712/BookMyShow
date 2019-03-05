#include<list>
#include "Seat.h"
#include "Movie.h"

using namespace std;



class Audi
{
public:
	int audiNo;
	Movie *movie;
	
	list<Seat> seats;
	list<long> showTimes;

	map<long, list<Seat>> timeSeatsMap;

	Audi(int audiNo) 
	{
		this->audiNo = audiNo;
	}

	void initialize(Movie *movie, int maxGoldSeat, int maxSilverSeat, list<long> showTimes);

};


void Audi::initialize(Movie *movie, int maxGoldSeat, int maxSilverSeat, list<long> showTimes) {
	this->movie = movie;

	for (int curTime = 0; curTime < showTimes.size(); curTime++) {
		Seat *seat = new GoldSeat(0,1);
	}
	//comments here;
}
