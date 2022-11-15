#pragma once
#include <string>
#include "ProfileList.h"

using namespace std;

class SocialNetwork
{
private:
	string networkName;
	int minAge;
	ProfileList* profList;

public:
	void init(string networkName, int minAge);
	void clear();
	string getNetworkName() const;
	int getMinAge() const;
};