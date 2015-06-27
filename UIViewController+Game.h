//
//  UIViewController+Game.h
//  FlappyBird
//
//  Created by Key on 6/24/15.
//  Copyright (c) 2015 Key. All rights reserved.
//

#import <UIKit/UIKit.h>

int BirdFlight;

@interface UIViewController (Game)
{
    IBOutlet UIImageView *Bird;
    IBOutlet UIButton *StartGame;
    
    NSTimer *BirdMovement;
}

-(IBAction)StartGame:(id)sender;
-(void)BirdMoving;

@end
