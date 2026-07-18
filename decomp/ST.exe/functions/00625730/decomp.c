
undefined4 __thiscall FUN_00625730(void *this)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  bool bVar6;
  undefined3 extraout_var;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
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
         ((local_20 < DAT_007fb240 && (iVar14 = (int)DAT_007fb242, iVar11 < iVar14)))))) &&
       (local_34 < 5)) {
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
      if (DAT_007fb240 < local_20) {
        local_20 = (int)DAT_007fb240;
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
            bVar6 = thunk_FUN_004961b0(sVar17,sVar18,sVar12);
            if (CONCAT31(extraout_var,bVar6) == 0) goto switchD_00625b9f_caseD_a8;
            if ((((((sVar17 < 0) || (DAT_007fb240 <= sVar17)) || (sVar18 < 0)) ||
                 ((DAT_007fb242 <= sVar18 || (sVar12 < 0)))) || (DAT_007fb244 <= sVar12)) ||
               (piVar15 = *(int **)(DAT_007fb248 +
                                   ((int)sVar12 * (int)DAT_007fb246 +
                                    (int)sVar18 * (int)DAT_007fb240 + (int)sVar17) * 8),
               piVar15 == (int *)0x0)) goto LAB_00625b06;
            if (in_stack_00000010 == 0) {
              if (((uint)piVar15[9] < 8) &&
                 ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[piVar15[9] * 0x51] < 8)))) {
                bVar1 = *(byte *)(piVar15 + 9);
                bVar2 = *(byte *)((int)this + 0x262);
                if (DAT_00808a8f == '\0') {
                  if (bVar1 == bVar2) {
LAB_006259bf:
                    iVar7 = 0;
                  }
                  else {
                    uVar9 = (uint)bVar1;
                    uVar5 = (uint)bVar2;
                    cVar3 = *(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar5);
                    if ((cVar3 == '\0') &&
                       (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar9) == '\0')) {
                      iVar7 = -2;
                    }
                    else if ((cVar3 == '\x01') &&
                            (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar9) == '\0')) {
                      iVar7 = -1;
                    }
                    else if ((cVar3 == '\0') &&
                            (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar9) == '\x01')) {
                      iVar7 = 1;
                    }
                    else {
                      if ((cVar3 != '\x01') ||
                         (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar9) != '\x01'))
                      goto LAB_006259bf;
                      iVar7 = 2;
                    }
                  }
                  bVar6 = iVar7 < 0;
                }
                else {
                  bVar6 = (&DAT_008087ea)[(uint)bVar2 * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51]
                  ;
                }
                if ((bVar6) && (iVar7 = (**(code **)(*piVar15 + 0xf8))(), iVar7 != 0))
                goto LAB_00625ad5;
              }
            }
            else {
              thunk_FUN_00416270(piVar15,&local_a,&local_8,&local_6);
              iVar7 = FUN_006acf0d(*(int *)((int)this + 0x2c2),*(int *)((int)this + 0x2c6),
                                   *(int *)((int)this + 0x2ca),(int)local_a,(int)local_8,
                                   (int)local_6);
              if (iVar7 < *(int *)(&DAT_007d0294 + (uint)*(byte *)((int)this + 0x2ad) * 4)) {
                if (iVar7 < 0x15e) {
                  uVar8 = thunk_FUN_00627670((int)this);
                }
                else if (*(int *)(&DAT_007d0294 + (uint)*(byte *)((int)this + 0x2ad) * 4) == 0) {
                  uVar8 = 0;
                }
                else {
                  uVar8 = thunk_FUN_00627670((int)this);
                }
                thunk_FUN_00601d10(*(undefined4 *)((int)this + 0x262),uVar8,(int)piVar15,
                                   (short)*(undefined4 *)((int)this + 0x18),0xffff,
                                   *(undefined4 *)
                                    (&DAT_007d04d0 + (uint)*(byte *)((int)this + 0x2ad) * 4),0x110);
                if ((piVar15[8] == 1000) || (piVar15[8] == 0x14)) {
                  *(int *)((int)this + 0x241) = piVar15[6];
                }
                if (DAT_00811798 != (void *)0x0) {
                  iVar7 = (**(code **)(*(int *)this + 0x2c))();
                  uVar8 = (**(code **)(*piVar15 + 0x2c))();
                  thunk_FUN_0061fe80(DAT_00811798,iVar13,iVar14,piVar15[9],uVar8,iVar7);
                }
              }
LAB_00625ad5:
              if (*(char *)((int)this + 0x2ad) == '\x02') {
                if (*(int *)((int)this + 0x342) != 0) {
                  uVar8 = (**(code **)(*piVar15 + 0x2c))();
                  uVar9 = thunk_FUN_006263b0(uVar8);
                  if ((*(uint *)((int)this + 0x342) & uVar9) != 0) goto LAB_00625aff;
                }
              }
              else {
LAB_00625aff:
                local_18 = 1;
              }
LAB_00625b06:
              if (((((in_stack_00000010 != 0) && (*(char *)((int)this + 0x2ad) != '\x01')) &&
                   (-1 < sVar17)) &&
                  (((sVar17 < DAT_007fb240 && (-1 < sVar18)) &&
                   ((sVar18 < DAT_007fb242 && ((-1 < sVar12 && (sVar12 < DAT_007fb244)))))))) &&
                 (piVar15 = *(int **)(DAT_007fb248 + 4 +
                                     ((int)sVar12 * (int)DAT_007fb246 +
                                      (int)sVar18 * (int)DAT_007fb240 + (int)sVar17) * 8),
                 piVar15 != (int *)0x0)) {
                uVar8 = (**(code **)(*piVar15 + 0x2c))();
                switch(uVar8) {
                case 0xa6:
                case 0xa7:
                case 0xaf:
                case 0xbd:
                  thunk_FUN_00627390((int)piVar15);
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
    bVar6 = false;
    local_20 = 0;
    local_24 = &DAT_007d03ba;
    do {
      local_2c = 3;
      do {
        iVar13 = (int)local_24[-1] + (int)*(short *)((int)this + 0x47);
        iVar14 = (int)*local_24 + (int)*(short *)((int)this + 0x49);
        iVar11 = (int)local_24[1] + (int)*(short *)((int)this + 0x4b);
        if (((((iVar13 < 0) || (iVar14 < 0)) || (iVar11 < 0)) ||
            ((DAT_007fb240 <= iVar13 || (DAT_007fb242 <= iVar14)))) || (4 < iVar11))
        goto switchD_00626071_caseD_a8;
        sVar12 = (short)iVar13;
        sVar18 = (short)iVar14;
        sVar17 = (short)iVar11;
        if (((sVar12 < 0) || (DAT_007fb240 <= sVar12)) ||
           ((sVar18 < 0 || (((DAT_007fb242 <= sVar18 || (sVar17 < 0)) || (DAT_007fb244 <= sVar17))))
           )) {
          piVar15 = (int *)0x0;
LAB_00625d60:
          if (in_stack_00000010 != 0) {
            iVar7 = *(int *)((int)this + 0x2c6);
            sVar4 = (short)(iVar7 >> 0x1f);
            if (iVar7 < 0) {
              iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar4) -
                             (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar4) -
                                  (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
            }
            iVar10 = *(int *)((int)this + 0x2c2);
            sVar4 = (short)(iVar10 >> 0x1f);
            if (iVar10 < 0) {
              iVar10 = (short)(((short)(iVar10 / 0xc9) + sVar4) -
                              (short)((longlong)iVar10 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar10 = (int)(short)(((short)(iVar10 / 0xc9) + sVar4) -
                                   (short)((longlong)iVar10 * 0x28c1979 >> 0x3f));
            }
            iVar14 = FUN_006acf90(iVar10,iVar7,iVar13,iVar14);
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
              uVar9 = iVar14 - iVar11 >> 0x1f;
              if ((int)((iVar14 - iVar11 ^ uVar9) - uVar9) < 2) {
                if (((sVar12 < 0) || (DAT_007fb240 <= sVar12)) ||
                   ((sVar18 < 0 ||
                    (((DAT_007fb242 <= sVar18 || (sVar17 < 0)) || (DAT_007fb244 <= sVar17))))))
                goto switchD_00626071_caseD_a8;
                piVar15 = *(int **)(DAT_007fb248 + 4 +
                                   ((int)sVar17 * (int)DAT_007fb246 +
                                    (int)sVar18 * (int)DAT_007fb240 + (int)sVar12) * 8);
              }
            }
            if (piVar15 != (int *)0x0) {
              uVar8 = (**(code **)(*piVar15 + 0x2c))();
              switch(uVar8) {
              case 0xa6:
              case 0xa7:
              case 0xaf:
              case 0xbd:
                thunk_FUN_00627390((int)piVar15);
              }
            }
          }
        }
        else {
          piVar15 = *(int **)(DAT_007fb248 +
                             ((int)sVar17 * (int)DAT_007fb246 + (int)sVar18 * (int)DAT_007fb240 +
                             (int)sVar12) * 8);
          if (piVar15 == (int *)0x0) goto LAB_00625d60;
          iVar7 = (**(code **)(*piVar15 + 0xf0))();
          if (iVar7 != 0) {
            if (in_stack_00000010 != 0) {
              thunk_FUN_00416270(piVar15,&local_a,&local_8,&local_6);
              iVar7 = FUN_006acf0d(*(int *)((int)this + 0x2c2),*(int *)((int)this + 0x2c6),
                                   *(int *)((int)this + 0x2ca),(int)local_a,(int)local_8,
                                   (int)local_6);
              if (iVar7 < *(int *)(&DAT_007d0294 + (uint)*(byte *)((int)this + 0x2ad) * 4)) {
                if (iVar7 < 0x15e) {
                  uVar8 = thunk_FUN_00627670((int)this);
                }
                else if (*(int *)(&DAT_007d0294 + (uint)*(byte *)((int)this + 0x2ad) * 4) == 0) {
                  uVar8 = 0;
                }
                else {
                  uVar8 = thunk_FUN_00627670((int)this);
                }
                thunk_FUN_00601d10(*(undefined4 *)((int)this + 0x262),uVar8,(int)piVar15,
                                   (short)*(undefined4 *)((int)this + 0x18),0xffff,
                                   *(undefined4 *)
                                    (&DAT_007d04d0 + (uint)*(byte *)((int)this + 0x2ad) * 4),0x110);
                if ((piVar15[8] == 1000) || (piVar15[8] == 0x14)) {
                  *(int *)((int)this + 0x241) = piVar15[6];
                }
                if (DAT_00811798 != (void *)0x0) {
                  iVar7 = (**(code **)(*(int *)this + 0x2c))();
                  uVar8 = (**(code **)(*piVar15 + 0x2c))();
                  thunk_FUN_0061fe80(DAT_00811798,iVar13,iVar14,piVar15[9],uVar8,iVar7);
                }
              }
              goto LAB_00625d60;
            }
            if (((uint)piVar15[9] < 8) &&
               ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[piVar15[9] * 0x51] < 8)))) {
              bVar1 = *(byte *)(piVar15 + 9);
              bVar2 = *(byte *)((int)this + 0x262);
              if (DAT_00808a8f == '\0') {
                if (bVar1 == bVar2) {
LAB_00625efc:
                  iVar11 = 0;
                }
                else {
                  uVar9 = (uint)bVar1;
                  uVar5 = (uint)bVar2;
                  cVar3 = *(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar5);
                  if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar9) == '\0')
                     ) {
                    iVar11 = -2;
                  }
                  else if ((cVar3 == '\x01') &&
                          (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar9) == '\0')) {
                    iVar11 = -1;
                  }
                  else if ((cVar3 == '\0') &&
                          (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar9) == '\x01')) {
                    iVar11 = 1;
                  }
                  else {
                    if ((cVar3 != '\x01') ||
                       (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar9) != '\x01'))
                    goto LAB_00625efc;
                    iVar11 = 2;
                  }
                }
                bVar16 = iVar11 < 0;
              }
              else {
                bVar16 = (&DAT_008087ea)[(uint)bVar2 * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
              }
              if (((bVar16) && (iVar11 = (**(code **)(*piVar15 + 0xf8))(), iVar11 != 0)) &&
                 (iVar11 = thunk_FUN_006264d0(this,piVar15,local_20), iVar11 != 0)) {
                if (DAT_00811798 != (void *)0x0) {
                  iVar11 = (**(code **)(*(int *)this + 0x2c))();
                  uVar8 = (**(code **)(*piVar15 + 0x2c))();
                  thunk_FUN_0061fe80(DAT_00811798,iVar13,iVar14,piVar15[9],uVar8,iVar11);
                }
                bVar6 = true;
              }
            }
          }
        }
switchD_00626071_caseD_a8:
        local_24 = local_24 + 3;
        local_2c = local_2c + -1;
      } while (local_2c != 0);
      local_20 = local_20 + 1;
    } while ((int)local_24 < 0x7d046e);
    if (bVar6) {
      local_18 = 1;
      *(undefined4 *)((int)this + 0x346) = *(undefined4 *)(DAT_00802a38 + 0xe4);
    }
  }
  return local_18;
}

