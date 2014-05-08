//
//  PlayerView.h
//  X4 Video Player
//
//  Created by Hemkaran Raghav on 10/4/13.
//  Copyright (c) 2013 Mahesh Gera. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayer.h>
#import <AVFoundation/AVFoundation.h>

@class KSVideoPlayerView;

@protocol playerViewDelegate <NSObject>
@optional
-(void)playerViewZoomButtonClicked:(KSVideoPlayerView*)view;
-(void)playerFinishedPlayback:(KSVideoPlayerView*)view;

@end

@interface KSVideoPlayerView : UIView

@property (assign, nonatomic) id <playerViewDelegate> delegate;
@property (assign, nonatomic) BOOL isFullScreenMode;
@property (retain, nonatomic) NSURL *contentURL;
@property (retain, nonatomic) AVPlayer *moviePlayer;
@property (assign, nonatomic) BOOL isPlaying;

@property (retain, nonatomic) UIButton *playPauseButton;
@property (retain, nonatomic) UIButton *volumeButton;
@property (retain, nonatomic) UIButton *zoomButton;

@property (retain, nonatomic) UISlider *progressBar;
@property (retain, nonatomic) UISlider *volumeBar;

@property (retain, nonatomic) UILabel *playBackTime;
@property (retain, nonatomic) UILabel *playBackTotalTime;

@property (retain,nonatomic) UIView *playerHudCenter;
@property (retain,nonatomic) UIView *playerHudBottom;


- (id)initWithFrame:(CGRect)frame contentURL:(NSURL*)contentURL;
-(id)initWithFrame:(CGRect)frame playerItem:(AVPlayerItem*)playerItem;
-(void)play;
-(void)pause;
-(void) setupConstraints;

@end
