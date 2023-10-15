
//
// StyleDictionaryProperties.h
//

// Do not edit directly
// Generated on Sun, 15 Oct 2023 20:17:24 GMT


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface StyleDictionaryProperties : NSObject

+ (NSDictionary *)properties;
+ (NSDictionary *)getProperty:(NSString *)keyPath;
+ (nonnull)getValue:(NSString *)keyPath;

@end
