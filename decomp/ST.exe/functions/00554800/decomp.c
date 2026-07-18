
void FUN_00554800(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6,
                 int param_7,int param_8,int param_9)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar4 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar4 == 0) {
    local_8[5] = param_1;
    local_8[6] = param_2;
    if (param_3 < 1) {
      param_3 = *(int *)(*local_8 + 4);
    }
    local_8[7] = param_3;
    if (param_4 < 1) {
      param_4 = *(int *)(*local_8 + 8);
    }
    local_8[8] = param_4;
    iVar4 = local_8[1];
    local_8[3] = 0;
    local_8[4] = 0;
    local_8[0xe] = 0;
    uVar9 = *(uint *)(iVar4 + 0x14);
    if (uVar9 == 0) {
      uVar9 = ((uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar4 + 8);
    }
    puVar5 = (undefined4 *)FUN_006b4fa0(iVar4);
    for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    iVar4 = local_8[2];
    iVar7 = local_8[8];
    iVar1 = local_8[7];
    iVar2 = local_8[5];
    *(int *)(iVar4 + 100) = local_8[6];
    *(int *)(iVar4 + 0x60) = iVar2;
    *(int *)(iVar4 + 0x68) = iVar1;
    *(int *)(iVar4 + 0x6c) = iVar7;
    *(undefined4 *)(iVar4 + 0x50) = 0;
    *(undefined4 *)(iVar4 + 0x54) = 0;
    iVar4 = local_8[2];
    local_8[10] = param_6;
    local_8[0xb] = param_7;
    *(int *)(iVar4 + 0x58) = param_6;
    *(int *)(iVar4 + 0x5c) = param_7;
    puVar6 = (uint *)FUN_006b0140(0x267a,DAT_00807618);
    iVar4 = FUN_007111c0((void *)local_8[2],puVar6);
    iVar7 = local_8[8] / (local_8[0xb] + iVar4);
    local_8[0xd] = local_8[0xb] + iVar4;
    local_8[0xc] = iVar7;
    if (iVar7 < 1) {
      FUN_006a5e40(-6,DAT_007ed77c,0x7c8f0c,0xa3);
    }
    local_8[0x16] = param_8;
    local_8[0x15] = param_9;
    FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
    FUN_006b4640(DAT_0080759c,0,0,(BITMAPINFO *)*local_8,(uint *)0x0);
    FUN_006bb370(DAT_0080759c,0,0);
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar7 = FUN_006ad4d0(s_E____titans_grig_loading_cpp_007c8f0c,0xac,0,iVar4,&DAT_007a4ccc);
  if (iVar7 != 0) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FUN_006a5e40(iVar4,0,0x7c8f0c,0xad);
  return;
}

