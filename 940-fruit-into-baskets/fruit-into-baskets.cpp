class Solution {
public:
    int totalFruit(vector<int>& fruits) {
         int fruit1 = -1, fruit2 = -1;
        int fruit2_count = 0; 
        int current_max = 0;
        int max_fruits = 0;

         for (int fruit : fruits) {
            if (fruit == fruit1 || fruit == fruit2) {
                current_max++;
            } else {
                current_max = fruit2_count + 1;
            }

            if (fruit == fruit2) {
                fruit2_count++;
            } else {
                fruit2_count = 1;
                fruit1 = fruit2;
                fruit2 = fruit;
            }
             max_fruits = max(max_fruits, current_max);
        }
        return max_fruits;
    }
};