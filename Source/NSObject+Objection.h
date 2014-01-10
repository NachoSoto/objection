#import <Foundation/Foundation.h>

@interface NSObject(JSObjection)
- (void)awakeFromObjection;
/**
 * @return NO if you want Objection to validate
 * that all dependencies have been provided.
 * @default YES
 */
- (BOOL)objectionRequiresAllDependencies;
@end
