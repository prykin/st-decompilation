
void __thiscall FUN_0071c9f0(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  byte local_10 [8];
  int local_8;
  
  uVar2 = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)((int)this + 0x28);
    *(undefined4 *)((int)this + 0x58) = 0;
    if (0 < *(int *)(iVar1 + 0xc)) {
      do {
        FUN_006acc70(iVar1,uVar2,(undefined4 *)local_10);
        if (*(int *)(local_8 + 8) == param_1) {
          FUN_006b0c70(*(int *)((int)this + 0x28),uVar2);
        }
        else {
          if ((local_10[0] & 2) != 0) {
            *(undefined4 *)((int)this + 0x58) = 1;
          }
          uVar2 = uVar2 + 1;
        }
        iVar1 = *(int *)((int)this + 0x28);
      } while ((int)uVar2 < *(int *)(iVar1 + 0xc));
    }
  }
  return;
}

