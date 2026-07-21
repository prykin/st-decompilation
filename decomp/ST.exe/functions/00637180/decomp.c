
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00637180(AnonShape_00637180_4094267C *param_1)

{
  int iVar1;
  AnonNested_00637180_002C_C78B37DA *pAVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;

  if (param_1->field_002C != (AnonNested_00637180_002C_C78B37DA *)0x0) {
    iVar1 = *(int *)&param_1->field_002C->field_0xc;
    uVar5 = 0;
    if (0 < iVar1) {
      do {
        pAVar2 = param_1->field_002C;
        if (((uVar5 < *(uint *)&pAVar2->field_0xc) &&
            (iVar4 = pAVar2->field_0008 * uVar5 + pAVar2->field_001C, iVar4 != 0)) &&
           (uVar3 = *(uint *)(iVar4 + 4), -1 < (int)uVar3)) {
          if (*(int *)(iVar4 + 8) == 1) {
            FUN_006ea270(PTR_00807598,uVar3,0,*(uint *)(iVar4 + 0x1e));
            if (*(char *)(iVar4 + 0xc) != '\0') {
              FUN_006ea960(PTR_00807598,*(uint *)(iVar4 + 4),
                           (float)*(int *)(iVar4 + 0xe) * _DAT_007904f8 * _DAT_007904f0,
                           (float)*(int *)(iVar4 + 0x12) * _DAT_007904f8 * _DAT_007904f0,
                           (float)*(int *)(iVar4 + 0x16) * _DAT_007904f8 * _DAT_007904f0 +
                           _DAT_007904fc);
            }
            if (*(char *)(iVar4 + 0xd) == '\0') {
              FUN_006eaaa0(PTR_00807598,*(uint *)(iVar4 + 4),0);
              *(undefined1 *)(iVar4 + 0xd) = 1;
            }
          }
          else if (*(char *)(iVar4 + 0xd) != '\0') {
            FUN_006eab60(PTR_00807598,uVar3);
            *(undefined1 *)(iVar4 + 0xd) = 0;
          }
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < iVar1);
    }
  }
  return;
}

