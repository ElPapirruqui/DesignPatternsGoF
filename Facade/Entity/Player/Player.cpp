#include "Player.h"

Player::Player() {
	Senses = new SenseFacade(this);
}

void Player::OnFootstep() {
	Senses->EmitSound(SoundRadius);
}