
undefined4 FUN_00552e40(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [17];
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar3 = FUN_006ad4d0(s_E____titans_Andrey_upginfo_cpp_007c87b8,0x68,0,iVar2,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    FUN_006a5e40(iVar2,0,0x7c87b8,0x68);
    return 0xffff;
  }
  thunk_FUN_0053eb70(param_1);
  if (*(int *)(param_1 + 0x10) == 2) {
    thunk_FUN_005528b0();
  }
  else if (*(int *)(param_1 + 0x10) == 3) {
    thunk_FUN_00552a30();
    DAT_00858df8 = (undefined4 *)local_4c;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  return 0;
}

