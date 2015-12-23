#import <Foundation/NSObject.h>
#import "PTPOperationResponsePacket.h"
#import "PTPWrappedBytes.h"

@interface PTPTransport : NSObject
{
    unsigned short 		_type;
    int 				_role;
    int 				_connectionStatus;
    id 					_delegate;
    BOOL 				_timedOut;
    BOOL 				_responseReceived;
    PTPOperationResponsePacket *_response;
    /*struct _opaque_pthread_t {
        long _field1;
        struct __darwin_pthread_handler_rec *_field2;
        char _field3[596];
    } *_callbackThread;
    struct _opaque_pthread_mutex_t {
        long __sig;
        char __opaque[40];
    } _callbackThreadMutex;
    struct _opaque_pthread_cond_t {
        long __sig;
        char __opaque[24];
    } _callbackThreadCondition;*/
    BOOL 						_callbackThreadConditionSignaled;
    struct __CFRunLoop 			*_callbackThreadRunLoop;
    struct __CFRunLoopSource 	*_callbackDummyMachPortRLSrc;
    unsigned char 				_headerBuffer[12];
    BOOL 						_headerBufferFound;
    BOOL 						_delegateNeedsResponse;
    BOOL 						_busy;
    unsigned long				_canceledTransactionID;
    PTPWrappedBytes 			*_dataForTransaction;
    unsigned long long 			_excessReceivedDataSize;
    unsigned long 				_totalBytesFilled;
}

- (unsigned long long)excessReceivedDataSize;
- (void)deviceReset;
- (unsigned short)deviceStatus;
- (void)cancelTransaction:(id)arg1;
- (void)abortPendingIO;
- (BOOL)sendEvent:(id)arg1;
- (BOOL)sendResponse:(id)arg1;
- (void)sendData:(id)arg1;
- (id)sendRequest:(id)arg1 sendData:(id)arg2 timeout:(unsigned long)arg3;
- (id)sendRequest:(id)arg1 receiveData:(id)arg2 timeout:(unsigned long)arg3;
- (void)setTimedOut:(BOOL)arg1;
- (BOOL)timedOut;
- (BOOL)connected;
- (int)role;
- (void)stop;
- (BOOL)startInitiator;
- (BOOL)startResponder;
- (void)endCallbackThread;
- (BOOL)startCallbackThread;
- (int)connectionStatus;
- (unsigned short)type;
- (void)setResponseReceived:(BOOL)arg1;
- (BOOL)responseReceived;
- (void)setDelegate:(id)arg1;
- (void)setResponse:(id)arg1;
- (id)response;
- (int)waitForCallbackThreadConditionSignalWithTimeout:(long)arg1;
- (int)signalCallbackThreadCondition;
- (int)unlockCallbackThreadMutex;
- (int)lockCallbackThreadMutex;
- (struct __CFRunLoop *)callbackThreadRunLoop;
- (void *)callbackThreadFunction;
- (void)cleanupCallbackThread;
- (void)dealloc;
- (id)init;

@end
