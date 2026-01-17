#ifndef KITSUNEENGINE_BALLS_H
#define KITSUNEENGINE_BALLS_H

#pragma once
#include "Object.h"

class Balls : public Object {
public:
    void Update(float dt) override;
    void Draw() override;
};

#endif //KITSUNEENGINE_BALLS_H