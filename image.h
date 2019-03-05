#ifndef IMAGE_H
#define IMAGE_H

#include "global.h"

//基本图像初始化和初步处理
int Image_Init();
void Image_Run();
void Image_Show();
void Image_Clear();

//读取颜色表
int Read_ColorTable();
int Read_ColorTable_Near();

//使用颜色表
void Color_Table_field_ball(IplImage *src );
void Color_Table_goal(IplImage *src );
//void Test(IplImage *src);

//获取球的信息
bool get_ball_pos(CvMat *src);
bool get_near_ball_pos(CvMat *src);
bool get_ball_pos_1(CvMat *src);
bool get_ball_pos_3(IplImage *src);
bool get_ball_pos_2( CvMat* img, float dp,
                       int min_radius, int max_radius,
                       float acc_threshold,float max_count_best_threshold);
//获取球门信息
bool Goal_find(int line_range,int white_ratio,int green_ratio,int threshold_hough,int param1,int param2);

//根据状态机改变图像处理方式
//bool image_update();
void Image_search(void);
void Image_chase(void);
void Image_round_yaw(void);
void Image_search_goal(void);
void Image_round_goal(void);
void Image_adjust_ball(void);
void Image_approach_ball(void);
void Image_kick(void);
//辅助调试函数
void print(IplImage* img, int x, int y, const char* text);
#endif // IMAGE_H
