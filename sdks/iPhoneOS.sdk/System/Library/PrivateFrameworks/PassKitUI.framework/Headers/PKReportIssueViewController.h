//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKSectionTableViewController.h>

#import <PassKitUI/PKPaymentServiceDelegate-Protocol.h>

@class NSString, PKAccount, PKBusinessChatController, PKPaymentPass, PKPaymentService, PKPaymentTransaction, PKPaymentTransactionCellController, UIBarButtonItem, UIImageView, UITableViewHeaderFooterView;

@interface PKReportIssueViewController : PKSectionTableViewController <PKPaymentServiceDelegate, UITextViewDelegate>
{
    PKPaymentTransaction *_transaction;
    PKPaymentPass *_paymentPass;
    PKAccount *_account;
    PKPaymentService *_paymentService;
    PKPaymentTransactionCellController *_transactionCellController;
    PKBusinessChatController *_businessChatController;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_submitButton;
    BOOL _hasIssueSelected;
    long long _selectedIssue;
    BOOL _hasMapsIssueSelected;
    long long _selectedMapsIssue;
    BOOL _hasDisputeTypeSelected;
    long long _selectedDisputeType;
    BOOL _reportingIssue;
    NSString *_statementName;
    BOOL _canPerformUnrecognizedTransaction;
    BOOL _canPerformDispute;
    BOOL _canPerformOther;
    BOOL _canPerformIncorrectMerchant;
    UITableViewHeaderFooterView *_footerView;
    UIImageView *_logoView;
}

+ (BOOL)canReportIssueForTransaction:(id)arg1 paymentPass:(id)arg2;
// - (void).cxx_destruct;
- (void)_presentAlertWithTitle:(id)arg1 message:(id)arg2 dismissAfter:(BOOL)arg3;
- (void)_reportIssueToMaps;
- (void)_resetMapsMerchantAndBrandWithIssueReportIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_disputeTransactionInBusinessChat;
- (void)_submitButtonTapped:(id)arg1;
- (void)_cancelButtonTapped:(id)arg1;
- (void)_updateNavigationButtons;
- (BOOL)_issueTypeEnabled:(long long)arg1;
- (long long)_rowIndexForIssueType:(long long)arg1;
- (long long)_issueTypeForRowIndex:(long long)arg1;
- (NSUInteger)_numberOfIssueTypesEnabled;
- (id)_formattedStatementNameFromRawName:(id)arg1;
- (id)_commentsCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)_mapsIssueCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)_disputeTypeCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)_issueTypeCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)_statementNameCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)_transactionCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (void)_handleMapsIssueTypeSelectedInTableView:(id)arg1 atIndexPath:(id)arg2;
- (void)_handleDisputeTypeSelectedInTableView:(id)arg1 atIndexPath:(id)arg2;
- (void)_handleIssueTypeSelectedInTableView:(id)arg1 atIndexPath:(id)arg2;
- (void)textViewDidChange:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (BOOL)shouldMapSection:(NSUInteger)arg1;
- (id)_statementName;
- (void)_updateFooterPlacement;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithTransaction:(id)arg1 paymentPass:(id)arg2 account:(id)arg3 detailViewStyle:(long long)arg4;

@end
