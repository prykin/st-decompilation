
void FUN_005104b0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  int *piVar4;
  void *unaff_EDI;
  int *piVar5;
  bool bVar6;
  undefined4 local_54;
  undefined4 local_50 [16];
  int local_10 [2];
  void *local_8;
  
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  iVar2 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_54;
    iVar3 = FUN_006ad4d0(s_E____titans_Andrey_frmpanel_cpp_007c2958,0x70,0,iVar2,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar2,0,0x7c2958,0x70);
    return;
  }
  piVar4 = (int *)((int)local_8 + 0x1ab);
  local_10[0] = *piVar4;
  local_10[1] = *(undefined4 *)((int)local_8 + 0x1af);
  *piVar4 = 0;
  *(undefined4 *)((int)local_8 + 0x1af) = 0;
  thunk_FUN_0043beb0(DAT_007fa174,0x11,piVar4);
  iVar2 = 2;
  bVar6 = true;
  piVar5 = local_10;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar6 = *piVar4 == *piVar5;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (bVar6);
  if (!bVar6) {
    *(undefined4 *)((int)local_8 + 0x28) = 5;
    piVar4 = (int *)((int)local_8 + 0x1b3);
    iVar2 = 8;
    do {
      if (*piVar4 != 0) {
        FUN_006e6080(local_8,2,*piVar4,(undefined4 *)((int)local_8 + 0x18));
      }
      piVar4 = piVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  DAT_00858df8 = (undefined4 *)local_54;
  return;
}

