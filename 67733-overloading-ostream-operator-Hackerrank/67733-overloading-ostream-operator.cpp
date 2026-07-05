
ostream& operator<<(ostream& os, const Person& p) {
    os << "first_name=" << p.get_first_name() << ",last_name=" << p.get_last_name();
    return os;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna