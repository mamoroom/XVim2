//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface _TtC12SourceEditor21SourceEditorPrintView : NSView
{
    // Error parsing type: , name: dataSource
    // Error parsing type: , name: printInfo
    // Error parsing type: , name: contentView
    // Error parsing type: , name: layoutManager
    // Error parsing type: , name: pages.storage
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)beginPageInRect:(struct CGRect)arg1 atPlacement:(struct CGPoint)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (struct CGRect)rectForPage:(long long)arg1;
- (BOOL)knowsPageRange:(struct _NSRange *)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(nonatomic, readonly) BOOL flipped;

@end

