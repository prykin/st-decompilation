
void thunk_FUN_005395b0(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  void *pvStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  iVar2 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_4c;
    iVar3 = FUN_006ad4d0(s_E____titans_Andrey_pause_cpp_007c7490,0x54,0,iVar2,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar2,0,0x7c7490,0x54);
    return;
  }
  switch(*(undefined2 *)((int)pvStack_8 + 0x172)) {
  case 1:
    if (param_1 != 0) {
      DAT_00858df8 = (undefined4 *)uStack_4c;
      return;
    }
    thunk_FUN_005396e0(pvStack_8,0);
switchD_005395f3_caseD_3:
    if (param_1 == 0) {
      *(undefined2 *)((int)pvStack_8 + 0x172) = 4;
      iVar2 = 0xb0;
LAB_0053962f:
      thunk_FUN_005252c0(iVar2);
    }
switchD_005395f3_default:
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  case 2:
  case 4:
    if (param_1 == 0) {
      DAT_00858df8 = (undefined4 *)uStack_4c;
      return;
    }
    *(undefined2 *)((int)pvStack_8 + 0x172) = 3;
    iVar2 = 0xaf;
    goto LAB_0053962f;
  case 3:
    goto switchD_005395f3_caseD_3;
  default:
    goto switchD_005395f3_default;
  }
}

