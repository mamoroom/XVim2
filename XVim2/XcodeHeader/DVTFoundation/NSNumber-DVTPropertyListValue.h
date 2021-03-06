//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSNumber.h>

#import <DVTFoundation/DVTDiffHashing-Protocol.h>
#import <DVTFoundation/DVTPropertyListValue-Protocol.h>

@class NSArray, NSData, NSDate, NSDictionary, NSString;

@interface NSNumber (DVTPropertyListValue) <DVTPropertyListValue, DVTDiffHashing>
@property(readonly) NSDictionary *dictionaryValue;
@property(readonly) NSArray *arrayValue;
@property(readonly) NSDate *dateValue;
@property(readonly) NSNumber *numberValue;
@property(readonly) NSData *dataValue;
- (unsigned long long)dvt_diffHashForDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSString *stringValue;
@property(readonly) Class superclass;
@end

