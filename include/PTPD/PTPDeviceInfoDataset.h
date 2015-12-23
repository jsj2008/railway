#import <Foundation/NSObject.h>

@interface PTPDeviceInfoDataset : NSObject 
{
    NSMutableData 	*_content;
    BOOL 			_dirty;
    unsigned short 	_standardVersion;
    unsigned long 	_vendorExtensionID;
    unsigned short 	_vendorExtensionVersion;
    NSString 		*_vendorExtensionDescription;
    unsigned short 	_functionalMode;
    NSMutableArray 	*_operationsSupported;
    NSMutableArray 	*_eventsSupported;
    NSMutableArray 	*_devicePropertiesSupported;
    NSMutableArray 	*_captureFormats;
    NSMutableArray 	*_imageFormats;
    NSString 		*_manufacturer;
    NSString 		*_model;
    NSString 		*_deviceVersion;
    NSString 		*_serialNumber;
    BOOL 			_readOnlyObject;
}

- (id)canonicalManufacturer;
- (void)setSerialNumber:(id)arg1;
- (id)serialNumber;
- (void)setDeviceVersion:(id)arg1;
- (id)deviceVersion;
- (void)setModel:(id)arg1;
- (id)model;
- (void)setManufacturer:(id)arg1;
- (id)manufacturer;
- (void)setImageFormats:(id)arg1;
- (id)imageFormats;
- (void)setCaptureFormats:(id)arg1;
- (id)captureFormats;
- (void)setDevicePropertiesSupported:(id)arg1;
- (id)devicePropertiesSupported;
- (void)setEventsSupported:(id)arg1;
- (id)eventsSupported;
- (void)setOperationsSupported:(NSMutableArray*)operations;
- (id)operationsSupported;
- (void)setFunctionalMode:(unsigned short)arg1;
- (unsigned short)functionalMode;
- (void)setVendorExtensionDescription:(id)arg1;
- (id)vendorExtensionDescription;
- (void)setVendorExtensionVersion:(unsigned short)arg1;
- (unsigned short)vendorExtensionVersion;
- (void)setVendorExtensionID:(unsigned long)arg1;
- (unsigned long)vendorExtensionID;
- (void)setStandardVersion:(unsigned short)arg1;
- (unsigned short)standardVersion;
- (id)description;
- (id)content;
- (void)updateContent;
- (void)dealloc;
- (id)initWithMutableData:(id)arg1;
- (id)initWithData:(id)arg1;
- (void)setContent:(id)arg1;
- (id)init;

@end
