/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSOperationQueue;



@interface ISOperationQueue : NSObject 
{
    NSOperationQueue *_queue;
}

+ (BOOL)isActive;
+ (id)mainQueue;

- (void)setMaxConcurrentOperationCount:(NSInteger)arg1;
- (void)cancelAllOperations;
- (void)addOperation:(id)arg1;
- (void)setSuspended:(BOOL)arg1;
- (id)operations;
- (id)init;
- (void)dealloc;

@end