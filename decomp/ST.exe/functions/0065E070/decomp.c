
int __fastcall
FUN_0065e070(int param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,char param_6,
            byte *param_7)

{
  byte bVar1;
  undefined2 uVar2;
  char cVar3;
  undefined2 *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  bool bVar12;
  int local_4c [8];
  byte local_2c [16];
  byte *local_1c;
  uint local_18;
  int local_14;
  int *local_10;
  uint local_c;
  undefined2 local_8;
  undefined2 local_6;
  
  uVar2 = *(undefined2 *)(param_1 + 0x7d);
  piVar5 = local_4c;
  for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
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
    local_1c = (byte *)*local_10;
    if (local_1c != (byte *)0x0) {
      local_18 = 0;
      if (0 < *(int *)(local_1c + 0xc)) {
        bVar12 = *(int *)(local_1c + 0xc) != 0;
        do {
          if (bVar12) {
            puVar4 = (undefined2 *)(*(int *)(local_1c + 8) * local_18 + *(int *)(local_1c + 0x1c));
          }
          else {
            puVar4 = (undefined2 *)0x0;
          }
          piVar5 = (int *)STAllPlayersC::GetObjPtr
                                    (DAT_007fa174,local_c,
                                     CONCAT22((short)((uint)puVar4 >> 0x10),*puVar4),1);
          if ((piVar5 == (int *)0x0) || (iVar9 = (**(code **)(*piVar5 + 0xf8))(), iVar9 == 0))
          goto LAB_0065e27e;
          uVar6 = (**(code **)(*piVar5 + 0x2c))();
          thunk_FUN_004162b0(piVar5,&local_8,&local_6,(undefined2 *)((int)&param_3 + 2));
          if (param_5 != 0) {
            if (uVar6 == 0x78) {
              if ((param_5 & 0x80000000) == 0) {
                uVar10 = param_5 & 0x3fffffff;
                if (uVar10 != 0) {
                  iVar9 = (**(code **)(*piVar5 + 0x2c))();
                  if (iVar9 == 0x78) {
                    uVar7 = *(uint *)((int)piVar5 + 0x259);
                  }
                  else {
                    uVar7 = 0;
                  }
                  if (uVar10 != uVar7) goto LAB_0065e27e;
                }
                goto LAB_0065e1b6;
              }
            }
            else if (((param_5 & 0x40000000) == 0) &&
                    (((param_5 & 0x3fffffff) == 0 || ((param_5 & 0x3fffffff) == uVar6))))
            goto LAB_0065e1b6;
            goto LAB_0065e27e;
          }
LAB_0065e1b6:
          uVar10 = param_4;
          if (param_4 == 0x3fffffff) {
LAB_0065e218:
            pbVar8 = param_7;
            if ((param_7 != (byte *)0x0) && (*param_7 != 0)) {
              (**(code **)(*piVar5 + 0x74))(local_2c);
              pbVar11 = local_2c;
              do {
                bVar1 = *pbVar8;
                bVar12 = bVar1 < *pbVar11;
                if (bVar1 != *pbVar11) {
LAB_0065e25c:
                  iVar9 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                  goto LAB_0065e261;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar8[1];
                bVar12 = bVar1 < pbVar11[1];
                if (bVar1 != pbVar11[1]) goto LAB_0065e25c;
                pbVar8 = pbVar8 + 2;
                pbVar11 = pbVar11 + 2;
              } while (bVar1 != 0);
              iVar9 = 0;
LAB_0065e261:
              if (iVar9 != 0) goto LAB_0065e27e;
            }
            cVar3 = param_6;
            if ((param_6 == -1) || (iVar9 = (**(code **)(*piVar5 + 0x6c))(), cVar3 == iVar9)) {
              local_14 = local_14 + 1;
            }
          }
          else if (uVar6 == 0x78) {
            if ((param_4 & 0x80000000) == 0) {
              iVar9 = (**(code **)(*piVar5 + 0x2c))();
              if (iVar9 == 0x78) {
                iVar9 = *(int *)((int)piVar5 + 0x259);
              }
              else {
                iVar9 = 0;
              }
              uVar6 = thunk_FUN_00674fb0(iVar9);
joined_r0x0065e216:
              if ((uVar6 & uVar10 & 0x3fffffff) != 0) goto LAB_0065e218;
            }
          }
          else if ((param_4 & 0x40000000) == 0) {
            uVar6 = thunk_FUN_00674fb0(uVar6);
            goto joined_r0x0065e216;
          }
LAB_0065e27e:
          local_18 = local_18 + 1;
          bVar12 = local_18 < *(uint *)(local_1c + 0xc);
        } while ((int)local_18 < (int)*(uint *)(local_1c + 0xc));
      }
      FUN_006ae110(local_1c);
    }
    local_c = local_c + 1;
    local_10 = local_10 + 1;
    if (7 < (int)local_c) {
      return local_14;
    }
  } while( true );
}

