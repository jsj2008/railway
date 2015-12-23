#import <Foundation/NSObject.h>

@interface PTPObjectInfoDataset : NSObject
{
    unsigned int 			_storageID;
    unsigned short 			_objectFormat;
    unsigned short 			_protectionStatus;
    unsigned long long 		_objectCompressedSize;
    unsigned short 			_thumbFormat;
    unsigned int 			_thumbCompressedSize;
    unsigned int 			_thumbOffset;
    unsigned int 			_thumbPixWidth;
    unsigned int 			_thumbPixHeight;
    unsigned int 			_imagePixWidth;
    unsigned int 			_imagePixHeight;
    unsigned int 			_imageBitDepth;
    unsigned int 			_parentObject;
    unsigned short			_associationType;
    unsigned int 			_associationDesc;
    unsigned int 			_sequenceNumber;
    NSString 				*_filename;
    NSString 				*_captureDate;
    NSString 				*_modificationDate;
    NSString 				*_keywords;
    unsigned int 			_thmFileSize;
    unsigned int 			_objectHandle;
}

- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithData64:(id)arg1;
- (void)dealloc;
- (id)content;
- (id)content64;
- (id)description;
- (unsigned long)storageID;
- (void)setStorageID:(unsigned long)arg1;
- (unsigned short)objectFormat;
- (void)setObjectFormat:(unsigned short)arg1;
- (unsigned short)protectionStatus;
- (void)setProtectionStatus:(unsigned short)arg1;
- (unsigned long long)objectCompressedSize64;
- (unsigned long)objectCompressedSize;
- (void)setObjectCompressedSize:(unsigned long long)arg1;
- (unsigned short)thumbFormat;
- (void)setThumbFormat:(unsigned short)arg1;
- (unsigned long)thumbCompressedSize;
- (void)setThumbCompressedSize:(unsigned long)arg1;
- (unsigned long)thmFileSize;
- (void)setThmFileSize:(unsigned long)arg1;
- (unsigned long)thumbOffset;
- (void)setThumbOffset:(unsigned long)arg1;
- (unsigned long)thumbPixWidth;
- (void)setThumbPixWidth:(unsigned long)arg1;
- (unsigned long)thumbPixHeight;
- (void)setThumbPixHeight:(unsigned long)arg1;
- (unsigned long)imagePixWidth;
- (void)setImagePixWidth:(unsigned long)arg1;
- (unsigned long)imagePixHeight;
- (void)setImagePixHeight:(unsigned long)arg1;
- (unsigned long)imageBitDepth;
- (void)setImageBitDepth:(unsigned long)arg1;
- (unsigned long)parentObject;
- (void)setParentObject:(unsigned long)arg1;
- (unsigned short)associationType;
- (void)setAssociationType:(unsigned short)arg1;
- (unsigned long)associationDesc;
- (void)setAssociationDesc:(unsigned long)arg1;
- (unsigned long)sequenceNumber;
- (void)setSequenceNumber:(unsigned long)arg1;
- (id)filename;
- (void)setFilename:(id)arg1;
- (id)captureDate;
- (void)setCaptureDate:(id)arg1;
- (id)modificationDate;
- (void)setModificationDate:(id)arg1;
- (id)keywords;
- (void)setKeywords:(id)arg1;
- (unsigned long)objectHandle;
- (void)setObjectHandle:(unsigned long)arg1;

@end