
ushort * __cdecl FUN_00719d00(undefined4 param_1,char *param_2,byte param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  ushort **ppuVar5;
  undefined4 local_50;
  undefined4 local_4c [16];
  ushort *local_c;
  byte local_5;
  
  local_c = (ushort *)0x0;
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar2 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    local_5 = param_3 & 4;
    if (local_5 == 0) {
      ppuVar5 = (ushort **)0x0;
    }
    else {
      ppuVar5 = &local_c;
    }
    local_c = FUN_006f1ce0(2,param_2,(int *)ppuVar5,param_4);
    if (local_c != (ushort *)0x0) {
      iVar2 = FUN_00719df0(param_1,param_2,param_4);
      if (((short)iVar2 == 1) && (local_5 != 0)) {
        *(uint *)(local_c + 0xb) = (-(uint)(*local_c != 1) & 0x24) + 0x1a + (int)local_c;
      }
    }
    DAT_00858df8 = (undefined4 *)local_50;
    return local_c;
  }
  DAT_00858df8 = (undefined4 *)local_50;
  iVar3 = FUN_006ad4d0(s_E__Ourlib_mfwav_cpp_007f0800,0x20,0,iVar2,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    puVar4 = (ushort *)(*pcVar1)();
    return puVar4;
  }
  FUN_006a5e40(iVar2,0,0x7f0800,0x22);
  return (ushort *)0x0;
}

