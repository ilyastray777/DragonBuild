//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface _CNDataURLSessionTaskAdapter : NSObject <NSURLSessionDataDelegate>
{
    id /* CDUnknownBlockType */ _onDataReceived;
    id /* CDUnknownBlockType */ _onCompletion;
}

@property(copy) id /* CDUnknownBlockType */ onCompletion; // @synthesize onCompletion=_onCompletion;
@property(copy) id /* CDUnknownBlockType */ onDataReceived; // @synthesize onDataReceived=_onDataReceived;
// - (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;

@end
