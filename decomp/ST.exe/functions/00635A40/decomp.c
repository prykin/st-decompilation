
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00635a40(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;

  if (*(int *)this != 0) {
    iVar1 = *(int *)(*(int *)this + 0xc);
    uVar4 = 0;
    if (0 < iVar1) {
      do {
        iVar3 = *(int *)this;
        if (((uVar4 < *(uint *)(iVar3 + 0xc)) &&
            (iVar3 = *(int *)(iVar3 + 8) * uVar4 + *(int *)(iVar3 + 0x1c), iVar3 != 0)) &&
           (-1 < (int)*(uint *)(iVar3 + 4))) {
          FUN_006ea270(PTR_00807598,*(uint *)(iVar3 + 4),0,*(uint *)(iVar3 + 0x19));
          FUN_006ea960(PTR_00807598,*(uint *)(iVar3 + 4),
                       (float)*(int *)(iVar3 + 0xd) * _DAT_007904f8 * _DAT_007904f0,
                       (float)*(int *)(iVar3 + 0x11) * _DAT_007904f8 * _DAT_007904f0,
                       (float)*(int *)(iVar3 + 0x15) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc
                      );
          iVar2 = *(int *)(iVar3 + 0x19) + 1;
          *(int *)(iVar3 + 0x19) = iVar2;
          if (*(int *)(iVar3 + 0x1d) <= iVar2) {
            *(undefined4 *)(iVar3 + 0x19) = 0;
          }
          if (*(int *)(iVar3 + 8) == 1) {
            if (*(char *)(iVar3 + 0xc) == '\0') {
              FUN_006eaaa0(PTR_00807598,*(uint *)(iVar3 + 4),0);
              *(undefined1 *)(iVar3 + 0xc) = 1;
            }
            if (param_1 == 0) {
              if (*(char *)(iVar3 + 0xc) != '\0') {
                uVar5 = *(uint *)(iVar3 + 4);
                goto LAB_00635b61;
              }
            }
            else if (*(char *)(iVar3 + 0xc) == '\0') {
              FUN_006eaaa0(PTR_00807598,*(uint *)(iVar3 + 4),0);
              *(undefined1 *)(iVar3 + 0xc) = 1;
            }
          }
          else if (*(char *)(iVar3 + 0xc) != '\0') {
            uVar5 = *(uint *)(iVar3 + 4);
LAB_00635b61:
            FUN_006eab60(PTR_00807598,uVar5);
            *(undefined1 *)(iVar3 + 0xc) = 0;
          }
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < iVar1);
    }
  }
  return;
}

