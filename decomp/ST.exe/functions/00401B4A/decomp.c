
undefined4 __fastcall thunk_FUN_004c2c10(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_58 [5];
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  int iStack_8;
  
  if (*(int *)(param_1 + 0x408) == 0) {
    puVar3 = auStack_58;
    for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    auStack_58[1] = *(undefined4 *)(param_1 + 0x24);
    iVar2 = *(int *)(param_1 + 0x235) * 4;
    auStack_58[3] = 1;
    auStack_58[2] = 1;
    uStack_38 = *(undefined4 *)(&DAT_00794fa4 + iVar2);
    uStack_34 = *(undefined4 *)(&DAT_007950ac + iVar2);
    iStack_44 = (int)*(short *)(param_1 + 0x41);
    iStack_40 = (int)*(short *)(param_1 + 0x43);
    uStack_28 = (uint)*(ushort *)(param_1 + 0x32);
    iStack_3c = (int)*(short *)(param_1 + 0x45);
    uStack_2c = *(undefined4 *)(param_1 + 0x18);
    auStack_58[0] = 0xdc;
    uStack_30 = 100;
    if (*(int *)(param_1 + 0x5ac) == 0x4d) {
      uStack_24 = *(undefined4 *)(param_1 + 0x4d4);
    }
    else if (*(int *)(param_1 + 0x5ac) == 0x73) {
      uStack_24 = *(undefined4 *)(param_1 + 0x4d0);
    }
    thunk_FUN_0054cc20(0xdc,0,&iStack_8,auStack_58,0);
    uVar1 = *(undefined4 *)(iStack_8 + 0x18);
    *(undefined4 *)(param_1 + 0x408) = 1;
    *(undefined4 *)(param_1 + 0x40c) = uVar1;
    return 0;
  }
  return 0;
}

