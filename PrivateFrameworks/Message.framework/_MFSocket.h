/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSArray, MFStream, NSString, NSInvocation, NSCondition, NSData;

@interface _MFSocket : NSObject  {
    NSCondition *_condition;
    MFStream *_stream;
    NSString *_protocol;
    NSString *_host;
    NSString *_service;
    struct __CFString { } *_connectionServiceType;
    NSInvocation *_eventHandler;
    int _numTimeoutSecs;
    BOOL _allowsTrustPrompt;
    BOOL _usesOpportunisticSockets;
    BOOL _canRead;
    BOOL _canWrite;
}

@property int timeout;
@property BOOL allowsTrustPrompt;
@property BOOL usesOpportunisticSockets;
@property(readonly) NSArray * serverCertificates;
@property(readonly) NSString * remoteHostname;
@property(readonly) unsigned int remotePortNumber;
@property(readonly) NSData * sourceIPAddress;
@property(readonly) BOOL isReadable;
@property(readonly) BOOL isWritable;
@property(readonly) BOOL isForcedConnection;
@property(readonly) BOOL isValid;


- (void)dealloc;
- (id)init;
- (BOOL)isReadable;
- (void)abort;
- (void)setUsesOpportunisticSockets:(BOOL)arg1;
- (BOOL)usesOpportunisticSockets;
- (BOOL)isForcedConnection;
- (unsigned int)remotePortNumber;
- (void)setEventHandler:(id)arg1;
- (int)readBytes:(char *)arg1 length:(int)arg2;
- (int)writeBytes:(const char *)arg1 length:(int)arg2;
- (BOOL)connectToHost:(id)arg1 withPort:(unsigned int)arg2 service:(id)arg3;
- (id)serverCertificates;
- (unsigned int)_bufferedByteCount;
- (BOOL)_startSSLHandshakeWithProtocol:(id)arg1 disableSSL2:(BOOL)arg2 errorPtr:(id*)arg3;
- (id)sourceIPAddress;
- (BOOL)isWritable;
- (id)remoteHostname;
- (BOOL)setSecurityProtocol:(id)arg1;
- (id)securityProtocol;
- (void)setAllowsTrustPrompt:(BOOL)arg1;
- (BOOL)allowsTrustPrompt;
- (void)setConnectionServiceType:(struct __CFString { }*)arg1;
- (BOOL)isValid;
- (int)timeout;
- (void)setTimeout:(int)arg1;

@end