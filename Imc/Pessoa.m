//
//  Pessoa.m
//  Imc
//
//  Created by Usuário Convidado on 18/08/2018.
//  Copyright © 2018 Julio Augusto. All rights reserved.
//

#import "Pessoa.h"

@implementation Pessoa

-(float) calcularIMC {
    return self.peso / (self.altura*self.altura);
}


@end
