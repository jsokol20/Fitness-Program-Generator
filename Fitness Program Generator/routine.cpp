#include "routine.h"
#include <vector>
#include <string>

//vector that stores exercises into it
void Routine::addExercise(Exercise* ex)
{
	exercises.push_back(ex);
}

//conversion of reps and sets based on expierence
void Routine::calcRep(Consultation cons)
{
	if (cons.getGoal() == 1)
	{
		liftWeight = 60 + (5 * cons.getExperience());
		reps = 5 + (5 * cons.getExperience());
		sets = 3;
	}

	//coversion of  reps and goals based on expierence
	else if (cons.getGoal() == 2)
	{
		liftWeight = 65 + (5 * cons.getExperience());
		reps = 6;
		sets = 3;
	}
	else if (cons.getGoal() == 3)
	{
		if (cons.getExperience() == 1)
		{
			cout << "To weak. Get experience." << endl;
		}
		else
		{
			liftWeight = 55 + (5 * cons.getExperience());
			reps = 6;
			sets = 4;
		}
	}
}

//function to dispaly exercises
void Routine::displayExercises()
{
	// calculating side of border
	int maxsize = 0;
	for (int i = 0; i < getSize(); i++) {
		int size = exercises[i]->getName().size();
		if (maxsize < size)
			maxsize = size;
	}

	// printing table
	for (const auto& e : exercises) {
		// top border of each row
		cout << '+' << std::string(maxsize + 2, '-') << '+' << '\n';

		cout << "|"
			<< std::string((maxsize - e->getName().size()) / 2 + 1, ' ')
			<< e->getName();

		if (e->getName().size() % 2 == 0)
			cout << ' ';

		cout << std::string((maxsize - e->getName().size()) / 2 + 1, ' ')
			<< "|" << '\n';
	}

	// bottom border of table
	cout << '+' << std::string(maxsize + 2, '-') << '+' << '\n';
}

void Routine::Erase(int numb)
{
	exercises.erase(exercises.begin() + (numb));
}

int Routine::getGoals(int numb)
{
	return exercises[numb]->getGoals();
}

int Routine::getRep()
{
	return reps;
}

int Routine::getSets()
{
	return sets;
}

string Routine::getName(int numb)
{
	return exercises[numb]->getName();
}

int Routine::getSize()
{
	return exercises.size();
}
