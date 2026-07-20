
/* [STPrototypeApplier] Propagated parameter 4.
   Evidence: 0074F3C0 -> EXTERNAL:00000019 @ 0074F48C */

undefined4
FUN_0074f3c0(int *param_1,uint *param_2,uint param_3,uint *param_4,
            LPCRITICAL_SECTION lpCriticalSection)

{
  uint *puVar1;
  LPCRITICAL_SECTION lpCriticalSection_00;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  LPCRITICAL_SECTION p_Var7;
  
  p_Var7 = (LPCRITICAL_SECTION)((uint)lpCriticalSection & 3);
  uVar6 = param_3 & 3;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    if (param_4 == (uint *)0x0) {
      return 0x80004003;
    }
    if (p_Var7 != lpCriticalSection) {
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
  lpCriticalSection_00 = (LPCRITICAL_SECTION)param_1[0xd];
  EnterCriticalSection(lpCriticalSection_00);
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
  if (p_Var7 == (LPCRITICAL_SECTION)0x1) {
    param_1[8] = *param_4;
    uVar4 = param_4[1];
  }
  else {
    if (p_Var7 == (LPCRITICAL_SECTION)0x3) {
      uVar4 = *param_4;
      uVar3 = param_4[1];
      param_1[8] = param_1[6] + *param_4;
      param_1[9] = param_1[7] + uVar3 + (uint)CARRY4(param_1[6],uVar4);
      goto cf_common_exit_0074F489;
    }
    if (p_Var7 != (LPCRITICAL_SECTION)0x2) goto cf_common_exit_0074F489;
    uVar4 = param_4[1] + param_1[9] + (uint)CARRY4(*param_4,param_1[8]);
    param_1[8] = *param_4 + param_1[8];
  }
  param_1[9] = uVar4;
cf_common_exit_0074F489:
  LeaveCriticalSection(lpCriticalSection_00);
  uVar5 = 0;
  if (p_Var7 != (LPCRITICAL_SECTION)0x0) {
    uVar5 = (**(code **)(*param_1 + 0x54))();
  }
  if (uVar6 != 0) {
    uVar5 = (**(code **)(*param_1 + 0x50))();
  }
  return uVar5;
}

