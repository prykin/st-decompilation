
undefined4 __thiscall
FUN_00484020(void *this,int param_1,short *param_2,short *param_3,short *param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  ushort *puVar11;
  int iVar12;
  short sStack_56;
  undefined2 uStack_52;
  undefined4 local_50 [2];
  undefined4 local_48 [2];
  int local_40;
  int local_3c;
  undefined4 local_38;
  short *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  STWorldObject *local_1c;
  int local_18;
  undefined4 local_14;
  STWorldObject *local_10;
  undefined *local_c;
  int local_8;
  
  local_38 = 0;
  if (param_1 == 6) {
    local_8 = 0x2c;
    local_c = &DAT_007a9538;
  }
  else if (param_1 == 7) {
    local_8 = 0x2c;
    local_c = &DAT_007a9640;
  }
  else if (param_1 == 8) {
    local_8 = 0x98;
    local_c = &DAT_007a9748;
  }
  else {
    local_8 = -1;
    local_c = (undefined *)0x0;
  }
  sVar3 = *(short *)((int)this + 0x800);
  sVar4 = *(short *)((int)this + 0x802);
  param_1 = CONCAT22((short)((uint)this >> 0x10),sVar4);
  sVar1 = *(short *)((int)this + 0x804);
  if (((((((sVar3 < 0) || (g_worldGrid.sizeX <= sVar3)) || (sVar4 < 0)) ||
        ((g_worldGrid.sizeY <= sVar4 || (sVar1 < 0)))) || (g_worldGrid.sizeZ <= sVar1)) ||
      (local_10 = g_worldGrid.cells
                  [(int)sVar1 * (int)g_worldGrid.planeStride + (int)sVar4 * (int)g_worldGrid.sizeX +
                   (int)sVar3].objects[0], local_10 == (STWorldObject *)0x0)) &&
     ((((sVar3 < 0 || (g_worldGrid.sizeX <= sVar3)) ||
       ((sVar4 < 0 ||
        (((g_worldGrid.sizeY <= sVar4 || (sVar1 < 0)) || (g_worldGrid.sizeZ <= sVar1)))))) ||
      (local_10 = g_worldGrid.cells
                  [(int)sVar1 * (int)g_worldGrid.planeStride + (int)sVar4 * (int)g_worldGrid.sizeX +
                   (int)sVar3].objects[1], local_10 == (STWorldObject *)0x0)))) {
    return 0;
  }
  thunk_FUN_00416270(local_10,(undefined2 *)&local_14,&local_18,&param_1);
  local_30 = 0;
  if (0 < local_8) {
    local_34 = (short *)(local_c + 2);
    do {
      sVar3 = local_34[1] + *(short *)((int)this + 0x4b);
      *param_4 = sVar3;
      if ((-1 < sVar3) && ((int)sVar3 <= g_worldGrid.sizeZ + -1)) {
        sVar3 = *(short *)((int)this + 0x49) + *local_34;
        *param_3 = sVar3;
        if ((-1 < sVar3) && ((int)sVar3 <= g_worldGrid.sizeY + -1)) {
          sVar4 = local_34[-1] + *(short *)((int)this + 0x47);
          *param_2 = sVar4;
          if (-1 < sVar4) {
            local_28 = (int)g_worldGrid.sizeX;
            local_2c = (int)sVar4;
            if (local_2c <= local_28 + -1) {
              sVar1 = *param_3;
              sVar2 = *param_4;
              if ((-1 < g_pathingGrid.cells
                        [(int)sVar2 * (int)g_pathingGrid.planeStride +
                         local_2c + (int)sVar1 * (int)g_pathingGrid.sizeX]) &&
                 ((((sVar4 < 0 || (g_worldGrid.sizeX <= sVar4)) ||
                   ((sVar1 < 0 ||
                    (((g_worldGrid.sizeY <= sVar1 || (sVar2 < 0)) || (g_worldGrid.sizeZ <= sVar2))))
                   )) || (g_worldGrid.cells
                          [(int)sVar2 * (int)g_worldGrid.planeStride + sVar1 * local_28 + (int)sVar4
                          ].objects[0] == (STWorldObject *)0x0)))) {
                iVar12 = CONCAT22(sVar3 >> 0xf,sVar4) * 0xc9 + 100;
                local_c = (undefined *)
                          (CONCAT22((short)((uint)(local_28 + -1) >> 0x10),sVar1) * 0xc9 + 100);
                iVar9 = CONCAT22(sVar4 >> 0xf,sVar2) * 200 + 100;
                local_40 = iVar12;
                local_3c = iVar9;
                iVar5 = FUN_006acf0d((int)(short)iVar12,(int)(short)local_c,(int)(short)iVar9,
                                     (int)(short)local_14,(int)(short)local_18,(int)(short)param_1);
                if ((iVar5 <= *(short *)((int)this + 0x814)) &&
                   ((iVar5 < 1 ||
                    (uVar6 = (int)(short)param_1 - (int)(short)iVar9, uVar10 = (int)uVar6 >> 0x1f,
                    (int)(((uVar6 ^ uVar10) - uVar10) * 10) / iVar5 < 4)))) {
                  local_20 = (**(code **)(*(int *)this + 0x10))
                                       (iVar12,local_c,iVar9,local_14,local_18,param_1);
                  local_2c = 0;
                  if (*(char *)((int)this + 0x2b2) == '\0') {
                    return 1;
                  }
                  puVar11 = (ushort *)((int)this + 0x2a8);
                  do {
                    piVar7 = (int *)thunk_FUN_0041dc40(local_48,*(undefined4 *)(puVar11 + -1),
                                                       puVar11[1],(short)local_20);
                    sStack_56 = (short)((uint)*piVar7 >> 0x10);
                    local_28 = *piVar7 + iVar12;
                    sVar3 = (short)local_c - sStack_56;
                    local_24 = CONCAT22(uStack_52,(short)piVar7[1]) + local_3c;
                    puVar8 = (undefined4 *)
                             thunk_FUN_0041dc40(local_50,(uint)*puVar11 << 0x10,0,(short)local_20);
                    sStack_56 = (short)((uint)*puVar8 >> 0x10);
                    sVar4 = (short)local_14 + (short)*puVar8;
                    sStack_56 = (short)local_18 - sStack_56;
                    if (*(int *)((int)this + 0x736) == 0) {
                      iVar9 = STSprGameObjC::CheckRay
                                        (this,(short)local_28,sVar3,(short)local_24,sVar4,sStack_56,
                                         (short)param_1,
                                         *(STSprGameObjC_CheckRay_param_7Enum *)((int)this + 0x79a),
                                         (int *)&local_1c,0);
                      if ((iVar9 == 0) && (local_1c != local_10)) break;
                    }
                    else {
                      iVar9 = STSprGameObjC::CheckRay
                                        (this,(short)local_28,sVar3,(short)local_24,sVar4,sStack_56,
                                         (short)param_1,
                                         *(STSprGameObjC_CheckRay_param_7Enum *)((int)this + 0x79a),
                                         (int *)&local_1c,1);
                      if ((iVar9 == 0) && (local_1c != local_10)) break;
                    }
                    local_2c = local_2c + 1;
                    puVar11 = puVar11 + 3;
                    iVar12 = local_40;
                    if ((int)(uint)*(byte *)((int)this + 0x2b2) <= local_2c) {
                      return 1;
                    }
                  } while( true );
                }
              }
            }
          }
        }
      }
      local_30 = local_30 + 1;
      local_34 = local_34 + 3;
    } while (local_30 < local_8);
  }
  return local_38;
}

