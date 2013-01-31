/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class Parser;

@interface NikePromptExpander : NSObject  {
    Parser *numberParser;
    Parser *preParser;
    Parser *postParser;
}

+ (void)initialize;
+ (id)translatedUnit:(id)arg1;

- (void)dealloc;
- (id)init;
- (id)stringArrayForDecimalNumber:(id)arg1;
- (id)_slotForUnitString:(id)arg1 number:(id)arg2;
- (id)wordsForPromptCalled:(id)arg1 withNumber:(id)arg2 units:(id)arg3;
- (id)allWordsForPromptCalled:(id)arg1 withNumber:(id)arg2 units:(id)arg3;
- (void)setUpWithLanguage:(id)arg1;

@end