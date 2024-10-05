#pragma once

namespace conf {
    sf::Vector2u const window_size = sf::Vector2u(800, 600);
    constexpr int max_framerate = 240;
    constexpr double dt = 1.0f / static_cast<double>(max_framerate);
}