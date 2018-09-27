/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroDurationCalculations : NSObject

+ (id)_itemsForDuration:(double)arg1 inPickList:(id)arg2 blueprint:(id)arg3 localOnly:(bool)arg4 respectTrim:(bool)arg5;
+ (double)biasedDurationOfItems:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (struct Buckets { long long x1; long long x2; long long x3; double x4; double x5; double x6; int x7; })doAllTheThingsForPickList:(id)arg1;
+ (double)durationForItemCount:(long long)arg1 inPickList:(id)arg2 withBlueprint:(id)arg3 respectTrim:(bool)arg4 localOnly:(bool)arg5;
+ (int)durationRangeForFrozenPickList:(id)arg1;
+ (long long)itemCountInPickList:(id)arg1 forDuration:(double)arg2;
+ (long long)itemCountInPickList:(id)arg1 forDuration:(double)arg2 withBlueprint:(id)arg3 respectTrim:(bool)arg4 outputResidual:(double*)arg5;
+ (double)maxDurationForPickList:(id)arg1 withBlueprint:(id)arg2;
+ (double)maxPleasantDurationOfItems:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (double)rawDurationOfItems:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

@end