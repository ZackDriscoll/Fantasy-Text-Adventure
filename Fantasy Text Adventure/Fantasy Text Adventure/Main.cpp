#include <iostream>
#include <string>
#include "Character.h"
#include "Paladin.h"
#include "Priest.h"
#include "Rogue.h"
#include "Wizard.h"


//Prototype Functions
void Intro();
void ClassSelect();
void PaladinChapter();
void PriestChapter();
void RogueChapter();
void WizardChapter();
void Ending();
void PlayAgain();

//Variable to ask for user input
std::string userInput;

//Variable for the user's name
std::string playerName;

//Create the different character objects
Paladin paladin;
Priest priest;
Rogue rogue;
Wizard wizard;


int main()
{
	//Run the Intro function
	Intro();

	//Run the Ending function
	Ending();

	return 0;
}

//Intro Function
void Intro()
{
	//Display title
	std::cout << "\n\n\t**** Welcome to the Fantasy Text Adventure! ****\n\n";	

	std::cout << "\n**** Please enter responses exactly as prompted for best experience! ****\n\n";

	//Call Class Select function
	ClassSelect();
}

//Class Select Function
void ClassSelect()
{
	//Activate exception for class selection (nice ryhme huh?)
	try
	{
		//Ask user what class they want their character to be
		std::cout << "\nWhich class would you like to play as? ";
		std::cout << "\nClasses: \n1.) Paladin \n2.) Priest \n3.) Rogue \n4.) Wizard \n\nPlease enter the number of which class you'd like to play as and press enter. ";
		
		//Get the user's answer
		std::cin >> userInput;

		//Check their answer
		if (userInput == "1")
		{
			//Build Scenario
			std::cout << "\n\nYou've chosen to be a Paladin!";
			std::cout << "\nWhat is your name? ";
			std::cin >> userInput;

			//Set paladin object's name to the user's input and display it
			paladin.SetName(userInput);
			std::cout << "\nYour Paladin's name is " << paladin.GetName() << ".\n";

			//Run the Paladin hapter function
			PaladinChapter();
		}
		else if (userInput == "2")
		{
			//Build Scenario
			std::cout << "\n\nYou've chosen to be a Priest!";
			std::cout << "\nWhat is your name? ";
			std::cin >> userInput;

			//Set priest object's name to the user's input and display it
			priest.SetName(userInput);
			std::cout << "\nYour Priest's name is " << priest.GetName() << ".\n";

			//Run the Priest chapter function
			PriestChapter();
		}
		else if (userInput == "3")
		{
			//Build Scenario
			std::cout << "\n\nYou've chosen to be a Rogue!";
			std::cout << "\nWhat is your name? ";
			std::cin >> userInput;

			//Set rogue object's name to the user's input and display it
			rogue.SetName(userInput);
			std::cout << "\nYour Rogue's name is " << rogue.GetName() << ".\n";

			//Run the Rogue chapter function
			RogueChapter();
		}
		else if (userInput == "4")
		{
			//Build Scenario
			std::cout << "\n\nYou've chosen to be a Wizard!";
			std::cout << "\nWhat is your name? ";
			std::cin >> userInput;

			//Set wizard object's name to the user's input and display it
			wizard.SetName(userInput);
			std::cout << "\nYour Wizard's name is " << wizard.GetName() << ".\n";

			//Run the Wizard chapter function
			WizardChapter();
		}
		else
		{
			throw userInput;
		}
	}
	catch (...)
	{
		//Explain error
		std::cout << "\nI'm sorry, but I don't recognize that input. To try again ";

		//System pause for good UX
		system("pause");

		//Recursion to restart in case of unacceptable input
		ClassSelect();
	}
}

