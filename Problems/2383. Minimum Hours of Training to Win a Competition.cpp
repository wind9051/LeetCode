class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
        int totalEnergy = accumulate(begin(energy), end(energy), 0);
        int hours = max(totalEnergy - initialEnergy + 1, 0);

        int nowExperience = initialExperience;
        for (auto now : experience) {
            if (nowExperience <= now) {
                hours += 1 + (now - nowExperience);
                nowExperience = 2*now + 1;
            }
            else nowExperience += now;
        }
        return hours;
    }
};
