//Jack Kelly
#include "Enemy.h"

#pragma region METHODS

// Move this UNIT to the tile determined by mouse input. Modifieds this UNIT-s location
// instance var. If moved to an ENEMY-s tile then attack(that) automatically.
void Enemy::move() {

}

// Attack the ENEMY instance passed in to the fxn. The attacking UNIT-s class and weapon/gear
// will determine how the attack is performed.
void Enemy::attack(Unit that) {

}

// Method used to calculate the movement options a UNIT has on the game board. Movement is indicative
// of a UNIT-s class, as other classes have more mobility than others. Movement is relative the grid
// of the game board.
void Enemy::pathFinding() {

}

// Helper method for pathFinding; determines the "reachable" area for that UNIT.
void Enemy::scanGrid() {

}

#pragma endregion