
int __fastcall
FUN_0065dd30(int param_1,undefined4 param_2,uint param_3,uint param_4,char param_5,byte *param_6,
            short param_7,short param_8,short param_9,short param_10,short param_11,short param_12)

{
  byte bVar1;
  char cVar2;
  undefined2 *puVar3;
  int *this;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  bool bVar9;
  byte local_2c [16];
  uint *local_1c;
  int local_18;
  uint local_14;
  int local_10;
  short local_a;
  short local_8;
  short local_6;
  
  iVar8 = 0;
  local_10 = 0;
  local_18 = param_1;
  local_1c = thunk_FUN_0065da10(param_1,param_2);
  if (local_1c != (uint *)0x0) {
    cVar2 = *(char *)(param_1 + 0x81);
    if ((cVar2 < '\0') || ('\a' < cVar2)) {
      cVar2 = (char)*(undefined4 *)(param_1 + 0x24);
    }
    if ((param_5 != '\b') && ((param_5 < '\0' || (cVar2 = param_5, '\b' < param_5)))) {
      param_5 = -1;
      cVar2 = param_5;
    }
    param_5 = cVar2;
    uVar4 = local_1c[3];
    local_14 = 0;
    if (0 < (int)uVar4) {
      do {
        if (local_14 < uVar4) {
          puVar3 = (undefined2 *)(local_1c[2] * local_14 + local_1c[7]);
        }
        else {
          puVar3 = (undefined2 *)0x0;
        }
        this = (int *)STAllPlayersC::GetObjPtr
                                (DAT_007fa174,
                                 CONCAT31((int3)(local_14 >> 8),*(undefined1 *)(param_1 + 0x24)),
                                 CONCAT22((short)((uint)puVar3 >> 0x10),*puVar3),CASE_1);
        if ((this == (int *)0x0) || (iVar8 = (**(code **)(*this + 0xf8))(), iVar8 == 0))
        goto LAB_0065df91;
        uVar4 = (**(code **)(*this + 0x2c))();
        if (param_4 != 0) {
          if (uVar4 == 0x78) {
            if ((param_4 & 0x80000000) == 0) {
              if ((param_4 & 0x3fffffff) != 0) {
                iVar8 = (**(code **)(*this + 0x2c))();
                if (iVar8 == 0x78) {
                  uVar5 = *(uint *)((int)this + 0x259);
                }
                else {
                  uVar5 = 0;
                }
                if ((param_4 & 0x3fffffff) != uVar5) goto LAB_0065df91;
              }
              goto LAB_0065de3c;
            }
          }
          else if (((param_4 & 0x40000000) == 0) &&
                  (((param_4 & 0x3fffffff) == 0 || ((param_4 & 0x3fffffff) == uVar4))))
          goto LAB_0065de3c;
          goto LAB_0065df91;
        }
LAB_0065de3c:
        if (param_3 == 0x3fffffff) {
LAB_0065dea6:
          if ((param_6 != (byte *)0x0) && (*param_6 != 0)) {
            (**(code **)(*this + 0x74))(local_2c);
            pbVar7 = local_2c;
            pbVar6 = param_6;
            do {
              bVar1 = *pbVar6;
              bVar9 = bVar1 < *pbVar7;
              if (bVar1 != *pbVar7) {
LAB_0065deea:
                iVar8 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                goto LAB_0065deef;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar6[1];
              bVar9 = bVar1 < pbVar7[1];
              if (bVar1 != pbVar7[1]) goto LAB_0065deea;
              pbVar6 = pbVar6 + 2;
              pbVar7 = pbVar7 + 2;
            } while (bVar1 != 0);
            iVar8 = 0;
LAB_0065deef:
            if (iVar8 != 0) goto LAB_0065df91;
          }
          if (((param_5 == -1) || (iVar8 = (**(code **)(*this + 0x6c))(), param_5 == iVar8)) &&
             (((param_10 < 1 || ((param_11 < 1 || (param_12 < 1)))) ||
              ((thunk_FUN_004162b0(this,&local_6,&local_8,&local_a), param_7 <= local_6 &&
               ((((param_8 <= local_8 && (param_9 <= local_a)) &&
                 ((int)local_6 < (int)param_7 + (int)param_10)) &&
                (((int)local_8 < (int)param_8 + (int)param_11 &&
                 ((int)local_a < (int)param_9 + (int)param_12)))))))))) {
            local_10 = local_10 + 1;
          }
        }
        else if (uVar4 == 0x78) {
          if ((param_3 & 0x80000000) == 0) {
            iVar8 = (**(code **)(*this + 0x2c))();
            if (iVar8 == 0x78) {
              iVar8 = *(int *)((int)this + 0x259);
            }
            else {
              iVar8 = 0;
            }
            uVar4 = thunk_FUN_00674fb0(iVar8);
joined_r0x0065dea0:
            if ((uVar4 & param_3 & 0x3fffffff) != 0) goto LAB_0065dea6;
          }
        }
        else if ((param_3 & 0x40000000) == 0) {
          uVar4 = thunk_FUN_00674fb0(uVar4);
          goto joined_r0x0065dea0;
        }
LAB_0065df91:
        local_14 = local_14 + 1;
        uVar4 = local_1c[3];
        param_1 = local_18;
        iVar8 = local_10;
      } while ((int)local_14 < (int)uVar4);
    }
    FUN_006ae110((byte *)local_1c);
  }
  return iVar8;
}

