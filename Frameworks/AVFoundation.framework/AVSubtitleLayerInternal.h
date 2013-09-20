/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVPlayer, NSDictionary, NSObject<OS_dispatch_queue>;

@interface AVSubtitleLayerInternal : NSObject {
    NSDictionary *currentSubtitleSample;
    BOOL currentSubtitleSampleIsForced;
    id delegate;
    BOOL hasPlayerToObserve;
    BOOL isObservingPlayer;
    BOOL isOverscanSubtitleSupportEnabled;
    BOOL isPresentationLayer;
    BOOL nonForcedSubtitleDisplayEnabled;
    AVPlayer *player;
    struct OpaqueFigSubtitleRenderer { } *renderer;
    NSObject<OS_dispatch_queue> *serialQueue;
    BOOL shouldObservePlayer;
}

@end