//Paladin Chapter Function
void PaladinChapter()
{
	//Give the character's backstory
	std::cout << "\n\nYou are " << paladin.GetName() << ", a righteous warrior from the kingdom of Bethen.";
	std::cout << "\nFrom a young age, you dreamt of becoming a knight of the realm, and eventually you found a master willing to devote their time to teaching you.";
	std::cout << "\nSadly, not long before your training would be complete, a demon attacked your home killing your master.";
	std::cout << "\nYou swore then and there that you'd spend the rest of your days hunting that foul demon and any other evil beings you came across in honor of your master.";

	//System pause for good UX
	std::cout << "\n\nTo continue your journey, ";
	system("pause");
	
	//Begin the main story
	std::cout << "\n\nMany years since your master's death, you find yourself at a tavern in the Sheoba Empire of the Eastern Lands.";
	std::cout << "\nYou tell the barkeep your story in the hopes of finding someone to aid you in your quest.";

	//Set the rogue's name before they join your party
	rogue.SetName("Ravinger");

	//Continue the story
	std::cout << "\nThere, you meet a curious stranger going by the name of " << rogue.GetName() << " the Phantom, who offers their humble services to you.\n";
	std::cout << "'Hello there friend, I am " << rogue.GetName() << ", a humble thief who was moved by your story and wishes to help you.'\n";
	std::cout << "'I can scout out areas ahead of you and find great gear to help you. I'm also not bad for some great suprise attacks!'";
	std::cout << "\nYou accept " << rogue.GetName() << "'s offer, and set out once again to hunt the demon!";

	//System pause for good UX
	std::cout << "\n\nTo continue your journey, ";
	system("pause");

	//Continue the story
	std::cout << "\n\nAs you and " << rogue.GetName() << " continue on your quest, you come across a village on fire!"; 
	std::cout << "\nYou both rush ahead to aid anyone in trouble, when you see two magic users fighting off a fire giant.";
	std::cout << "\nSeeing their struggle, you immediately rush in to strike at the foe exclaiming, '";
	paladin.Attack();
	std::cout << "'";
	std::cout << "\nDespite not knowing each other, you all work in tandem each exclaiming your attacks to throw off the fire giant!";
	std::cout << "\nYou hear one of the magic users exclaim '";
	priest.Attack();
	std::cout << "'";
	std::cout << "\nThen the other one says '";
	wizard.Attack();
	std::cout << "'";
	std::cout << "\nAnd lastly, you hear " << rogue.GetName() << " call out '";
	rogue.Attack();
	std::cout << "'\n";

	//System pause for good UX
	std::cout << "\nTo continue your journey, ";
	system("pause");

	//Set the priest and wizard's names before they join your party
	priest.SetName("Udarin");
	wizard.SetName("Isorin");

	//Continue the story
	std::cout << "\n\nYou and the others successfully defeat the fire giant and save the village!";
	std::cout << "\nYou all agree to camp out together for the night and begin to introduce yourselves.";
	std::cout << "\n'Greetings friends, I am " << paladin.GetName() << ", and this is my friend " << rogue.GetName() << ". Might I ask for your names?'";
	std::cout << "\n'I am " << wizard.GetName() << ", a wizard from far away lands in search of knowledge and seeking to rid the world of dark magic.'";
	std::cout << "\n'And I am " << priest.GetName() << " a priest seeking to aid " << wizard.GetName() << " and his noble goals.'";

	//System pause for good UX
	std::cout << "\nTo continue your journey, ";
	system("pause");

	//Continue the story
	std::cout << "\n\nAfter spending the rest of the night recounting each others tales, the mages agree to help you hunt the demon!";
	std::cout << "\nThe next morning you all set off to continue on your righteous quest!";
}

