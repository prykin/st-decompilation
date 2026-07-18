
void __fastcall thunk_FUN_005134b0(int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar5;
  undefined4 uStack_58;
  undefined4 auStack_54 [16];
  undefined1 uStack_14;
  undefined4 uStack_13;
  undefined4 uStack_f;
  int iStack_8;
  
  uStack_14 = *(undefined1 *)(param_1 + 0x1a1);
  uStack_13 = *(undefined4 *)(param_1 + 0x1a3);
  uStack_f = *(undefined4 *)(param_1 + 0x1a7);
  if (*(int *)(param_1 + 0x1cb) != 0) {
    uStack_58 = DAT_00858df8;
    DAT_00858df8 = &uStack_58;
    iStack_8 = param_1;
    iVar3 = __setjmp3(auStack_54,0,unaff_EDI,unaff_ESI);
    iVar4 = iStack_8;
    if (iVar3 == 0) {
      iVar3 = *(int *)(iStack_8 + 0x1cf);
      while (-1 < iVar3) {
        iVar1 = *(int *)(*(int *)(iVar4 + 0x1cb) + 0xc);
        if (iVar1 + -1 <= iVar3) break;
        FUN_006b0c70(*(int *)(iVar4 + 0x1cb),iVar1 - 1);
        iVar3 = *(int *)(iVar4 + 0x1cf);
      }
      uVar5 = *(int *)(iVar4 + 0x1cf) + 1;
      *(uint *)(iVar4 + 0x1cf) = uVar5;
      FUN_006ae140(*(uint **)(iVar4 + 0x1cb),uVar5,(undefined4 *)&uStack_14);
      DAT_00858df8 = (undefined4 *)uStack_58;
      return;
    }
    DAT_00858df8 = (undefined4 *)uStack_58;
    iVar4 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0x27c,0,iVar3,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7c383c,0x27c);
  }
  return;
}

