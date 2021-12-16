#pragma once
#include <ctime>
#include <iostream>
#include <string>

using namespace std;
class Date
{
private:
	int Day;
	int Month;
	int Year;

public:
	Date() {
		time_t now = time(0);
		struct tm ltm; 
		localtime_s(&ltm, &now);

		this->Day = ltm.tm_mday;
		this->Month = 1 + ltm.tm_mon;
		this->Year = 1900 + ltm.tm_year;
	}

	void ShowDate() const {
		cout << this->Day << "/" << this->Month << "/" << this->Year << endl;
	}
};

