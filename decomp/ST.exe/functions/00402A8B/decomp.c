
undefined4 __fastcall
thunk_FUN_0065e700(int param_1,undefined4 param_2,int *param_3,int *param_4,int *param_5)

{
  uint *puVar1;
  int *piVar2;
  void *this;
  int *extraout_ECX;
  int *piVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar4;
  uint uVar5;
  bool bVar6;
  short sStack_a;
  short sStack_8;
  short sStack_6;
  
  puVar1 = thunk_FUN_0065da10(param_1,param_2);
  if ((puVar1 == (uint *)0x0) || (puVar1[3] == 0)) {
    return 0xffffffff;
  }
  uVar5 = 0;
  *param_5 = 0;
  *param_4 = 0;
  *param_3 = 0;
  if (0 < (int)puVar1[3]) {
    bVar6 = puVar1[3] != 0;
    piVar3 = param_3;
    iVar4 = extraout_EDX;
    do {
      if (bVar6) {
        piVar3 = (int *)puVar1[7];
        piVar2 = (int *)(puVar1[2] * uVar5 + (int)piVar3);
      }
      else {
        piVar2 = (int *)0x0;
      }
      this = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)piVar3 >> 8),
                                                 *(undefined1 *)(param_1 + 0x24)),
                                        CONCAT22((short)((uint)iVar4 >> 0x10),(short)*piVar2),1);
      piVar3 = extraout_ECX;
      iVar4 = extraout_EDX_00;
      if (this != (void *)0x0) {
        thunk_FUN_004162b0(this,&sStack_6,&sStack_8,&sStack_a);
        *param_3 = *param_3 + (int)sStack_6;
        iVar4 = (int)sStack_8;
        *param_4 = *param_4 + iVar4;
        piVar3 = (int *)(*param_5 + (int)sStack_a);
        *param_5 = (int)piVar3;
      }
      uVar5 = uVar5 + 1;
      bVar6 = uVar5 < puVar1[3];
    } while ((int)uVar5 < (int)puVar1[3]);
  }
  FUN_006ae110((byte *)puVar1);
  if (0 < (int)uVar5) {
    *param_3 = *param_3 / (int)uVar5;
    *param_4 = *param_4 / (int)uVar5;
    *param_5 = *param_5 / (int)uVar5;
    return 0;
  }
  return 0xffffffff;
}

