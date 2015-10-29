/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHSymbolPathCacheKey : NSObject <NSCopying> {
    BOOL mForHitCheck;
    float mSize;
    TSDStroke *mStroke;
    int mSymbolType;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)hash;
- (id)initWithSymbolType:(int)arg1 symbolSize:(float)arg2 stroke:(id)arg3 forHitCheck:(BOOL)arg4;
- (BOOL)isEqual:(id)arg1;

@end