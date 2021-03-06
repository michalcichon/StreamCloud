//
//  StreamCloudStyles.h
//  StreamCloud
//
//  Created by Peter Amende on 19.01.15.
//  Copyright (c) 2015 Call a Nerd. All rights reserved.
//
//  Generated by PaintCode (www.paintcodeapp.com)
//

#import <Foundation/Foundation.h>
#import <Cocoa/Cocoa.h>


@interface StreamCloudStyles : NSObject

// Colors
+ (NSColor*)orangeLight;
+ (NSColor*)orangeDark;
+ (NSColor*)grayMedium;
+ (NSColor*)grayDark;
+ (NSColor*)grayMediumLight;
+ (NSColor*)grayLight;
+ (NSColor*)seperatorColor;
+ (NSColor*)artistLabelColor;
+ (NSColor*)durationLabelColor;

// Gradients
+ (NSGradient*)orangeGradient;

// Drawing Methods
+ (void)drawPlayPauseButtonWithFrame: (NSRect)frame playing: (BOOL)playing;
+ (void)drawNextButtonWithFrame: (NSRect)frame;
+ (void)drawPreviousButtonWithFrame: (NSRect)frame;
+ (void)drawShuffleButtonWithFrame: (NSRect)frame active: (BOOL)active;
+ (void)drawRepeatButtonWithFrame: (NSRect)frame repeatMode: (CGFloat)repeatMode;
+ (void)drawVolumeSettingsWithFrame: (NSRect)frame volumeToShow: (CGFloat)volumeToShow;
+ (void)drawPlayingIndicatorWithFrame: (NSRect)frame;
+ (void)drawPlayPauseOverlayWithFrame: (NSRect)frame playing: (BOOL)playing;
+ (void)drawTrackDownloadWithFrame: (NSRect)frame;
+ (void)drawTrackRepostWithFrame: (NSRect)frame;
+ (void)drawTrackLikeWithFrame: (NSRect)frame;
+ (void)drawSeperatorViewWithFrame: (NSRect)frame;
+ (void)drawPlayingOverlayWithFrame: (NSRect)frame;
+ (void)drawLargePlayPauseOverlayWithFrame: (NSRect)frame playing: (BOOL)playing;
+ (void)drawSetListOpenClose;
+ (void)drawTrackDetailWithFrame: (NSRect)frame;
+ (void)drawTrackIsRepostWithFrame: (NSRect)frame;
+ (void)drawPlaylistUpperShadowOverlayWithFrame: (NSRect)frame;
+ (void)drawPlaylistLowerShadowOverlayWithFrame: (NSRect)frame;
+ (void)drawLoginButtonWithFrame: (NSRect)frame;
+ (void)drawSoundCloudLogoWithFrame: (NSRect)frame;
+ (void)drawProgressSliderTrackWithFrame: (NSRect)frame;
+ (void)drawProgressSliderProgressWithFrame: (NSRect)frame;
+ (void)drawProgressIndicatorViewWithPercentShown: (CGFloat)percentShown;
+ (void)drawProgressSliderKnobWithFrame: (NSRect)frame;
+ (void)drawIconFollowerWithFrame: (NSRect)frame;
+ (void)drawIconTracksWithFrame: (NSRect)frame active: (BOOL)active;
+ (void)drawTabTracksWithFrame: (NSRect)frame;
+ (void)drawTabProfileWithFrame: (NSRect)frame;
+ (void)drawIconFavoritesWithFrame: (NSRect)frame active: (BOOL)active;

// Generated Images
+ (NSImage*)imageOfPlayPauseButtonWithFrame: (NSRect)frame playing: (BOOL)playing;
+ (NSImage*)imageOfNextButtonWithFrame: (NSRect)frame;
+ (NSImage*)imageOfPreviousButtonWithFrame: (NSRect)frame;
+ (NSImage*)imageOfShuffleButtonWithFrame: (NSRect)frame active: (BOOL)active;
+ (NSImage*)imageOfRepeatButtonWithFrame: (NSRect)frame repeatMode: (CGFloat)repeatMode;
+ (NSImage*)imageOfPlayingIndicatorWithFrame: (NSRect)frame;
+ (NSImage*)imageOfImageOverlayGradientViewWithFrame: (NSRect)frame;
+ (NSImage*)imageOfSoundCloudLogoWithFrame: (NSRect)frame;
+ (NSImage*)imageOfMenuBarIconWithActive: (BOOL)active;
+ (NSImage*)imageOfIconTracksWithFrame: (NSRect)frame active: (BOOL)active;
+ (NSImage*)imageOfIconFavoritesWithFrame: (NSRect)frame active: (BOOL)active;

@end
