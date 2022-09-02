#include <splashkit.h>

int main()
{
    window w = open_window("UNSW Open Day!", 800, 600);

    while (!window_close_requested(w)) {
        process_events();
        clear_screen(COLOR_WHITE);

        // Add your drawing here!
        // fill_circle(COLOR_RED, 400, 300, 100);

        refresh_screen(60);
    }
}