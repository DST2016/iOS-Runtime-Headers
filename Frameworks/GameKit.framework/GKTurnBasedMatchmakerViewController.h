/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class <GKTurnBasedMatchmakerViewControllerDelegate>, GKTurnBasedMatchesViewController;

@interface GKTurnBasedMatchmakerViewController : UINavigationController  {
    GKTurnBasedMatchesViewController *_privateViewController;
}

@property <GKTurnBasedMatchmakerViewControllerDelegate> * turnBasedMatchmakerDelegate;
@property BOOL showExistingMatches;
@property(retain) GKTurnBasedMatchesViewController * privateViewController;


- (void)dealloc;
- (id)init;
- (void)__viewControllerWillBePresented:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)setTurnBasedMatchmakerDelegate:(id)arg1;
- (id)turnBasedMatchmakerDelegate;
- (void)setShowExistingMatches:(BOOL)arg1;
- (BOOL)showExistingMatches;
- (id)privateViewController;
- (void)setPrivateViewController:(id)arg1;
- (id)initWithMatchRequest:(id)arg1;

@end