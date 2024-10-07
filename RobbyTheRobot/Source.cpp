#include <iostream>
#include "GraphicsManager.h"	

//Ignore this!!
Room* room;
Robot* robby;
GraphicsManager* picture;
//

int main()
{
	//declare the room, robby and picture objects here
	room = new Room(0);
	robby = new Robot();
	picture = new GraphicsManager(room, robby);



	picture->draw();


	robby->right();
	picture->draw();

	for (int i = 0; i < 3; i++)
	{
		while (!robby->obstacle_ahead(room))
		{
			robby->move();

		}
		std::cout << "Robby is in the bottom right corner" << std::endl;

		while (!robby->obstacle_ahead(room))
		{
			robby->move();

		}
		robby->left();
		picture->draw();
		std::cout << "Robby is in the top right corner" << std::endl;

		while (!robby->obstacle_ahead(room))
		{
			robby->move();

		}
		robby->left();
		picture->draw();
		std::cout << "Robby is in the top left corner" << std::endl;

		while (!robby->obstacle_ahead(room))
		{
			robby->move();

		}
		robby->left();
		picture->draw();
		std::cout << "Robby is in the bottom left corner" << std::endl;

		while (!robby->obstacle_ahead(room))
		{
			robby->move();

		}
		robby->left();
		picture->draw();
	}

	robby->left();
	picture->draw();


	std::cout << "You have hit a wall\n";
	//we need system pause so that we can see where robby ends up
	system("Pause");
}


//int main()
//{
//	int input = 0;//store user input
//	int total = 0;//store total
//
//	//Ask the user for their marks
//
//	while (input != -1)
//	{
//		std::cout << "Enter your coursework marks or (-1) to quit: ";
//		std::cin >> input;
//		total = total + input;
//	}//end while
//
//	std::cout << "total is :" << total<<std::endl;
//
//	system("Pause");
//}