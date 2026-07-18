
uint thunk_FUN_00435850(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_38 [4];
  int iStack_34;
  undefined4 uStack_2c;
  uint uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 auStack_10 [4];
  int iStack_c;
  int iStack_8;
  
  iVar3 = (int)(char)param_1;
  iStack_8 = *(int *)((int)&DAT_007f4e24 + iVar3 * 0xa62 + 1);
  uVar1 = *(uint *)(iStack_8 + 0xc);
  uVar2 = uVar1;
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    FUN_006acc70(iStack_8,uVar1,&iStack_c);
    if (iStack_c == 0) {
      uVar2 = uVar1;
    }
  }
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_24 = uVar2 & 0xffff;
  uStack_2c = 1;
  iStack_34 = iVar3;
  (**(code **)(*DAT_00802a38 + 8))(0x10ff,auStack_10,&param_1,auStack_38,0);
  if (param_2 == 1) {
    thunk_FUN_00423360(param_1);
  }
  if (param_3 != (int *)0x0) {
    *param_3 = param_1;
  }
  return CONCAT22((short)((uint)param_3 >> 0x10),(short)uVar2);
}

