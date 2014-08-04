//
//  NSImage+RoundedCorners.h
//  SoundcloudPlayer
//
//  Created by Philip Brechler on 04.08.14.
//  Copyright (c) 2014 Call a Nerd. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface NSImage (RoundedCorners)

- (NSImage *)roundCornersImageCornerRadius:(NSInteger)radius;

@end
