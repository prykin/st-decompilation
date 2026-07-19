
void __fastcall FUN_00579170(int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)DAT_007fb240;
  iVar4 = (int)DAT_007fb242;
  if ((((iVar5 + -1 < *(int *)(param_1 + 0x26d)) || (*(int *)(param_1 + 0x26d) < 0)) ||
      (iVar4 + -1 < *(int *)(param_1 + 0x271))) || (*(int *)(param_1 + 0x271) < 0)) {
    iVar3 = ReportDebugMessage(s_E____titans_Igor_to_crab_cpp_007cad4c,0x202,0,0,&DAT_007a4ccc,
                               s_STCrabC__Bad_birth_coordinate___a_007cade4);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(int *)(param_1 + 0x26d) = iVar5 + -1 >> 1;
    *(int *)(param_1 + 0x271) = iVar4 + -1 >> 1;
  }
  if ((*(int *)(param_1 + 0x275) < 0) || (4 < *(int *)(param_1 + 0x275))) {
    iVar4 = ReportDebugMessage(s_E____titans_Igor_to_crab_cpp_007cad4c,0x207,0,0,&DAT_007a4ccc,
                               s_STCrabC__Bad_birth_coordinate___a_007cade4);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)(param_1 + 0x275) = 0;
  }
  if (0x167 < *(int *)(param_1 + 0x27d)) {
    iVar4 = ReportDebugMessage(s_E____titans_Igor_to_crab_cpp_007cad4c,0x20c,0,0,&DAT_007a4ccc,
                               s_STCrabC__Bad_coordinates___adjus_007cadb4);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)(param_1 + 0x27d) = 0;
  }
  iVar4 = 0;
  do {
    bVar2 = thunk_FUN_004961b0(*(short *)(param_1 + 0x26d),*(short *)(param_1 + 0x271),(short)iVar4)
    ;
    if (CONCAT31(extraout_var,bVar2) != 0) {
      *(int *)(param_1 + 0x275) = iVar4;
      return;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 5);
  return;
}

