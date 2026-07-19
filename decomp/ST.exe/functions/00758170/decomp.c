
undefined4 FUN_00758170(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
LAB_0075817a:
  if (*(int *)((int)param_1 + 0x18e) == 0) {
    if (*(int *)(*(int *)((int)param_1 + 0x1a6) + 0x50) == 0) {
      iVar1 = FUN_00759080((int)param_1);
    }
    else {
      iVar1 = FUN_00757d90((int)param_1);
    }
    if (iVar1 == 0) {
      return 0;
    }
  }
  switch(*(int *)((int)param_1 + 0x18e)) {
  default:
    RaiseInternalException(0x43,DAT_007ed77c,s_E__DKW_JPG_C_jdmarker_c_007f2db0,0x35f);
  case 1:
  case 0xd0:
  case 0xd1:
  case 0xd2:
  case 0xd3:
  case 0xd4:
  case 0xd5:
  case 0xd6:
  case 0xd7:
    *(undefined4 *)((int)param_1 + 0x18e) = 0;
    goto LAB_0075817a;
  case 0xc0:
  case 0xc1:
    uVar3 = 0;
    uVar2 = 0;
    goto LAB_007581fa;
  case 0xc2:
    uVar3 = 0;
    break;
  case 0xc3:
  case 0xc5:
  case 0xc6:
  case 199:
  case 200:
  case 0xcb:
  case 0xcd:
  case 0xce:
  case 0xcf:
    RaiseInternalException(0x3b,DAT_007ed77c,s_E__DKW_JPG_C_jdmarker_c_007f2db0,0x30d);
    *(undefined4 *)((int)param_1 + 0x18e) = 0;
    goto LAB_0075817a;
  case 0xc4:
    iVar1 = FUN_00758bc0(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    *(undefined4 *)((int)param_1 + 0x18e) = 0;
    goto LAB_0075817a;
  case 0xc9:
    iVar1 = FUN_00758530(param_1,0,1);
    if (iVar1 == 0) {
      return 0;
    }
    *(undefined4 *)((int)param_1 + 0x18e) = 0;
    goto LAB_0075817a;
  case 0xca:
    uVar3 = 1;
    break;
  case 0xcc:
    iVar1 = FUN_00758a60((int)param_1);
    if (iVar1 == 0) {
      return 0;
    }
    *(undefined4 *)((int)param_1 + 0x18e) = 0;
    goto LAB_0075817a;
  case 0xd8:
    iVar1 = FUN_00758490((int)param_1);
    goto LAB_00758200;
  case 0xd9:
    *(undefined4 *)((int)param_1 + 0x18e) = 0;
    return 2;
  case 0xda:
    iVar1 = FUN_00758800((int)param_1);
    if (iVar1 == 0) {
      return 0;
    }
    *(undefined4 *)((int)param_1 + 0x18e) = 0;
    return 1;
  case 0xdb:
    iVar1 = FUN_00758df0(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    *(undefined4 *)((int)param_1 + 0x18e) = 0;
    goto LAB_0075817a;
  case 0xdc:
    iVar1 = FUN_00758100((int)param_1);
    if (iVar1 == 0) {
      return 0;
    }
    *(undefined4 *)((int)param_1 + 0x18e) = 0;
    goto LAB_0075817a;
  case 0xdd:
    iVar1 = FUN_00758fa0((int)param_1);
    if (iVar1 == 0) {
      return 0;
    }
    *(undefined4 *)((int)param_1 + 0x18e) = 0;
    goto LAB_0075817a;
  case 0xe0:
  case 0xe1:
  case 0xe2:
  case 0xe3:
  case 0xe4:
  case 0xe5:
  case 0xe6:
  case 0xe7:
  case 0xe8:
  case 0xe9:
  case 0xea:
  case 0xeb:
  case 0xec:
  case 0xed:
  case 0xee:
  case 0xef:
    iVar1 = (**(code **)(*(int *)((int)param_1 + 0x1a6) + -0x370 +
                        *(int *)((int)param_1 + 0x18e) * 4))(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    *(undefined4 *)((int)param_1 + 0x18e) = 0;
    goto LAB_0075817a;
  case 0xfe:
    goto switchD_007581c7_caseD_fe;
  }
  uVar2 = 1;
LAB_007581fa:
  iVar1 = FUN_00758530(param_1,uVar2,uVar3);
LAB_00758200:
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)((int)param_1 + 0x18e) = 0;
  goto LAB_0075817a;
switchD_007581c7_caseD_fe:
  iVar1 = (**(code **)(*(int *)((int)param_1 + 0x1a6) + 0xc))(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)((int)param_1 + 0x18e) = 0;
  goto LAB_0075817a;
}

