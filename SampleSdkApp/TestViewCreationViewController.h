//
//  TestViewCreationViewController.h
//  SocializeSDK
//
//  Created by Sergey Popenko on 8/1/11.
//  Copyright 2011 Socialize, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Socialize.h"
#import "LoadingView.h"

@interface TestViewCreationViewController : UIViewController<SocializeServiceDelegate> {
 
    /*get entity*/
    
    IBOutlet UITextField* entityTextField;
    Socialize*            _socialize;
    LoadingView*          _loadingView;
    
    /*info view */
    
    IBOutlet UIView*      resultsView;
    IBOutlet UILabel*     successLabel;
    IBOutlet UILabel*     keyLabel;
    IBOutlet UILabel*     nameLabel;
    IBOutlet UILabel*     commentsLabel;
    IBOutlet UILabel*     likesLabel;
    IBOutlet UILabel*     sharesLabel;
    IBOutlet UILabel*     viewsLabel;
}

-(IBAction)createView;
@end