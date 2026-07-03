

class BadLengthException : public exception {
    private:
        string length_str;
    public:
        // Constructor converts the integer to a string
        BadLengthException(int n) {
            length_str = to_string(n);
        }
        
        // Overriding the virtual what() method from std::exception
        const char* what() const noexcept override {
            return length_str.c_str();
        }
};



// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna