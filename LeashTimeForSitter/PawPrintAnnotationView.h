//
//  PawPrintAnnotationView.h
//  LeashTimeSitterV1
//
//  Created by Ted Hooban on 11/7/14.
//  Copyright (c) 2014 Ted Hooban. All rights reserved.
//

#import <MapKit/MapKit.h>

@interface PawPrintAnnotationView : MKAnnotationView

@property(nonatomic) NSString *tagID;
@property(nonatomic) UIImageView *annotationImage;


@end
