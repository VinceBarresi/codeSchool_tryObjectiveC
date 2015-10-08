@interface TalkingPhone : NSObject <NSCopying> {
  NSNumber *_batteryLife;
}

@property NSString *phoneName;
@property NSString *modelNumber;

- (TalkingPhone *)initWithBatteryLife:(NSNumber *)batteryLife;
- (void) decreaseBatteryLife:(NSNumber *)arg;
- (NSString *) speak:(NSString *)greeting;
- (void) reportBatteryLife;
@end