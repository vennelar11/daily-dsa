#snakeInMatrix

class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int position = 0;
        for (int i = 0; i < commands.size(); i++)
        {
            if (commands[i] == "RIGHT")
            {
                position += 1;
            }
            else if (commands[i] == "DOWN")
            {
                position += n;
            }
            else if (commands[i] == "LEFT")
            {
                position -= 1;
            }
            else if (commands[i] == "UP")
            {
                position -= n;
            }
        }
        return position;
    }
};