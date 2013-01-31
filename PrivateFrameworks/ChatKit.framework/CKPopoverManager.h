/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIPopoverController;

@interface CKPopoverManager : NSObject <UIPopoverControllerDelegate> {
    UIPopoverController *_popoverController;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _presenter;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _handler;

    BOOL _dismissingPopoverForRotation;
}

@property(copy) id presenter;
@property(copy) id handler;
@property(retain) UIPopoverController * popoverController;

+ (id)sharedInstance;

- (void)dealloc;
- (id)presenter;
- (void)setPresenter:(id)arg1;
- (void)showPopover:(id)arg1 withPresenter:(id)arg2 withHandler:(id)arg3;
- (void)dismissCurrentPopover;
- (void)didFinishRotating;
- (void)willStartRotating;
- (void)setHandler:(id)arg1;
- (id)handler;
- (id)popoverController;
- (void)setPopoverController:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;

@end