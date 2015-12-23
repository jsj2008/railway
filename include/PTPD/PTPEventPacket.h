#import <Foundation/NSObject.h>

@interface PTPEventPacket : NSObject
{
    int 			_numParameters;
    unsigned short 	_eventCode;
    unsigned long 	_transactionID;
    unsigned long 	_parameters[3];
}

- (void)setParameter3:(unsigned long)arg1;
- (unsigned long)parameter3;
- (void)setParameter2:(unsigned long)arg1;
- (unsigned long)parameter2;
- (void)setParameter1:(unsigned long)arg1;
- (unsigned long)parameter1;
- (void)setTransactionID:(unsigned long)arg1;
- (unsigned long)transactionID;
- (void)setEventCode:(unsigned short)arg1;
- (unsigned short)eventCode;
- (id)description;
- (id)contentForUSBUsingBuffer:(void *)arg1 capacity:(unsigned long)arg2;
- (id)contentForUSB;
- (id)contentForTCP;
- (id)initWithUSBBuffer:(void *)arg1;
- (id)initWithTCPBuffer:(void *)arg1;
- (id)initWithEventCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 parameter1:(unsigned long)arg3 parameter2:(unsigned long)arg4 parameter3:(unsigned long)arg5;
- (id)initWithEventCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 parameter1:(unsigned long)arg3 parameter2:(unsigned long)arg4;
- (id)initWithEventCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 parameter1:(unsigned long)arg3;
- (id)initWithEventCode:(unsigned short)arg1 transactionID:(unsigned long)arg2;

@end