#import <Foundation/NSObject.h>

@interface PTPOperationRequestPacket : NSObject
{
    int 			_numParameters;
    unsigned long 	_dataPhaseInfo;
    unsigned short 	_operationCode;
    unsigned long 	_transactionID;
    unsigned long 	_parameters[5];
}

- (void)setParameter5:(unsigned long)arg1;
- (unsigned long)parameter5;
- (void)setParameter4:(unsigned long)arg1;
- (unsigned long)parameter4;
- (void)setParameter3:(unsigned long)arg1;
- (unsigned long)parameter3;
- (void)setParameter2:(unsigned long)arg1;
- (unsigned long)parameter2;
- (void)setParameter1:(unsigned long)arg1;
- (unsigned long)parameter1;
- (void)setPparameter:(unsigned long)arg1 atIndex:(unsigned long)arg2;
- (unsigned long)parameterAtIndex:(unsigned long)arg1;
- (int)numParameters;
- (void)setDataPhaseInfo:(unsigned long)arg1;
- (unsigned long)dataPhaseInfo;
- (void)setTransactionID:(unsigned long)arg1;
- (unsigned long)transactionID;
- (void)setOperationCode:(unsigned short)arg1;
- (unsigned short)operationCode;
- (id)description;
- (id)contentForUSBUsingBuffer:(void *)arg1 capacity:(unsigned long)arg2;
- (id)contentForUSB;
- (id)contentForTCP;
- (id)initWithUSBBuffer:(void *)arg1;
- (id)initWithTCPBuffer:(void *)arg1;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 dataPhaseInfo:(unsigned long)arg3 parameter1:(unsigned long)arg4 parameter2:(unsigned long)arg5 parameter3:(unsigned long)arg6 parameter4:(unsigned long)arg7 parameter5:(unsigned long)arg8;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 dataPhaseInfo:(unsigned long)arg3 parameter1:(unsigned long)arg4 parameter2:(unsigned long)arg5 parameter3:(unsigned long)arg6 parameter4:(unsigned long)arg7;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 dataPhaseInfo:(unsigned long)arg3 parameter1:(unsigned long)arg4 parameter2:(unsigned long)arg5 parameter3:(unsigned long)arg6;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 dataPhaseInfo:(unsigned long)arg3 parameter1:(unsigned long)arg4 parameter2:(unsigned long)arg5;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 dataPhaseInfo:(unsigned long)arg3 parameter1:(unsigned long)arg4;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 dataPhaseInfo:(unsigned long)arg3;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 dataPhaseInfo:(unsigned long)arg3 numParameters:(unsigned long)arg4 parameters:(unsigned int *)arg5;

@end