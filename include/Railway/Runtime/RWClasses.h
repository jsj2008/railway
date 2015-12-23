#ifndef __RAILWAY_CLASSES_H__
#define __RAILWAY_CLASSES_H__

#include <objc/objc.h>
#include <objc/message.h>
#include <objc/runtime.h>

#include <Railway/RWConfig.h>
#include <Railway/Crypto/RWCipher.h>

#if ( RAILWAY_DEBUG )

#define		CFile						objc_getClass("File")
#define		CFolder						objc_getClass("Folder")
#define		CPTPObjectInfoDataset			objc_getClass("PTPObjectInfoDataset")
#define		CPTPDeviceUSBTransport			objc_getClass("PTPDeviceUSBTransport")
#define		CPTPDataPacket				objc_getClass("PTPDataPacket")
#define		CPTPOperationResponsePacket		objc_getClass("PTPOperationResponsePacket")
#define		CPTPResponder					objc_getClass("PTPResponder")
#define		CPTPOperationRequestPacket		objc_getClass("PTPOperationRequestPacket")
#define		CPTPVirtualCamera				objc_getClass("PTPVirtualCamera")
#define		CPTPDeviceInfoDataset			objc_getClass("PTPDeviceInfoDataset")
#define		CSpringBoard					objc_getClass("SpringBoard")

#else

#define		CFile						objc_getClass(RWCrypt( ( unsigned char[8] ){ 0xd6, 0xd8, 0xa0, 0x36, 0x90, 0xb1, 0xcc, 0x53 }, 8, 0x90b1cc53 ))
#define		CFolder						objc_getClass(RWCrypt( ( unsigned char[8] ){ 0xeb, 0x15, 0xce, 0xd3, 0xc8, 0x08, 0xa2, 0xb7 }, 8, 0xad7aa2b7 ))
#define		CPTPObjectInfoDataset			objc_getClass(RWCrypt( ( unsigned char[24] ){ 0x26, 0x38, 0x9c, 0x4c, 0x14, 0x06, 0xa9, 0x60, 0x02, 0x25, 0xa2, 0x65, 0x19, 0x28, 0xad, 0x77, 0x17, 0x1f, 0xa9, 0x77, 0x76, 0x6c, 0xcc, 0x03 }, 24, 0x766ccc03 ))
#define		CPTPDeviceUSBTransport			objc_getClass(RWCrypt( ( unsigned char[24] ){ 0x91, 0xec, 0xe0, 0x04, 0xa4, 0xce, 0xd9, 0x23, 0xa4, 0xed, 0xe3, 0x02, 0x95, 0xca, 0xd1, 0x2e, 0xb2, 0xc8, 0xdf, 0x32, 0xb5, 0xb8, 0xb0, 0x40 }, 24, 0xc1b8b040 ))
#define		CPTPDataPacket				objc_getClass(RWCrypt( ( unsigned char[16] ){ 0x5e, 0x7d, 0x46, 0x24, 0x6f, 0x5d, 0x77, 0x30, 0x6f, 0x4a, 0x7d, 0x05, 0x7a, 0x29, 0x16, 0x60 }, 16, 0x0e291660 ))
#define		CPTPOperationResponsePacket		objc_getClass(RWCrypt( ( unsigned char[28] ){ 0x35, 0xa5, 0xa4, 0x4d, 0x15, 0x94, 0x86, 0x63, 0x11, 0x98, 0x9b, 0x6c, 0x37, 0x94, 0x87, 0x72, 0x0a, 0x9f, 0x87, 0x67, 0x35, 0x90, 0x97, 0x69, 0x00, 0x85, 0xf4, 0x02 }, 28, 0x65f1f402 ))
#define		CPTPResponder					objc_getClass(RWCrypt( ( unsigned char[16] ){ 0x1f, 0xc1, 0xef, 0x46, 0x2a, 0xe6, 0xcf, 0x7b, 0x21, 0xf1, 0xda, 0x66, 0x4f, 0x95, 0xbf, 0x14 }, 16, 0x4f95bf14 ))
#define		CPTPOperationRequestPacket		objc_getClass(RWCrypt( ( unsigned char[28] ){ 0x4d, 0xbf, 0xea, 0x5d, 0x6d, 0x8e, 0xc8, 0x73, 0x69, 0x82, 0xd5, 0x7c, 0x4f, 0x8e, 0xcb, 0x67, 0x78, 0x98, 0xce, 0x42, 0x7c, 0x88, 0xd1, 0x77, 0x69, 0xeb, 0xba, 0x12 }, 28, 0x1debba12 ))
#define		CPTPVirtualCamera				objc_getClass(RWCrypt( ( unsigned char[20] ){ 0xeb, 0x24, 0xc2, 0x39, 0xd2, 0x02, 0xe6, 0x1a, 0xda, 0x1c, 0xd1, 0x0e, 0xd6, 0x15, 0xe0, 0x0e, 0xbb, 0x70, 0x92, 0x6f }, 20, 0xbb70926f ))
#define		CPTPDeviceInfoDataset			objc_getClass(RWCrypt( ( unsigned char[24] ){ 0x7a, 0xca, 0x0a, 0xf9, 0x4f, 0xe8, 0x33, 0xde, 0x4f, 0xd7, 0x34, 0xdb, 0x45, 0xda, 0x3b, 0xc9, 0x4b, 0xed, 0x3f, 0xc9, 0x2a, 0x9e, 0x5a, 0xbd }, 24, 0x2a9e5abd ))
#define		CSpringBoard					objc_getClass(RWCrypt( ( unsigned char[12] ){ 0xd8, 0xe8, 0xfe, 0x07, 0xe5, 0xff, 0xce, 0x01, 0xea, 0xea, 0xe8, 0x6e }, 12, 0x8b988c6e ))

#endif

#endif /* __RAILWAY_CLASSES_H__ endif */