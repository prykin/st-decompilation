
int * __cdecl FUN_006f0700(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  local_8 = 0;
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if ((param_1 < 1) || (param_2 < 1)) {
      FUN_006a5e40(-0x34,DAT_007ed77c,0x7eef88,0x223);
    }
    piVar3 = FUN_006aac10(param_1 * param_2 * 0x24 + 0xe);
    *piVar3 = param_1;
    piVar3[1] = param_2;
    DAT_00858df8 = (undefined4 *)local_4c;
    return piVar3;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar4 = FUN_006ad4d0(s_E__ourlib_Mfstmap_cpp_007eef88,0x229,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    piVar3 = (int *)(*pcVar1)();
    return piVar3;
  }
  FUN_006f07e0(&local_8);
  FUN_006a5e40(iVar2,0,0x7eef88,0x22d);
  return (int *)0x0;
}

