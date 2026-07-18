
void thunk_FUN_00522d40(undefined1 param_1)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  void *unaff_ESI;
  undefined4 uVar5;
  undefined4 auStack_48 [16];
  int iStack_8;
  
  uVar5 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  iVar3 = __setjmp3(auStack_48,0,unaff_ESI,uVar5);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined1 *)uVar5;
    iVar4 = FUN_006ad4d0(s_E____titans_Andrey_intercom_cpp_007c401c,0x13b,0,iVar3,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7c401c,0x13b);
    return;
  }
  sVar1 = *(short *)(iStack_8 + 0x172);
  if (sVar1 != 1) {
    if (sVar1 == 2) {
      *(undefined2 *)(iStack_8 + 0x172) = 3;
      *(undefined1 *)(iStack_8 + 0x1a4) = param_1;
      iVar3 = 0xaf;
      goto LAB_00522dd6;
    }
    if (sVar1 != 3) {
      DAT_00858df8 = (undefined1 *)uVar5;
      return;
    }
  }
  *(undefined2 *)(iStack_8 + 0x172) = 4;
  if (*(uint *)(iStack_8 + 0x1a0) != 0) {
    FUN_006e56b0(*(void **)(iStack_8 + 0xc),*(uint *)(iStack_8 + 0x1a0));
  }
  *(undefined4 *)(iStack_8 + 0x1a0) = 0;
  iVar3 = 0xb0;
LAB_00522dd6:
  thunk_FUN_005252c0(iVar3);
  DAT_00858df8 = (undefined1 *)uVar5;
  return;
}

