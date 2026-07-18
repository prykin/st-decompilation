
int FUN_006e4960(int param_1,int *param_2,int param_3)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uVar8;
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
  iVar3 = __setjmp3(local_74,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_78;
    iVar7 = FUN_006ad4d0(s_E__Ourlib_Sapp_cpp_007ee78c,0x244,0,iVar3,&DAT_007a4ccc);
    if (iVar7 != 0) {
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
    FUN_006a5e40(iVar3,0,0x7ee78c,0x245);
    return iVar3;
  }
  if (param_3 != 0) {
    iVar3 = FUN_006e44e0(local_8,param_2[5]);
    if (iVar3 != 0) {
      iVar3 = FUN_006ad4d0(s_E__Ourlib_Sapp_cpp_007ee78c,0x222,0,0,
                           (byte *)s_AppClassTy__AddSystem_Warning___T_007ee990);
      if (iVar3 != 0) {
        pcVar2 = (code *)swi(3);
        iVar3 = (*pcVar2)();
        return iVar3;
      }
    }
  }
  iVar3 = FUN_006e45a0(local_8,*(int *)(param_1 + 0x14));
  if (iVar3 == 0) {
    iVar3 = FUN_006ad4d0(s_E__Ourlib_Sapp_cpp_007ee78c,0x241,0,0,
                         (byte *)s_AppClassTy__AddChildSystem_Warni_007ee9ec);
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
  }
  else {
    piVar4 = (int *)FUN_006e45a0(local_8,param_2[5]);
    if (piVar4 == (int *)0x0) {
      if (*(int *)(iVar3 + 8) == 0) {
        puVar6 = FUN_006ae290((uint *)0x0,5,0xc,5);
        *(uint **)(iVar3 + 8) = puVar6;
      }
      local_14 = 1;
      local_10 = param_2;
      param_2[7] = param_1;
      local_c = 0;
      FUN_006ae1c0(*(uint **)(iVar3 + 8),&local_14);
      local_28 = 0xf;
      local_24 = 8;
      iVar3 = (**(code **)(*param_2 + 0x18))(local_34);
      if (iVar3 != 0) {
        uVar8 = 0x23d;
LAB_006e4a7a:
        FUN_006a5e40(iVar3,DAT_007ed77c,0x7ee78c,uVar8);
        DAT_00858df8 = (undefined4 *)local_78;
        return 0;
      }
    }
    else if (*piVar4 != 1) {
      *(undefined4 *)(*(int *)(iVar3 + 8) + 4) = 0;
      while( true ) {
        iVar7 = *(int *)(iVar3 + 8);
        uVar1 = *(uint *)(iVar7 + 4);
        if (uVar1 < *(uint *)(iVar7 + 0xc)) {
          puVar5 = (undefined4 *)(*(int *)(iVar7 + 8) * uVar1 + *(int *)(iVar7 + 0x1c));
          *(uint *)(iVar7 + 4) = uVar1 + 1;
        }
        else {
          puVar5 = (undefined4 *)0x0;
        }
        if (puVar5 == (undefined4 *)0x0) break;
        if (((int *)puVar5[1] == param_2) && (*puVar5 = 1, puVar5[2] != 0)) {
          FUN_006e45c0((int)puVar5);
        }
      }
      local_28 = 0xf;
      local_24 = 8;
      iVar3 = (**(code **)(*param_2 + 0x18))(local_34);
      if (iVar3 != 0) {
        uVar8 = 0x231;
        goto LAB_006e4a7a;
      }
    }
  }
  DAT_00858df8 = (undefined4 *)local_78;
  return 0;
}

