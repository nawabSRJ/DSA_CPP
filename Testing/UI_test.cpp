#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Output.H>

void submit_callback(Fl_Widget* widget, void* data) {
    Fl_Input* input = (Fl_Input*)data;
    const char* name = input->value();
    ((Fl_Output*)widget)->copy_label(name);
}

int main(int argc, char **argv) {
    Fl_Window *window = new Fl_Window(300, 200, "Simple Form UI");

    Fl_Input *input = new Fl_Input(100, 20, 140, 30, "Name:");
    Fl_Button *button = new Fl_Button(100, 70, 100, 30, "Submit");
    Fl_Output *output = new Fl_Output(100, 120, 140, 30, "Output:");

    button->callback(submit_callback, (void*)input);

    window->end();
    window->show(argc, argv);
    return Fl::run();
}
