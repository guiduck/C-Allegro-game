/*
 * Vector.h
 *
 *  Created on: 17/03/2015
 *      Author: caio.silva
 */

#ifndef ENGINE_VECTOR_H_
#define ENGINE_VECTOR_H_

class Vector {

public:
	Vector(): x(0), y(0), z(0), direction{1} {};
	Vector(float, float, float, int);

	float getX();
	float getY();
	float getZ();
	int getDirection();

	void setX(float x);
	void setY(float y);
	void setZ(float z);
	void setDirection(int direction);

	float getMagnitude();



private:
	float x;
	float y;
	float z;
	int direction;


};
#endif /* ENGINE_VECTOR_H_ */


