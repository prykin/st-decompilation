
undefined4 FUN_0074f3c0(int *param_1,uint *param_2,uint param_3,uint *param_4,uint param_5)

{
  uint *puVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = param_5 & 3;
  uVar6 = param_3 & 3;
  if (param_5 != 0) {
    if (param_4 == (uint *)0x0) {
      return 0x80004003;
    }
    if (uVar7 != param_5) {
      return 0x80070057;
    }
  }
  if (param_3 != 0) {
    if (param_2 == (uint *)0x0) {
      return 0x80004003;
    }
    if ((uVar6 != 1) && (uVar6 != 2)) {
      return 0x80070057;
    }
  }
  lpCriticalSection = (LPCRITICAL_SECTION)param_1[0xd];
  EnterCriticalSection(lpCriticalSection);
  if (uVar6 == 1) {
    param_1[6] = *param_2;
    param_1[7] = param_2[1];
  }
  else if (uVar6 == 2) {
    uVar3 = *param_2;
    uVar2 = param_2[1];
    puVar1 = (uint *)(param_1 + 6);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 + uVar3;
    param_1[7] = param_1[7] + uVar2 + (uint)CARRY4(uVar4,uVar3);
  }
  if (uVar7 == 1) {
    param_1[8] = *param_4;
    uVar4 = param_4[1];
  }
  else {
    if (uVar7 == 3) {
      uVar4 = *param_4;
      uVar3 = param_4[1];
      param_1[8] = param_1[6] + *param_4;
      param_1[9] = param_1[7] + uVar3 + (uint)CARRY4(param_1[6],uVar4);
      goto cf_common_exit_0074F489;
    }
    if (uVar7 != 2) goto cf_common_exit_0074F489;
    uVar4 = param_4[1] + param_1[9] + (uint)CARRY4(*param_4,param_1[8]);
    param_1[8] = *param_4 + param_1[8];
  }
  param_1[9] = uVar4;
cf_common_exit_0074F489:
  LeaveCriticalSection(lpCriticalSection);
  uVar5 = 0;
  if (uVar7 != 0) {
    uVar5 = (**(code **)(*param_1 + 0x54))();
  }
  if (uVar6 != 0) {
    uVar5 = (**(code **)(*param_1 + 0x50))();
  }
  return uVar5;
}

