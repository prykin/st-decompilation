
HRESULT FUN_0074c6ea(int *param_1,char *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  HRESULT HVar2;
  int iVar3;
  void **ppvVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;

  if (param_3 == (undefined4 *)0x0) {
    HVar2 = -0x7fffbffd;
  }
  else {
    *param_3 = 0;
    iVar3 = 0x10;
    bVar7 = true;
    pcVar5 = param_2;
    pcVar6 = &DAT_007a1210;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar7 = *pcVar5 == *pcVar6;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    if (!bVar7) {
      iVar3 = 0x10;
      bVar7 = true;
      pcVar5 = param_2;
      pcVar6 = &DAT_007a1200;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar7 = *pcVar5 == *pcVar6;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      } while (bVar7);
      if (!bVar7) {
        HVar2 = FUN_00747bdf(param_1,param_2,param_3);
        return HVar2;
      }
    }
    if (param_1[0x29] == 0) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)(param_1[0x28] + 0x8c) == 0) {
        ppvVar4 = (void **)0x0;
      }
      else {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        ppvVar4 = (void **)(*(int *)(param_1[0x28] + 0x8c) + 0xc);
      }
      HVar2 = FUN_00746bab((LPUNKNOWN)param_1[1],(IID *)0x0,ppvVar4,param_1 + 0x29);
      if (HVar2 < 0) {
        return HVar2;
      }
    }
    puVar1 = (undefined4 *)param_1[0x29];
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    HVar2 = (**(code **)*puVar1)(puVar1,param_2,param_3);
  }
  return HVar2;
}

