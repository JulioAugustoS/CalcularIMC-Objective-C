//
//  ViewController.h
//  Imc
//
//  Created by Usuário Convidado on 18/08/2018.
//  Copyright © 2018 Julio Augusto. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *txtAtleta;
@property (weak, nonatomic) IBOutlet UITextField *txtPeso;
@property (weak, nonatomic) IBOutlet UITextField *txtAltura;
@property (weak, nonatomic) IBOutlet UITextField *txtImc;

- (IBAction)calcular:(id)sender;

@end

