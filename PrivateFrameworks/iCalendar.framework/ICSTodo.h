/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSTodo : ICSComponent {
}

@property(retain) NSArray *attach;
@property(retain) NSArray *attendee;
@property(retain) ICSDate *completed;
@property(retain) ICSDate *created;
@property(retain) NSString *description;
@property(retain) ICSDate *dtstamp;
@property(retain) ICSDate *dtstart;
@property(retain) ICSDate *due;
@property(retain) ICSDuration *duration;
@property(retain) NSArray *exdate;
@property(retain) NSArray *exrule;
@property(retain) ICSDate *last_modified;
@property(retain) NSString *location;
@property(retain) ICSUserAddress *organizer;
@property(retain) NSArray *rdate;
@property(retain) ICSDate *recurrence_id;
@property(retain) NSArray *rrule;
@property(retain) NSString *summary;
@property(retain) NSString *uid;
@property(retain) NSURL *url;
@property(retain) NSString *x_apple_ews_changekey;
@property(retain) NSString *x_apple_ews_itemid;
@property(retain) NSString *x_apple_ews_permission;
@property NSInteger classification;
@property NSUInteger priority;
@property NSUInteger sequence;
@property NSInteger status;
@property BOOL x_apple_ews_needsserverconfirmation;
@property NSUInteger x_apple_sort_order;

+ (id)name;

- (id)completed;
- (id)due;
- (void)fixComponent;
- (NSUInteger)priority;
- (void)setCompleted:(id)arg1;
- (void)setDue:(id)arg1;
- (void)setPriority:(NSUInteger)arg1;
- (void)setX_apple_sort_order:(NSUInteger)arg1;
- (BOOL)validate:(id*)arg1;
- (NSUInteger)x_apple_sort_order;

@end