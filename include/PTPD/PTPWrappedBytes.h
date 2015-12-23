#import <Foundation/NSObject.h>

@interface PTPWrappedBytes : NSObject
{
    unsigned long long 	_offset;
    unsigned long long 	_capacity;
    BOOL 				_allocatedBytes;
    char 				*_bytes;
    int 				_fd;
    BOOL				_useByteBuffer;
    unsigned long long 	_excessDataLength;
    double 				_progressNotificationTime;
    void 				*_progressNotifier;
    void 				*_progressNotifierContext;
    int 				_lastNotifiedProgress;
}

+ (id)wrappedBytesWithCapacity64:(unsigned long long)arg1;
+ (id)wrappedBytesWithBytes:(void *)arg1 capacity64:(unsigned long long)arg2;
- (id)initWithCapacity64:(unsigned long long)arg1;
- (id)init;
- (id)initWithBytes:(void *)arg1 capacity64:(unsigned long long)arg2;
- (id)initWithFileDescriptor:(int)arg1 capacity64:(unsigned long long)arg2;
- (void)setProgressNotifierCallback:(void *)arg1 context:(void *)arg2;
- (void)dealloc;
- (unsigned long long)capacity64;
- (unsigned long long)setCapacity64:(unsigned long long)arg1;
- (unsigned long long)length64;
- (void)setLength64:(unsigned long long)arg1;
- (const void *)bytes;
- (void *)mutableBytes;
- (BOOL)wasInitWithFD;
- (unsigned long long)offset;
- (unsigned long long)appendData:(id)arg1;
- (unsigned long long)appendBytes:(const void *)arg1 length64:(unsigned long long)arg2;
- (unsigned long long)excessDataLength;
- (double)percentFull;
- (id)description;

@end