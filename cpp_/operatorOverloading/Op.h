#ifndef OP_H_
#define OP_H_

class Op{

    public:
        Op();
        int num;
        Op(int a);
        Op operator+(Op);
};


#endif
