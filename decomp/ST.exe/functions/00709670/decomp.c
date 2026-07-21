
void __thiscall FUN_00709670(void *this,uint param_1,int param_2,int param_3,undefined1 param_4)

{
  uint *puVar1;
  short *psVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = &DAT_0079e210;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  if (((param_1 < *(uint *)((int)this + 0x310)) &&
      (puVar1 = (uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114), (*puVar1 & 0x8000) != 0))
     && ((puVar1[1] & 0x6000) == 0)) {
    local_8 = 0;
    uVar4 = puVar1[0x25];
    ExceptionList = &local_14;
    Library::MSVCRT::FUN_0072da40();
    local_8 = 0xffffffff;
    puVar6 = (undefined4 *)&stack0xffffffc4;
    for (uVar4 = uVar4 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    iVar5 = 0;
    if (0 < (int)puVar1[0x25]) {
      do {
        psVar2 = (short *)(puVar1[0x29] + iVar5 * 4);
        uVar3 = psVar2[1];
        if (((uVar3 & 0xc000) != 0) && ((uVar3 & 0x2115) == 0)) {
          *(undefined4 *)(&stack0xffffffc4 + iVar5 * 4) =
               *(undefined4 *)(*(int *)(puVar1[0x28] + 4 + iVar5 * 8) + *psVar2 * 4);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)puVar1[0x25]);
    }
    FUN_00709470(this,(int *)&stack0xffffffc4,puVar1[0x25],param_2,param_3,param_4);
  }
  ExceptionList = local_14;
  return;
}

