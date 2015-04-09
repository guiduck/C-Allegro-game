#include "Vector.h"
#include <cmath>

Vector::Vector(float x, float y, float z, int direction) {

	Vector::setX(x);
	Vector::setY(y);
	Vector::setZ(z);
	Vector::setDirection(direction);
}


void Vector::setX(float x) {
   this->x = x;
}

void Vector::setY(float y) {
   this->y = y;
}

void Vector::setZ(float z) {
   this->z = z;
}

void Vector::setDirection(int direction) {
	if(direction == -1) {
		this->direction = direction;
	}

	this->direction = 1;
}

float Vector::getY() {
	return this->y;
}

float Vector::getZ() {
	return this->z;
}

float Vector::getX() {
	return this->x;
}

int Vector::getDirection() {
	return this->direction;
}

float Vector::getMagnitude() {
	float x2 = this->x * this->x;
	float y2 = this->y * this->y;
	float z2 = this->z * this->z;
	float sum = x2 + y2 + z2;
	return (sqrt(sum));
}






