//Priest Chapter Function
void PriestChapter()
{
	//Give the character's backstory
	std::cout << "\n\nYou are " << priest.GetName() << ", a simple priest from the land of Wraidour.";
	std::cout << "\nYou've devoted your life to learning the non-lethal magical arts, such as healing and blinding your foes.";
	std::cout << "\nLearning all that you could in Wraidour, you set out to find more knowledge and stop evil in its tracks!";

	//System pause for good UX
	std::cout << "\n\nTo continue your journey, ";
	system("pause");

	//Set the wizard's name before they join your party
	wizard.SetName("Isorin");

	//Begin Main story
	std::cout << "\n\nEventually, you find the land of Prailux, home to many wizards and mages also seeking knowledge.";
	std::cout << "\nEntering one of the many (and I mean MANY) libraries here, you meet a fellow wizard and strike up a conversation.";
	std::cout << "\n'Hello, I am " << priest.GetName() << ", might I ask for your name?'";
	std::cout << "\n'Greetings friend, I am " << wizard.GetName() << ", a fellow mage seeking knowledge of combat magic to put an end to dark magic'";
	std::cout << "\nAfter spending much time getting to know each other, you agree to explore the world to fight evil and gain more knowledge of the outside world.";

	//System pause for good UX
	std::cout << "\n\nTo continue your journey, ";
	system("pause");

	//Continue the story
	std::cout << "\n\nEventually, you come across a village in need, claiming that a fire giant attacks them every week.";
	std::cout << "\nBy the time they repair their homes and businesses, the giant strikes again!";
	std::cout << "\nHonoring your quest and sympathizing with the villagers, you both agree to take on the monster!";

	//System pause for good UX
	std::cout << "\n\nTo continue your journey, ";
	system("pause");

	//Set the paladin and rogue's names before they join your party
	paladin.SetName("Solair");
	rogue.SetName("Ravinger");

	//Continue the story
	std::cout << "\n\nOnce the giant arrives, you both begin to attack the beast in hopes of defeating it.";
	std::cout << "\nAs you both begin to cast your vairous spells you hear someone call out '";
	paladin.Attack();
	std::cout << "'";
	std::cout << "\nHearing this, you realize a knight in shining armor rushes in and aids you in your fight!";
	std::cout << "\nDespite not knowing each other, you all work in tandem each exclaiming your attacks to throw off the fire giant!";
	std::cout << "\nYou exclaim '";
	priest.Attack();
	std::cout << "'";
	std::cout << "\nThen to capitalize on your Blinding Light, " << wizard.GetName() << " exclaims '";
	wizard.Attack();
	std::cout << "'";
	std::cout << "\nAnd lastly, you see a cloaked figure appear from seemingly nowhere and call out '";
	rogue.Attack();
	std::cout << "'\n";

	//System pause for good UX
	std::cout << "\n\nTo continue your journey, ";
	system("pause");

	//Continue the story
	std::cout << "\n\nYou and the others successfully defeat the fire giant and save the village!";
	std::cout << "\nYou all agree to camp out together for the night and begin to introduce yourselves.";
	std::cout << "\n'Greetings friends, I am " << priest.GetName() << ", and this is my friend " << wizard.GetName() << ". Might I ask for your names?'";
	std::cout << "\n'I am " << paladin.GetName() << ", a knight seeking to avenge my master who was slain by an evil demon!'";
	std::cout << "\n'And I am " << rogue.GetName() << " a humble thief seeking to aid " << paladin.GetName() << " and his noble goals, while finding a bit of treasure along the way.' He says with a smirk.";

	//System pause for good UX
	std::cout << "\nTo continue your journey, ";
	system("pause");

	//Continue the story
	std::cout << "\n\nAfter spending the rest of the night recounting each others tales, you both agree to aid " << paladin.GetName() << " on his quest to kill the demon!";
	std::cout << "\nThe next morning you all set off to continue on your righteous quest!";
}

