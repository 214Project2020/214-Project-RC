#ifndef TRACK_H
#define TRACK_H

#include <string>

using namespace std;

class track{
	private:
		string trackName;
		int numLaps;
		bool isEuro;
        string country;
	public:
		track();
		track(string, int, bool, string);
		~track();
		string getTrackName();
		void setTrackName(string);
		int getNumLaps();
		void setNumLaps(int);
		bool getIsEuro();
		void setIsEuro(bool);
        string getCountry();
        void setCountry(string);
};

#endif