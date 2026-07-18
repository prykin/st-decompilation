
undefined4 __thiscall thunk_FUN_00423d80(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  uStack_8 = 0;
  uVar3 = 0;
  if ((uVar1 != 0) && (uVar5 = 0, uVar1 != 0)) {
    uVar4 = 0;
    do {
      FUN_006acc70(param_1,uVar4,&uStack_c);
      iVar2 = (**(code **)(*(int *)this + 4))(uStack_c);
      if (iVar2 == 0) {
        uStack_8 = 1;
      }
      uVar5 = uVar5 + 1;
      uVar4 = uVar5 & 0xffff;
      uVar3 = uStack_8;
    } while (uVar4 < uVar1);
  }
  return uVar3;
}

