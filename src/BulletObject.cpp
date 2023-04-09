#include "BulletObject.h"


BulletObject::BulletObject()
{
    x_val = 0;
    y_val = 0;
    is_move = false;

}

BulletObject::~BulletObject()
{

}

void BulletObject::HandleMove(const int& x_border, const int& y_border)
{
    if(bullet_dir == DIR_RIGHT)
    {
        rect_.x += x_val;
        if(rect_.x > x_border)
        {
            is_move = false;
        }
    }
    else if(bullet_dir == DIR_LEFT)
    {
        rect_.x -= x_val;
        if(rect_.x < 0)
        {
            is_move = false;
        }
    }
}
