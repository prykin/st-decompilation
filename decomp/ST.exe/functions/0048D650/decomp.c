
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0048D650 parameter used as this of STFishC::sub_004162B0 @ 0048D671 */

bool __thiscall FUN_0048d650(void *this,STFishC *param_1)

{
  short sVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int local_14;
  int local_10;
  undefined2 local_c [2];
  undefined2 local_8 [2];
  
  local_14 = 1000000;
  STFishC::sub_004162B0(param_1,(undefined2 *)&param_1,local_8,local_c);
  local_10 = 0;
  do {
    iVar5 = 0;
    do {
      sVar4 = local_8[0] + (short)iVar5;
      sVar3 = local_c[0] + 1;
      sVar1 = (short)param_1 + (short)local_10;
      if ((((sVar1 < 0) || (SHORT_007fb240 <= sVar1)) || (sVar4 < 0)) ||
         (((SHORT_007fb242 <= sVar4 || (sVar3 < 0)) ||
          ((SHORT_007fb244 <= sVar3 ||
           (*(int *)(DAT_007fb248 +
                    ((int)SHORT_007fb246 * (int)sVar3 + (int)SHORT_007fb240 * (int)sVar4 +
                    (int)sVar1) * 8) == 0)))))) {
        iVar2 = FUN_006aadd0((int)*(short *)((int)this + 0x47),(int)*(short *)((int)this + 0x49),
                             (int)*(short *)((int)this + 0x4b),(short)param_1 + local_10,
                             local_8[0] + iVar5,local_c[0] + 1);
        if (iVar2 < local_14) {
          *(short *)((int)this + 0x4c5) = (short)local_10 + (short)param_1;
          *(short *)((int)this + 0x4c7) = (short)iVar5 + local_8[0];
          *(short *)((int)this + 0x4c9) = local_c[0] + 1;
          local_14 = iVar2;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
    local_10 = local_10 + 1;
  } while (local_10 < 2);
  return local_14 != 1000000;
}

