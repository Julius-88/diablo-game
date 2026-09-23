#include <iostream>
#include "Story.h"
#include "ValidInput.h"

namespace Story
{
	void Story1()
	{
		std::cout << "=============================" << std::endl;
		std::cout << "|       The Dungeon         |" << std::endl;
		std::cout << "=============================\n\n" << std::endl;

		std::cout << "You deserted the army and would have been sentenced to death\n" 
			"had it not been for your fathers influence. You have instead been sent to a dungeon.\n\n"
			"Survive and you are free but all valuables you should find belongs to the king.\n" << std::endl;

		std::cout << "Press 1 to enter the dungeon." << std::endl;
		std::cout << "Press 2 to make a run for it." << std::endl;
	}

	void ContinueStory()
	{
		system("pause");
		system("cls");
	}
}