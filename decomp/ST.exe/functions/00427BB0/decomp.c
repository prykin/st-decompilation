
undefined4 __thiscall FUN_00427bb0(void *this,int param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_14;
  int local_8;
  
  piVar3 = (int *)(param_1 * 0x10 + DAT_007f4d74);
  iVar6 = (DAT_007f4d80 + param_1) * *(int *)((int)this + 0x37c) + *(int *)((int)this + 0x38c);
  bVar1 = 0;
  local_8 = 0x7fffffff;
  if (param_1 <= param_2) {
    do {
      iVar4 = param_1;
      local_14 = *piVar3;
      param_1 = piVar3[3];
      if (param_3 == -1) {
        param_1 = piVar3[1];
      }
      else if (param_3 == 1) {
        local_14 = piVar3[2];
      }
      if (param_1 < local_14) {
        if (local_8 != 0x7fffffff) {
          thunk_FUN_00427090(this,local_8,iVar4 + -1,param_3);
          local_8 = 0x7fffffff;
        }
      }
      else {
        bVar5 = *(byte *)(local_14 + DAT_007f4d7c + iVar6);
        iVar7 = local_14 + 1;
        if (iVar7 <= param_1) {
          do {
            if (*(byte *)(DAT_007f4d7c + iVar6 + iVar7) != bVar5) break;
            iVar7 = iVar7 + 1;
          } while (iVar7 <= param_1);
        }
        if ((local_8 != 0x7fffffff) && ((iVar7 <= param_1 || (bVar5 != bVar1)))) {
          thunk_FUN_00427090(this,local_8,iVar4 + -1,param_3);
          local_8 = 0x7fffffff;
        }
        if (param_1 < iVar7) {
          if (local_8 == 0x7fffffff) {
            local_8 = iVar4;
            bVar1 = bVar5;
          }
        }
        else {
LAB_00427cca:
          iVar8 = iVar7;
          if (DAT_007f4d84 <= DAT_007f4d78) {
            iVar7 = Library::DKW::LIB::FUN_006acf50(DAT_007f4d6c,(DAT_007f4d84 * 3 + 0x1e) * 4);
            if (iVar7 == 0) {
              return 0;
            }
            DAT_007f4d84 = DAT_007f4d84 + 10;
            DAT_007f4d6c = iVar7;
          }
          iVar7 = Library::DKW::LIB::FUN_006aac70(0x20);
          if (iVar7 == 0) {
            return 0;
          }
          *(int *)(DAT_007f4d6c + 8 + DAT_007f4d78 * 0xc) = iVar7;
          iVar2 = thunk_FUN_004248d0(this,iVar7,0,DAT_007f4d7c + local_14,DAT_007f4d80 + iVar4,
                                     CASE_0,CASE_1);
          iVar7 = thunk_FUN_004248d0(this,iVar7,iVar2,DAT_007f4d7c + -1 + iVar8,DAT_007f4d80 + iVar4
                                     ,CASE_3,CASE_2);
          *(int *)(DAT_007f4d6c + 4 + DAT_007f4d78 * 0xc) = iVar7;
          if ((bVar5 & 0x80) == 0) {
            *(undefined4 *)(DAT_007f4d6c + DAT_007f4d78 * 0xc) = 0;
          }
          else {
            *(undefined4 *)(DAT_007f4d6c + DAT_007f4d78 * 0xc) = 1;
          }
          DAT_007f4d78 = DAT_007f4d78 + 1;
          if (iVar8 <= param_1) {
            iVar7 = iVar8 + 1;
            bVar5 = *(byte *)(DAT_007f4d7c + iVar8 + iVar6);
            local_14 = iVar8;
            if (iVar7 <= param_1) {
              do {
                if (*(byte *)(DAT_007f4d7c + iVar6 + iVar7) != bVar5) break;
                iVar7 = iVar7 + 1;
              } while (iVar7 <= param_1);
            }
            goto LAB_00427cca;
          }
        }
      }
      piVar3 = piVar3 + 4;
      iVar6 = iVar6 + *(int *)((int)this + 0x37c);
      param_1 = iVar4 + 1;
    } while (iVar4 + 1 <= param_2);
    if (local_8 != 0x7fffffff) {
      thunk_FUN_00427090(this,local_8,iVar4,param_3);
    }
  }
  return 0;
}

