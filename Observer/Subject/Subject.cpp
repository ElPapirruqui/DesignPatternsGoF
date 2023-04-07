#include "../Observer/Team/Team.h"
#include "../Observer/Observer.h"
#include "../Subject/Score.h"
#include "Subject.h"

Subject::Subject() {
	CurrentScore = new Score(Observers);
}

void Subject::UpdateState(Player* Scorer) {
	CurrentScore->SetScorer(Scorer);
	CurrentScore->Show();
	NotifyAll();
}

Score* Subject::GetState() {
	return CurrentScore;
}

void Subject::AddObserver(Observer* NewObserver) {
	Observers.push_back(NewObserver);
}

void Subject::NotifyAll(){
	for (Observer* Obs : Observers) {
		Obs->Update();
	}
}