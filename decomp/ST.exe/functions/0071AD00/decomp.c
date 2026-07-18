
ushort * __cdecl FUN_0071ad00(undefined4 param_1,char *param_2,byte param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  void *unaff_ESI;
  int *piVar5;
  undefined4 uVar6;
  undefined4 local_48 [16];
  int local_8;
  
  uVar6 = DAT_00858df8;
  local_8 = 0;
  DAT_00858df8 = &stack0xffffffb4;
  iVar2 = __setjmp3(local_48,0,unaff_ESI,uVar6);
  if (iVar2 == 0) {
    if ((param_3 & 4) == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = &local_8;
    }
    puVar3 = FUN_006f1ce0(0,param_2,piVar5,param_4);
    DAT_00858df8 = (undefined1 *)uVar6;
    return puVar3;
  }
  DAT_00858df8 = (undefined1 *)uVar6;
  iVar4 = FUN_006ad4d0(s_E__Ourlib_mfany_cpp_007f08c8,0x19,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    puVar3 = (ushort *)(*pcVar1)();
    return puVar3;
  }
  FUN_006a5e40(iVar2,0,0x7f08c8,0x1b);
  return (ushort *)0x0;
}

