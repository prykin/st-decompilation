
/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=2; incoming_this_accesses=9;
   incoming_edx_uses=0 */

void __thiscall STBoatC::sub_0048D930(STBoatC *this)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STWorldObject *pSVar4;
  
  if ((this->field_045D == CASE_C) || (this->field_0459 == CASE_70)) {
    sVar1 = this->field_049B;
    sVar2 = this->field_049F;
    sVar3 = this->field_049D;
    if ((((-1 < sVar1) && (((sVar1 < SHORT_007fb240 && (-1 < sVar3)) && (sVar3 < SHORT_007fb242))))
        && (((-1 < sVar2 && (sVar2 < SHORT_007fb244)) &&
            (pSVar4 = g_worldCells
                      [(int)SHORT_007fb246 * (int)sVar2 + (int)SHORT_007fb240 * (int)sVar3 +
                       (int)sVar1].objects[0], pSVar4 != (STWorldObject *)0x0)))) &&
       (*(int *)&pSVar4->field_0x18 == this->field_04A1)) {
      thunk_FUN_004e18e0(pSVar4,this->field_0018);
      thunk_FUN_004e1690(pSVar4,this->field_0018);
    }
    sVar1 = this->field_04A5;
    sVar2 = this->field_04A9;
    sVar3 = this->field_04A7;
    if (((-1 < sVar1) && (sVar1 < SHORT_007fb240)) &&
       ((-1 < sVar3 &&
        ((((sVar3 < SHORT_007fb242 && (-1 < sVar2)) && (sVar2 < SHORT_007fb244)) &&
         ((pSVar4 = g_worldCells
                    [(int)SHORT_007fb246 * (int)sVar2 + (int)SHORT_007fb240 * (int)sVar3 +
                     (int)sVar1].objects[0], pSVar4 != (STWorldObject *)0x0 &&
          (*(int *)&pSVar4->field_0x18 == this->field_04AB)))))))) {
      thunk_FUN_004e18e0(pSVar4,this->field_0018);
      thunk_FUN_004e1690(pSVar4,this->field_0018);
    }
  }
  if ((this->field_045D == CASE_D) || (this->field_0459 == CASE_71)) {
    sVar1 = this->field_052C;
    sVar2 = this->field_0530;
    sVar3 = this->field_052E;
    if ((((-1 < sVar1) && (((sVar1 < SHORT_007fb240 && (-1 < sVar3)) && (sVar3 < SHORT_007fb242))))
        && (((-1 < sVar2 && (sVar2 < SHORT_007fb244)) &&
            (pSVar4 = g_worldCells
                      [(int)SHORT_007fb246 * (int)sVar2 + (int)SHORT_007fb240 * (int)sVar3 +
                       (int)sVar1].objects[0], pSVar4 != (STWorldObject *)0x0)))) &&
       (*(int *)&pSVar4->field_0x18 == this->field_0532)) {
      thunk_FUN_004e18e0(pSVar4,this->field_0018);
      thunk_FUN_004e1690(pSVar4,this->field_0018);
    }
  }
  return;
}

