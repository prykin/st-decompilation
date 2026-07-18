
int __cdecl FUN_006ef440(int param_1,int param_2,char *param_3,char *param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_48;
  undefined4 local_44 [16];
  
  local_48 = DAT_00858df8;
  DAT_00858df8 = &local_48;
  iVar2 = __setjmp3(local_44,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (param_1 == 0) {
      FUN_006a5e40(-0x34,DAT_007ed77c,0x7eef88,0x4a);
    }
    if (param_3 != (char *)0x0) {
      uVar3 = FUN_0070aa30(*(undefined4 *)(param_1 + 5),param_3,0,1);
      *(undefined4 *)(param_2 + 0x10) = uVar3;
    }
    if (param_4 != (char *)0x0) {
      uVar3 = FUN_0070aa30(*(undefined4 *)(param_1 + 5),param_4,0,1);
      *(undefined4 *)(param_2 + 0x14) = uVar3;
      iVar2 = FUN_0070a870(*(undefined4 *)(param_1 + 5),0x1c,param_4,1);
      *(char *)(param_2 + 10) = (char)iVar2;
    }
    DAT_00858df8 = (undefined4 *)local_48;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_48;
  iVar4 = FUN_006ad4d0(s_E__ourlib_Mfstmap_cpp_007eef88,0x53,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  FUN_006a5e40(iVar2,0,0x7eef88,0x54);
  return iVar2;
}

