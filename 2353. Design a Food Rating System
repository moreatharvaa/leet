Design a Food Rating System


class FoodRatings {
    using item = pair<int, string>;  // Define a type alias 'item' for pair<int, string>
    unordered_map<string, set<item>> Rated;  // Map from cuisine to a set of items (rating, food)
    unordered_map<string, item> mp;  // Map from food to its corresponding item (rating, cuisine)
public:
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        int n = foods.size();
        for (int i = 0; i < n; i++) {
            string food = foods[i], cuisine = cuisines[i];
            int rating = ratings[i];
            mp[food] = {-rating, cuisine};  // Initialize mp with (rating, cuisine) for each food
            Rated[cuisine].insert({-rating, food});  // Insert the item into the set for the corresponding cuisine
        }
    }

    void changeRating(string food, int newRating) {
        string& cuisine = mp[food].second;  // Reference to the cuisine associated with the food
        int oldRating = mp[food].first;  // The current rating of the food

        // Erase the old item from the set in Rated
        Rated[cuisine].erase({oldRating, food});
        
        // Insert the new item with the updated rating into the set
        Rated[cuisine].insert({-newRating, food});
        
        // Update the rating in the mp map for the food
        mp[food] = {-newRating, cuisine};
    }

    string highestRated(string cuisine) {
        return Rated[cuisine].begin()->second;  // Retrieve the food with the highest rating in the specified cuisine
    }
};
