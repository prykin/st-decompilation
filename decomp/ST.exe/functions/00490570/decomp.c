
/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0 */

undefined4 __thiscall STBoatC::sub_00490570(STBoatC *this)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  
  sVar1 = this->field_004B;
  if (sVar1 < 1) {
    sVar2 = this->field_0049;
    sVar3 = this->field_0047;
    if (((((sVar3 < 0) || (SHORT_007fb240 <= sVar3)) || (sVar2 < 0)) ||
        ((SHORT_007fb242 <= sVar2 || (sVar1 < 0)))) ||
       ((SHORT_007fb244 <= sVar1 ||
        (g_worldCells
         [(int)SHORT_007fb246 * (int)sVar1 + (int)SHORT_007fb240 * (int)sVar2 + (int)sVar3].objects
         [1] == (STWorldObject *)0x0)))) {
      return 0;
    }
  }
  else {
    sVar2 = this->field_0047;
    sVar3 = this->field_0049;
    if (((((sVar2 < 0) || (SHORT_007fb240 <= sVar2)) || (sVar3 < 0)) ||
        (((SHORT_007fb242 <= sVar3 || (sVar1 < 0)) ||
         ((SHORT_007fb244 <= sVar1 ||
          (g_worldCells
           [(int)SHORT_007fb246 * (int)sVar1 + (int)SHORT_007fb240 * (int)sVar3 + (int)sVar2].
           objects[1] == (STWorldObject *)0x0)))))) &&
       ((sVar4 = sVar1 + -1, sVar2 < 0 ||
        ((((SHORT_007fb240 <= sVar2 || (sVar3 < 0)) ||
          ((SHORT_007fb242 <= sVar3 ||
           ((((sVar4 < 0 || (SHORT_007fb244 <= sVar4)) ||
             (g_worldCells
              [(int)SHORT_007fb246 * (int)sVar4 + (int)SHORT_007fb240 * (int)sVar3 + (int)sVar2].
              objects[0] == (STWorldObject *)0x0)) ||
            (*(short *)(DAT_007fb280 +
                       ((sVar1 + -1) * (int)SHORT_007fb27e + (int)sVar3 * (int)SHORT_007fb278 +
                       (int)sVar2) * 2) == 0)))))) &&
         (((((sVar2 < 0 || (SHORT_007fb240 <= sVar2)) || (sVar3 < 0)) ||
           ((SHORT_007fb242 <= sVar3 || (sVar4 < 0)))) ||
          ((SHORT_007fb244 <= sVar4 ||
           (g_worldCells
            [(int)SHORT_007fb246 * (int)sVar4 + (int)SHORT_007fb240 * (int)sVar3 + (int)sVar2].
            objects[1] == (STWorldObject *)0x0)))))))))) {
      return 0;
    }
  }
  return 1;
}

