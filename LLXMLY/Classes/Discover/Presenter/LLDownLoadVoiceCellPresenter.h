//
//  LLDownLoadVoiceCellPresenter.h
//  LLXMLY
//
//  Created by liushaohua on 2017/7/4.
//  Copyright © 2017年 liushaohua. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LLDownLoadVoiceModel.h"
#import "LLDownLoadVoiceCell.h"

@interface LLDownLoadVoiceCellPresenter : NSObject

//数据模型
@property (nonatomic, strong) LLDownLoadVoiceModel *voiceM;
//排序索引
@property (nonatomic, assign) NSInteger sortNum;

//绑定cell
- (void)bindWithCell: (LLDownLoadVoiceCell *)cell;


@end
