// Aricia.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "Aricia.h"

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include "opencv2/core/core.hpp"
#include "opencv2/features2d/features2d.hpp"
#include "opencv2/nonfree/features2d.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/nonfree/nonfree.hpp"

#include "OpenCVFunc.h"

#include <chrono>
#include <thread>

// ENABLE TO show image output for diagnostics
//#define _SHOWRESULT

// So, get some code going just to play around with and see how this will work.
// This may not be the most effecient way to determine if the image exists, but it is a 
// good start
ARICIA_API bool exists(const std::string baseImagePath, const std::string targetImagePath, int seconds)
{
	bool gotValue = false;
	cv::Mat ref = cv::imread(baseImagePath, CV_LOAD_IMAGE_GRAYSCALE);	// desktop
	cv::Mat tpl = cv::imread(targetImagePath, CV_LOAD_IMAGE_GRAYSCALE);	// target to find
	// Refactor block out
	if (ref.data == NULL)
		return false;
	if (tpl.data == NULL)
		return false;
	if (ref.rows < tpl.rows || ref.cols < tpl.cols)
		return false;	

	cv::Mat dst;
	OpenCVFunc opencvfunc;
	opencvfunc.fastMatchTemplate(ref, tpl, dst, 2);

	while (true)
	{
		double minval, maxval = 0;
		cv::Point minloc, maxloc;
		cv::minMaxLoc(dst, &minval, &maxval, &minloc, &maxloc);

		if (maxval >= 0.9)
		{
			gotValue = true;
			cv::rectangle(
				ref, maxloc,
				cv::Point(maxloc.x + tpl.cols, maxloc.y + tpl.rows),
				CV_RGB(0, 255, 0), 2
				);
			cv::floodFill(
				dst, maxloc,
				cv::Scalar(0), 0,
				cv::Scalar(.1),
				cv::Scalar(1.)
				);
		}
		else
			break;
	}

#ifdef _SHOWRESULT
	cv::imshow("result", ref);
	cv::waitKey();
#endif

	return gotValue;
}

// This is an example of an exported variable
ARICIA_API int nAricia=0;

// This is an example of an exported function.
ARICIA_API int fnAricia(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see Aricia.h for the class definition
CAricia::CAricia()
{
	return;
}
