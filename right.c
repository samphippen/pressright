#include <ApplicationServices/ApplicationServices.h>

int main() {
    CGEventRef event1, event2;
    event1 = CGEventCreateKeyboardEvent (NULL, (CGKeyCode)124, true);
    event2 = CGEventCreateKeyboardEvent (NULL, (CGKeyCode)124, false);
    CGEventTapLocation loc = kCGSessionEventTap;
    CGEventPost(loc, event1);
    CGEventPost(loc, event2);
    return 0;
}
