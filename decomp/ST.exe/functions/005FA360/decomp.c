
undefined4 __thiscall
FUN_005fa360(void *this,undefined4 *param_1,int param_2,int param_3,int param_4,int *param_5,
            int *param_6,int *param_7)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined3 extraout_var;
  int iVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  int local_14;
  int local_10;
  int local_8;
  
  local_14 = param_4;
  iVar3 = FUN_006acf90(*(int *)((int)this + 0x27d),*(int *)((int)this + 0x281),param_2,param_3);
  if (iVar3 < 7) {
    *param_5 = *(int *)((int)this + 0x27d);
    *param_6 = *(int *)((int)this + 0x281);
    *param_7 = *(int *)((int)this + 0x285);
    *param_1 = 0;
    return 1;
  }
  iVar4 = thunk_FUN_005fa5e0(param_2,param_3,*(int *)((int)this + 0x27d),*(int *)((int)this + 0x281)
                            );
  local_8 = 0;
  bVar1 = false;
  iVar3 = param_2;
  iVar6 = param_3;
  do {
    if (bVar1) goto LAB_005fa524;
    do {
      local_10 = 0;
      iVar5 = param_4;
      do {
        local_14 = iVar5;
        if (4 < iVar5) {
          local_14 = 0;
        }
        iVar3 = *(short *)(&DAT_007ce7b0 + (iVar4 + local_8) * 4) + param_2;
        iVar6 = *(short *)(&DAT_007ce7b2 + (iVar4 + local_8) * 4) + param_3;
        if ((((-1 < iVar3) && (iVar3 < g_worldGrid.sizeX)) && (-1 < iVar6)) &&
           (((iVar6 < g_worldGrid.sizeY && (-1 < local_14)) && (local_14 < g_worldGrid.sizeZ)))) {
          sVar7 = (short)iVar3;
          sVar8 = (short)iVar6;
          sVar9 = (short)local_14;
          bVar2 = thunk_FUN_004961b0(sVar7,sVar8,sVar9);
          if ((CONCAT31(extraout_var,bVar2) != 0) &&
             (((sVar7 < 0 || (g_worldGrid.sizeX <= sVar7)) ||
              ((sVar8 < 0 ||
               ((((g_worldGrid.sizeY <= sVar8 || (sVar9 < 0)) || (g_worldGrid.sizeZ <= sVar9)) ||
                (g_worldGrid.cells
                 [(int)g_worldGrid.planeStride * (int)sVar9 + (int)g_worldGrid.sizeX * (int)sVar8 +
                  (int)sVar7].objects[0] == (STWorldObject *)0x0)))))))) {
            bVar1 = true;
            break;
          }
        }
        iVar5 = local_14 + 1;
        local_10 = local_10 + 1;
      } while (local_10 < 5);
    } while ((local_8 != 0) && (local_8 = -local_8, local_8 < 0));
    local_8 = local_8 + 1;
  } while (local_8 < 8);
  if (!bVar1) {
    return 0;
  }
LAB_005fa524:
  *param_5 = iVar3;
  *param_6 = iVar6;
  *param_7 = local_14;
  *param_1 = 1;
  return 1;
}

