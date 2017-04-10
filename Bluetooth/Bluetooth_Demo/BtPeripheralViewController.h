//
//  BtPeripheralViewController.h
//  Bluetooth_Demo
//
//  Created by 周围 on 2017/2/27.
//  Copyright © 2017年 周围. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreBluetooth/CoreBluetooth.h>

@interface BtPeripheralViewController : UIViewController<CBPeripheralManagerDelegate,UIImagePickerControllerDelegate,UINavigationControllerDelegate>

@end