//Rogue Chapter Function
void RogueChapter()
{
	//Give the character's backstory
	std::cout << "\n\nYou are " << rogue.GetName() << ", a humble thief from the Sheoba Empire of the Eastern Lands.";
	std::cout << "\nGrowing up on the streets with nothing to your name, you learned to survive by begging, cheating, and stealing.";
	std::cout << "\nWell into your adulthood, you've become a master thief who seeks to help those in need and ensure no one has to grow up the way you did.";

	//System pause for good UX
	std::cout << "\n\nTo continue your journey, ";
	system("pause");

	//Set the wizard's name before they join your party
	paladin.SetName("Solair");

	//Begin Main story
	std::cout << "\n\nEventually, you find yourself in a tavern in the middle of nowhere.";
	std::cout << "\nWhile having a nice drink for yourself (one you actually paid for), you hear a knight recounting his tale to the barkeep.";
	std::cout << "\n'I am " << paladin.GetName() << ", a noble knight from Bethen seeking out the demon that murdered my master!'";
	std::cout << "\nSympathising with the knight, you call out to him.";
	std::cout << "'Hello there friend, I am " << rogue.GetName() << ", a humble thief who was moved by your story and wishes to help you.'\n";
	std::cout << "'I can scout out areas ahead of you and find great gear to help you. I'm also not bad for some great suprise attacks!'";
	std::cout << "\nAfter hearing your offer, " << paladin.GetName() << " kindly accepts your aid and the next morning you head off in search of the demon!";

	//System pause for good UX
	std::cout << "\n\nTo continue your journey, ";
	system("pause");

	//Continue the story
	std::cout << "\n\nAs you and " << paladin.GetName() << " continue on your quest, you come across a village on fire!";
	std::cout << "\nYou both rush ahead to aid anyone in trouble, when you see two magic users fighting off a fire giant.";
	std::cout << "\nSeeing their struggle, " << paladin.GetName() << " immediately rushes in to strike at the foe exclaiming, '";
	paladin.Attack();
	std::cout << "'";
	std::cout << "\nDespite not knowing each other, you all work in tandem each exclaiming your attacks to throw off the fire giant!";
	std::cout << "\nYou hear one of the magic users exclaim '";
	priest.Attack();
	std::cout << "'";
	std::cout << "\nThen the other one says '";
	wizard.Attack();
	std::cout << "'";
	std::cout << "\nAnd lastly, you call out '";
	rogue.Attack();
	std::cout << "'\n";

	//System pause for good UX
	std::cout << "\nTo continue your journey, ";
	system("pause");

	//Set the priest and wizard's names before they join your party
	priest.SetName("Udarin");
	wizard.SetName("Isorin");

	//Continue the story
	std::cout << "\n\nYou and the others successfully defeat the fire giant and save the village!";
	std::cout << "\nYou all agree to camp out together for the night and begin to introduce yourselves.";
	std::cout << "\n'Greetings friends, I am " << paladin.GetName() << ", and this is my friend " << rogue.GetName() << ". Might I ask for your names?'";
	std::cout << "\n'I am " << wizard.GetName() << ", a wizard from far away lands in search of knowledge and seeking to rid the world of dark magic.'";
	std::cout << "\n'And I am " << priest.GetName() << " a priest seeking to aid " << wizard.GetName() << " and his noble goals.'";

	//System pause for good UX
	std::cout << "\nTo continue your journey, ";
	system("pause");

	//Continue the story
	std::cout << "\n\nAfter spending the rest of the night recounting each others tales, the mages agree to help you both hunt the demon!";
	std::cout << "\nThe next morning you all set off to continue on your righteous quest!";
}

