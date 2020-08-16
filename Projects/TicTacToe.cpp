#include <iostream>
#include <string>
using namespace std;
char board[3][3] = { {'1','2','3'},{'4','5','6'},{'7','8','9'} };
char current_marker;
int current_player;
void drawBoard() {
	cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
	cout << "-----------" << endl;
	cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
	cout << "-----------" << endl;
	cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
}

bool placeMarker(int slot) {
	int row = slot / 3;
	int col;
	if (slot % 3 == 0) {
		row = row - 1;
		col = 2;
	}
	else
		col = (slot % 3) - 1;
	if (board[row][col] != 'X' && board[row][col] != 'O') { board[row][col] = current_marker; return true; }
	else return false;
}

int win() {
	for (int i = 0; i < 3; i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
			return current_player;
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
			return current_player;
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
		return current_player;
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2])
		return current_player;
	return 0;
}

void swap() {
	if (current_marker == 'X') current_marker = 'O';
	else current_marker = 'X';
	if (current_player == 1) current_player = 2;
	else current_player = 1;
}
void game() {
	char marker_p1;
	int slot;
	cout << "Player 1, Choose your marker: "; cin >> marker_p1;
	current_player = 1;
	current_marker = marker_p1;
	drawBoard();
	int winner;
	for (int i = 0; i < 9; i++) {
		cout << "Its Player " << current_player << "'s turn. Enter your slot: "; cin >> slot;
		if (slot < 1 || slot > 9) {
			cout << "That slot is invalid! Try another slot.";
			i--;
			continue;
		}
		if (!placeMarker(slot)) { cout << "This slot is already occupied! Please choose another slot."; i--; continue; }
		drawBoard();
		winner = win();
		if (winner == 1) { cout << "Player 1 won! Congratulations and hard luck for player 2!"; break; }
		if (winner == 2) { cout << "Player 2 won! Congratulations and hard luck for player 1!"; break; }
		swap();
		
	}
	if (winner == 0)
		cout << "Tie! Its a Draw!" << endl;
}
int main() {
	cout << "~-~-~-~-~ TIC TAC TOE ~-~-~-~-~" << endl;
	cout << "Welcome to Tic tac toe!" << endl;
	cout << "-------------------------------" << endl;
	drawBoard();
	game(); 
}