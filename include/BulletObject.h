

#ifndef BULLETOBJECT_H
#define BULLETOBJECT_H

#include "BaseObject.h"
#include "ComonFunc.h"

class BulletObject : public BaseObject
{
   public:
       BulletObject();
       ~BulletObject();

       enum BulletDir
       {
           DIR_RIGHT = 20,
           DIR_LEFT = 21,
       };
       void set_x_val(const int& xVal) {x_val = xVal;}
       void set_y_val(const int& yVal) {y_val = yVal;}
       int get_x_val() const {return x_val;}
       int get_y_val() const {return y_val;}

       void set_is_move(const bool& isMove) {is_move = isMove;}
       bool get_is_move() const {return is_move;}

    void set_bullet_dir(const unsigned int& bulletDir) {bullet_dir = bulletDir;}
    int get_bullet_dir() const {return bullet_dir;}
       void HandleMove(const int& x_border, const int& y_border);
   private:
        int x_val;
        int y_val;
        bool is_move;
        unsigned int bullet_dir;
};

#endif
