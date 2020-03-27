//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, UIFont;
@protocol PSPINEntryViewDelegate;

@protocol PINEntryView <UITextFieldDelegate>
- (void)setShowsOptionsButton:(BOOL)arg1;
- (void)setBlocked:(BOOL)arg1;
- (void)hideFailedAttempts;
- (void)showFailedAttempts:(long long)arg1;
- (void)setDelegate:(id <PSPINEntryViewDelegate>)arg1;
- (BOOL)becomeFirstResponder;
- (void)hidePasscodeField:(BOOL)arg1;
- (void)appendString:(NSString *)arg1;
- (void)deleteLastCharacter;
- (void)setStringValue:(NSString *)arg1;
- (NSString *)stringValue;
- (double)getCurrentTitleFontSize;
- (void)setTitle:(NSString *)arg1 font:(UIFont *)arg2;
- (void)hideError;
- (void)setPINPolicyString:(NSString *)arg1 visible:(BOOL)arg2;
- (void)showError:(NSString *)arg1 animate:(BOOL)arg2;
- (void)setTextFieldKeyboardAppearance:(long long)arg1;
- (void)setTextFieldKeyboardType:(long long)arg1;
@end
