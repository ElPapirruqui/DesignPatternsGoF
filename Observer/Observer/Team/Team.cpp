#include "../../Subject/Subject.h"
#include "../Player/Player.h"
#include "../../Subject/Score.h"
#include "Team.h"

Team::Team(Subject* NewSubject, string NewName) :Observer(NewSubject), Name(NewName) {
	MySubject->AddObserver(this);
}

void Team::AddMember(Player* NewPlayer) {
	Members.push_back(NewPlayer);
}

void Team::AddFlag(Player* Scorer) {
	Score++;
	MySubject->UpdateState(Scorer);
}

void Team::Update() {
	for (Player* Member : Members) {
		Member->CheckStatus(MySubject->GetState()->GetWinner(), MySubject->GetState()->GetScorer());
	}
}

string& Team::GetName() {
	return Name;
}

int& Team::GetScore() {
	return Score;
}