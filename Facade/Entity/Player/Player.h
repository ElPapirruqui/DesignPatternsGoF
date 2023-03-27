#pragma once
#include "../Entity.h"
#include "../IMovable.h"
#include "../../Senses/SenseFacade.h"

class Player : public IEntity {
public:
	Player(int NewSoundRadius);
	void OnFootstep() override;
	SenseFacade* Senses;
private:
	int SoundRadius;
};