/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKOOBMessage : NSObject  {
    unsigned short _type;
}

@property(readonly) unsigned short type;


- (unsigned short)type;
- (id)data;
- (id)initWithMessageType:(unsigned short)arg1;
- (BOOL)_checkSize:(unsigned long)arg1;
- (BOOL)_checkType:(unsigned short)arg1;
- (id)initWithBytes:(const void*)arg1 length:(unsigned long)arg2;

@end