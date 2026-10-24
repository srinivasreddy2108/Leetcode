class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int months[]={31,59,90,120,151,181,212,243,273,304,334,365};
        int amontha=(arriveAlice[0]-'0')*10+arriveAlice[1]-'0';
        int bmontha=(arriveBob[0]-'0')*10+arriveBob[1]-'0';
        int amonthl=(leaveAlice[0]-'0')*10+leaveAlice[1]-'0';
        int bmonthl=(leaveBob[0]-'0')*10+leaveBob[1]-'0';
        int astart=0;
        if(amontha==1){
             astart=(arriveAlice[3]-'0')*10+arriveAlice[4]-'0';
        }
        else{
            astart=months[amontha-2]+(arriveAlice[3]-'0')*10+arriveAlice[4]-'0';
        }
        int aend=0;
        if(amonthl==1){
             aend=(leaveAlice[3]-'0')*10+leaveAlice[4]-'0';
        }
        else{
            aend=months[amonthl-2]+(leaveAlice[3]-'0')*10+leaveAlice[4]-'0';
        }
        int bstart=0;
        if(bmontha==1){
             bstart=(arriveBob[3]-'0')*10+arriveBob[4]-'0';
        }
        else{
            bstart=months[bmontha-2]+(arriveBob[3]-'0')*10+arriveBob[4]-'0';
        }
        int bend=0;
        if(bmonthl==1){
             bend=(leaveBob[3]-'0')*10+leaveBob[4]-'0';
        }
        else{
            bend=months[bmonthl-2]+(leaveBob[3]-'0')*10+leaveBob[4]-'0';
        }
        if(bstart>aend||astart>bend){
            return 0;
        }
        int maxi=max(astart,bstart);
        int mini=min(aend,bend);
        return mini-maxi+1;
        
    }
};