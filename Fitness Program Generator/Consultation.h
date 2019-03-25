#ifndef CONSULTATION_H_
#define CONSULTATION_H_

class Consultation
{
private:
	int weight;
	double height;
	int experience;
	int goal;
public:

	//declaration of 0 for all variables
	Consultation()
	{
		weight = 0;
		height = 0;
		experience = 0;
		goal = 0;
	}

	//Consultatoin that collects the data of rep weight, height, expierence, and goals
	Consultation(int userWeight, double userHeight, int userExperience, int userGoal)
	{
		weight = userWeight;
		height = userHeight;
		experience = userExperience;
		goal = userGoal;
	}

	int getExperience();
	int getGoal();


};

#endif