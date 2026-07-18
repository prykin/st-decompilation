
int __cdecl FUN_006f01a0(short *param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_48;
  undefined4 local_44 [16];
  
  local_48 = DAT_00858df8;
  DAT_00858df8 = &local_48;
  iVar2 = __setjmp3(local_44,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (param_1 == (short *)0x0) {
      FUN_006a5e40(-0x34,DAT_007ed77c,0x7eef88,0x1a4);
    }
    if ((((param_2 < 0) || (*param_1 <= param_2)) || (param_3 < 0)) ||
       (((param_1[1] <= param_3 || (param_4 < 0)) || (5 < param_4)))) {
      FUN_006a5e40(-0x34,DAT_007ed77c,0x7eef88,0x1a5);
    }
    iVar2 = (((int)param_1[1] / 2) * param_4 + param_3 / 2) * ((int)*param_1 / 2) + param_2 / 2;
    if (*(int *)((int)param_1 + iVar2 * 4 + 0x459) != 0) {
      FUN_006ab060((undefined4 *)((int)param_1 + iVar2 * 4 + 0x459));
    }
    DAT_00858df8 = (undefined4 *)local_48;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_48;
  iVar3 = FUN_006ad4d0(s_E__ourlib_Mfstmap_cpp_007eef88,0x1af,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  FUN_006a5e40(iVar2,0,0x7eef88,0x1b1);
  return iVar2;
}

