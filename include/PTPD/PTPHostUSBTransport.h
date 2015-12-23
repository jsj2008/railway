#import <Foundation/NSObject.h>
#import "PTPTransport.h"

@interface PTPHostUSBTransport : PTPTransport  {
    unsigned int _locationID;
    unsigned short _vendorID;
    unsigned short _productID;
    NSString *_usbSerialNumberString;
    struct IOUSBInterfaceStruct300 {} **_interfaceInterfaceRef;
    unsigned char _bulkPipeIn;
    unsigned char _bulkPipeOut;
    unsigned char _interruptPipeIn;
    unsigned int _readBufferSize;
    unsigned int _writeBufferSize;
    unsigned int _eventDataBufferSize;
    char *_readBuffer;
    char *_writeBuffer;
    char *_eventDataBuffer;
    NSMutableData *_eventData;
    int _maxPacketSizeBulkIn;
    int _maxPacketSizeBulkOut;
    int _maxPacketSizeInterruptIn;
    struct __CFRunLoopSource { } *_CFRunLoopSource;
    BOOL _connected;
}


- (void)sendData:(id)arg1;
- (unsigned short)cancelRequest:(id)arg1;
- (unsigned long)locationID;
- (void)dumpData:(void*)arg1 length:(int)arg2 comment:(id)arg3;
- (void)clearPipeStall:(unsigned char)arg1;
- (BOOL)handleBulkData:(unsigned long)arg1 result:(int)arg2;
- (int)readBulkDataWithTimeout:(unsigned long)arg1;
- (void)setConnected:(BOOL)arg1;
- (void)clearBulkInPipeStall;
- (void)handleInterruptData:(unsigned long)arg1;
- (int)readInterruptData;
- (BOOL)writeBulkData:(id)arg1;
- (id)initWithLocationID:(unsigned long)arg1 delegate:(id)arg2;
- (void)abortPendingIO;
- (unsigned short)vendorID;
- (unsigned short)productID;
- (id)usbSerialNumberString;
- (id)sendRequest:(id)arg1 sendData:(id)arg2 timeout:(unsigned long)arg3;
- (unsigned short)deviceStatus;
- (void)deviceReset;
- (BOOL)connected;
- (BOOL)sendCancel:(id)arg1;
- (id)sendRequest:(id)arg1 receiveData:(id)arg2 timeout:(unsigned long)arg3;
- (void)cancelTransaction:(id)arg1;
- (BOOL)startInitiator;
- (void)sendDataPackets:(id)arg1;
- (void)stop;
- (BOOL)sendEvent:(id)arg1;
- (id)description;
- (void)dealloc;

@end