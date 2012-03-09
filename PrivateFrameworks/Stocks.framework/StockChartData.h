/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@class StockGraphImageSet, NSArray, NSString, NSDate, NSTimeZone;

@interface StockChartData : NSObject  {
    NSString *symbol;
    int chartInterval;
    struct { double x1; double x2; unsigned long long x3; } *stockValues;
    unsigned int stockValueCount;
    NSArray *interestingIndexes;
    NSDate *marketOpenDate;
    NSDate *marketCloseDate;
    NSTimeZone *marketTimeZone;
    struct { double x1; double x2; unsigned long long x3; } *minValue;
    struct { double x1; double x2; unsigned long long x3; } *maxValue;
    double expirationTime;
    BOOL isUnavailable;
    BOOL hasVolume;
    StockGraphImageSet *graphImageSets[2];
    NSArray *labelInfoArrays[4];
}

@property BOOL hasVolume;
@property BOOL isUnavailable;
@property double expirationTime;
@property struct { double x1; double x2; unsigned long long x3; }* maxValue;
@property struct { double x1; double x2; unsigned long long x3; }* minValue;
@property(retain) NSTimeZone * marketTimeZone;
@property(retain) NSDate * marketCloseDate;
@property(retain) NSDate * marketOpenDate;
@property(retain) NSArray * interestingIndexes;
@property(readonly) unsigned int stockValueCount;
@property(readonly) struct { double x1; double x2; unsigned long long x3; }* stockValues;
@property int chartInterval;
@property(copy) NSString * symbol;


- (id)description;
- (void)dealloc;
- (id)labelInfoArrayForYAxis:(BOOL)arg1 detailedMode:(BOOL)arg2;
- (void)setLabelInfoArray:(id)arg1 forYAxis:(BOOL)arg2 detailedMode:(BOOL)arg3;
- (BOOL)hasVolume;
- (void)setChartInterval:(int)arg1;
- (id)imageSetForStockGraphSize:(int)arg1;
- (void)setInterestingIndexes:(id)arg1;
- (void)setMarketOpenDate:(id)arg1;
- (void)setMarketCloseDate:(id)arg1;
- (void)setMarketTimeZone:(id)arg1;
- (void)setHasVolume:(BOOL)arg1;
- (struct { double x1; double x2; unsigned long long x3; }*)allocateStockValuesWithCount:(unsigned int)arg1;
- (struct { double x1; double x2; unsigned long long x3; }*)stockValues;
- (unsigned int)stockValueCount;
- (id)interestingIndexes;
- (void)setIsUnavailable:(BOOL)arg1;
- (id)marketOpenDate;
- (id)marketCloseDate;
- (id)initWithSymbol:(id)arg1 interval:(int)arg2;
- (BOOL)isUnavailable;
- (id)marketTimeZone;
- (int)chartInterval;
- (void)clearAllImageSets;
- (void)setImageSet:(id)arg1 forStockGraphSize:(int)arg2;
- (void)setMinValue:(struct { double x1; double x2; unsigned long long x3; }*)arg1;
- (void)setMaxValue:(struct { double x1; double x2; unsigned long long x3; }*)arg1;
- (struct { double x1; double x2; unsigned long long x3; }*)minValue;
- (struct { double x1; double x2; unsigned long long x3; }*)maxValue;
- (double)expirationTime;
- (void)setExpirationTime:(double)arg1;
- (void)setSymbol:(id)arg1;
- (id)symbol;

@end