
void help(int oldColor, int newColor, int x, int y, int n, int m, vector<vector<int>> &image){
    if(x < 0 || x >= n || y < 0 || y >= m || image[x][y] != oldColor){
        return;
    }

    image[x][y] = newColor;

    help(oldColor, newColor, x+1, y, n, m, image);
    help(oldColor, newColor, x-1, y, n, m, image);
    help(oldColor, newColor, x, y+1, n, m, image);
    help(oldColor, newColor, x, y-1, n, m, image);

}

vector<vector<int>> floodFill(vector<vector<int>> &image, int x, int y, int newColor)
{
    int oldColor = image[x][y];

    if(oldColor == newColor){
        return image;
    }

    int n = image.size();
    int m = image[0].size();

    help(oldColor, newColor, x, y, n, m, image);

    return image;
}
