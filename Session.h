#ifndef SESSION_H
#define SESSION_H

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Session {
private:
	vector<vector<int> > numAndType;
public:
	Session();
	~Session();
	void setPractice(int, int, int);
	vector<int> getPractice(); //returns array of the number of practice compound sets per type: array{soft(int), medium(int), hard(int)}
	void setQuali(int, int, int);
	vector<int> getQuali(); //returns array of the number of quali compound sets per type: array{soft(int), medium(int), hard(int)}
	void setRace(int, int, int);
	vector<int> getRace(); //returns array of the number of race compound sets per type: array{soft(int), medium(int), hard(int)}
};

#endif

/*

2D vector array of integers indicating the number of tyres per compound per session type

the coloumn represents the session type (i.e. Practice, Quali, Race)
the row represents the compound type (i.e. Soft, Medium, Hard)


		Practice   Quali   Race
Soft	int        int     int   
Medium  int        int     int
Hard    int        int     int


*/
