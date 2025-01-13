#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

struct spaceship{
    int x_pos;
    int y_pos;
    int velocity[2];
};

spaceship new_spaceship() {
    spaceship new_spaceship;
    new_spaceship.x_pos = 512;
    new_spaceship.y_pos = 384;
    new_spaceship.velocity[0] = 0;
    new_spaceship.velocity[1] = 0;
    return new_spaceship;
}

spaceship give_random_velocity(spaceship s) {
    s.velocity[0] = (rand() % 100);
    s.velocity[1] = (rand() % 100);
    return s;
}


spaceship update_spaceship(spaceship s) {
    s.x_pos = s.velocity[0] + s.x_pos;
    s.y_pos = s.velocity[1] + s.y_pos;
    return s;
}

void display_spaceship_positions(spaceship s_array[], int length) {
    for (int i = 0; i < length; i++) {
        cout << "spaceship " << i << ": x position: " << s_array[i].x_pos << endl;
        cout << "spaceship " << i << ": y position: " << s_array[i].y_pos << endl;
        cout << "spaceship " << i << ": velocity: " << s_array[i].velocity[0] << " " << s_array[i].velocity[1] << endl;
        cout << "---------------------------------------" << endl;
    }
    cout << "-------------------------------- all spaceships displayed --------------------------------" << endl;
}

int main() {
    srand(time(NULL));
    int num_spaceships = 5;
    spaceship all_spaceships[num_spaceships];
    for (int i = 0; i < num_spaceships; i++) {
        all_spaceships[i] = new_spaceship();
        all_spaceships[i] = give_random_velocity(all_spaceships[i]);
    }

    int on_screen_num = 0;
    while (on_screen_num < num_spaceships) {
        for (int i = 0; i < num_spaceships; i++) {
            if ((all_spaceships[i].x_pos <= 1024 && all_spaceships[i].x_pos >= 0) && (all_spaceships[i].y_pos >= 0 && all_spaceships[i].y_pos <= 768)) {
                display_spaceship_positions(all_spaceships, num_spaceships);
                all_spaceships[i] = update_spaceship(all_spaceships[i]);
            } else {
                on_screen_num++;
            }
        }
    }
}