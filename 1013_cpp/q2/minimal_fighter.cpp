#include "minimal_fighter.h"

using namespace std;

MinimalFighter::MinimalFighter(){
    mHp=0;
    mPower=0;
    mStatus=Invalid;
}
MinimalFighter::MinimalFighter(int _hp, int _power)
{
    mHp=_hp, mPower=_power;
    if (mHp) mStatus=Alive;
    else mStatus=Dead;
}
int MinimalFighter::hp(){
    return mHp;
}
int MinimalFighter::power(){
    return mPower;
}
FighterStatus MinimalFighter::status(){
    return mStatus;
}
void MinimalFighter::setHp(int _hp){
    mHp=_hp;
    if (mHp==0) mStatus=Dead;
}
void MinimalFighter::hit(MinimalFighter *_enemy){
    if (_enemy->hp()-mPower>0){
        _enemy->setHp(_enemy->hp()-mPower);
    }
    else{
        _enemy->setHp(0);
    }
    if (mHp-_enemy->power()>0){
        mHp-=_enemy->power();
    }
    else{
        mHp=0;
    }
}
void MinimalFighter::attack(MinimalFighter *_enemy){
    if (_enemy->hp()-mPower>0){
        _enemy->setHp(_enemy->hp()-mPower);
    }
    else{
        _enemy->setHp(0);
    }
    mPower=0;
}
void MinimalFighter::fight(MinimalFighter *_enemy){
    while(!(mHp==0||_enemy->hp()==0)){
        if (_enemy->hp()-mPower>0){
        _enemy->setHp(_enemy->hp()-mPower);
        }
        else{
            _enemy->setHp(0);
        }
        if (mHp-_enemy->power()>0){
            mHp-=_enemy->power();
        }
        else{
            mHp=0;
        }
    }
}