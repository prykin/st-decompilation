
undefined4
thunk_FUN_004ad1f0(undefined4 param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                  uint param_6,uint param_7)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  int iStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  iVar2 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    *(undefined4 *)(iStack_8 + 0x34) = param_1;
    *(uint *)(iStack_8 + 8) = param_3;
    *(uint *)(iStack_8 + 4) = param_2;
    *(uint *)(iStack_8 + 0x14) = param_7;
    FUN_006e8660(*(void **)(iStack_8 + 0x3c),(int *)(iStack_8 + 0x18),param_7,0,param_5,param_6,
                 param_2,param_3,param_4);
    puVar3 = (undefined4 *)FUN_006aac70(*(int *)(iStack_8 + 0x14) * 0x24);
    *(undefined4 **)(iStack_8 + 0x20) = puVar3;
    for (uVar5 = *(int *)(iStack_8 + 0x14) * 9 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar2 = FUN_006ad4d0(s_E____titans_wlad_Tspr3d_cpp_007ac638,0x2b1,0,iVar2,&DAT_007a4ccc);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  return 0xffffffff;
}

