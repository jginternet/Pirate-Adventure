//
//  JGTile.h
//  Pirate Adventure
//
//  Created by Joseph Grieco on 5/23/14.
//  Copyright (c) 2014 Joseph Grieco. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JGWeapon.h"
#import "JGArmor.h"


@interface JGTile : NSObject

@property (strong, nonatomic) NSString *story;
@property (strong, nonatomic) UIImage *backgroundImage;
@property (strong, nonatomic) NSString *actionButtonName;
@property (strong, nonatomic) JGWeapon *weapon;
@property (strong, nonatomic) JGArmor *armor;
@property (nonatomic) int healthEffect;

@end