//Wizard Chapter Function
void WizardChapter()
{
	//Give the character's backstory
	std::cout << "\n\nYou are " << wizard.GetName() << ", a gifted wizard from Prailux.";
	std::cout << "\nYou've devoted your life to learning the powerful magical arts, such as Meteor and Icicle Storm.";
	std::cout << "\nPrailux is a huge city filled with hundreds of libraries of magical texts, so that is where you spend much of your time, when you aren't practicing your spells that is.";

	//System pause for good UX
	std::cout << "\n\nTo continue your journey, ";
	system("pause");

	//Set the wizard's name before they join your party
	priest.SetName("Udarin");

	//Begin Main story
	std::cout << "\n\nOne day you are approached by a fellow mage and he strikes up a conversation.";
	std::cout << "\n'Hello, I am " << priest.GetName() << ", a priest seeking knowledge and an end to evil. Might I ask for your name?'";
	std::cout << "\n'Greetings friend, I am " << wizard.GetName() << ".'";
	std::cout << "\nAfter spending much time getting to know each other, you agree to explore the world to fight evil and gain more knowledge of the outside world.";

	//System pause for good UX
	std::cout << "\n\nTo continue your journey, ";
	system("pause");

	//Continue the story
	std::cout << "\n\nEventually, you come across a village in need, claiming that a fire giant attacks them every week.";
	std::cout << "\nBy the time they repair their homes and businesses, the giant strikes again!";
	std::cout << "\nHonoring your quest and sympathizing with the villagers, you both agree to take on the monster!";

	//System pause for good UX
	std::cout << "\n\nTo continue your journey, ";
	system("pause");

	//Set the paladin and rogue's names before they join your party
	paladin.SetName("Solair");
	rogue.SetName("Ravinger");

	//Continue the story
	std::cout << "\n\nOnce the giant arrives, you both begin to attack the beast in hopes of defeating it.";
	std::cout << "\nAs you both begin to cast your vairous spells you hear someone call out '";
	paladin.Attack();
	std::cout << "'";
	std::cout << "\nHearing this, you realize a knight in shining armor rushes in and aids you in your fight!";
	std::cout << "\nDespite not knowing each other, you all work in tandem each exclaiming your attacks to throw off the fire giant!";
	std::cout << "\nYou hear " << priest.GetName() << " exclaim '";
	priest.Attack();
	std::cout << "'";
	std::cout << "\nThen to capitalize on " << priest.GetName() << "'s Blinding Light, you exclaim '";
	wizard.Attack();
	std::cout << "'";
	std::cout << "\nAnd lastly, you see a cloaked figure appear from seemingly nowhere and call out '";
	rogue.Attack();
	std::cout << "'\n";

	//System pause for good UX
	std::cout << "\n\nTo continue your journey, ";
	system("pause");

	//Continue the story
	std::cout << "\n\nYou and the others successfully defeat the fire giant and save the village!";
	std::cout << "\nYou all agree to camp out together for the night and begin to introduce yourselves.";
	std::cout << "\n'Greetings friends, I am " << priest.GetName() << ", and this is my friend " << wizard.GetName() << ". Might I ask for your names?'";
	std::cout << "\n'I am " << paladin.GetName() << ", a knight seeking to avenge my master who was slain by an evil demon!'";
	std::cout << "\n'And I am " << rogue.GetName() << " a humble thief seeking to aid " << paladin.GetName() << " and his noble goals, while finding a bit of treasure along the way.' He says with a smirk.";

	//System pause for good UX
	std::cout << "\nTo continue your journey, ";
	system("pause");

	//Continue the story
	std::cout << "\n\nAfter spending the rest of the night recounting each others tales, you both agree to aid " << paladin.GetName() << " on his quest to kill the demon!";
	std::cout << "\nThe next morning you all set off to continue on your righteous quest!";
}

//Ending Function
void Ending()
{
	//Thank the user for playing
	std::cout << "\n\n\t**** Your adventure continues for another day! Thanks for playing! ****\n\n";

	//Call the Play Again function
	PlayAgain();
}

//Play Again Function
void PlayAgain()
{
	try
	{
		//Ask if the user would like to play again
		std::cout << "\n\nWould you like to play again? Please enter Y/N and press enter. ";
		std::cin >> userInput;

		//Check user input
		if (userInput == "Y" || userInput == "y")
		{
			//Run the intro function to replay
			Intro();
		}
		else if (userInput == "N" || userInput == "n")
		{
			std::cout << "\n\n\t**** Thanks for playing! ****\n\n\n";
		}
		else
		{
			throw userInput;
		}
	}
	catch (...)
	{
		//Explain error
		std::cout << "\nI'm sorry, but I don't recognize that input. To try again ";

		//System pause for good UX
		system("pause");

		//Recursion to restart in case of unacceptable input
		PlayAgain();
	}
}