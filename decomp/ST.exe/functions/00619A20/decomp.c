
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00619a20(STJumpMineC *param_1)

{
  VisibleClassTy *pVVar1;
  int iVar2;
  uint uVar3;
  int local_c;
  int local_8;

  if ((int)param_1->field_0097 < 0) {
    STJumpMineC::LoadImagJMine(param_1,*(int *)&param_1->field_0x8f);
  }
  pVVar1 = g_visibleClass_00802A88;
  if (g_visibleClass_00802A88 == (VisibleClassTy *)0x0) {
    if (param_1->field_00C4 == '\0') {
      return;
    }
    uVar3 = param_1->field_0097;
  }
  else {
    iVar2 = (int)param_1->field_00CD;
    if ((((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
          (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                              (int)param_1->field_00C9,(int)param_1->field_00CB,&local_8,&local_c),
          iVar2 < 0)) || ((4 < iVar2 || (local_8 < 0)))) ||
        (((int)pVVar1->field_0030 <= local_8 ||
         ((local_c = (&DAT_0079aed0)[iVar2] + local_c, local_c < 0 ||
          ((int)pVVar1->field_0034 <= local_c)))))) ||
       ((pVVar1->field_004C == 0 ||
        (*(char *)(local_c * pVVar1->field_0030 + pVVar1->field_004C + local_8) != '\0')))) {
      iVar2 = param_1->field_00AB + 1;
      param_1->field_00AB = iVar2;
      if ((int)param_1->field_00AF <= iVar2) {
        param_1->field_00AB = 0;
      }
      FUN_006ea960(PTR_00807598,param_1->field_0097,
                   (float)param_1->field_009F * _DAT_007904f8 * _DAT_007904f0,
                   (float)param_1->field_00A3 * _DAT_007904f8 * _DAT_007904f0,
                   (float)param_1->field_00A7 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      FUN_006ea270(PTR_00807598,param_1->field_0097,0,param_1->field_00AB);
      FUN_006e96d0(PTR_00807598,param_1->field_0097);
      if (param_1->field_00C4 != '\0') {
        return;
      }
      FUN_006eaaa0(PTR_00807598,param_1->field_0097,0);
      param_1->field_00C4 = 1;
      return;
    }
    if (param_1->field_00C4 == '\0') {
      return;
    }
    uVar3 = param_1->field_0097;
  }
  FUN_006eab60(PTR_00807598,uVar3);
  param_1->field_00C4 = 0;
  return;
}

