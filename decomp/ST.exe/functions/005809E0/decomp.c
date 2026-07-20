
undefined4 __cdecl FUN_005809e0(short param_1,short param_2,int param_3,int param_4)

{
  STWorldObject *this;
  bool bVar1;
  short sVar2;
  undefined3 extraout_var;
  int iVar3;
  short sVar4;
  
  sVar4 = (short)param_3;
  bVar1 = thunk_FUN_004961b0(param_1,param_2,sVar4);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    return 0;
  }
  if (param_3 != 0) {
    sVar2 = sVar4 + -1;
    if (param_1 < 0) {
      return 1;
    }
    if ((((param_1 < SHORT_007fb240) && (-1 < param_2)) && (param_2 < SHORT_007fb242)) &&
       (((-1 < sVar2 && (sVar2 < SHORT_007fb244)) &&
        (*(short *)(DAT_007fb280 +
                   ((int)SHORT_007fb27e * (int)sVar2 + (int)SHORT_007fb278 * (int)param_2 +
                   (int)param_1) * 2) != -1)))) {
      return 0;
    }
  }
  if (((param_1 < 0) || (SHORT_007fb240 <= param_1)) ||
     (((param_2 < 0 || (((SHORT_007fb242 <= param_2 || (sVar4 < 0)) || (SHORT_007fb244 <= sVar4))))
      || (this = g_worldCells
                 [(int)SHORT_007fb246 * (int)sVar4 + (int)SHORT_007fb240 * (int)param_2 +
                  (int)param_1].objects[0], this == (STWorldObject *)0x0)))) {
    return 1;
  }
  iVar3 = (*this->vtable->GetObjectTypeId)(this);
  if (iVar3 != 0x39) {
    if (iVar3 == 0x4f) {
      if (param_4 != 0xde) {
        return 0;
      }
      return 1;
    }
    if (iVar3 != 0x5e) {
      return 0;
    }
  }
  if (param_4 != 0xdd) {
    return 0;
  }
  return 1;
}

