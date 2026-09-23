#include "ValidInput.h"
#include <iostream>

namespace ValidateInput
{
	int GetValidNumbers(int aMIN_NUMBER, int aMAX_NUMBER)
	{
		int number;
		std::cin >> number;

		while (std::cin.fail() || number < aMIN_NUMBER || number > aMAX_NUMBER)
		{
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(10000, '\n');

				std::cout << "You have to enter a number, try again!" << std::endl;
			}
			else
			{
				std::cout << "You have to pick a number between "
					<< aMIN_NUMBER << " and " << aMAX_NUMBER << ", try again!" << std::endl;
			}
			std::cin >> number;
		}
		return number;
	}
}