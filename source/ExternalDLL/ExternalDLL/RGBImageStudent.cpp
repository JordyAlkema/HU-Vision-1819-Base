#include "RGBImageStudent.h"
#include <iostream>

RGBImageStudent::RGBImageStudent() : RGBImage() {
	std::cout << "test" << std::endl;
	//int throwError = 0, e = 1 / throwError; //Throws error without the need to include a header
	//TODO: Nothing
}

RGBImageStudent::RGBImageStudent(const RGBImageStudent &other) : RGBImage(other.getWidth(), other.getHeight()) {
	std::cout << "test2" << std::endl;
	pixels.clear();
	pixels = other.getPixels();

	//int throwError = 0, e = 1 / throwError;
	//TODO: Create a copy from the other object
}


RGBImageStudent::RGBImageStudent(const int width, const int height) : RGBImage(width, height) {
	std::cout << "test3" << std::endl;
	pixels.resize(width*height);
	//int throwError = 0, e = 1 / throwError;
	//TODO: Initialize pixel storage
}

RGBImageStudent::~RGBImageStudent() {
	//std::cout << "test" << std::endl;
	//Vector has automatic cleanup
	//int throwError = 0, e = 1 / throwError;
	//TODO: delete allocated objects
}

void RGBImageStudent::set(const int width, const int height) {
	std::cout << "test" << std::endl;
	RGBImage::set(width, height);
	std::cout << "did we get here?1" << std::endl;
	pixels.clear();
	std::cout << "did we get here?2" << std::endl;
	for (int i = 0; i < (width*height); i++) {
		std::cout << "did we get here?3" << std::endl;
		pixels.push_back(RGB(0, 0, 0));
		std::cout << "did we get here?4" << std::endl;
	}
	std::cout << "did we get here?" << std::endl;
	//int throwError = 0, e = 1 / throwError;
	//TODO: resize or create a new pixel storage (Don't forget to delete the old storage)
}

void RGBImageStudent::set(const RGBImageStudent &other) {
	//std::cout << "test" << std::endl;
	RGBImage::set(other.getWidth(), other.getHeight());
	pixels = other.getPixels();
	//int throwError = 0, e = 1 / throwError;
	//TODO: resize or create a new pixel storage and copy the object (Don't forget to delete the old storage)
}

void RGBImageStudent::setPixel(int x, int y, RGB pixel) {
	//std::cout << "test" << std::endl;
	pixels[x + y * getWidth()] = pixel;
	//int throwError = 0, e = 1 / throwError;
	//TODO: no comment needed :)
}

void RGBImageStudent::setPixel(int i, RGB pixel) {
	//std::cout << "test" << std::endl;
	pixels[i] = pixel;
	//int throwError = 0, e = 1 / throwError;
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
}

RGB RGBImageStudent::getPixel(int x, int y) const {
	//std::cout << "test" << std::endl;
	return pixels[x + y * getWidth()];
	//int throwError = 0, e = 1 / throwError;
	//TODO: no comment needed :)
	//return 0;
}

RGB RGBImageStudent::getPixel(int i) const {
	//std::cout << "test" << std::endl;
	return pixels[i];
	//int throwError = 0, e = 1 / throwError;
	//TODO: see setPixel(int i, RGB pixel)
	//return 0;
}

std::vector<RGB> RGBImageStudent::getPixels() const {
	return pixels;
}