
int __cdecl FUN_0070a050(int param_1,char param_2,byte *param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_54;
  undefined4 local_50 [16];
  int local_10;
  uint local_c;
  undefined1 *local_8;
  
  local_10 = -4;
  local_8 = (undefined1 *)0x0;
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  iVar2 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_54;
    iVar3 = FUN_006ad4d0(s_E__Ourlib_mfrload_cpp_007eff5c,0x133,0,iVar2,&DAT_007a4ccc);
    if (iVar3 == 0) {
      FUN_006a5e40(iVar2,0,0x7eff5c,0x135);
      return iVar2;
    }
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) == 0) {
      FUN_006a5e40(-0x34,DAT_007ed77c,0x7eff5c,0x127);
      return -0x34;
    }
    iVar2 = FUN_007098a0(param_1,param_2,param_3,param_4,(int *)&local_8,&local_c);
    if (iVar2 != 0) {
      *(int *)(local_8 + 0x25) = *(int *)(local_8 + 0x25) + -1;
      local_10 = *(int *)(local_8 + 0x25);
      if (local_10 == 0) {
        FUN_00709a10(param_1,*local_8,(uint *)(local_8 + 0x29));
        FUN_006b0c70(*(int *)(param_1 + 4),local_c);
        DAT_00858df8 = (undefined4 *)local_54;
        return 0;
      }
    }
    DAT_00858df8 = (undefined4 *)local_54;
    return local_10;
  }
  FUN_006a5e40(-0x34,DAT_007ed77c,0x7eff5c,0x126);
  return -0x34;
}

