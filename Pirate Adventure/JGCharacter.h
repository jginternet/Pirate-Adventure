//
//  JGCharacter.h
//  Pirate Adventure
//
//  Created by Joseph Grieco on 7/14/14.
//  Copyright (c) 2014 Joseph Grieco. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JGArmor.h"
#import "JGWeapon.h"

@interface JGCharacter : NSObject

@property (strong, nonatomic) JGArmor *armor;
@property (strong, nonatomic) JGWeapon *weapon;
@property (nonatomic) int damage;
@property (nonatomic) int health;


@end
