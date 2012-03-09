/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSString;

@interface SAWeatherLocationAddCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * error;
@property(copy) NSURL * weatherLocationId;
@property(copy) NSString * refId;
@property(copy) NSString * aceId;

+ (id)locationAddCompleted;
+ (id)locationAddCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)locationAddCompletedWithError:(id)arg1;
+ (id)locationAddCompletedWithWeatherLocationId:(id)arg1;

- (id)groupIdentifier;
- (void)setError:(id)arg1;
- (id)error;
- (id)initWithError:(id)arg1;
- (id)weatherLocationId;
- (id)initWithWeatherLocationId:(id)arg1;
- (void)setWeatherLocationId:(id)arg1;
- (id)encodedClassName;

@end