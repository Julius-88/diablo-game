#include <iostream>
#include "Dungeon.h"
#include "ValidInput.h"

namespace Dungeon
{
	void Continue()
	{
		system("pause");
		system("cls");
	}

	void DungeonStageOne()
	{
		std::cout << "=============================" << std::endl;
		std::cout << "|       The Dungeon         |" << std::endl;
		std::cout << "=============================\n\n" << std::endl;

		std::cout << "You deserted the army and would have been sentenced to death had it not been for your fathers influence.\n" 
			"You have instead been sent to an unexplored dungeon.\n\n"
			"Survive and you are free but all valuables you should find belongs to the king.\n" << std::endl;

		std::cout << "Press 1 to enter the dungeon." << std::endl;
		std::cout << "Press 2 to make a run for it.\n" << std::endl;
		std::cout << "Press 3 to show your stats.\n" << std::endl;

		int playerChoice = ValidateInput::GetValidNumbers(1, 3);

		if (playerChoice == 1)
		{
			system("cls");
			std::cout << "=============================" << std::endl;
			std::cout << "|     The Hero's Path      |" << std::endl;
			std::cout << "=============================\n\n" << std::endl;
			std::cout << "You cautiously enter the dungeon.\n"
				"The only thing louder than your footsteps echoing in the great nothingness is the beating of your heart\n" << std::endl;
			Continue();
		}
		else if (playerChoice == 2)
		{
			system("cls");
			std::cout << "=============================" << std::endl;
			std::cout << "|     The Coward's Path     |" << std::endl;
			std::cout << "=============================\n\n" << std::endl;
			std::cout << "You feel your neckhair standing on stiff and decide to make a run for it.\n"
				"You turn around and run into the thick forest hoping the guards can't catch up to you.\n" << std::endl;
			Continue();
		}
		else
		{
			system("cls");
			std::cout << "=============================" << std::endl;
			std::cout << "|     Player Stats     |" << std::endl;
			std::cout << "=============================\n\n" << std::endl;

		}
	}

	void DungeonStageTwo()
	{

	}
}