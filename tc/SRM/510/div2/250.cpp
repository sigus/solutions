class TheAlmostLuckyNumbersDivTwo {
    int f(int a) {
        int cnt = 0;
        while (a) {
            if (a%10 != 4 && a%10 != 7)
              cnt++;
            a /= 10;
        }
        return cnt <= 1;
    }
public:
    int find(int a, int b) {
      	int ans = 0;
        for (int i = a; i <= b; i++)
            if (f(i))
                ans++;
        return ans;
    }
};

