/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class KNAnimParameterGroup, KNMotionBlurAnimationPluginWrapper;

@interface KNBuildDrift : KNAnimationEffect <KNChunkableBuildAnimator, KNFrameBuildAnimator, KNAnimationPluginDrift> {
    KNMotionBlurAnimationPluginWrapper *_motionBlurWrapper;
    KNAnimParameterGroup *mParameterGroup;
}

+ (int)animationCategory;
+ (id)animationFilter;
+ (id)animationName;
+ (id)defaultAttributes;
+ (unsigned int)directionType;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (BOOL)isDriftAnimation;
+ (id)localizedMenuString:(int)arg1;
+ (int)rendererTypeForCapabilities:(id)arg1;
+ (id)supportedTypes;
+ (id)thumbnailImageNameForType:(int)arg1;

- (void)animationDidEndWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (id)animationsWithContext:(id)arg1;
- (void)dealloc;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameOfEffectWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 context:(id)arg2;
- (id)initWithAnimationContext:(id)arg1;
- (void)renderFrameWithContext:(id)arg1;

@end