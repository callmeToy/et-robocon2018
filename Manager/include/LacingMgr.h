#ifndef __LACING_MGR_HH
#define __LACING_MGR_HH

class LacingMgr{
    private:
    
    enum _innerS{
        R_COURSE,
        L_COURSE
    } INNER_STATE;

    public:
    LacingMgr();
    bool doAction();


};
#endif