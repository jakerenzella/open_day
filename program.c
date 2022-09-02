#include <splashkit.h>

int main()
{
    window w = open_window("UNSW Open Day!", 800, 600);

    while (!window_close_requested(w)) {
        process_events();
        clear_screen(COLOR_WHITE);

        // Add your drawing here!
        draw_circle(COLOR_BLUE, 100, 300, 100);
        draw_circle(COLOR_YELLOW, 200, 400, 100);
        draw_circle(COLOR_BLACK, 300, 300, 100);
        draw_circle(COLOR_GREEN, 400, 400, 100);
        draw_circle(COLOR_RED, 500, 300, 100);

        refresh_screen(60);
    }
}