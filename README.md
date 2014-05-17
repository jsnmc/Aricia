Aricia
======

PURPOSE
===================
There are a few reasons to do this project but there are two main reasons:
1. Learn the basics of OpenCV
2. Provide a Sikuli like API that can be used from C#.  This could be used to drive BDD testing.

Build Requirements
===================

This project is dependent on OpenCV but it does utilize NuGet to pull some of the OpenCV dependencies.  
You still may have to pull the source or pre-built binaries from OpenCV to gain access to the libraries and runtime .dlls
http://sourceforge.net/projects/opencvlibrary/files/opencv-win/2.4.8/opencv-2.4.8.exe/download

For whatever reason, the nuget package configuration uses a slightly different directory structure than the OpenCV package.  

After installing OpenCV.2.4.8, navigate to the installation directory.  Create the following directory structure based off of the source tree for this project:
Aricia\packages\OpenCV.2.4.8\build\native\lib\x64\v120\Release

Open the folder opencv\build\x64\vc12\libs and copy the content into Aricia\packages\OpenCV.2.4.8\build\native\lib\x64\v120\Release

Create the following directory structure based off of the source tree for this project:
Aricia\packages\OpenCV.2.4.8\build\native\bin\x64\v120\Release

Open the folder opencv\build\x64\vc12\bin and copy the content into Aricia\packages\OpenCV.2.4.8\build\native\bin\x64\v120\Release

Copy Aricia\packages\OpenCV.2.4.8\build\native\bin\x64\v120\Release\opencv_ffmpeg248_64.dll into Aricia\packages\OpenCV.2.4.8\build\native\bin\x64\v120
