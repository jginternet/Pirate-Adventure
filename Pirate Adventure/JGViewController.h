//
//  JGViewController.h
//  Pirate Adventure
//
//  Created by Joseph Grieco on 5/23/14.
//  Copyright (c) 2014 Joseph Grieco. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JGCharacter.h"
#import "JGBoss.h"

@interface JGViewController : UIViewController

//iVars
@property (nonatomic) CGPoint currentPoint;
@property (strong, nonatomic) NSArray *tiles;
@property (strong, nonatomic) JGCharacter *character;
@property (strong, nonatomic) JGBoss *boss;



//IBOutlets
@property (strong, nonatomic) IBOutlet UIImageView *backgroundImageView;
@property (strong, nonatomic) IBOutlet UILabel *healthLabel;
@property (strong, nonatomic) IBOutlet UILabel *damageLabel;
@property (strong, nonatomic) IBOutlet UILabel *weaponLabel;
@property (strong, nonatomic) IBOutlet UILabel *armorLabel;
@property (strong, nonatomic) IBOutlet UILabel *storyLabel;
@property (strong, nonatomic) IBOutlet UIButton *actionButton;
@property (strong, nonatomic) IBOutlet UIButton *northButton;
@property (strong, nonatomic) IBOutlet UIButton *westButton;
@property (strong, nonatomic) IBOutlet UIButton *southButton;
@property (strong, nonatomic) IBOutlet UIButton *eastButton;


//IBActions
- (IBAction)actionButtonPress:(UIButton *)sender;
- (IBAction)northButtonPress:(UIButton *)sender;
- (IBAction)westButtonPress:(UIButton *)sender;
- (IBAction)southButtonPress:(UIButton *)sender;
- (IBAction)eastButtonPress:(UIButton *)sender;

- (IBAction)resetButtonPressed:(UIButton *)sender;



@end
