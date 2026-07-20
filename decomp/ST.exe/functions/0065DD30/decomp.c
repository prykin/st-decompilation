
int __fastcall
FUN_0065dd30(int param_1,undefined4 param_2,uint param_3,uint param_4,char param_5,byte *param_6,
            short param_7,short param_8,short param_9,short param_10,short param_11,short param_12)

{
  byte bVar1;
  char cVar2;
  undefined2 *puVar3;
  STFishC *this;
  uint uVar4;
  uint uVar5;
  IMAGE_DOS_HEADER *pIVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  bool bVar10;
  byte local_2c [16];
  DArrayTy *local_1c;
  int local_18;
  uint local_14;
  int local_10;
  short local_a;
  short local_8;
  short local_6;
  
  iVar9 = 0;
  local_10 = 0;
  local_18 = param_1;
  local_1c = (DArrayTy *)thunk_FUN_0065da10((AnonShape_0065DA10_8B0AA883 *)param_1,param_2);
  if (local_1c != (DArrayTy *)0x0) {
    cVar2 = *(char *)(param_1 + 0x81);
    if ((cVar2 < '\0') || ('\a' < cVar2)) {
      cVar2 = (char)*(undefined4 *)(param_1 + 0x24);
    }
    if ((param_5 != '\b') && ((param_5 < '\0' || (cVar2 = param_5, '\b' < param_5)))) {
      param_5 = -1;
      cVar2 = param_5;
    }
    param_5 = cVar2;
    uVar4 = local_1c->count;
    local_14 = 0;
    if (0 < (int)uVar4) {
      do {
        if (local_14 < uVar4) {
          puVar3 = (undefined2 *)(local_1c->elementSize * local_14 + (int)local_1c->data);
        }
        else {
          puVar3 = (undefined2 *)0x0;
        }
        this = (STFishC *)
               STAllPlayersC::GetObjPtr
                         (g_sTAllPlayers_007FA174,
                          CONCAT31((int3)(local_14 >> 8),*(undefined1 *)(param_1 + 0x24)),
                          CONCAT22((short)((uint)puVar3 >> 0x10),*puVar3),CASE_1);
        if ((this == (STFishC *)0x0) || (iVar9 = (*this->vtable->vfunc_F8)(), iVar9 == 0))
        goto cf_common_join_0065DF91;
        uVar4 = (*this->vtable->vfunc_2C)();
        if (param_4 != 0) {
          if (uVar4 == 0x78) {
            if ((param_4 & 0x80000000) == 0) {
              if ((param_4 & 0x3fffffff) != 0) {
                iVar9 = (*this->vtable->vfunc_2C)();
                if (iVar9 == 0x78) {
                  uVar5 = *(uint *)&this->field_0x259;
                }
                else {
                  uVar5 = 0;
                }
                if ((param_4 & 0x3fffffff) != uVar5) goto cf_common_join_0065DF91;
              }
              goto LAB_0065de3c;
            }
          }
          else if (((param_4 & 0x40000000) == 0) &&
                  (((param_4 & 0x3fffffff) == 0 || ((param_4 & 0x3fffffff) == uVar4))))
          goto LAB_0065de3c;
          goto cf_common_join_0065DF91;
        }
LAB_0065de3c:
        if (param_3 == 0x3fffffff) {
LAB_0065dea6:
          if ((param_6 != (byte *)0x0) && (*param_6 != 0)) {
            (*this->vtable->vfunc_74)(local_2c);
            pbVar8 = local_2c;
            pbVar7 = param_6;
            do {
              bVar1 = *pbVar7;
              bVar10 = bVar1 < *pbVar8;
              if (bVar1 != *pbVar8) {
LAB_0065deea:
                iVar9 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                goto LAB_0065deef;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar7[1];
              bVar10 = bVar1 < pbVar8[1];
              if (bVar1 != pbVar8[1]) goto LAB_0065deea;
              pbVar7 = pbVar7 + 2;
              pbVar8 = pbVar8 + 2;
            } while (bVar1 != 0);
            iVar9 = 0;
LAB_0065deef:
            if (iVar9 != 0) goto cf_common_join_0065DF91;
          }
          if (((param_5 == -1) || (iVar9 = (*this->vtable->vfunc_6C)(), param_5 == iVar9)) &&
             (((param_10 < 1 || ((param_11 < 1 || (param_12 < 1)))) ||
              ((STFishC::sub_004162B0(this,&local_6,&local_8,&local_a), param_7 <= local_6 &&
               ((((param_8 <= local_8 && (param_9 <= local_a)) &&
                 ((int)local_6 < (int)param_7 + (int)param_10)) &&
                (((int)local_8 < (int)param_8 + (int)param_11 &&
                 ((int)local_a < (int)param_9 + (int)param_12)))))))))) {
            local_10 = local_10 + 1;
          }
        }
        else if (uVar4 == 0x78) {
          if ((param_3 & 0x80000000) == 0) {
            iVar9 = (*this->vtable->vfunc_2C)();
            if (iVar9 == 0x78) {
              iVar9 = *(int *)&this->field_0x259;
            }
            else {
              iVar9 = 0;
            }
            pIVar6 = thunk_FUN_00674fb0(iVar9);
joined_r0x0065dea0:
            if (((uint)pIVar6 & param_3 & 0x3fffffff) != 0) goto LAB_0065dea6;
          }
        }
        else if ((param_3 & 0x40000000) == 0) {
          pIVar6 = thunk_FUN_00674fb0(uVar4);
          goto joined_r0x0065dea0;
        }
cf_common_join_0065DF91:
        local_14 = local_14 + 1;
        uVar4 = local_1c->count;
        param_1 = local_18;
        iVar9 = local_10;
      } while ((int)local_14 < (int)uVar4);
    }
    FUN_006ae110((byte *)local_1c);
  }
  return iVar9;
}

