
int FUN_006e5970(uint param_1,int param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  undefined4 unaff_ESI;
  uint uVar6;
  void *unaff_EDI;
  undefined4 *local_a8;
  undefined4 local_a4 [16];
  undefined4 local_64;
  undefined4 local_60 [16];
  int *local_20;
  int local_1c;
  int local_18;
  uint local_14;
  undefined4 *local_10;
  int *local_c;
  int local_8;
  
  local_8 = -1;
  local_64 = DAT_00858df8;
  DAT_00858df8 = (undefined4 **)&local_64;
  iVar2 = __setjmp3(local_60,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 **)local_64;
    iVar3 = FUN_006ad4d0(s_E__Ourlib_Sapp_cpp_007ee78c,0x45c,0,iVar2,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
    FUN_006a5e40(iVar2,0,0x7ee78c,0x45d);
    return iVar2;
  }
  *(uint *)(param_3 + 0xc) = param_1;
  *(int *)(param_3 + 8) = param_2;
  switch(param_1 & 0xffffff) {
  case 0:
    iVar2 = (**(code **)(*local_c + 0x20))(param_3);
    break;
  case 1:
    iVar2 = (**(code **)(*(int *)local_c[6] + 0x18))(param_3);
    break;
  case 2:
    iVar2 = FUN_006e5360(local_c,param_2,(int *)0x0,&local_10);
    if ((iVar2 != 0) ||
       (((*(uint *)(param_3 + 0xc) & 0x80000000) == 0 &&
        (iVar2 = FUN_006e4d40((void *)local_c[6],(int)local_c), iVar2 != 1))))
    goto switchD_006e59d5_caseD_4;
    iVar2 = (**(code **)*local_10)(param_3);
    break;
  case 3:
    local_8 = 0;
    iVar2 = FUN_006e4d40((void *)local_c[6],(int)local_c);
    if (((*(uint *)(param_3 + 0xc) & 0x80000000) != 0) || (local_1c = 0, iVar2 == 1)) {
      local_1c = 1;
    }
    local_a8 = DAT_00858df8;
    DAT_00858df8 = &local_a8;
    iVar2 = __setjmp3(local_a4,0,unaff_EDI,unaff_ESI);
    if (iVar2 == 0) {
      piVar5 = local_c + 3;
      local_20 = piVar5;
      FUN_006b9910(piVar5,&local_18);
      iVar2 = local_c[4];
      local_14 = 0;
      uVar6 = *(uint *)(iVar2 + 0xc);
      if (uVar6 != 0) {
        if (uVar6 == 0) {
          iVar3 = 0;
          goto LAB_006e5ace;
        }
        do {
          iVar3 = *(int *)(iVar2 + 8) * local_14 + *(int *)(iVar2 + 0x1c);
LAB_006e5ace:
          if ((*(int *)(*(int *)(iVar3 + 4) + 4) == param_2) && (local_1c != 0)) {
            if (local_14 < uVar6) {
              iVar2 = *(int *)(iVar2 + 8) * local_14 + *(int *)(iVar2 + 0x1c);
            }
            else {
              iVar2 = 0;
            }
            iVar2 = (**(code **)**(undefined4 **)(iVar2 + 4))(param_3);
            if (iVar2 == 0xffff) {
              FUN_006a5e40(0xffff,DAT_007ed77c,0x7ee78c,0x441);
            }
            iVar2 = local_c[4];
            if (local_14 < *(uint *)(iVar2 + 0xc)) {
              pbVar4 = (byte *)(*(int *)(iVar2 + 8) * local_14 + *(int *)(iVar2 + 0x1c));
            }
            else {
              pbVar4 = (byte *)0x0;
            }
            piVar5 = local_20;
            if ((*pbVar4 & 1) != 0) break;
          }
          local_14 = local_14 + 1;
          uVar6 = *(uint *)(iVar2 + 0xc);
          piVar5 = local_20;
        } while (local_14 < uVar6);
      }
      FUN_006b98c0(piVar5,&local_18);
      DAT_00858df8 = (undefined4 **)local_a8;
    }
    else {
      DAT_00858df8 = (undefined4 **)local_a8;
      FUN_006b98c0(local_c + 3,&local_18);
      FUN_006a5e40(iVar2,0,0x7ee78c,1099);
    }
  default:
    goto switchD_006e59d5_caseD_4;
  case 0xf:
    local_8 = 0;
    iVar2 = (**(code **)(*local_c + 0x20))(param_3);
    if (iVar2 != 0) {
      local_8 = iVar2;
    }
    iVar2 = FUN_006e40e0(local_c[5],param_3);
    if (iVar2 != 0) {
      local_8 = iVar2;
    }
    iVar2 = FUN_006e5c70(param_3);
    if (iVar2 == 0) goto switchD_006e59d5_caseD_4;
  }
  local_8 = iVar2;
switchD_006e59d5_caseD_4:
  iVar2 = local_8;
  if (local_8 == 0xffff) {
    FUN_006a5e40(0xffff,DAT_007ed77c,0x7ee78c,0x45a);
  }
  DAT_00858df8 = (undefined4 **)local_64;
  return iVar2;
}

