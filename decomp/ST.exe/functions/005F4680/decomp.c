
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005f4680(AnonReceiver_005F35F0 *param_1)

{
  short sVar1;
  VisibleClassTy *pVVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_10;
  int local_c;
  int local_8;

  if (*(int *)&param_1->field_0x8f < 0) {
    SubmarineTitans::Recovered::HiddenThis::AnonReceiver_005F35F0::thunk_FUN_005f35f0
              (param_1,*(int *)&param_1->field_0x87);
  }
  pVVar2 = g_visibleClass_00802A88;
  if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
    iVar5 = *(int *)&param_1->field_0x9b;
    sVar1 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      local_8 = (short)(((short)(iVar5 / 200) + sVar1) -
                       (short)((longlong)iVar5 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      local_8 = (int)(short)(((short)(iVar5 / 200) + sVar1) -
                            (short)((longlong)iVar5 * 0x51eb851f >> 0x3f));
    }
    iVar5 = *(int *)&param_1->field_0x97;
    sVar1 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar1) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar1) -
                          (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
    }
    iVar3 = *(int *)&param_1->field_0x93;
    sVar1 = (short)(iVar3 >> 0x1f);
    if (iVar3 < 0) {
      iVar3 = (short)(((short)(iVar3 / 0xc9) + sVar1) - (short)((longlong)iVar3 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar3 = (int)(short)(((short)(iVar3 / 0xc9) + sVar1) -
                          (short)((longlong)iVar3 * 0x28c1979 >> 0x3f));
    }
    if ((((((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) &&
          (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar3,
                              iVar5,&local_c,&local_10), -1 < local_8)) &&
         ((local_8 < 5 && (-1 < local_c)))) &&
        ((local_c < (int)pVVar2->field_0030 &&
         ((local_10 = (&DAT_0079aed0)[local_8] + local_10, -1 < local_10 &&
          (local_10 < (int)pVVar2->field_0034)))))) &&
       ((pVVar2->field_004C != 0 &&
        (*(char *)(local_10 * pVVar2->field_0030 + pVVar2->field_004C + local_c) == '\0')))) {
      if (param_1->field_0xc4 == '\0') {
        return;
      }
      FUN_006eab60(PTR_00807598,*(uint *)&param_1->field_0x8f);
      param_1->field_0xc4 = 0;
      return;
    }
    iVar5 = *(int *)&param_1->field_0xab + 1;
    *(int *)&param_1->field_0xab = iVar5;
    if (*(int *)&param_1->field_0xaf <= iVar5) {
      *(undefined4 *)&param_1->field_0xab = 0;
    }
    FUN_006ea960(PTR_00807598,*(uint *)&param_1->field_0x8f,
                 (float)*(int *)&param_1->field_0x93 * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)&param_1->field_0x97 * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)&param_1->field_0x9b * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc
                );
    FUN_006ea270(PTR_00807598,*(uint *)&param_1->field_0x8f,0,*(uint *)&param_1->field_0xab);
    local_8 = FUN_006acf0d(*(int *)&param_1->field_0x9f,*(int *)&param_1->field_0xa3,
                           *(int *)&param_1->field_0xa7,*(int *)&param_1->field_0x93,
                           *(int *)&param_1->field_0x97,*(int *)&param_1->field_0x9b);
    if (local_8 == 0) {
      iVar5 = *(int *)&param_1->field_0x93;
      iVar3 = *(int *)&param_1->field_0x97;
      iVar4 = *(int *)&param_1->field_0x9b;
    }
    else {
      iVar5 = ((*(int *)&param_1->field_0x9f - *(int *)&param_1->field_0x93) * 0x28) / local_8 +
              *(int *)&param_1->field_0x93;
      iVar3 = ((*(int *)&param_1->field_0xa3 - *(int *)&param_1->field_0x97) * 0x28) / local_8 +
              *(int *)&param_1->field_0x97;
      iVar4 = ((*(int *)&param_1->field_0xa7 - *(int *)&param_1->field_0x9b) * 0x28) / local_8 +
              *(int *)&param_1->field_0x9b;
    }
    TraksClassTy::TraksCreate(g_traksClass_00802A7C,1,1,0,iVar5,iVar3,iVar4,0,0,0,0,0,0,-1,0,0);
    if (param_1->field_0xc4 == '\0') {
      FUN_006eaaa0(PTR_00807598,*(uint *)&param_1->field_0x8f,0);
      param_1->field_0xc4 = 1;
      return;
    }
  }
  return;
}

