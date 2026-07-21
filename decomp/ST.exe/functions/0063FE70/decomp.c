
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0063fe70(void *this,char param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint local_8;

  if (*(int *)((int)this + 0x336) != 0) {
    iVar1 = *(int *)(*(int *)((int)this + 0x336) + 0xc);
    local_8 = 0;
    if (0 < iVar1) {
      do {
        iVar4 = *(int *)((int)this + 0x336);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (((local_8 < *(uint *)(iVar4 + 0xc)) &&
            (iVar4 = *(int *)(iVar4 + 8) * local_8 + *(int *)(iVar4 + 0x1c), iVar4 != 0)) &&
           (uVar2 = *(uint *)(iVar4 + 0x38), -1 < (int)uVar2)) {
          iVar3 = *(int *)(iVar4 + 4);
          if ((iVar3 == 1) || (iVar3 == 3)) {
            if ((param_1 != '\0') || (iVar3 == 3)) {
              *(undefined4 *)(iVar4 + 4) = 0;
              FUN_006ea270(*(void **)((int)this + 0x211),uVar2,0,*(uint *)(iVar4 + 0x20));
              FUN_006ea960(*(void **)((int)this + 0x211),*(uint *)(iVar4 + 0x38),
                           (float)*(int *)(iVar4 + 8) * _DAT_007904f8 * _DAT_007904f0,
                           (float)*(int *)(iVar4 + 0xc) * _DAT_007904f8 * _DAT_007904f0,
                           *(float *)(iVar4 + 0x10) + _DAT_007904fc);
              FUN_006eaaa0(*(void **)((int)this + 0x211),*(uint *)(iVar4 + 0x38),0);
            }
          }
          else if (iVar3 != 2) {
            if ((int)local_8 < 0x3c) {
              *(undefined4 *)(iVar4 + 0x30) = PTR_00802a38->field_00E4;
              iVar3 = *(int *)(iVar4 + 0x24) + -1;
              if (*(int *)(iVar4 + 0x20) < iVar3) {
                *(int *)(iVar4 + 0x20) = *(int *)(iVar4 + 0x20) + 1;
              }
              else {
                *(int *)(iVar4 + 0x20) = iVar3;
              }
              FUN_006ea270(*(void **)((int)this + 0x211),uVar2,0,*(uint *)(iVar4 + 0x20));
              FUN_006ea960(*(void **)((int)this + 0x211),*(uint *)(iVar4 + 0x38),
                           (float)*(int *)(iVar4 + 8) * _DAT_007904f8 * _DAT_007904f0,
                           (float)*(int *)(iVar4 + 0xc) * _DAT_007904f8 * _DAT_007904f0,
                           *(float *)(iVar4 + 0x10) + _DAT_007904fc);
            }
            else {
              iVar3 = PTR_00802a38->field_00E4;
              if ((1 < (uint)(iVar3 - *(int *)(iVar4 + 0x30))) || (iVar3 == *(int *)(iVar4 + 0x30)))
              {
                *(int *)(iVar4 + 0x30) = iVar3;
                iVar3 = *(int *)(iVar4 + 0x24) + -1;
                if (*(int *)(iVar4 + 0x20) < iVar3) {
                  *(int *)(iVar4 + 0x20) = *(int *)(iVar4 + 0x20) + 1;
                }
                else {
                  *(int *)(iVar4 + 0x20) = iVar3;
                }
                FUN_006ea270(*(void **)((int)this + 0x211),uVar2,0,*(uint *)(iVar4 + 0x20));
              }
              FUN_006ea960(*(void **)((int)this + 0x211),*(uint *)(iVar4 + 0x38),
                           (float)*(int *)(iVar4 + 8) * _DAT_007904f8 * _DAT_007904f0,
                           (float)*(int *)(iVar4 + 0xc) * _DAT_007904f8 * _DAT_007904f0,
                           *(float *)(iVar4 + 0x10) + _DAT_007904fc);
            }
          }
        }
        local_8 = local_8 + 1;
      } while ((int)local_8 < iVar1);
    }
    if ((*(uint **)((int)this + 0x37f) != (uint *)0x0) &&
       (uVar2 = **(uint **)((int)this + 0x37f), -1 < (int)uVar2)) {
      FUN_006e96d0(*(void **)((int)this + 0x211),uVar2);
    }
  }
  return;
}

