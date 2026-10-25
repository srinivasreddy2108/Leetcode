class Solution {
public:
    int dayOfYear(string date) {
        int months[]={31,59,90,120,151,181,212,243,273,304,334,365};
        int year=(date[0]-'0')*1000+(date[1]-'0')*100+(date[2]-'0')*10+date[3]-'0';
        int month=(date[5]-'0')*10+date[6]-'0';
        int day=(date[8]-'0')*10+date[9]-'0';
        if((year%4==0&&year%100!=0)||year%400==0){
            for(int i=1;i<12;i++){
                months[i]++;
            }
        }
        if(month==1){
            return day;
        }
        return months[month-2]+day;
    }
};