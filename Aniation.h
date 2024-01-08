#ifndef ANIATION_H
#define ANIATION_H
#include <SFML/Graphics.hpp>
using namespace sf;

class Aniation
{
    public:
        Aniation(Texture *texture,Vector2u imagecount,float switchtime,RectangleShape *play);
         ~Aniation();
         void update(int row,float deltatime,bool faceRight,bool faceup);


    public:
        IntRect uvrect;
        RectangleShape *play;
    private:
        Vector2u Imagecount;
        Vector2u Currentimage;

        float totaltime;
        float switchtime;

};

#endif // ANIATION_H
