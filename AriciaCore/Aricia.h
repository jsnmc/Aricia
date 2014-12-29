// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the ARICIA_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// ARICIA_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef ARICIA_EXPORTS
#define ARICIA_API __declspec(dllexport)
#else
#define ARICIA_API __declspec(dllimport)
#endif

#include <string>

// This class is exported from the Aricia.dll
class ARICIA_API CMatch {
public:
	CMatch(void);
	// TODO: add your methods here.
};

struct Location {
	double x;
	double y;
};

struct Image {
	std::string imagePath;
};

struct Match {
	Location* location;
	Image* image;
};

struct Region{
	int x;
	int y;
	int height;
	int width;
};

//REGION
ARICIA_API bool exists(const std::string baseImagePath, const std::string targetImagePath, int seconds);
ARICIA_API Match* find(const std::string baseImagePath, const std::string targetImagePath);
ARICIA_API Match* wait(const std::string baseImagePath, const std::string targetImagePath, int milliSecondsToWait);


// This class is exported from the Aricia.dll
class ARICIA_API CAricia {
public:
	CAricia(void);
	// TODO: add your methods here.
};

extern ARICIA_API int nAricia;

ARICIA_API int fnAricia(void);
