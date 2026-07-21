
undefined4 __thiscall FUN_00625730(void *this)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  bool bVar5;
  undefined3 extraout_var;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  Global_sub_006263B0_param_1Enum GVar9;
  uint uVar10;
  int iVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  STWorldObject *pSVar15;
  bool bVar16;
  int in_stack_00000010;
  short sVar17;
  short sVar18;
  int local_34;
  int local_2c;
  int local_28;
  short *local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  short local_a;
  short local_8;
  short local_6;
  
  local_18 = 0;
  switch((uint)*(byte *)((int)this + 0x2ad)) {
  case 0:
  case 2:
  case 3:
    local_20 = (int)*(short *)((int)this + 0x47);
    iVar11 = (int)*(short *)((int)this + 0x49);
    local_34 = (int)*(short *)((int)this + 0x4b);
    if ((((-1 < local_20) && (-1 < iVar11)) &&
        ((-1 < local_34 &&
         ((local_20 < g_worldGrid.sizeX && (iVar14 = (int)g_worldGrid.sizeY, iVar11 < iVar14))))))
       && (local_34 < 5)) {
      iVar13 = *(int *)(&DAT_007d03a8 + (uint)*(byte *)((int)this + 0x2ad) * 4);
      local_1c = iVar11 - iVar13;
      if (local_1c < 0) {
        local_1c = 0;
      }
      local_28 = local_20 - iVar13;
      if (local_28 < 0) {
        local_28 = 0;
      }
      iVar11 = iVar13 + 1 + iVar11;
      if (iVar14 < iVar11) {
        iVar11 = iVar14;
      }
      local_20 = iVar13 + 1 + local_20;
      if (g_worldGrid.sizeX < local_20) {
        local_20 = (int)g_worldGrid.sizeX;
      }
      local_14 = local_34 - iVar13;
      if (local_14 < 0) {
        local_14 = 0;
      }
      local_34 = iVar13 + 1 + local_34;
      if (5 < local_34) {
        local_34 = 5;
      }
      iVar14 = local_1c;
      if (local_14 < local_34) {
        do {
          while (iVar13 = local_28, iVar11 <= iVar14) {
            local_14 = local_14 + 1;
            iVar14 = local_1c;
            if (local_34 <= local_14) {
              return local_18;
            }
          }
          for (; iVar13 < local_20; iVar13 = iVar13 + 1) {
            sVar17 = (short)iVar13;
            sVar18 = (short)iVar14;
            sVar12 = (short)local_14;
            bVar5 = thunk_FUN_004961b0(sVar17,sVar18,sVar12);
            if (CONCAT31(extraout_var,bVar5) == 0) goto switchD_00625b9f_caseD_a8;
            if ((((((sVar17 < 0) || (g_worldGrid.sizeX <= sVar17)) || (sVar18 < 0)) ||
                 ((g_worldGrid.sizeY <= sVar18 || (sVar12 < 0)))) || (g_worldGrid.sizeZ <= sVar12))
               || (pSVar15 = g_worldGrid.cells
                             [(int)sVar12 * (int)g_worldGrid.planeStride +
                              (int)sVar18 * (int)g_worldGrid.sizeX + (int)sVar17].objects[0],
                  pSVar15 == (STWorldObject *)0x0)) goto LAB_00625b06;
            if (in_stack_00000010 == 0) {
              if ((pSVar15[1].vtable < (STWorldObjectVTable *)0x8) &&
                 ((PTR_00802a38 == (STPlaySystemC *)0x0 ||
                  ((byte)(&DAT_008087e9)[(int)pSVar15[1].vtable * 0x51] < 8)))) {
                bVar1 = *(byte *)&pSVar15[1].vtable;
                bVar2 = *(byte *)((int)this + 0x262);
                if (DAT_00808a8f == '\0') {
                  if (bVar1 == bVar2) {
LAB_006259bf:
                    iVar6 = 0;
                  }
                  else {
                    bVar3 = g_playerRelationMatrix[bVar1][bVar2];
                    if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                      iVar6 = -2;
                    }
                    else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                      iVar6 = -1;
                    }
                    else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 1)) {
                      iVar6 = 1;
                    }
                    else {
                      if ((bVar3 != 1) || (g_playerRelationMatrix[bVar2][bVar1] != 1))
                      goto LAB_006259bf;
                      iVar6 = 2;
                    }
                  }
                  bVar5 = iVar6 < 0;
                }
                else {
                  bVar5 = (&DAT_008087ea)[(uint)bVar2 * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51]
                  ;
                }
                if ((bVar5) && (iVar6 = (*pSVar15->vtable[5].slots_00_28[2])(), iVar6 != 0))
                goto LAB_00625ad5;
              }
            }
            else {
              thunk_FUN_00416270(pSVar15,&local_a,(int *)&local_8,(int *)&local_6);
              iVar6 = FUN_006acf0d(*(int *)((int)this + 0x2c2),*(int *)((int)this + 0x2c6),
                                   *(int *)((int)this + 0x2ca),(int)local_a,(int)local_8,
                                   (int)local_6);
              if (iVar6 < *(int *)(&DAT_007d0294 + (uint)*(byte *)((int)this + 0x2ad) * 4)) {
                if (iVar6 < 0x15e) {
                  uVar7 = thunk_FUN_00627670((int)this);
                }
                else if (*(int *)(&DAT_007d0294 + (uint)*(byte *)((int)this + 0x2ad) * 4) == 0) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = thunk_FUN_00627670((int)this);
                }
                thunk_FUN_00601d10(*(undefined4 *)((int)this + 0x262),uVar7,(int)pSVar15,
                                   (short)*(undefined4 *)((int)this + 0x18),0xffff,
                                   *(undefined4 *)
                                    (&DAT_007d04d0 + (uint)*(byte *)((int)this + 0x2ad) * 4),0x110);
                if ((pSVar15->value_20 == 1000) || (pSVar15->value_20 == 0x14)) {
                  *(undefined4 *)((int)this + 0x241) = *(undefined4 *)&pSVar15->field_0x18;
                }
                if (DAT_00811798 != (void *)0x0) {
                  iVar6 = (**(code **)(*(int *)this + 0x2c))();
                  iVar8 = (*pSVar15->vtable->GetObjectTypeId)(pSVar15);
                  thunk_FUN_0061fe80(DAT_00811798,iVar13,iVar14,(uint)pSVar15[1].vtable,iVar8,iVar6)
                  ;
                }
              }
LAB_00625ad5:
              if (*(char *)((int)this + 0x2ad) == '\x02') {
                if (*(int *)((int)this + 0x342) != 0) {
                  GVar9 = (*pSVar15->vtable->GetObjectTypeId)(pSVar15);
                  uVar10 = thunk_FUN_006263b0(GVar9);
                  if ((*(uint *)((int)this + 0x342) & uVar10) != 0) goto LAB_00625aff;
                }
              }
              else {
LAB_00625aff:
                local_18 = 1;
              }
LAB_00625b06:
              if (((((in_stack_00000010 != 0) && (*(char *)((int)this + 0x2ad) != '\x01')) &&
                   (-1 < sVar17)) &&
                  (((sVar17 < g_worldGrid.sizeX && (-1 < sVar18)) &&
                   ((sVar18 < g_worldGrid.sizeY && ((-1 < sVar12 && (sVar12 < g_worldGrid.sizeZ)))))
                   ))) && (pSVar15 = g_worldGrid.cells
                                     [(int)sVar12 * (int)g_worldGrid.planeStride +
                                      (int)sVar18 * (int)g_worldGrid.sizeX + (int)sVar17].objects[1]
                          , pSVar15 != (STWorldObject *)0x0)) {
                iVar6 = (*pSVar15->vtable->GetObjectTypeId)(pSVar15);
                switch(iVar6) {
                case 0xa6:
                case 0xa7:
                case 0xaf:
                case 0xbd:
                  thunk_FUN_00627390((int)pSVar15);
                }
              }
            }
