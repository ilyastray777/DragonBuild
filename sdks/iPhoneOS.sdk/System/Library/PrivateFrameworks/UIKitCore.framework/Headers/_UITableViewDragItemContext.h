//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath, UITableView;

__attribute__((visibility("hidden")))
@interface _UITableViewDragItemContext : NSObject
{
    UITableView *_tableView;
    NSIndexPath *_indexPath;
}

@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
// - (void).cxx_destruct;
- (id)initWithIndexPath:(id)arg1 forTableView:(id)arg2;

@end
