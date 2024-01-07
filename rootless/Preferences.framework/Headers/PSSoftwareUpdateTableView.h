//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, UIActivityIndicatorView, UILabel;

@interface PSSoftwareUpdateTableView : UITableView
{
    BOOL _updatesDeferred;
    int _state;
    NSString *_currentVersion;
    UILabel *_checkingStatusLabel;
    UILabel *_subtitleLabel;
    UIActivityIndicatorView *_checkingForUpdateSpinner;
}

@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) UIActivityIndicatorView *checkingForUpdateSpinner; // @synthesize checkingForUpdateSpinner=_checkingForUpdateSpinner;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *checkingStatusLabel; // @synthesize checkingStatusLabel=_checkingStatusLabel;
@property BOOL updatesDeferred; // @synthesize updatesDeferred=_updatesDeferred;
@property(retain, nonatomic) NSString *currentVersion; // @synthesize currentVersion=_currentVersion;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (void)preferredContentSizeChanged:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 style:(long long)arg2;

@end
