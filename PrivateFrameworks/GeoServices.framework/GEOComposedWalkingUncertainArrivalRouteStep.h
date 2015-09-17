/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedWalkingUncertainArrivalRouteStep : GEOComposedWalkingRouteStep {
    NSArray *_aggregatedGEOSteps;
    unsigned int _aggregatedStepsDistance;
    unsigned int _aggregatedStepsDuration;
}

- (unsigned int)_calculateAggregatedStepsDistance;
- (unsigned int)_calculateAggregatedStepsDuration;
- (void)dealloc;
- (unsigned int)distance;
- (unsigned int)duration;
- (id)initWithComposedRoute:(id)arg1 aggregatedGEOSteps:(id)arg2 stepIndex:(unsigned int)arg3 pointRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4 maneuverPointRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5;
- (BOOL)isUncertainArrival;

@end