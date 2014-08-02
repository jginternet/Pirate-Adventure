//
//  JGFactory.h
//  Pirate Adventure
//
//  Created by Joseph Grieco on 5/23/14.
//  Copyright (c) 2014 Joseph Grieco. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JGCharacter.h"
#import "JGBoss.h"

@interface JGFactory : NSObject

-(NSArray *)tiles;
-(JGCharacter *)character;
-(JGBoss *)boss;


@end
