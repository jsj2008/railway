#import <Foundation/NSObject.h>

@interface PTPOperationResponsePacket : NSObject
{
    int 			_numParameters;
    unsigned short 	_responseCode;
    unsigned int 	_transactionID;
    unsigned int	_parameters[5];
}

- (id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 numParameters:(unsigned long)arg3 parameters:(unsigned int *)arg4;
- (id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned long)arg2;
- (id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 parameter1:(unsigned long)arg3;
- (id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 parameter1:(unsigned long)arg3 parameter2:(unsigned long)arg4;
- (id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 parameter1:(unsigned long)arg3 parameter2:(unsigned long)arg4 parameter3:(unsigned long)arg5;
- (id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 parameter1:(unsigned long)arg3 parameter2:(unsigned long)arg4 parameter3:(unsigned long)arg5 parameter4:(unsigned long)arg6;
- (id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 parameter1:(unsigned long)arg3 parameter2:(unsigned long)arg4 parameter3:(unsigned long)arg5 parameter4:(unsigned long)arg6 parameter5:(unsigned long)arg7;
- (id)initWithTCPBuffer:(void *)arg1;
- (id)initWithUSBBuffer:(void *)arg1;
- (id)contentForTCP;
- (id)contentForUSB;
- (id)contentForUSBUsingBuffer:(void *)arg1 capacity:(unsigned long)arg2;
- (id)description;
- (unsigned short)responseCode;
- (void)setResponseCode:(unsigned short)arg1;
- (unsigned long)transactionID;
- (void)setTransactionID:(unsigned long)arg1;
- (int)numParameters;
- (unsigned long)parameterAtIndex:(unsigned long)arg1;
- (void)setPparameter:(unsigned long)arg1 atIndex:(unsigned long)arg2;
- (unsigned long)parameter1;
- (void)setParameter1:(unsigned long)arg1;
- (unsigned long)parameter2;
- (void)setParameter2:(unsigned long)arg1;
- (unsigned long)parameter3;
- (void)setParameter3:(unsigned long)arg1;
- (unsigned long)parameter4;
- (void)setParameter4:(unsigned long)arg1;
- (unsigned long)parameter5;
- (void)setParameter5:(unsigned long)arg1;

@end