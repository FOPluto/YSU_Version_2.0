#ifndef CAMERAMANAGER_H
#define CAMERAMANAGER_H

#include "Main/headfiles.h"
#include "CameraApi.h"



class CameraManager
{
public:
    VideoCapture capture;
    CameraManager();
    void SetExplore(int explore);
    void SetPicSize(int height,int width);
    int InitCamera();
    Mat ReadImage();

private:
    Mat                     Iimag;
    Mat                     imag;
    int                     iCameraCounts;
    int                     iStatus;
    tSdkCameraDevInfo       tCameraEnumList;
    int                     hCamera;
    tSdkCameraCapbility     tCapability;      //设备描述信息
    tSdkFrameHead           sFrameInfo;
    BYTE*			        pbyBuffer;
    tSdkImageResolution     sImageSize;
    IplImage                *iplImage;
    int                     channel;
    int                     explore_time;
    int                     picWidth;
    int                     picHeight;
    unsigned char           *g_pRgbBuffer;     //处理后数据缓存区

    Mat sham_img;

};


#endif // CAMERAMANAGER_H