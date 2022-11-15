#pragma once
#include <string>
#include "ProfileList.h"

using namespace std;

//SocialNetwork class
class SocialNetwork
{
//setting private class variables.
private:
	string networkName; //the network's name.
	int minAge; //minimum age for using the network.
	ProfileList* profList; //a list of profiles using the network.

//setting public functions for the SocialNetwork class.
public:
	void init(string networkName, int minAge); //Initialization function for the SocialNetwork class.
	void clear(); //function to reset and delete all of the list's Profiles data.
	string getNetworkName() const; //const 'get' function that returns the Network's name.
	int getMinAge() const; //const 'get' function that returns the Network's minimum using age.
	bool addProfile(Profile profile_to_add); //function adds a given new profile object to the Network's Profile list.
	string getWindowsDevices() const; //function creates and returns a string containing all of the windows devices of profiles using the social network.
};