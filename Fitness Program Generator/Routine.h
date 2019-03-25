#ifndef ROUTINE_H_
#define ROUTINE_H_

#include <string>
#include "Exercise.h"
#include <iostream>
#include <vector>

class Routine
{
private:
	int liftWeight;
	int sets;
	int reps;
	vector<Exercise*> exercises;
public:

	Routine()
	{
		liftWeight = 0;
		sets = 0;
		reps = 0;
	}

	void addExercise(Exercise* ex);
	void calcRep(Consultation cons);
	void displayExercises();
	void Erase(int numb);
	int getGoals(int numb);
	int getRep();
	int getSets();
	string getName(int numb);
	int getSize();

};

#endif