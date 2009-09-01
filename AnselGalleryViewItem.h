//
//  AnselGalleryViewItem.h
//  iPhoto2Ansel
//
//  Created by Michael Rubinsky on 5/7/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//
#import <Cocoa/Cocoa.h>
#import <Quartz/Quartz.h>

@interface AnselGalleryViewItem: NSObject 
{
	NSURL *image;
	NSString *imageID;
    NSString *imageTitle;
    NSCalendarDate *imageDate;
}

@property(readwrite,copy) NSURL * image;
@property(readwrite,copy) NSString * imageID;

- (id)initWithURL: (NSURL *)theUrl withTitle: (NSString *)theTitle withDate: (NSDate *)theDate;

#pragma mark -
#pragma mark Required Methods IKImageBrowserItem Informal Protocol
- (NSString *)imageUID;
- (NSString *)imageRepresentationType;
- (id)imageRepresentation;

- (NSString *)imageTitle;
- (NSString *)imageSubtitle;

@end

