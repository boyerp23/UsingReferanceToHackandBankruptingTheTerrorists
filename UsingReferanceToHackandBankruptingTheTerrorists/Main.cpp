//Creator: Paul Boyer
//contact: pauboyer@uat.edu
//CSC215 C/C++ Prog 1 wk 4


//Allows input and output
#include <iostream>
//Allows me to use strings
#include <string>
//Used so that I dont need to type std:: for each line
using namespace std;
//Declare / Prototype functions that i will use
void firstTransferAttempt();
void badSwap(int x, int y);
void secondTransferAttempt();
void goodSwap(int& x, int& y);
void logoutServer();
//Start
int main()
{
	//Title
	cout << "\n\n\t*** WELCOME TO UNIVERSE BANK  ***\n\n";
	//Pause for user.
	system("pause");
	//Agent needs to login to server before they're able to initiate funds transfer.
	//Stores Agents access code to memory.
	string playerAccessCode;
	//Request Agent to input their access code to the server.
	cout << "\nIn order to access the server please enter your 5 digit aplhanumeric access code : \n";
	//gets Agents access code stored in memory.
	getline(cin, playerAccessCode);
	//Grant access to bank server to view account balances and initiate the funds transfer.
	cout << "\nLogin successful. Thank you " + playerAccessCode + " your code has been verified.\n";
	

	//Initial balance inquiry before transactions happens.
	cout << "\nPress 'enter' to see current balance\n\n";
	//Pause for user.
	system("pause");
	
	//Amount of funds in each account.
	int anarchyFunds = 15000000;
	int joesCoffeeFunds = 1000;
	//Display the balances for each account. 
	cout << "Balance Inquiry: \n";
	cout << "Terror Funds: " << anarchyFunds << "\n";
	cout << "Joe's Coffee Funds: " << joesCoffeeFunds << "\n\n";

	//Pause for user.
	system("\npause\n");

	//Calling the function to display dialog for first transfer attempt.
	firstTransferAttempt();
	//Calling the first funds transfer function.
	badSwap(anarchyFunds, joesCoffeeFunds);
	//Display the balances after funds transfer.
	cout << "Terror Funds: " << anarchyFunds << "\n";
	cout << "Joe's Coffee Funds: " << joesCoffeeFunds << "\n\n";

	//Pause for user.
	system("\npause\n");	
	
	//Calling the function to display dialog for second transfer attempt.
	secondTransferAttempt();
	//Calling the second funds transfer function.
	goodSwap(anarchyFunds, joesCoffeeFunds);
	//Display the balances after funds transfer.
	cout << "Terror Funds: " << anarchyFunds << "\n";
	cout << "Joe's Coffee Funds: " << joesCoffeeFunds << "\n\n";

	//Pause for user.
	system("pause");

	//calling the logout function after transfer complete. 
	logoutServer();
	
	//Pause for user.
	system("pause");
	//End
	return 0;
}
//Agent is to initiate the first attempt to transfer funds from one account to another. 
void firstTransferAttempt()
{
	cout << "\n\nPress 'enter' to initiate funds transfer.\n";
	system("\npause\n");
	cout << "\nFunds Transfer initiated from Anarchy Funds to Joe's Coffee Shop...";
	cout << "\n...";
	cout << "\n...";
	cout << "\nTransaction failed.. press 'enter' to see account balance..\n\n";
	system("pause");
}
//Copy of original amounts - temporary change that does not stay happens as the code is being executed and goes back to the original.
void badSwap(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}
//Agent is to initiate the second attempt to transfer funds from one account to another. 
void secondTransferAttempt()
{
	cout << "\n\nPress 'enter' to initiate funds transfer.\n";
	system("\npause\n");
	cout << "\nFunds Transfer initiated from Anarchy Funds to Joe's Coffee Shop...";
	cout << "\n.";
	cout << "\n..";
	cout << "\n...";
	cout << "\n....";
	cout << "\n.....";
	cout << "\n\nTransaction successful.. press 'enter' to see account balance..\n\n";
	system("pause");
}
//Referance to orginal values - what happens to them happens to the originals - permenant (until changed again later).
void goodSwap(int& x, int& y)
{
	cout << "\n ";
	int temp = x;
	x = y;
	y = temp;
}
//Have agent reapply code to exit server.
void logoutServer()
{
	//Stores Agents access code to memory.
	string playerExitCode;
	//Request Agent to input their access code to the logout of the server.
	cout << "\nIn order to close the server please enter your 5 digit aplhanumeric access code : \n";
	//gets Agents access code stored in memory.
	getline(cin, playerExitCode);
	//Grant access to logout of bank server after funds transfer is complete.
	cout << "\nThank you " + playerExitCode + " your code has been verified.\n";
	cout << "\n\nServer is now closed. Press 'enter' to exit.";
	//Pause for user.
	system("pause");
	//Thank the user for their patronage to complete logout.
	cout << "\nThank you " + playerExitCode + " your patronage here at the Universe Bank is appreciated!\n";
	cout << "\nHave a nice day.\n\n";
}