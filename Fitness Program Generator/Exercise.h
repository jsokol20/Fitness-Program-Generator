#ifndef EXERCISE_H_
#define EXERCISE_H_

#include <string>
#include "Consultation.h"
#include <iostream>
using namespace std;

class Exercise
{
private:
	string name;
	string TargetArea;
	int goals;
	int experience;


public:
	Exercise(string Targ, int Goals, int exper, string Name)
	{
		name = Name;
		TargetArea = Targ;
		goals = Goals;
		experience = exper;

	}


	int getGoals();
	string getName();

};

#endif