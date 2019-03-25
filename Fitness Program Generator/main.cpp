#include <iostream>
#include <string>
#include "Consultation.h"
#include "exercise.h"
#include "routine.h"
#include <windows.h>
#include <conio.h>
using namespace std;

// Function the assigns "SetColor" to a specific string of text.
//void SetColor(int value) {
//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), value);
//} 

char* Color(int color = 7, char* Message = "") {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
	return Message;
}


int main()
{
	//Exercise classes we coded in the program


	Exercise OverheadPress("Shoulder", 0, 0, "Overhead Press");
	Exercise ArnoldPress("Shoulder", 0, 0, "Arnold Press");
	Exercise PushPress("Shoulder", 3, 0, "Push Press");
	Exercise FrontRaise("Shoulder", 0, 0, "Front Raise");
	Exercise SideLateralRaise("Shoulder", 0, 0, "Side Lateral Raise");
	Exercise RearDeltoidRaise("Shoulder", 0, 0, "Rear Deltoid Raise");

	Exercise Deadlifts("Back", 0, 0, "Deadlifts");
	Exercise Bent_Over_Row("Back", 0, 0, "Bent Over Row");
	Exercise Lat_Pull_Down("Back", 4, 0, "Lat Pull Down");
	Exercise Pull_Ups("Back", 0, 0, "Pull Ups (Bodyweight to failure)");
	Exercise Weighted_Hyper("Back", 2, 0, "Weighted Hyper Extensions");
	Exercise Reverse_Hyper("Back", 1, 0, "Reverse Hyper Extensions");
	Exercise One_Arm_Bent("Back", 0, 0, "One Arm Bent Over Row w/ Dumbells");
	Exercise Pendlay_Row("Back", 3, 0, "Pendlay Row");

	Exercise Back_Squats("Legs", 0, 0, "Back Squats");
	Exercise Front_Squats("Legs", 0, 0, "Front Squats");
	Exercise Weighted_Lunges("Legs", 0, 0, "Weighted Lunges");
	Exercise Calf_Raises("Legs", 1, 0, "Calf Raises");
	Exercise Leg_Press("Legs", 0, 0, "Leg Press Machine");
	Exercise Weighted_Calf_Raises("Legs", 2, 0, "Weighted Calf Raises");

	Exercise Bent_Knee_Crunch("Abs", 0, 0, "Bent Knee Sit Up");
	Exercise Planks("Abs", 0, 0, "Planks");
	Exercise Lower_Ab_Crunch("Abs", 0, 0, "Lower Abdominal Crunch");
	Exercise Side_Abdominal_Crunch("Abs", 0, 0, "Side Abdominal Crunch");
	Exercise Mountain_Climbers("Abs", 0, 0, "Mountain Climbers");

	Exercise Bench_Press("Chest", 0, 0, "Bench Press");
	Exercise Incline_Press("Chest", 0, 0, "Incline Dumbell Bench Press");
	Exercise Flat_Chest_Press("Chest", 0, 0, "Flat Chest Press w/ dumbbells");
	Exercise Flat_Flies("Chest", 0, 0, "Flat Chest Flies w/ dumbells");
	Exercise Chest_Dips("Chest", 2, 0, "Weighted Chest Dips");
	Exercise BChest_Dips("Chest", 1, 0, "Body Weight Chest Dips");
	Exercise Pushups("Chest", 1, 0, "Pushups");

	Exercise Zotman_Curl("Arms", 4, 0, "Zotman Curl w/ dumbells");
	Exercise Hammer_Curl("Arms", 4, 0, "Hammer Curls");
	Exercise Bicep_Curl("Arms", 4, 0, "Bicep Curls w/ Barbell");
	Exercise Tricep_Extensions("Arms", 4, 0, "Tricep Extensions");
	Exercise Tricep_PullDowns("Arms", 4, 0, "Tricep Pulldowns");
	Exercise Close_Grip_Bench("Arms", 4, 0, "Close Grip Bench Press");


	//Initial Conultation part .... It let's user input their info
	int UserWeight;
	double UserHeight;
	int UserExperience;
	int UserGoal;

	std::cout << "Hello! Welcome to Fitness++" << endl;
	cout << "Please enter your weight in pounds: ";
	cin >> UserWeight;
	cout << "Please enter your Height in feet and inches (For Example, enter 5 feet and 11 inches as '5.11'): ";
	cin >> UserHeight;
	cout << "Which level do you consider yourself ? Enter the coresponding number:" << endl;


	cout << Color(2, "1) Beginner") << endl;

	cout << Color(6, "2) Intermediate") << endl;

	cout << Color(12, "3) Advanced") << endl;
	Color(); // Sets the color back to default
	cout << Color(9, "Enter Response: ");
	cin >> UserExperience;

	cout << "What is your goal ? Enter the coresponding number: " << endl;

	cout << Color(2, "1) Endurance") << endl;
	cout << Color(13, "2) Strength ") << endl;
	cout << Color(3, "3) Power ") << endl;
	cout << "Enter Response: ";
	cin >> UserGoal;

	Consultation User1(UserWeight, UserHeight, UserExperience, UserGoal);

	//Adding all the exersises to the vector routine (38 exercises)
	Routine r1;
	r1.addExercise(&OverheadPress);
	r1.addExercise(&ArnoldPress);
	r1.addExercise(&PushPress);
	r1.addExercise(&FrontRaise);
	r1.addExercise(&SideLateralRaise);
	r1.addExercise(&RearDeltoidRaise);
	r1.addExercise(&Deadlifts);
	r1.addExercise(&Bent_Over_Row);
	r1.addExercise(&Lat_Pull_Down);
	r1.addExercise(&Pull_Ups);
	r1.addExercise(&Weighted_Hyper);
	r1.addExercise(&Reverse_Hyper);
	r1.addExercise(&One_Arm_Bent);
	r1.addExercise(&Pendlay_Row);
	r1.addExercise(&Back_Squats);
	r1.addExercise(&Front_Squats);
	r1.addExercise(&Weighted_Lunges);
	r1.addExercise(&Calf_Raises);
	r1.addExercise(&Leg_Press);
	r1.addExercise(&Weighted_Calf_Raises);
	r1.addExercise(&Bent_Knee_Crunch);
	r1.addExercise(&Planks);
	r1.addExercise(&Lower_Ab_Crunch);
	r1.addExercise(&Side_Abdominal_Crunch);
	r1.addExercise(&Mountain_Climbers);
	r1.addExercise(&Bench_Press);
	r1.addExercise(&Incline_Press);
	r1.addExercise(&Flat_Chest_Press);
	r1.addExercise(&Flat_Flies);
	r1.addExercise(&Chest_Dips);
	r1.addExercise(&BChest_Dips);
	r1.addExercise(&Pushups);
	r1.addExercise(&Zotman_Curl);
	r1.addExercise(&Hammer_Curl);
	r1.addExercise(&Bicep_Curl);
	r1.addExercise(&Tricep_Extensions);
	r1.addExercise(&Tricep_PullDowns);
	r1.addExercise(&Close_Grip_Bench);

	for (int i = 0; i < r1.getSize(); i++)
	{
		int d = r1.getGoals(i);
		if (r1.getGoals(i) != 0 && User1.getGoal() != d)
			r1.Erase(i);
	}

	r1.calcRep(User1);
	cout << "We Recommend a Rep of " << r1.getRep() << " and sets of " << r1.getSets() << endl;
	cout << Color(12, "The exercises we have chosen for you are: ") << endl;
	r1.displayExercises();

	//This is the old for loop that outputs the list of names
	/*
	for (int i = 0; i < r1.getSize(); i++)
	{
	cout << r1.getName(i) << endl;
	}
	*/


	return 0;

}
