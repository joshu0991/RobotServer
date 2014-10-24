/*
 * Main.cpp
 *
 *  Created on: Oct 24, 2014
 *      Author: sputnik-110
 */

#include "Server.hpp"

int main(int argc, char** argv)
{
	mainServer mS;
	std::cout << "Starting server " << std::endl;
	if(argc == 2)
	{
		mS.setPort(argv[1]);
	}

	std::cout << "Running on port " << mS.getPort() << std::endl;

	return 0;
}