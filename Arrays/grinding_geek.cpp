// Geek decided that if he bought a course on some day, he will complete that course on the same day itself and redeem floor[90% of cost of the course] amount back. Find the maximum number of courses that Geek can complete in those n days if he had total amount initially.
// todo - You only need to complete the function max_courses() that takes N the number of days, the total amount, and the cost array as input argument and return the maximum amount of courses that could be purchased.

// n = 2     ~ size of cost array / kitne courses hai
// total = 10   ~ kitna capital hai geek ke pass
// cost = [10, 9]

#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int n = 7;
    int total = 19;
    int cost[] = {2, 35, 97, 16, 87, 26, 62};
    int courses = 0;
    int currExp = 0;
    sort(cost , cost + n);

    // for(int i = 0; i < n; i++)
    // {
    //     if(currExp > total)
    //         break;
    //     currExp += cost[i];
    //     courses++;
    // }
    int i = 0;
    // while(total != 0){
    //     total = total - cost[i];
    //     courses++;
    //     i++;
    // }
    // while (total > 0 && i < n) {
    //         total = total - cost[i]; //check paisa kitna hai and then cut cost
    //             courses++;
    //             i++;
    //     }

    for(int i = 0; i<n;i++){
        if (currExp + cost[i] >= total)
            break;
        currExp += cost[i];
        courses++;
    }
    cout<<"Numer of courses attended : "<<courses;

    return 0;
}