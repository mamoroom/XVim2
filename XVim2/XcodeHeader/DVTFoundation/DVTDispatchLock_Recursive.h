//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTDispatchLock.h>

@interface DVTDispatchLock_Recursive : DVTDispatchLock
{
    // Error parsing type: A^{_opaque_pthread_t}, name: _recursiveSafeThread
}

- (void)performLockedBlockAsyncUnlessRecursing:(CDUnknownBlockType)arg1;
- (void)afterTimeInterval:(double)arg1 asyncPerformLockedBlock:(CDUnknownBlockType)arg2;
- (void)asyncPerformLockedWriterBlock:(CDUnknownBlockType)arg1;
- (void)asyncPerformLockedReaderBlock:(CDUnknownBlockType)arg1;
- (void)asyncPerformLockedBlock:(CDUnknownBlockType)arg1;
- (void)performLockedReaderBlock:(CDUnknownBlockType)arg1;
- (void)performLockedBlock:(CDUnknownBlockType)arg1;

@end
