
undefined4 __cdecl FUN_00715050(int param_1,char *param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_50;
  undefined4 local_4c [16];
  byte *local_c;
  uint *local_8;
  
  local_8 = (uint *)0x0;
  local_c = (byte *)0x0;
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar2 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_50;
    iVar5 = FUN_006ad4d0(s_E__ourlib_mfdarr_cpp_007f03fc,0x1f,0,iVar2,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    if (local_8 != (uint *)0x0) {
      FUN_006f20e0((uint *)&local_8);
    }
    if (local_c != (byte *)0x0) {
      FUN_006ae110(local_c);
    }
    FUN_006a5e40(iVar2,0,0x7f03fc,0x24);
    return 0;
  }
  if (param_1 == 0) {
    FUN_006a5e40(-0x34,DAT_007ed77c,0x7f03fc,0x16);
  }
  puVar3 = FUN_006f1ce0(0x14,param_2,(int *)&local_8,param_3);
  if (puVar3 == (ushort *)0x0) {
    DAT_00858df8 = (undefined4 *)local_50;
    return 0;
  }
  uVar4 = FUN_006b0060((uint *)0x0,local_8);
  if (local_8 != (uint *)0x0) {
    local_c = (byte *)uVar4;
    FUN_006f20e0((uint *)&local_8);
  }
  DAT_00858df8 = (undefined4 *)local_50;
  return uVar4;
}

