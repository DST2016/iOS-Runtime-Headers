/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UICollectionViewData, NSArray, NSMutableIndexSet, NSMutableArray;

@interface UICollectionViewUpdate : NSObject {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    id *_animatedFooters;
    id *_animatedHeaders;
    id *_animatedItems;
    NSMutableArray *_deletedSections;
    NSMutableArray *_gaps;
    NSMutableArray *_insertedSections;
    NSMutableIndexSet *_movedItems;
    NSMutableIndexSet *_movedSections;
    int *_newGlobalItemMap;
    UICollectionViewData *_newModel;
    int *_newSectionMap;
    } _newVisibleBounds;
    int *_oldGlobalItemMap;
    UICollectionViewData *_oldModel;
    int *_oldSectionMap;
    } _oldVisibleBounds;
    NSArray *_updateItems;
    NSMutableArray *_viewAnimations;
}

- (void)_computeGaps;
- (void)_computeItemUpdates;
- (void)_computeSectionUpdates;
- (void)dealloc;
- (id)initWithUpdateItems:(id)arg1 oldModel:(id)arg2 newModel:(id)arg3 oldVisibleBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 newVisibleBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg5;

@end