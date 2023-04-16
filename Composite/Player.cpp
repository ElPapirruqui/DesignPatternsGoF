#include "Weapon/Weapon.h"
#include "Player.h"

void Player::Attack() {
	CurrentWeapon->ApplyDamage();
}

void Player::EquipWeapon(int WeaponIndex) {
	CurrentWeapon = dynamic_cast<Weapon*>(GetChildren()[WeaponIndex]);
}

void Player::AddWeapon(Weapon* NewWeapon) {
	AddComponent(dynamic_cast<Component*>(NewWeapon));
}