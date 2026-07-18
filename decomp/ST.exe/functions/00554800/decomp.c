
/* Recovered from embedded debug metadata:
   E:\__titans\grig\loading.cpp
   cLoadingTy::InitParam */

void __thiscall
cLoadingTy::InitParam
          (cLoadingTy *this,int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
          int param_6,int param_7,int param_8,int param_9)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  cLoadingTy *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  cLoadingTy *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  local_8 = this;
  iVar5 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  pcVar4 = local_8;
  if (iVar5 == 0) {
    *(int *)(local_8 + 0x14) = param_1;
    *(int *)(local_8 + 0x18) = param_2;
    if (param_3 < 1) {
      param_3 = *(int *)(*(int *)local_8 + 4);
    }
    *(int *)(local_8 + 0x1c) = param_3;
    if (param_4 < 1) {
      param_4 = *(int *)(*(int *)local_8 + 8);
    }
    *(int *)(local_8 + 0x20) = param_4;
    iVar5 = *(int *)(local_8 + 4);
    *(int *)(local_8 + 0xc) = 0;
    *(int *)(local_8 + 0x10) = 0;
    *(int *)(local_8 + 0x38) = 0;
    uVar10 = *(uint *)(iVar5 + 0x14);
    if (uVar10 == 0) {
      uVar10 = ((uint)*(ushort *)(iVar5 + 0xe) * *(int *)(iVar5 + 4) + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)(iVar5 + 8);
    }
    puVar6 = (undefined4 *)FUN_006b4fa0(iVar5);
    for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    iVar5 = *(int *)(pcVar4 + 8);
    iVar8 = *(int *)(pcVar4 + 0x20);
    iVar1 = *(int *)(pcVar4 + 0x1c);
    iVar2 = *(int *)(pcVar4 + 0x14);
    *(int *)(iVar5 + 100) = *(int *)(pcVar4 + 0x18);
    *(int *)(iVar5 + 0x60) = iVar2;
    *(int *)(iVar5 + 0x68) = iVar1;
    *(int *)(iVar5 + 0x6c) = iVar8;
    *(undefined4 *)(iVar5 + 0x50) = 0;
    *(undefined4 *)(iVar5 + 0x54) = 0;
    iVar5 = *(int *)(pcVar4 + 8);
    *(int *)(pcVar4 + 0x28) = param_6;
    *(int *)(pcVar4 + 0x2c) = param_7;
    *(int *)(iVar5 + 0x58) = param_6;
    *(int *)(iVar5 + 0x5c) = param_7;
    puVar7 = (uint *)FUN_006b0140(0x267a,DAT_00807618);
    iVar5 = FUN_007111c0(*(void **)(pcVar4 + 8),puVar7);
    iVar8 = *(int *)(pcVar4 + 0x20) / (*(int *)(pcVar4 + 0x2c) + iVar5);
    *(int *)(pcVar4 + 0x34) = *(int *)(pcVar4 + 0x2c) + iVar5;
    *(int *)(pcVar4 + 0x30) = iVar8;
    if (iVar8 < 1) {
      FUN_006a5e40(-6,DAT_007ed77c,0x7c8f0c,0xa3);
    }
    *(int *)(pcVar4 + 0x58) = param_8;
    *(int *)(pcVar4 + 0x54) = param_9;
    FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
    FUN_006b4640(DAT_0080759c,0,0,*(BITMAPINFO **)pcVar4,(uint *)0x0);
    FUN_006bb370(DAT_0080759c,0,0);
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar8 = FUN_006ad4d0(s_E____titans_grig_loading_cpp_007c8f0c,0xac,0,iVar5,&DAT_007a4ccc);
  if (iVar8 != 0) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FUN_006a5e40(iVar5,0,0x7c8f0c,0xad);
  return;
}

