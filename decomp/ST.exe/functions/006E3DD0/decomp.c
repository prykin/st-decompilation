
int FUN_006e3dd0(uint param_1,int param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 unaff_ESI;
  uint uVar6;
  void *unaff_EDI;
  undefined4 *local_a4;
  undefined4 local_a0 [16];
  undefined4 local_60;
  undefined4 local_5c [16];
  int *local_1c;
  int local_18;
  uint local_14;
  undefined4 *local_10;
  int *local_c;
  int local_8;
  
  local_8 = -1;
  local_60 = DAT_00858df8;
  DAT_00858df8 = (undefined4 **)&local_60;
  iVar2 = __setjmp3(local_5c,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 **)local_60;
    iVar4 = FUN_006ad4d0(s_E__Ourlib_Sapp_cpp_007ee78c,0x124,0,iVar2,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
    FUN_006a5e40(iVar2,0,0x7ee78c,0x125);
    return 0xffff;
  }
  *(uint *)(param_3 + 0xc) = param_1;
  *(int *)(param_3 + 8) = param_2;
  switch(param_1 & 0xffffff) {
  case 0:
    piVar3 = (int *)FUN_006e45a0(local_c,param_2);
    if ((piVar3 == (int *)0x0) || (((param_1 & 0x80000000) == 0 && (*piVar3 != 1))))
    goto switchD_006e3e37_caseD_4;
    iVar2 = (**(code **)(*(int *)piVar3[1] + 0x20))(param_3);
    break;
  case 1:
    iVar2 = (**(code **)(*local_c + 0x18))(param_3);
    break;
  case 2:
    iVar2 = FUN_006e3a70(local_c,param_2,(int *)0x0,&local_10);
    if ((iVar2 != 0) ||
       (((*(uint *)(param_3 + 0xc) & 0x80000000) == 0 &&
        (iVar2 = FUN_006e4d40(local_c,local_10[3]), iVar2 != 1)))) goto switchD_006e3e37_caseD_4;
    iVar2 = (**(code **)*local_10)(param_3);
    break;
  case 3:
    local_8 = 0;
    local_a4 = DAT_00858df8;
    DAT_00858df8 = &local_a4;
    iVar2 = __setjmp3(local_a0,0,unaff_EDI,unaff_ESI);
    if (iVar2 == 0) {
      local_1c = local_c + 0xc;
      FUN_006b9910(local_1c,&local_18);
      iVar2 = local_c[3];
      local_14 = 0;
      uVar6 = *(uint *)(iVar2 + 0xc);
      if (uVar6 != 0) {
        if (uVar6 == 0) {
          iVar4 = 0;
          goto LAB_006e3ef1;
        }
        do {
          iVar4 = *(int *)(iVar2 + 8) * local_14 + *(int *)(iVar2 + 0x1c);
LAB_006e3ef1:
          if (*(int *)(*(int *)(iVar4 + 4) + 4) == param_2) {
            if ((*(uint *)(param_3 + 0xc) & 0x80000000) == 0) {
              if (local_14 < uVar6) {
                iVar2 = *(int *)(iVar2 + 8) * local_14 + *(int *)(iVar2 + 0x1c);
              }
              else {
                iVar2 = 0;
              }
              iVar2 = FUN_006e4d40(local_c,*(int *)(*(int *)(iVar2 + 4) + 0xc));
              if (iVar2 != 1) goto LAB_006e3f72;
            }
            iVar2 = local_c[3];
            if (local_14 < *(uint *)(iVar2 + 0xc)) {
              iVar2 = *(int *)(iVar2 + 8) * local_14 + *(int *)(iVar2 + 0x1c);
            }
            else {
              iVar2 = 0;
            }
            iVar2 = (**(code **)**(undefined4 **)(iVar2 + 4))(param_3);
            if (iVar2 == 0xffff) {
              local_8 = 0xffff;
              break;
            }
            iVar2 = local_c[3];
            if (local_14 < *(uint *)(iVar2 + 0xc)) {
              pbVar5 = (byte *)(*(int *)(iVar2 + 8) * local_14 + *(int *)(iVar2 + 0x1c));
            }
            else {
              pbVar5 = (byte *)0x0;
            }
            if ((*pbVar5 & 1) != 0) break;
          }
LAB_006e3f72:
          iVar2 = local_c[3];
          local_14 = local_14 + 1;
          uVar6 = *(uint *)(iVar2 + 0xc);
        } while (local_14 < uVar6);
      }
      FUN_006b98c0(local_1c,&local_18);
      DAT_00858df8 = (undefined4 **)local_a4;
    }
    else {
      DAT_00858df8 = (undefined4 **)local_a4;
      FUN_006b98c0(local_c + 0xc,&local_18);
      FUN_006a5e40(iVar2,0,0x7ee78c,0x10b);
    }
  default:
    goto switchD_006e3e37_caseD_4;
  case 0xf:
    local_8 = 0;
    iVar2 = (**(code **)(*local_c + 0x18))(param_3);
    if (iVar2 != 0) {
      local_8 = iVar2;
    }
    iVar2 = FUN_006e3bf0(local_c[4],param_3);
    if (iVar2 == 0) goto switchD_006e3e37_caseD_4;
  }
  local_8 = iVar2;
switchD_006e3e37_caseD_4:
  iVar2 = local_8;
  if (local_8 == 0xffff) {
    FUN_006a5e40(0xffff,DAT_007ed77c,0x7ee78c,0x122);
  }
  DAT_00858df8 = (undefined4 **)local_60;
  return iVar2;
}

