#include "IntensityImageStudent.h"
#include <iostream>

IntensityImageStudent::IntensityImageStudent() : IntensityImage() {
	//int throwError = 0, e = 1 / throwError; //Throws error without the need to include a header
	//TODO: Nothing
	std::cout << "Hey this is me";
	IntensityImageStudent(1,1);
}

IntensityImageStudent::IntensityImageStudent(const IntensityImageStudent &other) : IntensityImage(other.getWidth(), other.getHeight()) {
	
	
	this->width = other.getWidth();
	this->height = other.getHeight();

	int numberOfPixels = other.getHeight() * other.getWidth();

	for (int i = 0; i < numberOfPixels; i++)
	{
		pixels[i] = other.getPixel(i);
	}
}

IntensityImageStudent::IntensityImageStudent(const int width, const int height) : IntensityImage(width, height) {
	std::cout << "Hey this is me";
	this->width = width;
	this->height = height;

	int numberOfPixels = width * height;

	for (int i = 0; i < numberOfPixels; i++)
	{
		pixels[i] = {};
	}
}

IntensityImageStudent::~IntensityImageStudent() {
	// Vector has automatic cleanup :)
}

void IntensityImageStudent::set(const int width, const int height) {
	this->height = height;
	this->width = width;

	std::vector<Intensity> newImage;

	int numberOfPixels = height * width;

	for (int i = 0; i < numberOfPixels; i++)
	{
		newImage[i] = {};
	}

	pixels = newImage;
}

void IntensityImageStudent::set(const IntensityImageStudent &other) {
	height = other.getHeight();
	width = other.getWidth();

	std::vector<Intensity> newImage;

	int numberOfPixels = height * width;

	for (int i = 0; i < numberOfPixels; i++)
	{
		newImage[i] = other.getPixel(i);
	}

	pixels = newImage;
}

void IntensityImageStudent::setPixel(int x, int y, Intensity pixel) {
	pixels[x*y] = pixel;
}

void IntensityImageStudent::setPixel(int i, Intensity pixel) {
	/*
	* TODO: set pixel i in "Row-Major Order"
	*
	*
	* Original 2d image (values):
	* 9 1 2
	* 4 3 5
	* 8 7 8
	*
	* 1d representation (i, value):
	* i		value
	* 0		9
	* 1		1
	* 2		2
	* 3		4
	* 4		3
	* 5		5
	* 6		8
	* 7		7
	* 8		8
	*/

	pixels[i] = pixel;
}

Intensity IntensityImageStudent::getPixel(int x, int y) const {
	return pixels[x*y];
}

Intensity IntensityImageStudent::getPixel(int i) const {
	return pixels[i];
}
