
void __thiscall FUN_00424530(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 extraout_EDX;
  uint uVar5;
  
  uVar2 = param_1;
  uVar1 = *(uint *)(*(int *)((int)this + 0x29) + 0xc);
  if (((param_1 & 1) != 0) && ((*(uint *)((int)this + 0x35) & 1) == 0)) {
    *(uint *)((int)this + 0x35) = *(uint *)((int)this + 0x35) | 1;
  }
  if (((param_1 & 2) != 0) && ((*(uint *)((int)this + 0x35) & 2) == 0)) {
    *(uint *)((int)this + 0x35) = *(uint *)((int)this + 0x35) | 2;
  }
  if (((param_1 & 4) != 0) && ((*(uint *)((int)this + 0x35) & 4) == 0)) {
    *(uint *)((int)this + 0x35) = *(uint *)((int)this + 0x35) | 4;
  }
  if (((param_1 & 8) != 0) && ((*(uint *)((int)this + 0x35) & 8) == 0)) {
    *(uint *)((int)this + 0x35) = *(uint *)((int)this + 0x35) | 8;
  }
  if (((param_1 & 0x10) != 0) && ((*(uint *)((int)this + 0x35) & 0x10) == 0)) {
    *(uint *)((int)this + 0x35) = *(uint *)((int)this + 0x35) | 0x10;
  }
  uVar5 = 0;
  if (uVar1 != 0) {
    uVar4 = 0;
    do {
      FUN_006acc70(*(int *)((int)this + 0x29),uVar4,&param_1);
      if ((short)param_1 != -1) {
        piVar3 = (int *)STAllPlayersC::GetObjPtr
                                  (DAT_007fa174,
                                   CONCAT31((int3)((uint)extraout_EDX >> 8),
                                            *(undefined1 *)((int)this + 0x24)),param_1,CASE_1);
        (**(code **)(*piVar3 + 0x100))(uVar2);
      }
      uVar5 = uVar5 + 1;
      uVar4 = uVar5 & 0xffff;
    } while (uVar4 < uVar1);
  }
  return;
}

