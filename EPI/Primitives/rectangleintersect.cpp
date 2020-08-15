#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <algorithm>
#include <climits>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <numeric>
#include <string> 
#include <vector>

typedef long long ll;

using namespace std;

struct Rectangle {
    int x, y, width, height;
};

bool isIntersect(const Rectangle& R1, const Rectangle& R2);

Rectangle IntersectRectangle(const Rectangle& R1, const Rectangle& R2) {
    if(!isIntersect(R1, R2)) {
        return {0, 0, -1, -1}; // No intersection
    }
    return {max(R1.x, R2.x), 
            max(R1.y, R2.y),
            min(R1.x + R1.width, R2.x + R2.width) - max(R1.x, R2.x),
            min(R1.y + R1.height, R2.y + R2.height) - max(R1.y, R2.y)};
}

bool isIntersect(const Rectangle& R1, const Rectangle& R2) {
    return R1.x <= R2.x + R2.width && R1.x + R1.width >= R2.x &&
           R1.y <= R2.y + R2.height && R1.y + R1.height >= R2.y;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen(\"input.tx\",\"r\",stdin);
    //freopen(\"ouput.txt\",\"w\",stdout);
    
    Rectangle R1{1, 1, 3, 3};
    Rectangle R2{3, 3, 2, 3};
    Rectangle ans = IntersectRectangle(R1, R2);
    cout << ans.x << " " << ans.y << " " << ans.width << " " << ans.height << "\n";

    return 0;
}

// O(1) time - the number of operations is constant
