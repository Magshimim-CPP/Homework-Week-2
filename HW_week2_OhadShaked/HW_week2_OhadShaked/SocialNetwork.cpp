#include "SocialNetwork.h"
#include "Device.h"

void SocialNetwork::init(string networkName, int minAge)
{
	this->networkName = networkName;
	this->minAge = minAge;
	profList = new ProfileList;
	profList->init();
}

void SocialNetwork::clear()
{
	profList->clear();
	delete profList;
}

std::string SocialNetwork::getNetworkName() const
{
	return networkName;
}

int SocialNetwork::getMinAge() const
{
	return minAge;
}
