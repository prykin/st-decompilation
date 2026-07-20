
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00619a20(int param_1)

{
  VisibleClassTy *pVVar1;
  int iVar2;
  uint uVar3;
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x97) < 0) {
    STJumpMineC::LoadImagJMine((STJumpMineC *)param_1,*(int *)(param_1 + 0x8f));
  }
  pVVar1 = g_visibleClass_00802A88;
  if (g_visibleClass_00802A88 == (VisibleClassTy *)0x0) {
    if (*(char *)(param_1 + 0xc4) == '\0') {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x97);
  }
  else {
    iVar2 = (int)*(short *)(param_1 + 0xcd);
    if ((((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
          (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                              (int)*(short *)(param_1 + 0xc9),(int)*(short *)(param_1 + 0xcb),
                              &local_8,&local_c), iVar2 < 0)) || ((4 < iVar2 || (local_8 < 0)))) ||
        (((int)pVVar1->field_0030 <= local_8 ||
         ((local_c = (&DAT_0079aed0)[iVar2] + local_c, local_c < 0 ||
          ((int)pVVar1->field_0034 <= local_c)))))) ||
       ((pVVar1->field_004C == 0 ||
        (*(char *)(local_c * pVVar1->field_0030 + pVVar1->field_004C + local_8) != '\0')))) {
      iVar2 = *(int *)(param_1 + 0xab) + 1;
      *(int *)(param_1 + 0xab) = iVar2;
      if (*(int *)(param_1 + 0xaf) <= iVar2) {
        *(undefined4 *)(param_1 + 0xab) = 0;
      }
      FUN_006ea960(DAT_00807598,*(uint *)(param_1 + 0x97),
                   (float)*(int *)(param_1 + 0x9f) * _DAT_007904f8 * _DAT_007904f0,
                   (float)*(int *)(param_1 + 0xa3) * _DAT_007904f8 * _DAT_007904f0,
                   (float)*(int *)(param_1 + 0xa7) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      FUN_006ea270(DAT_00807598,*(uint *)(param_1 + 0x97),0,*(uint *)(param_1 + 0xab));
      FUN_006e96d0(DAT_00807598,*(uint *)(param_1 + 0x97));
      if (*(char *)(param_1 + 0xc4) != '\0') {
        return;
      }
      FUN_006eaaa0(DAT_00807598,*(uint *)(param_1 + 0x97),0);
      *(undefined1 *)(param_1 + 0xc4) = 1;
      return;
    }
    if (*(char *)(param_1 + 0xc4) == '\0') {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x97);
  }
  FUN_006eab60(DAT_00807598,uVar3);
  *(undefined1 *)(param_1 + 0xc4) = 0;
  return;
}

