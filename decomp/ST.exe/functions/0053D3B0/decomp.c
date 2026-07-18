
void FUN_0053d3b0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar4;
  undefined4 local_54;
  undefined4 local_50 [16];
  int local_10;
  undefined2 local_c;
  void *local_8;
  
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  iVar2 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    local_10 = *(int *)((int)local_8 + 0x1ab);
    local_c = *(undefined2 *)((int)local_8 + 0x1af);
    thunk_FUN_0043beb0(DAT_007fa174,0x12,(int *)((int)local_8 + 0x1ab));
    *(undefined4 *)((int)local_8 + 0x28) = 5;
    piVar4 = (int *)((int)local_8 + 0x1b5);
    iVar2 = 6;
    do {
      if (*piVar4 != 0) {
        FUN_006e6080(local_8,2,*piVar4,(undefined4 *)((int)local_8 + 0x18));
      }
      piVar4 = piVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    DAT_00858df8 = (undefined4 *)local_54;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_54;
  iVar3 = FUN_006ad4d0(s_E____titans_Andrey_setamine_cpp_007c7798,0x57,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c7798,0x57);
  return;
}

