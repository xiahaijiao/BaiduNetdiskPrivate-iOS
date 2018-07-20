//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec 14 2017 14:12:44).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DownOperation.h"

@class NSMutableArray, NSMutableDictionary, NSOperationQueue, NSRecursiveLock, TransFileModel;

@interface FolderDownOperation : DownOperation
{
    TransFileModel *_currentTransFileModel;
    CDUnknownBlockType _transFolderStartBlock;
    CDUnknownBlockType _transFolderOneStartBlock;
    CDUnknownBlockType _transFolderOneProgressBlock;
    CDUnknownBlockType _transFolderOneDoneBlock;
    CDUnknownBlockType _transFolderDoneBlock;
    NSMutableArray *_folderFileArray;
    NSRecursiveLock *_accessLock;
    NSOperationQueue *_downOperation;
    NSMutableDictionary *_operationDic;
}

@property(retain, nonatomic) NSMutableDictionary *operationDic; // @synthesize operationDic=_operationDic;
@property(retain, nonatomic) NSOperationQueue *downOperation; // @synthesize downOperation=_downOperation;
@property(retain) NSRecursiveLock *accessLock; // @synthesize accessLock=_accessLock;
@property(retain, nonatomic) NSMutableArray *folderFileArray; // @synthesize folderFileArray=_folderFileArray;
@property(copy, nonatomic) CDUnknownBlockType transFolderDoneBlock; // @synthesize transFolderDoneBlock=_transFolderDoneBlock;
@property(copy, nonatomic) CDUnknownBlockType transFolderOneDoneBlock; // @synthesize transFolderOneDoneBlock=_transFolderOneDoneBlock;
@property(copy, nonatomic) CDUnknownBlockType transFolderOneProgressBlock; // @synthesize transFolderOneProgressBlock=_transFolderOneProgressBlock;
@property(copy, nonatomic) CDUnknownBlockType transFolderOneStartBlock; // @synthesize transFolderOneStartBlock=_transFolderOneStartBlock;
@property(copy, nonatomic) CDUnknownBlockType transFolderStartBlock; // @synthesize transFolderStartBlock=_transFolderStartBlock;
@property(retain) TransFileModel *currentTransFileModel; // @synthesize currentTransFileModel=_currentTransFileModel;

- (void)setSuspended:(_Bool)arg1;
- (void)cancel;
- (void)updateCurrentTransFileReason:(int)arg1;
- (void)deleteTransFile:(id)arg1;
- (void)continueTransFile:(id)arg1;
- (void)pauseTransFile:(id)arg1;
- (long long)getAllTransCount;
- (_Bool)isContainsTransFile:(id)arg1;
- (void)checkFolderDownFinish;
- (void)start;
- (void)startFolderFileTrans;
- (id)folderFileDownSpeedLimit:(id)arg1;
- (id)createNewOperation:(id)arg1;
- (void)dealloc;
- (id)init;

@end

