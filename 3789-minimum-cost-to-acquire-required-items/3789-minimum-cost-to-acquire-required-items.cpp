class Solution {
public:
    long long minimumCost(long long cost1, long long cost2,long long costBoth, long long  need1, long long need2) {
        long long mini=0;
        mini+=min(costBoth,cost1+cost2)*min(need1,need2);
        long store=min(need1,need2);
        need1-=store;
        need2-=store;
        mini+=min(costBoth,cost1)*need1;
        mini+=min(costBoth,cost2)*need2;
        return mini;
    }
};