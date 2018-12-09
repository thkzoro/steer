/*

 */
#ifndef __STEER_H
#define __STEER_H

/********************************头文件****************************************/
/********************************宏定义****************************************/

/*********************************函数*****************************************/
/*
 *舵机转向
 *参数1:angle(in)    转向的角度
 *返回：0:转向成功，-1：失败
 */
int steer_turn(int angle);

/*
 * 舵机初始化
 */
void steer_init(void);

/*
 * 舵机反初始化
 */
void steer_deinit(void);

#endif /* __STEER_H */
