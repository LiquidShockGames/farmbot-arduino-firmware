/*
 * CurrentState.cpp
 *
 *  Created on: 15 maj 2014
 *      Author: MattLech
 */

#include "CurrentState.h"

static CurrentState* instance;
static unsigned int x = 0.0;
static unsigned int y = 0.0;
static unsigned int z = 0.0;

CurrentState * CurrentState::getInstance() {
	if (!instance) {
		instance = new CurrentState();
	};
	return instance;
};

CurrentState::CurrentState() {
}

unsigned int CurrentState::getX() {
	return x;
}

unsigned int CurrentState::getY() {
	return y;
}

unsigned int CurrentState::getZ() {
	return z;
}

unsigned int* CurrentState::getPoint() {
	unsigned int currentPoint[3] = {x, y, z};
	return currentPoint;
}

void CurrentState::setX(unsigned int newX) {
	x = newX;
}

void CurrentState::setY(unsigned int newY) {
	y = newY;
}

void CurrentState::setZ(unsigned int newZ) {
	z = newZ;
}

void CurrentState::print() {
	Serial.println("Current state");
	Serial.print("X:");
	Serial.print(x);
	Serial.print(", Y:");
	Serial.print(y);
	Serial.print(", Z:");
	Serial.println(z);
}

