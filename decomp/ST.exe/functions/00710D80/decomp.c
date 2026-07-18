
/* Recovered from embedded debug metadata:
   E:\Ourlib\mfcfnt.cpp
   ccFntTy::GetSurfAsSpr */

int __thiscall
ccFntTy::GetSurfAsSpr(ccFntTy *this,byte param_1,int param_2,int param_3,int param_4,int param_5)

{
  code *pcVar1;
  ccFntTy *pcVar2;
  int iVar3;
  int iVar4;
  void *unaff_ESI;
  undefined4 uVar5;
  undefined4 local_54 [16];
  ccFntTy *local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;
  
  uVar5 = DAT_00858df8;
  local_c = 0;
  local_8 = (undefined4 *)0x0;
  local_10 = 0;
  DAT_00858df8 = &stack0xffffffa8;
  local_14 = this;
  iVar3 = __setjmp3(local_54,0,unaff_ESI,uVar5);
  pcVar2 = local_14;
  if (iVar3 == 0) {
    if ((*(int *)(local_14 + 0x72) == 0) || (*(int *)(local_14 + 0x76) == 0)) {
      FUN_006a5e40(-0x34,DAT_007ed77c,0x7f0190,0x4bc);
    }
    if ((param_4 < 1) || (param_5 < 1)) {
      iVar3 = *(int *)(pcVar2 + 0x76);
    }
    else {
      local_8 = FUN_006b55f0((undefined4 *)0x0,0,0,0,*(int *)(pcVar2 + 0x72),*(int *)(pcVar2 + 0x76)
                             ,param_2,param_3,param_4,param_5);
      if (local_8 == (undefined4 *)0x0) {
        FUN_006a5e40(-0x34,DAT_007ed77c,0x7f0190,0x4c3);
      }
      local_10 = 1;
      iVar3 = FUN_006b4fa0((int)local_8);
    }
    FUN_006b4b20(&local_c,(uint)local_8,iVar3,param_1);
    if ((local_10 != 0) && (local_8 != (undefined4 *)0x0)) {
      FUN_006ab060(&local_8);
    }
    DAT_00858df8 = (undefined1 *)uVar5;
    return local_c;
  }
  DAT_00858df8 = (undefined1 *)uVar5;
  iVar4 = FUN_006ad4d0(s_E__Ourlib_mfcfnt_cpp_007f0190,0x4ce,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  if ((local_10 != 0) && (local_8 != (undefined4 *)0x0)) {
    FUN_006ab060(&local_8);
  }
  if (local_c != 0) {
    FUN_006ab060(&local_c);
  }
  FUN_006a5e40(iVar3,0,0x7f0190,0x4d3);
  return 0;
}

