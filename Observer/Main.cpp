#include "Subject/Subject.h"
#include "Observer/Team/Team.h"
#include "Observer/Player/Player.h"

int main(){

	Subject* TeamsSubject = new Subject();
	Team* RedTeam = new Team(TeamsSubject, "Red Team");
	Team* BlueTeam = new Team(TeamsSubject, "Blue Team");
	Team* GreenTeam = new Team(TeamsSubject, "Green Team");

	Player* RedPlayer1 = new Player(RedTeam, "Macario");
	Player* RedPlayer2 = new Player(RedTeam, "Choele Choele");
	Player* RedPlayer3 = new Player(RedTeam, "Error Genetico");
	Player* BluePlayer1 = new Player(BlueTeam, "Discipulo de Puturra");
	Player* BluePlayer2 = new Player(BlueTeam, "Pastor Jimenji");
	Player* GreenPlayer1 = new Player(GreenTeam, "El Ganian");

	RedPlayer1->CaptureFlag();
	BluePlayer2->CaptureFlag();
	BluePlayer1->CaptureFlag();
	GreenPlayer1->CaptureFlag();
	GreenPlayer1->CaptureFlag();
	GreenPlayer1->CaptureFlag();
	GreenPlayer1->CaptureFlag();
	GreenPlayer1->CaptureFlag();
	GreenPlayer1->CaptureFlag();

	return 0;
}