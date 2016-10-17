//
// Created by neko on 10/16/16.
//

#ifndef CCD_ICOLLIDER_H
#define CCD_ICOLLIDER_H

class AbstractCollider {
public:
    /* When you make a call to a AbstractCollider* or AbstractCollider&,
     * it should call the corresponding method in the derived class.
     * But how...? This function will need to change to be a bit more
     * magic...
     */
    int getColliderId() const { return -1; }
};


#endif //CCD_ICOLLIDER_H
