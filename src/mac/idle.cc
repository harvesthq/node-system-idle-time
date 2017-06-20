#import <CoreFoundation/CoreFoundation.h>
#import <AppKit/AppKit.h>

int32_t SystemIdleTime(void) {
  double idleSeconds = CGEventSourceSecondsSinceLastEventType(kCGEventSourceStateHIDSystemState, kCGAnyInputEventType);
  return (int32_t) (idleSeconds * 1000);
}
