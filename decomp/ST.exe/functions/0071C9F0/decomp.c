
void __thiscall FUN_0071c9f0(void *this,int param_1)

{
  AnonShape_006ACC70_C8641025 *pAVar1;
  uint uVar2;
  byte local_10 [8];
  int local_8;
  
  uVar2 = 0;
  if (param_1 != 0) {
    pAVar1 = *(AnonShape_006ACC70_C8641025 **)((int)this + 0x28);
    *(undefined4 *)((int)this + 0x58) = 0;
    if (0 < (int)pAVar1->field_000C) {
      do {
        FUN_006acc70(pAVar1,uVar2,(undefined4 *)local_10);
        if (*(int *)(local_8 + 8) == param_1) {
          FUN_006b0c70(*(AnonShape_006B0C70_7C4FE646 **)((int)this + 0x28),uVar2);
        }
        else {
          if ((local_10[0] & 2) != 0) {
            *(undefined4 *)((int)this + 0x58) = 1;
          }
          uVar2 = uVar2 + 1;
        }
        pAVar1 = *(AnonShape_006ACC70_C8641025 **)((int)this + 0x28);
      } while ((int)uVar2 < (int)pAVar1->field_000C);
    }
  }
  return;
}

