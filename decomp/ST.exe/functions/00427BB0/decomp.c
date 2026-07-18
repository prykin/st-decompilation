
undefined4 __thiscall FUN_00427bb0(void *this,int param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_14;
  int local_8;
  
  piVar4 = (int *)(param_1 * 0x10 + DAT_007f4d74);
  iVar7 = (DAT_007f4d80 + param_1) * *(int *)((int)this + 0x37c) + *(int *)((int)this + 0x38c);
  bVar1 = 0;
  local_8 = 0x7fffffff;
  if (param_1 <= param_2) {
    do {
      iVar5 = param_1;
      local_14 = *piVar4;
      param_1 = piVar4[3];
      if (param_3 == -1) {
        param_1 = piVar4[1];
      }
      else if (param_3 == 1) {
        local_14 = piVar4[2];
      }
      if (param_1 < local_14) {
        if (local_8 != 0x7fffffff) {
          thunk_FUN_00427090(this,local_8,iVar5 + -1,param_3);
          local_8 = 0x7fffffff;
        }
      }
      else {
        bVar6 = *(byte *)(local_14 + DAT_007f4d7c + iVar7);
        iVar8 = local_14 + 1;
        if (iVar8 <= param_1) {
          do {
            if (*(byte *)(DAT_007f4d7c + iVar7 + iVar8) != bVar6) break;
            iVar8 = iVar8 + 1;
          } while (iVar8 <= param_1);
        }
        if ((local_8 != 0x7fffffff) && ((iVar8 <= param_1 || (bVar6 != bVar1)))) {
          thunk_FUN_00427090(this,local_8,iVar5 + -1,param_3);
          local_8 = 0x7fffffff;
        }
        if (param_1 < iVar8) {
          if (local_8 == 0x7fffffff) {
            local_8 = iVar5;
            bVar1 = bVar6;
          }
        }
        else {
LAB_00427cca:
          iVar9 = iVar8;
          if (DAT_007f4d84 <= DAT_007f4d78) {
            puVar2 = (undefined4 *)FUN_006acf50(DAT_007f4d6c,(DAT_007f4d84 * 3 + 0x1e) * 4);
            if (puVar2 == (undefined4 *)0x0) {
              return 0;
            }
            DAT_007f4d84 = DAT_007f4d84 + 10;
            DAT_007f4d6c = puVar2;
          }
          iVar8 = FUN_006aac70(0x20);
          if (iVar8 == 0) {
            return 0;
          }
          DAT_007f4d6c[DAT_007f4d78 * 3 + 2] = iVar8;
          iVar3 = thunk_FUN_004248d0(this,iVar8,0,DAT_007f4d7c + local_14,DAT_007f4d80 + iVar5,0,1);
          iVar8 = thunk_FUN_004248d0(this,iVar8,iVar3,DAT_007f4d7c + -1 + iVar9,DAT_007f4d80 + iVar5
                                     ,3,2);
          DAT_007f4d6c[DAT_007f4d78 * 3 + 1] = iVar8;
          if ((bVar6 & 0x80) == 0) {
            DAT_007f4d6c[DAT_007f4d78 * 3] = 0;
          }
          else {
            DAT_007f4d6c[DAT_007f4d78 * 3] = 1;
          }
          DAT_007f4d78 = DAT_007f4d78 + 1;
          if (iVar9 <= param_1) {
            iVar8 = iVar9 + 1;
            bVar6 = *(byte *)(DAT_007f4d7c + iVar9 + iVar7);
            local_14 = iVar9;
            if (iVar8 <= param_1) {
              do {
                if (*(byte *)(DAT_007f4d7c + iVar7 + iVar8) != bVar6) break;
                iVar8 = iVar8 + 1;
              } while (iVar8 <= param_1);
            }
            goto LAB_00427cca;
          }
        }
      }
      piVar4 = piVar4 + 4;
      iVar7 = iVar7 + *(int *)((int)this + 0x37c);
      param_1 = iVar5 + 1;
    } while (iVar5 + 1 <= param_2);
    if (local_8 != 0x7fffffff) {
      thunk_FUN_00427090(this,local_8,iVar5,param_3);
    }
  }
  return 0;
}

