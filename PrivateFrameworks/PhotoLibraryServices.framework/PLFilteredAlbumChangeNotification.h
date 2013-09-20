/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSIndexSet, PLAssetContainerChangeNotification, PLFilteredAlbum, PLIndexMapper;

@interface PLFilteredAlbumChangeNotification : PLAssetContainerChangeNotification <PLIndexMapperDataSource, PLDerivedNotification> {
    PLFilteredAlbum *_album;
    PLAssetContainerChangeNotification *_backingNotification;
    NSIndexSet *_filteredIndexes;
    PLIndexMapper *_indexMapper;
    NSIndexSet *_oldFilteredIndexes;
}

@property(copy) NSIndexSet * filteredIndexes;
@property(readonly) PLIndexMapper * indexMapper;
@property(readonly) NSIndexSet * updatedFilteredIndexes;

+ (id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(id)arg3;

- (id)_changedObjects;
- (id)_diffDescription;
- (BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2;
- (id)album;
- (BOOL)countDidChange;
- (void)dealloc;
- (id)description;
- (id)filteredIndexes;
- (id)indexMapper;
- (id)init;
- (id)initWithFilteredAlbum:(id)arg1 priorChangeState:(id)arg2 albumChangeNotification:(id)arg3;
- (BOOL)keyAssetDidChange;
- (id)object;
- (void)setFilteredIndexes:(id)arg1;
- (BOOL)shouldIncludeObjectAtIndex:(unsigned int)arg1;
- (BOOL)shouldReload;
- (BOOL)titleDidChange;
- (id)updatedFilteredIndexes;

@end