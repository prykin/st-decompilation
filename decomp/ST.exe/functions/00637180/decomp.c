
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00637180(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0xc);
    uVar4 = 0;
    if (0 < iVar1) {
      do {
        iVar3 = *(int *)(param_1 + 0x2c);
        if (((uVar4 < *(uint *)(iVar3 + 0xc)) &&
            (iVar3 = *(int *)(iVar3 + 8) * uVar4 + *(int *)(iVar3 + 0x1c), iVar3 != 0)) &&
           (uVar2 = *(uint *)(iVar3 + 4), -1 < (int)uVar2)) {
          if (*(int *)(iVar3 + 8) == 1) {
            FUN_006ea270(DAT_00807598,uVar2,0,*(uint *)(iVar3 + 0x1e));
            if (*(char *)(iVar3 + 0xc) != '\0') {
              FUN_006ea960(DAT_00807598,*(uint *)(iVar3 + 4),
                           (float)*(int *)(iVar3 + 0xe) * _DAT_007904f8 * _DAT_007904f0,
                           (float)*(int *)(iVar3 + 0x12) * _DAT_007904f8 * _DAT_007904f0,
                           (float)*(int *)(iVar3 + 0x16) * _DAT_007904f8 * _DAT_007904f0 +
                           _DAT_007904fc);
            }
            if (*(char *)(iVar3 + 0xd) == '\0') {
              FUN_006eaaa0(DAT_00807598,*(uint *)(iVar3 + 4),0);
              *(undefined1 *)(iVar3 + 0xd) = 1;
            }
          }
          else if (*(char *)(iVar3 + 0xd) != '\0') {
            FUN_006eab60(DAT_00807598,uVar2);
            *(undefined1 *)(iVar3 + 0xd) = 0;
          }
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < iVar1);
    }
  }
  return;
}

