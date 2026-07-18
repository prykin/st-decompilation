
void FUN_0068e950(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_50;
  undefined4 local_4c [16];
  int local_c;
  int local_8;
  
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar2 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (*(int *)(local_8 + 0x130) != 0) {
      FUN_006ab060((undefined4 *)(local_8 + 0x130));
    }
    if (*(uint **)(local_8 + 0xbd) != (uint *)0x0) {
      uVar3 = FUN_006b0020(*(uint **)(local_8 + 0xbd),&local_c);
      *(undefined4 *)(local_8 + 0x130) = uVar3;
    }
    DAT_00858df8 = (undefined4 *)local_50;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_50;
  iVar4 = FUN_006ad4d0(s_E____titans_ai_ai_tact_cpp_007d56e0,0x16d,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7d56e0,0x16e);
  return;
}

