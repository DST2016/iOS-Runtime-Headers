/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSHRequestFileOperation : TSHRequestOperation {
    id  mContext;
    NSString * mLocalPath;
    SFUFileOutputStream * mStream;
    unsigned long long  mTotalBytesExpected;
    unsigned long long  mTotalBytesReceived;
}

- (void)addHeadersTo:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)context;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 path:(id)arg2 localPath:(id)arg3 delegate:(id)arg4;
- (id)initWithURL:(id)arg1 localPath:(id)arg2 user:(id)arg3 password:(id)arg4 persistence:(unsigned long long)arg5 delegate:(id)arg6;
- (id)localPath;
- (void)setContext:(id)arg1;
- (void)start:(id)arg1 notifyWhenFinished:(id)arg2;
- (unsigned long long)totalBytesExpected;
- (unsigned long long)totalBytesReceived;

@end
