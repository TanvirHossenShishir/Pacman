#include "Aniation.h"
#include <SFML/Graphics.hpp>
using namespace sf;

Aniation::Aniation(Texture *texture,Vector2u imagecount,float switchtime,RectangleShape *play)
{
    this->Imagecount=imagecount;
    this->switchtime=switchtime;
    totaltime=0.0f;
    Currentimage.x=0;
    this->play=play;
    uvrect.width=texture->getSize().x/float(Imagecount.x);
    uvrect.height=texture->getSize().y/float(Imagecount.y);
    play->setOrigin(Vector2f(40.0f/2,40.0f/2));
    //play->rotate(270);
}

Aniation::~Aniation()
{
    //dtor
}
void Aniation::update(int row,float deltatime,bool faceRight,bool faceup)
{

    Currentimage.y=row;
    totaltime+=deltatime;
    if(totaltime>=switchtime)
    {

            if(faceRight==true)
        //play->setRotation(180);
        totaltime-=switchtime;
        Currentimage.x++;
        if(Currentimage.x>Imagecount.x-1)
        {
            Currentimage.x=0;
        }

    }

    uvrect.left=Currentimage.x*uvrect.width;
    uvrect.top=Currentimage.y*uvrect.height;
}
