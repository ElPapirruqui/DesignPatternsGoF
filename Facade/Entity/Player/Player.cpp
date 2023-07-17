#include "Player.h"
#include<iostream>
#include<string>

using namespace std;

Player::Player(int NewSoundRadius) {
	SoundRadius = NewSoundRadius;
	Senses = new SenseFacade(this);
}

void Player::OnFootstep() {
	int HeardCount = Senses->EmitSound(SoundRadius);
	cout << "Player has been heard by " + to_string(HeardCount) + " Enemies";
}