//
//  ELCAssetTablePicker.h
//
//  Created by ELC on 2/15/11.
//  Copyright 2011 ELC Technologies. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AssetsLibrary/AssetsLibrary.h>

#import "ELCAsset.h"
#import "ELCAssetSelectionDelegate.h"
#import "ELCAssetPickerFilterDelegate.h"

@interface ELCAssetTablePicker : UIViewController <ELCAssetSelectionDelegate, ELCAssetDelegate, UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, weak) id <ELCAssetSelectionDelegate> parent;
@property (nonatomic, strong) ALAssetsGroup *assetGroup;
@property (nonatomic, strong) NSMutableArray *elcAssets;
@property (nonatomic, strong) NSMutableArray *selectedAssets;
@property (nonatomic, strong) NSArray *mediaTypes;

// optional, can be used to filter the assets displayed
@property(nonatomic, weak) id <ELCAssetPickerFilterDelegate> assetPickerFilterDelegate;

- (NSInteger)totalSelectedAssets;
- (void)preparePhotos;

@end