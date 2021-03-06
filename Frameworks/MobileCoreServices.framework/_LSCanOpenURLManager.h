/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface _LSCanOpenURLManager : NSObject {
    NSMutableDictionary * _canOpenURLsMap;
    NSObject<OS_dispatch_queue> * _canOpenURLsMapQueue;
    int  _saveFlag;
}

+ (id)queryForApplicationsAvailableForOpeningURL:(id)arg1;
+ (id)sharedManager;

- (bool)canOpenURL:(id)arg1 publicSchemes:(bool)arg2 privateSchemes:(bool)arg3 XPCConnection:(id)arg4 error:(id*)arg5;
- (id)copySchemesMap;
- (void)dealloc;
- (bool)findApplicationBundleID:(unsigned int*)arg1 bundleData:(const struct LSBundleData {}**)arg2 context:(struct LSContext { struct LSDatabase {} *x1; }*)arg3 forXPCConnection:(id)arg4;
- (void)getIsURL:(id)arg1 alwaysCheckable:(bool*)arg2 hasHandler:(bool*)arg3;
- (id)init;
- (bool)internalCanOpenURL:(id)arg1 publicSchemes:(bool)arg2 privateSchemes:(bool)arg3 XPCConnection:(id)arg4 error:(id*)arg5;
- (bool)isBundleID:(unsigned int)arg1 bundleData:(const struct LSBundleData { unsigned int x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned short x8; unsigned int x9; unsigned int x10; unsigned long long x11; unsigned long long x12; int x13; int x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; unsigned long long x18; unsigned long long x19; unsigned int x20[4]; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned long long x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36; unsigned int x37; unsigned int x38; unsigned int x39; unsigned int x40; unsigned long long x41; unsigned long long x42; unsigned long long x43; unsigned long long x44; unsigned int x45; unsigned int x46; unsigned long long x47; unsigned long long x48; unsigned long long x49; unsigned int x50; unsigned long long x51; unsigned int x52; }*)arg2 context:(struct LSContext { struct LSDatabase {} *x1; }*)arg3 allowedToCheckScheme:(id)arg4 error:(id*)arg5;
- (bool)isXPCConnection:(id)arg1 allowedToCheckScheme:(id)arg2 error:(id*)arg3;
- (bool)legacy_isBundleID:(unsigned int)arg1 bundleData:(const struct LSBundleData { unsigned int x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned short x8; unsigned int x9; unsigned int x10; unsigned long long x11; unsigned long long x12; int x13; int x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; unsigned long long x18; unsigned long long x19; unsigned int x20[4]; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned long long x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36; unsigned int x37; unsigned int x38; unsigned int x39; unsigned int x40; unsigned long long x41; unsigned long long x42; unsigned long long x43; unsigned long long x44; unsigned int x45; unsigned int x46; unsigned long long x47; unsigned long long x48; unsigned long long x49; unsigned int x50; unsigned long long x51; unsigned int x52; }*)arg2 context:(struct LSContext { struct LSDatabase {} *x1; }*)arg3 allowedToCheckScheme:(id)arg4 error:(id*)arg5;
- (void)resetSchemeQueryLimitForApplicationWithIdentifier:(id)arg1;
- (long long)schemeTypeOfScheme:(id)arg1;
- (void)writeSchemesMap;

@end
