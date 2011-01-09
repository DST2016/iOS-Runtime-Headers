/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/CalendarUI.framework/CalendarUI
 */

@class CalendarModel;



@interface OccurrenceCacheDataSource : NSObject <OccurrenceCacheDataSourceProtocol>
{
    struct CalDatabase { } *_database;
    struct CalFilter { } *_filter;
    struct __CFArray { } *_cachedDays;
    NSInteger _cachedDayCount;
    struct __CFArray { } *_cachedOccurrences;
    NSInteger _cachedOccurrenceCount;
    struct __CFArray { } *_cachedDayIndexes;
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    } _cachedDayRange;
    NSInteger _totalOccurrencesCount;
    CalendarModel *_model;
}


- (id)initWithDatabase:(struct CalDatabase { }*)arg1 filter:(struct CalFilter { }*)arg2 model:(id)arg3;
- (void)dealloc;
- (void)invalidateCachedOccurrences;
- (void)invalidateCachedDayIndexes;
- (void)invalidateCachedDays;
- (void)invalidate;
- (void)setCachedDayRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })cachedDayRange;
- (BOOL)supportsInvitations;
- (BOOL)supportsFakeTodaySection;
- (BOOL)cachedOccurrencesAreBeingGenerated;
- (NSInteger)cachedDayCount;
- (NSInteger)cachedOccurrenceCount;
- (NSInteger)cachedOccurrenceCountOnOrAfterDate:(NSInteger)arg1;
- (BOOL)dayIndexAlreadyCached:(NSInteger)arg1;
- (NSInteger)totalOccurrencesCount;
- (NSInteger)dateForDayIndex:(NSInteger)arg1;
- (NSInteger)dayIndexForDay:(NSInteger)arg1;
- (void)loadOccurrencesForRange:(struct { NSInteger x1; NSInteger x2; })arg1;
- (NSInteger)countOfOccurrencesOnDay:(double)arg1;
- (NSInteger)dayCountBeforeDay:(double)arg1;
- (NSInteger)indexOfFirstOccurrenceForDayIndex:(NSInteger)arg1;
- (NSInteger)indexOfLastOccurrenceForDayIndex:(NSInteger)arg1;
- (NSInteger)dayIndexOfCachedOccurrenceAtIndex:(NSInteger)arg1;
- (NSInteger)dayIndexOfCachedOccurrenceIndex:(NSInteger)arg1;
- (NSInteger)indexOfFirstCachedOccurrence;
- (NSInteger)fixDayIndexToFitInCachedDays:(NSInteger)arg1;
- (struct CalEventOccurrence { }*)cachedOccurrenceAtIndex:(NSInteger)arg1;
- (void)startSearching;
- (void)stopSearching;
- (struct __CFArray { }*)_cachedDayIndexes;

@end