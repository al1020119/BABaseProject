
/*!
 *  @header BAKit.h
 *          BABaseProject
 *
 *  @brief  BAKit
 *
 *  @author 博爱
 *  @copyright    Copyright © 2016年 博爱. All rights reserved.
 *  @version    V1.0
 */

//                            _ooOoo_
//                           o8888888o
//                           88" . "88
//                           (| -_- |)
//                            O\ = /O
//                        ____/`---'\____
//                      .   ' \\| |// `.
//                       / \\||| : |||// \
//                     / _||||| -:- |||||- \
//                       | | \\\ - /// | |
//                     | \_| ''\---/'' | |
//                      \ .-\__ `-` ___/-. /
//                   ___`. .' /--.--\ `. . __
//                ."" '< `.___\_<|>_/___.' >'"".
//               | | : `- \`.;`\ _ /`;.`/ - ` : | |
//                 \ \ `-. \_ __\ /__ _/ .-` / /
//         ======`-.____`-.___\_____/___.-`____.-'======
//                            `=---='
//
//         .............................................
//                  佛祖镇楼                  BUG辟易
//          佛曰:
//                  写字楼里写字间，写字间里程序员；
//                  程序人员写程序，又拿程序换酒钱。
//                  酒醒只在网上坐，酒醉还来网下眠；
//                  酒醉酒醒日复日，网上网下年复年。
//                  但愿老死电脑间，不愿鞠躬老板前；
//                  奔驰宝马贵者趣，公交自行程序员。
//                  别人笑我忒疯癫，我笑自己命太贱；
//                  不见满街漂亮妹，哪个归得程序员？

/*
 
 *********************************************************************************
 *
 * 在使用BAKit的过程中如果出现bug请及时以以下任意一种方式联系我，我会及时修复bug
 *
 * QQ     : 博爱1616【137361770】
 * 微博    : 博爱1616
 * Email  : 137361770@qq.com
 * GitHub : https://github.com/boai
 * 博客园  : http://www.cnblogs.com/boai/
 * 博客    : http://boai.github.io
 
 *********************************************************************************
 
 */

/*! 
 
 源码来自：以下大神，附上git，以示感谢！
 Created by https://github.com/STShenZhaoliang/STScrollBar
 
 本人在此优化了些内容，并进行内存泄露优化处理，有特殊需求的用户也可以自行添加！
 
 */

#import <UIKit/UIKit.h>

@interface BAScrollBar : UIView

/*! 1. 标题,必须设在frame之后，如果重新设置字体的属性，请将标题内容在之后设置*/
@property (nonatomic, strong                ) NSString        *text;
/*! 2. 滚动一圈的时间, 默认是标题长度的三分之一, 如果重新设置，在设置完标题text属性之后*/
@property (nonatomic, assign                ) NSTimeInterval   time;
/*! 3. 字体,默认是[UIFont systemFontOfSize:17] */
@property (nonatomic, strong                ) UIFont          *font;
/*! 4. 字体颜色,默认是[UIColor whiteColor]*/
@property (nonatomic, strong                ) UIColor         *colorText;
/*! 5. 开始动画,默认是YES, 1.如果内容的长度小于frame的width，将不会滚动.2.必须先设置内容 */
@property (nonatomic, assign, getter=isStart) BOOL             start;
/*! 6. 自定义背景颜色 */
@property (nonatomic, strong                ) UIColor         *bgColor;

@end