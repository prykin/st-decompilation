
int FUN_006e4650(int *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uVar5;
  undefined4 local_78;
  undefined4 local_74 [16];
  undefined1 local_34 [12];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_14;
  int *local_10;
  undefined4 local_c;
  void *local_8;
  
  local_78 = DAT_00858df8;
  DAT_00858df8 = &local_78;
  iVar2 = __setjmp3(local_74,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_78;
    iVar4 = FUN_006ad4d0(s_E__Ourlib_Sapp_cpp_007ee78c,0x1e9,0,iVar2,&DAT_007a4ccc);
    if (iVar4 == 0) {
      FUN_006a5e40(iVar2,0,0x7ee78c,0x1ea);
      return iVar2;
    }
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if (((param_2 != 0) && (iVar2 = FUN_006e44e0(local_8,param_1[5]), iVar2 != 0)) &&
     (iVar2 = FUN_006ad4d0(s_E__Ourlib_Sapp_cpp_007ee78c,0x1cf,0,0,
                           (byte *)s_AppClassTy__AddSystem_Warning___T_007ee990), iVar2 != 0)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  piVar3 = (int *)FUN_006e45a0(local_8,param_1[5]);
  if (piVar3 == (int *)0x0) {
    param_1[7] = 0;
    local_14 = 1;
    local_10 = param_1;
    local_c = 0;
    FUN_006ae1c0(*(uint **)((int)local_8 + 0x10),&local_14);
    local_28 = 0xf;
    local_24 = 8;
    iVar2 = (**(code **)(*param_1 + 0x18))(local_34);
    if (iVar2 == 0) {
      DAT_00858df8 = (undefined4 *)local_78;
      return 0;
    }
    uVar5 = 0x1e6;
  }
  else {
    if (*piVar3 == 1) {
      DAT_00858df8 = (undefined4 *)local_78;
      return 0;
    }
    *piVar3 = 1;
    if (piVar3[2] != 0) {
      FUN_006e45c0((int)piVar3);
    }
    local_28 = 0xf;
    local_24 = 8;
    iVar2 = (**(code **)(*param_1 + 0x18))(local_34);
    if (iVar2 == 0) {
      DAT_00858df8 = (undefined4 *)local_78;
      return 0;
    }
    uVar5 = 0x1db;
  }
  FUN_006a5e40(iVar2,DAT_007ed77c,0x7ee78c,uVar5);
  DAT_00858df8 = (undefined4 *)local_78;
  return 0;
}