switchD_00625b9f_caseD_a8:
          }
          iVar14 = iVar14 + 1;
        } while( true );
      }
    }
    break;
  case 1:
    bVar5 = false;
    local_20 = 0;
    local_24 = &DAT_007d03ba;
    do {
      local_2c = 3;
      do {
        iVar13 = (int)local_24[-1] + (int)*(short *)((int)this + 0x47);
        iVar14 = (int)*local_24 + (int)*(short *)((int)this + 0x49);
        iVar11 = (int)local_24[1] + (int)*(short *)((int)this + 0x4b);
        if (((((iVar13 < 0) || (iVar14 < 0)) || (iVar11 < 0)) ||
            ((g_worldGrid.sizeX <= iVar13 || (g_worldGrid.sizeY <= iVar14)))) || (4 < iVar11))
        goto cf_continue_loop_0062607F;
        sVar12 = (short)iVar13;
        sVar18 = (short)iVar14;
        sVar17 = (short)iVar11;
        if (((sVar12 < 0) || (g_worldGrid.sizeX <= sVar12)) ||
           ((sVar18 < 0 ||
            (((g_worldGrid.sizeY <= sVar18 || (sVar17 < 0)) || (g_worldGrid.sizeZ <= sVar17)))))) {
          pSVar15 = (STWorldObject *)0x0;
LAB_00625d60:
          if (in_stack_00000010 != 0) {
            iVar6 = *(int *)((int)this + 0x2c6);
            sVar4 = (short)(iVar6 >> 0x1f);
            if (iVar6 < 0) {
              iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar4) -
                             (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar4) -
                                  (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
            }
            iVar8 = *(int *)((int)this + 0x2c2);
            sVar4 = (short)(iVar8 >> 0x1f);
            if (iVar8 < 0) {
              iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar4) -
                             (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar4) -
                                  (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
            }
            iVar14 = FUN_006acf90(iVar8,iVar6,iVar13,iVar14);
            if (iVar14 < 2) {
              iVar14 = *(int *)((int)this + 0x2c2);
              sVar4 = (short)(iVar14 >> 0x1f);
              if (iVar14 < 0) {
                iVar14 = (short)(((short)(iVar14 / 0xc9) + sVar4) -
                                (short)((longlong)iVar14 * 0x28c1979 >> 0x3f)) + -1;
              }
              else {
                iVar14 = (int)(short)(((short)(iVar14 / 0xc9) + sVar4) -
                                     (short)((longlong)iVar14 * 0x28c1979 >> 0x3f));
              }
              uVar10 = iVar14 - iVar11 >> 0x1f;
              if ((int)((iVar14 - iVar11 ^ uVar10) - uVar10) < 2) {
                if (((sVar12 < 0) || (g_worldGrid.sizeX <= sVar12)) ||
                   ((sVar18 < 0 ||
                    (((g_worldGrid.sizeY <= sVar18 || (sVar17 < 0)) || (g_worldGrid.sizeZ <= sVar17)
                     ))))) goto cf_continue_loop_0062607F;
                pSVar15 = g_worldGrid.cells
                          [(int)sVar17 * (int)g_worldGrid.planeStride +
                           (int)sVar18 * (int)g_worldGrid.sizeX + (int)sVar12].objects[1];
              }
            }
            if (pSVar15 != (STWorldObject *)0x0) {
              iVar11 = (*pSVar15->vtable->GetObjectTypeId)(pSVar15);
              switch(iVar11) {
              case 0xa6:
              case 0xa7:
              case 0xaf:
              case 0xbd:
                thunk_FUN_00627390((int)pSVar15);
              }
            }
          }
        }
        else {
          pSVar15 = g_worldGrid.cells
                    [(int)sVar17 * (int)g_worldGrid.planeStride +
                     (int)sVar18 * (int)g_worldGrid.sizeX + (int)sVar12].objects[0];
          if (pSVar15 == (STWorldObject *)0x0) goto LAB_00625d60;
          iVar6 = (*pSVar15->vtable[5].slots_00_28[0])();
          if (iVar6 != 0) {
            if (in_stack_00000010 != 0) {
              thunk_FUN_00416270(pSVar15,&local_a,(int *)&local_8,(int *)&local_6);
              iVar6 = FUN_006acf0d(*(int *)((int)this + 0x2c2),*(int *)((int)this + 0x2c6),
                                   *(int *)((int)this + 0x2ca),(int)local_a,(int)local_8,
                                   (int)local_6);
              if (iVar6 < *(int *)(&DAT_007d0294 + (uint)*(byte *)((int)this + 0x2ad) * 4)) {
                if (iVar6 < 0x15e) {
                  uVar7 = thunk_FUN_00627670((int)this);
                }
                else if (*(int *)(&DAT_007d0294 + (uint)*(byte *)((int)this + 0x2ad) * 4) == 0) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = thunk_FUN_00627670((int)this);
                }
                thunk_FUN_00601d10(*(undefined4 *)((int)this + 0x262),uVar7,(int)pSVar15,
                                   (short)*(undefined4 *)((int)this + 0x18),0xffff,
                                   *(undefined4 *)
                                    (&DAT_007d04d0 + (uint)*(byte *)((int)this + 0x2ad) * 4),0x110);
                if ((pSVar15->value_20 == 1000) || (pSVar15->value_20 == 0x14)) {
                  *(undefined4 *)((int)this + 0x241) = *(undefined4 *)&pSVar15->field_0x18;
                }
                if (DAT_00811798 != (void *)0x0) {
                  iVar6 = (**(code **)(*(int *)this + 0x2c))();
                  iVar8 = (*pSVar15->vtable->GetObjectTypeId)(pSVar15);
                  thunk_FUN_0061fe80(DAT_00811798,iVar13,iVar14,(uint)pSVar15[1].vtable,iVar8,iVar6)
                  ;
                }
              }
              goto LAB_00625d60;
            }
            if ((pSVar15[1].vtable < (STWorldObjectVTable *)0x8) &&
               ((PTR_00802a38 == (STPlaySystemC *)0x0 ||
                ((byte)(&DAT_008087e9)[(int)pSVar15[1].vtable * 0x51] < 8)))) {
              bVar1 = *(byte *)&pSVar15[1].vtable;
              bVar2 = *(byte *)((int)this + 0x262);
              if (DAT_00808a8f == '\0') {
                if (bVar1 == bVar2) {
LAB_00625efc:
                  iVar11 = 0;
                }
                else {
                  bVar3 = g_playerRelationMatrix[bVar1][bVar2];
                  if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                    iVar11 = -2;
                  }
                  else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                    iVar11 = -1;
                  }
                  else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 1)) {
                    iVar11 = 1;
                  }
                  else {
                    if ((bVar3 != 1) || (g_playerRelationMatrix[bVar2][bVar1] != 1))
                    goto LAB_00625efc;
                    iVar11 = 2;
                  }
                }
                bVar16 = iVar11 < 0;
              }
              else {
                bVar16 = (&DAT_008087ea)[(uint)bVar2 * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
              }
              if (((bVar16) && (iVar11 = (*pSVar15->vtable[5].slots_00_28[2])(), iVar11 != 0)) &&
                 (iVar11 = thunk_FUN_006264d0(this,(int *)pSVar15,local_20), iVar11 != 0)) {
                if (DAT_00811798 != (void *)0x0) {
                  iVar11 = (**(code **)(*(int *)this + 0x2c))();
                  iVar6 = (*pSVar15->vtable->GetObjectTypeId)(pSVar15);
                  thunk_FUN_0061fe80(DAT_00811798,iVar13,iVar14,(uint)pSVar15[1].vtable,iVar6,iVar11
                                    );
                }
                bVar5 = true;
              }
            }
          }
        }
cf_continue_loop_0062607F:
        local_24 = local_24 + 3;
        local_2c = local_2c + -1;
      } while (local_2c != 0);
      local_20 = local_20 + 1;
    } while ((int)local_24 < 0x7d046e);
    if (bVar5) {
      local_18 = 1;
      *(undefined4 *)((int)this + 0x346) = PTR_00802a38->field_00E4;
    }
  }
  return local_18;
}

