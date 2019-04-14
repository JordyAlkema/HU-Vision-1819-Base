#include "StudentPreProcessing.h"
#include "ImageFactory.h"


IntensityImage * StudentPreProcessing::stepToIntensityImage(const RGBImage &image) const {
	auto ptr = ImageFactory::newIntensityImage(image.getWidth(), image.getHeight());
	for (int i = 0; i < (image.getWidth()*image.getHeight()); i++) {
		auto pixel = image.getPixel(i);
		Intensity newPixel = (0.3*pixel.r + 0.59*pixel.g + 0.11*pixel.b);
		ptr->setPixel(i, newPixel);
	}
	return ptr;
}

IntensityImage * StudentPreProcessing::stepScaleImage(const IntensityImage &image) const {
	return nullptr;
}

IntensityImage * StudentPreProcessing::stepEdgeDetection(const IntensityImage &image) const {
	return nullptr;
}

IntensityImage * StudentPreProcessing::stepThresholding(const IntensityImage &image) const {
	return nullptr;
}