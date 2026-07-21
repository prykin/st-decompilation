
undefined4 __thiscall FUN_00625730(void *this)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  Global_sub_006263B0_param_1Enum GVar8;
  uint uVar9;
  int iVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  STWorldObject *pSVar14;
  bool bVar15;
  bool bVar16;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
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
    iVar10 = (int)*(short *)((int)this + 0x49);
    local_34 = (int)*(short *)((int)this + 0x4b);
    if ((((-1 < local_20) && (-1 < iVar10)) &&
        ((-1 < local_34 &&
         ((local_20 < g_worldGrid.sizeX && (iVar13 = (int)g_worldGrid.sizeY, iVar10 < iVar13))))))
       && (local_34 < 5)) {
      iVar12 = *(int *)(&DAT_007d03a8 + (uint)*(byte *)((int)this + 0x2ad) * 4);
      local_1c = iVar10 - iVar12;
      if (local_1c < 0) {
        local_1c = 0;
      }
      local_28 = local_20 - iVar12;
      if (local_28 < 0) {
        local_28 = 0;
      }
      iVar10 = iVar12 + 1 + iVar10;
      if (iVar13 < iVar10) {
        iVar10 = iVar13;
      }
      local_20 = iVar12 + 1 + local_20;
      if (g_worldGrid.sizeX < local_20) {
        local_20 = (int)g_worldGrid.sizeX;
      }
      local_14 = local_34 - iVar12;
      if (local_14 < 0) {
        local_14 = 0;
      }
      local_34 = iVar12 + 1 + local_34;
      if (5 < local_34) {
        local_34 = 5;
      }
      iVar13 = local_1c;
      if (local_14 < local_34) {
        do {
          while (iVar12 = local_28, iVar10 <= iVar13) {
            local_14 = local_14 + 1;
            iVar13 = local_1c;
            if (local_34 <= local_14) {
              return local_18;
            }
          }
          for (; iVar12 < local_20; iVar12 = iVar12 + 1) {
            sVar17 = (short)iVar12;
            sVar18 = (short)iVar13;
            sVar11 = (short)local_14;
            iVar5 = thunk_FUN_004961b0(sVar17,sVar18,sVar11);
            if (iVar5 == 0) goto switchD_00625b9f_caseD_a8;
            if ((((((sVar17 < 0) || (g_worldGrid.sizeX <= sVar17)) || (sVar18 < 0)) ||
                 ((g_worldGrid.sizeY <= sVar18 || (sVar11 < 0)))) || (g_worldGrid.sizeZ <= sVar11))
               || (pSVar14 = g_worldGrid.cells
                             [(int)sVar11 * (int)g_worldGrid.planeStride +
                              (int)sVar18 * (int)g_worldGrid.sizeX + (int)sVar17].objects[0],
                  pSVar14 == (STWorldObject *)0x0)) goto LAB_00625b06;
            /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
            if (in_stack_00000010 == 0) {
              if ((pSVar14[1].vtable < (STWorldObjectVTable *)0x8) &&
                 ((PTR_00802a38 == (STPlaySystemC *)0x0 ||
                  ((byte)(&DAT_008087e9)[(int)pSVar14[1].vtable * 0x51] < 8)))) {
                bVar1 = *(byte *)&pSVar14[1].vtable;
                bVar2 = *(byte *)((int)this + 0x262);
                if (DAT_00808a8f == '\0') {
                  if (bVar1 == bVar2) {
LAB_006259bf:
                    iVar5 = 0;
                  }
                  else {
                    bVar3 = g_playerRelationMatrix[bVar1][bVar2];
                    if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                      iVar5 = -2;
                    }
                    else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                      iVar5 = -1;
                    }
                    else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 1)) {
                      iVar5 = 1;
                    }
                    else {
                      if ((bVar3 != 1) || (g_playerRelationMatrix[bVar2][bVar1] != 1))
                      goto LAB_006259bf;
                      iVar5 = 2;
                    }
                  }
                  bVar15 = iVar5 < 0;
                }
                else {
                  bVar15 = (&DAT_008087ea)[(uint)bVar2 * 0x51] !=
                           (&DAT_008087ea)[(uint)bVar1 * 0x51];
                }
                if ((bVar15) && (iVar5 = (*pSVar14->vtable[5].slots_00_28[2])(), iVar5 != 0))
                goto LAB_00625ad5;
              }
            }
            else {
              thunk_FUN_00416270(pSVar14,&local_a,(int *)&local_8,(int *)&local_6);
              iVar5 = FUN_006acf0d(*(int *)((int)this + 0x2c2),*(int *)((int)this + 0x2c6),
                                   *(int *)((int)this + 0x2ca),(int)local_a,(int)local_8,
                                   (int)local_6);
              if (iVar5 < *(int *)(&DAT_007d0294 + (uint)*(byte *)((int)this + 0x2ad) * 4)) {
                if (iVar5 < 0x15e) {
                  uVar6 = thunk_FUN_00627670((int)this);
                }
                else if (*(int *)(&DAT_007d0294 + (uint)*(byte *)((int)this + 0x2ad) * 4) == 0) {
                  uVar6 = 0;
                }
                else {
                  uVar6 = thunk_FUN_00627670((int)this);
                }
                thunk_FUN_00601d10(*(undefined4 *)((int)this + 0x262),uVar6,(int)pSVar14,
                                   (short)*(undefined4 *)((int)this + 0x18),0xffff,
                                   *(undefined4 *)
                                    (&DAT_007d04d0 + (uint)*(byte *)((int)this + 0x2ad) * 4),0x110);
                if ((pSVar14->value_20 == 1000) || (pSVar14->value_20 == 0x14)) {
                  *(undefined4 *)((int)this + 0x241) = *(undefined4 *)&pSVar14->field_0x18;
                }
                if (DAT_00811798 != (void *)0x0) {
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  iVar5 = (**(code **)(*(int *)this + 0x2c))();
                  iVar7 = (*pSVar14->vtable->GetObjectTypeId)(pSVar14);
                  thunk_FUN_0061fe80(DAT_00811798,iVar12,iVar13,(uint)pSVar14[1].vtable,iVar7,iVar5)
                  ;
                }
              }
LAB_00625ad5:
              if (*(char *)((int)this + 0x2ad) == '\x02') {
                if (*(int *)((int)this + 0x342) != 0) {
                  GVar8 = (*pSVar14->vtable->GetObjectTypeId)(pSVar14);
                  uVar9 = thunk_FUN_006263b0(GVar8);
                  if ((*(uint *)((int)this + 0x342) & uVar9) != 0) goto LAB_00625aff;
                }
              }
              else {
LAB_00625aff:
                local_18 = 1;
              }
/* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
LAB_00625b06:
              if (((((in_stack_00000010 != 0) && (*(char *)((int)this + 0x2ad) != '\x01')) &&
                   (-1 < sVar17)) &&
                  (((sVar17 < g_worldGrid.sizeX && (-1 < sVar18)) &&
                   ((sVar18 < g_worldGrid.sizeY && ((-1 < sVar11 && (sVar11 < g_worldGrid.sizeZ)))))
                   ))) && (pSVar14 = g_worldGrid.cells
                                     [(int)sVar11 * (int)g_worldGrid.planeStride +
                                      (int)sVar18 * (int)g_worldGrid.sizeX + (int)sVar17].objects[1]
                          , pSVar14 != (STWorldObject *)0x0)) {
                iVar5 = (*pSVar14->vtable->GetObjectTypeId)(pSVar14);
                switch(iVar5) {
                case 0xa6:
                case 0xa7:
                case 0xaf:
                case 0xbd:
                  thunk_FUN_00627390((int)pSVar14);
                }
              }
            }
switchD_00625b9f_caseD_a8:
          }
          iVar13 = iVar13 + 1;
        } while( true );
      }
    }
    break;
  case 1:
    bVar15 = false;
    local_20 = 0;
    local_24 = &DAT_007d03ba;
    do {
      local_2c = 3;
      do {
        iVar12 = (int)local_24[-1] + (int)*(short *)((int)this + 0x47);
        iVar13 = (int)*local_24 + (int)*(short *)((int)this + 0x49);
        iVar10 = (int)local_24[1] + (int)*(short *)((int)this + 0x4b);
        if (((((iVar12 < 0) || (iVar13 < 0)) || (iVar10 < 0)) ||
            ((g_worldGrid.sizeX <= iVar12 || (g_worldGrid.sizeY <= iVar13)))) || (4 < iVar10))
        goto cf_continue_loop_0062607F;
        sVar11 = (short)iVar12;
        sVar18 = (short)iVar13;
        sVar17 = (short)iVar10;
        if (((sVar11 < 0) || (g_worldGrid.sizeX <= sVar11)) ||
           ((sVar18 < 0 ||
            (((g_worldGrid.sizeY <= sVar18 || (sVar17 < 0)) || (g_worldGrid.sizeZ <= sVar17)))))) {
          pSVar14 = (STWorldObject *)0x0;
/* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
LAB_00625d60:
          if (in_stack_00000010 != 0) {
            iVar5 = *(int *)((int)this + 0x2c6);
            sVar4 = (short)(iVar5 >> 0x1f);
            if (iVar5 < 0) {
              iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar4) -
                             (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar4) -
                                  (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
            }
            iVar7 = *(int *)((int)this + 0x2c2);
            sVar4 = (short)(iVar7 >> 0x1f);
            if (iVar7 < 0) {
              iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar4) -
                             (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar4) -
                                  (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
            }
            iVar13 = FUN_006acf90(iVar7,iVar5,iVar12,iVar13);
            if (iVar13 < 2) {
              iVar13 = *(int *)((int)this + 0x2c2);
              sVar4 = (short)(iVar13 >> 0x1f);
              if (iVar13 < 0) {
                iVar13 = (short)(((short)(iVar13 / 0xc9) + sVar4) -
                                (short)((longlong)iVar13 * 0x28c1979 >> 0x3f)) + -1;
              }
              else {
                iVar13 = (int)(short)(((short)(iVar13 / 0xc9) + sVar4) -
                                     (short)((longlong)iVar13 * 0x28c1979 >> 0x3f));
              }
              uVar9 = iVar13 - iVar10 >> 0x1f;
              if ((int)((iVar13 - iVar10 ^ uVar9) - uVar9) < 2) {
                if (((sVar11 < 0) || (g_worldGrid.sizeX <= sVar11)) ||
                   ((sVar18 < 0 ||
                    (((g_worldGrid.sizeY <= sVar18 || (sVar17 < 0)) || (g_worldGrid.sizeZ <= sVar17)
                     ))))) goto cf_continue_loop_0062607F;
                pSVar14 = g_worldGrid.cells
                          [(int)sVar17 * (int)g_worldGrid.planeStride +
                           (int)sVar18 * (int)g_worldGrid.sizeX + (int)sVar11].objects[1];
              }
            }
            if (pSVar14 != (STWorldObject *)0x0) {
              iVar10 = (*pSVar14->vtable->GetObjectTypeId)(pSVar14);
              switch(iVar10) {
              case 0xa6:
              case 0xa7:
              case 0xaf:
              case 0xbd:
                thunk_FUN_00627390((int)pSVar14);
              }
            }
          }
        }
        else {
          pSVar14 = g_worldGrid.cells
                    [(int)sVar17 * (int)g_worldGrid.planeStride +
                     (int)sVar18 * (int)g_worldGrid.sizeX + (int)sVar11].objects[0];
          if (pSVar14 == (STWorldObject *)0x0) goto LAB_00625d60;
          iVar5 = (*pSVar14->vtable[5].slots_00_28[0])();
          if (iVar5 != 0) {
            /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
            if (in_stack_00000010 != 0) {
              thunk_FUN_00416270(pSVar14,&local_a,(int *)&local_8,(int *)&local_6);
              iVar5 = FUN_006acf0d(*(int *)((int)this + 0x2c2),*(int *)((int)this + 0x2c6),
                                   *(int *)((int)this + 0x2ca),(int)local_a,(int)local_8,
                                   (int)local_6);
              if (iVar5 < *(int *)(&DAT_007d0294 + (uint)*(byte *)((int)this + 0x2ad) * 4)) {
                if (iVar5 < 0x15e) {
                  uVar6 = thunk_FUN_00627670((int)this);
                }
                else if (*(int *)(&DAT_007d0294 + (uint)*(byte *)((int)this + 0x2ad) * 4) == 0) {
                  uVar6 = 0;
                }
                else {
                  uVar6 = thunk_FUN_00627670((int)this);
                }
                thunk_FUN_00601d10(*(undefined4 *)((int)this + 0x262),uVar6,(int)pSVar14,
                                   (short)*(undefined4 *)((int)this + 0x18),0xffff,
                                   *(undefined4 *)
                                    (&DAT_007d04d0 + (uint)*(byte *)((int)this + 0x2ad) * 4),0x110);
                if ((pSVar14->value_20 == 1000) || (pSVar14->value_20 == 0x14)) {
                  *(undefined4 *)((int)this + 0x241) = *(undefined4 *)&pSVar14->field_0x18;
                }
                if (DAT_00811798 != (void *)0x0) {
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  iVar5 = (**(code **)(*(int *)this + 0x2c))();
                  iVar7 = (*pSVar14->vtable->GetObjectTypeId)(pSVar14);
                  thunk_FUN_0061fe80(DAT_00811798,iVar12,iVar13,(uint)pSVar14[1].vtable,iVar7,iVar5)
                  ;
                }
              }
              goto LAB_00625d60;
            }
            if ((pSVar14[1].vtable < (STWorldObjectVTable *)0x8) &&
               ((PTR_00802a38 == (STPlaySystemC *)0x0 ||
                ((byte)(&DAT_008087e9)[(int)pSVar14[1].vtable * 0x51] < 8)))) {
              bVar1 = *(byte *)&pSVar14[1].vtable;
              bVar2 = *(byte *)((int)this + 0x262);
              if (DAT_00808a8f == '\0') {
                if (bVar1 == bVar2) {
LAB_00625efc:
                  iVar10 = 0;
                }
                else {
                  bVar3 = g_playerRelationMatrix[bVar1][bVar2];
                  if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                    iVar10 = -2;
                  }
                  else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                    iVar10 = -1;
                  }
                  else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 1)) {
                    iVar10 = 1;
                  }
                  else {
                    if ((bVar3 != 1) || (g_playerRelationMatrix[bVar2][bVar1] != 1))
                    goto LAB_00625efc;
                    iVar10 = 2;
                  }
                }
                bVar16 = iVar10 < 0;
              }
              else {
                bVar16 = (&DAT_008087ea)[(uint)bVar2 * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
              }
              if (((bVar16) && (iVar10 = (*pSVar14->vtable[5].slots_00_28[2])(), iVar10 != 0)) &&
                 (iVar10 = thunk_FUN_006264d0(this,(int *)pSVar14,local_20), iVar10 != 0)) {
                if (DAT_00811798 != (void *)0x0) {
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  iVar10 = (**(code **)(*(int *)this + 0x2c))();
                  iVar5 = (*pSVar14->vtable->GetObjectTypeId)(pSVar14);
                  thunk_FUN_0061fe80(DAT_00811798,iVar12,iVar13,(uint)pSVar14[1].vtable,iVar5,iVar10
                                    );
                }
                bVar15 = true;
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
    if (bVar15) {
      local_18 = 1;
      *(uint *)((int)this + 0x346) = PTR_00802a38->field_00E4;
    }
  }
  return local_18;
}

