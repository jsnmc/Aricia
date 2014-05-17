#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

class OpenCVFunc
{
public:
	void fastMatchTemplate(cv::Mat& srca,cv::Mat& srcb,cv::Mat& dst,int maxlevel);
};