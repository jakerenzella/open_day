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

        // some examples!
        // fill_rectange(COLOR_RED, 100, 100, 100, 100);
        // fill_circle(COLOR_BLUE, 300, 300, 100);
        // fill_triangle(COLOR_GREEN, 500, 500, 600, 600, 700, 500);

        refresh_screen(60);
    }
}