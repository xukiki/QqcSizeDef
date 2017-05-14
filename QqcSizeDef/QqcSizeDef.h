//
//  QqcSizeDef.h
//  QqcBaseFramework
//
//  Created by qiuqinchuan on 15/2/4.
//  Copyright (c) 2015年 Qqc. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#ifndef QqcBaseFramework_QqcSizeDef_h
#define QqcBaseFramework_QqcSizeDef_h


#define width_screen_qqc [[UIScreen mainScreen]bounds].size.width      //屏幕宽度
#define height_screen_qqc [[UIScreen mainScreen]bounds].size.height    //屏幕高度
#define height_content_qqc (height_screen_qqc - 20 - 44)            //屏幕内容高度（屏幕高度减去statusbar、navigationbar、tabbar的高度）
#define height_content_tabbar_qqc (height_screen_qqc - 20 -44 -49)  //屏幕内容高度（屏幕高度减去statusbar、navigationbar）


#define height_statusbar_qqc 20                     //satusbar高度
#define height_navbar_qqc    44                     //navigationbar高度
#define height_tabbar_qqc    49                     //tabbar高度


//高度定义
#define height_4_qqc        4
#define height_8_qqc        8
#define height_12_qqc       12
#define height_16_qqc       16
#define height_20_qqc       20
#define height_24_qqc       24
#define height_28_qqc       28
#define height_32_qqc       32
#define height_44_qqc       44
#define height_64_qqc       64
#define height_128_qqc      128
//...高度定义 end...



//宽度定义
#define width_4_qqc        4
#define width_8_qqc        8
#define width_12_qqc       12
#define width_16_qqc       16
#define width_20_qqc       20
#define width_24_qqc       24
#define width_28_qqc       28
#define width_32_qqc       32
#define width_44_qqc       44
#define width_64_qqc       64
#define width_128_qqc      128
//...宽度定义 end...

//红点宽度
#define width_badge_default  18
#define width_badge_middle   24
#define width_badge_large    26

#endif
