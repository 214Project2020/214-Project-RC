#include "Session.h"

Session::Session()
{
	this->numAndType.resize(3);
	for (int i = 0; i < this->numAndType.size(); i++)
		{
			this->numAndType[i].resize(3);
		}

	for (int i = 0; i < this->numAndType.size(); i++)
		{
			for (int j = 0; j < this->numAndType[i].size(); j++)
			{
				this->numAndType[i][j] = 0;
			}
		}	
}

void Session::setPractice(int soft, int medium, int hard){
	this->numAndType[0][0] = soft;
	this->numAndType[0][1] = medium;
	this->numAndType[0][2] = hard;
	cout << "Practice set: \nSoft: " << soft << "\nMedium: " << medium << "\nHard: " << hard << endl;
	cout << "---------------------------------------------------------------------" << endl;
}

vector<int> Session::getPractice(){
	vector<int> result;

	result.resize(3);

	result[0] = this->numAndType[0][0];
	result[1] = this->numAndType[0][1];
	result[2] = this->numAndType[0][2];

	return result;
}


void Session::setQuali(int soft, int medium, int hard){
	this->numAndType[1][0] = soft;
	this->numAndType[1][1] = medium;
	this->numAndType[1][2] = hard;
	cout << "Qualification set: \nSoft: " <<soft << "\nMedium: " << medium << "\nHard: " << hard << endl;
	cout << "---------------------------------------------------------------------" << endl;
}

vector<int> Session::getQuali(){
	vector<int> result;

	result.resize(3);

	result[0] = this->numAndType[1][0];
	result[1] = this->numAndType[1][1];
	result[2] = this->numAndType[1][2];

	return result;
}

void Session::setRace(int soft, int medium, int hard){
	this->numAndType[2][0] = soft;
	this->numAndType[2][1] = medium;
	this->numAndType[2][2] = hard;
	cout << "Race set: \nSoft: " << soft << "\nMedium: " << medium << "\nHard: " << hard << endl;
	cout << "---------------------------------------------------------------------" << endl;
}

vector<int> Session::getRace(){
	vector<int> result;

	result.resize(3);

	result[0] = this->numAndType[2][0];
	result[1] = this->numAndType[2][1];
	result[2] = this->numAndType[2][2];

	return result;
}
