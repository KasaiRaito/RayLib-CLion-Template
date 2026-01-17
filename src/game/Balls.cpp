#include "Balls.h"
#include "raylib.h"

void Balls::Update(float dt) {
    // simple movement test
    position.x += 100.0f * dt;
}

void Balls::Draw() {
    DrawCircle(
        static_cast<int>(position.x),
        static_cast<int>(position.y),
        20,
        RED
    );
}
