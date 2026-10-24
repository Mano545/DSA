class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int before[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
        partial_sum(begin(before), end(before), begin(before));  // days in the year before each month
        auto day = [&](const string& mmdd) { return before[stoi(mmdd.substr(0, 2)) - 1] + stoi(mmdd.substr(3)); };  // "MM-DD" -> day of the year, 1..365
        return max(0, day(min(leaveAlice, leaveBob)) - day(max(arriveAlice, arriveBob)) + 1);  // "MM-DD" strings sort like dates
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna