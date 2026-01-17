#ifndef KITSUNEENGINE_OBJECT_H
#define KITSUNEENGINE_OBJECT_H

#pragma once
#include "Vector3D.h"

class Object {
public:
    Vector3D position = Vector3D(0.0f, 0.0f, 0.0f);

    virtual void Update(float dt) {}
    virtual void Draw() {}
    virtual ~Object() = default;
};


#endif //KITSUNEENGINE_OBJECT_H