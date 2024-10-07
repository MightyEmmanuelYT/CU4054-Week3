//#include <cstdlib> // random numbers header file//
//#include <ctime> // used to get date and time information
//#include <iostream>
//int main()
//{
//	srand(time(0)); //initialise random num generator using time
//	int roll = 0; //declare a variable to keep store the random number
//
//	int input = 1;
//	float tries = 0;
//	float throws = 0;
//	int count=0;
//	while (input != 0)
//	{
//		roll = rand() % 6 + 1; // generate a random number between 1 and 6
//		count++;
//		if (roll == 6)
//		{
//			throws++;
//			std::cout <<"It took you "<< count<<" tries to get a 6, to quit enter 0" << std::endl;
//			std::cin >> input;
//			tries += count;
//			count = 0;
//		}
//	}
//
//	float average = tries/throws;
//
//	std::cout << "Tries and throws " << tries << " : " << throws << std::endl;
//	std::cout << "The avearge is: " << average << std::endl;
//
//	system("Pause");
//	return 0;
//
//}
