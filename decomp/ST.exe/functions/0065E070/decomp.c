
int __fastcall
FUN_0065e070(int param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,char param_6,
            byte *param_7)

{
  byte bVar1;
  undefined2 uVar2;
  char cVar3;
  undefined2 *puVar4;
  STFishC *this;
  uint uVar5;
  uint uVar6;
  IMAGE_DOS_HEADER *pIVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  int *piVar12;
  bool bVar13;
  int local_4c [8];
  byte local_2c [16];
  DArrayTy *local_1c;
  uint local_18;
  int local_14;
  int *local_10;
  uint local_c;
  undefined2 local_8;
  undefined2 local_6;
  
  uVar2 = *(undefined2 *)(param_1 + 0x7d);
  piVar12 = local_4c;
  for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
    *piVar12 = 0;
    piVar12 = piVar12 + 1;
  }
  local_14 = 0;
  thunk_FUN_0044e260(CONCAT31((int3)((uint)local_4c >> 8),*(undefined1 *)(param_1 + 0x24)),
                     CONCAT22((short)((uint)param_2 >> 0x10),uVar2),param_3,local_4c);
  cVar3 = *(char *)(param_1 + 0x81);
  if ((cVar3 < '\0') || ('\a' < cVar3)) {
    cVar3 = (char)*(undefined4 *)(param_1 + 0x24);
  }
  if ((param_6 != '\b') && ((param_6 < '\0' || (cVar3 = param_6, '\b' < param_6)))) {
    param_6 = -1;
    cVar3 = param_6;
  }
  param_6 = cVar3;
  local_10 = local_4c;
  local_c = 0;
  do {
    local_1c = (DArrayTy *)*local_10;
    if (local_1c != (DArrayTy *)0x0) {
      local_18 = 0;
      if (0 < (int)local_1c->count) {
        bVar13 = local_1c->count != 0;
        do {
          if (bVar13) {
            puVar4 = (undefined2 *)(local_1c->elementSize * local_18 + (int)local_1c->data);
          }
          else {
            puVar4 = (undefined2 *)0x0;
          }
          this = (STFishC *)
                 STAllPlayersC::GetObjPtr
                           (g_sTAllPlayers_007FA174,local_c,
                            CONCAT22((short)((uint)puVar4 >> 0x10),*puVar4),CASE_1);
          if ((this == (STFishC *)0x0) || (iVar9 = (*this->vtable->vfunc_F8)(), iVar9 == 0))
          goto cf_continue_loop_0065E27E;
          uVar5 = (*this->vtable->vfunc_2C)();
          STFishC::sub_004162B0(this,&local_8,&local_6,(undefined2 *)((int)&param_3 + 2));
          if (param_5 != 0) {
            if (uVar5 == 0x78) {
              if ((param_5 & 0x80000000) == 0) {
                uVar10 = param_5 & 0x3fffffff;
                if (uVar10 != 0) {
                  iVar9 = (*this->vtable->vfunc_2C)();
                  if (iVar9 == 0x78) {
                    uVar6 = *(uint *)&this->field_0x259;
                  }
                  else {
                    uVar6 = 0;
                  }
                  if (uVar10 != uVar6) goto cf_continue_loop_0065E27E;
                }
                goto LAB_0065e1b6;
              }
            }
            else if (((param_5 & 0x40000000) == 0) &&
                    (((param_5 & 0x3fffffff) == 0 || ((param_5 & 0x3fffffff) == uVar5))))
            goto LAB_0065e1b6;
            goto cf_continue_loop_0065E27E;
          }
LAB_0065e1b6:
          uVar10 = param_4;
          if (param_4 == 0x3fffffff) {
LAB_0065e218:
            pbVar8 = param_7;
            if ((param_7 != (byte *)0x0) && (*param_7 != 0)) {
              (*this->vtable->vfunc_74)(local_2c);
              pbVar11 = local_2c;
              do {
                bVar1 = *pbVar8;
                bVar13 = bVar1 < *pbVar11;
                if (bVar1 != *pbVar11) {
LAB_0065e25c:
                  iVar9 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                  goto LAB_0065e261;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar8[1];
                bVar13 = bVar1 < pbVar11[1];
                if (bVar1 != pbVar11[1]) goto LAB_0065e25c;
                pbVar8 = pbVar8 + 2;
                pbVar11 = pbVar11 + 2;
              } while (bVar1 != 0);
              iVar9 = 0;
LAB_0065e261:
              if (iVar9 != 0) goto cf_continue_loop_0065E27E;
            }
            cVar3 = param_6;
            if ((param_6 == -1) || (iVar9 = (*this->vtable->vfunc_6C)(), cVar3 == iVar9)) {
              local_14 = local_14 + 1;
            }
          }
          else if (uVar5 == 0x78) {
            if ((param_4 & 0x80000000) == 0) {
              iVar9 = (*this->vtable->vfunc_2C)();
              if (iVar9 == 0x78) {
                iVar9 = *(int *)&this->field_0x259;
              }
              else {
                iVar9 = 0;
              }
              pIVar7 = thunk_FUN_00674fb0(iVar9);
joined_r0x0065e216:
              if (((uint)pIVar7 & uVar10 & 0x3fffffff) != 0) goto LAB_0065e218;
            }
          }
          else if ((param_4 & 0x40000000) == 0) {
            pIVar7 = thunk_FUN_00674fb0(uVar5);
            goto joined_r0x0065e216;
          }
cf_continue_loop_0065E27E:
          local_18 = local_18 + 1;
          bVar13 = local_18 < local_1c->count;
        } while ((int)local_18 < (int)local_1c->count);
      }
      FUN_006ae110((byte *)local_1c);
    }
    local_c = local_c + 1;
    local_10 = local_10 + 1;
    if (7 < (int)local_c) {
      return local_14;
    }
  } while( true );
}

