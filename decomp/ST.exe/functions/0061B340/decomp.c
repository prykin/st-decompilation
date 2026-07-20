
undefined4 __thiscall
FUN_0061b340(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int *param_7)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  undefined3 extraout_var;
  int iVar8;
  uint uVar9;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  int iVar10;
  longlong lVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  int local_14;
  int local_10;
  byte local_c;
  undefined3 uStack_b;
  undefined4 local_8;
  
  local_8 = 0;
  *param_7 = param_6;
  if ((-1 < param_1) && (-1 < param_2)) {
    if (param_3 < 0) goto LAB_0061bb57;
    if (((param_1 < SHORT_007fb240) && (param_2 < SHORT_007fb242)) && (param_3 < 5)) {
      sVar12 = (short)param_1;
      sVar13 = (short)param_2;
      sVar14 = (short)param_3;
      bVar7 = thunk_FUN_004961b0(sVar12,sVar13,sVar14);
      if (CONCAT31(extraout_var,bVar7) == 0) {
        local_10 = *(int *)((int)this + 0xa7) - *(int *)((int)this + 0xe3);
        if (((((sVar12 < 0) || (SHORT_007fb240 <= sVar12)) || (sVar13 < 0)) ||
            ((SHORT_007fb242 <= sVar13 || (sVar14 < 0)))) ||
           ((SHORT_007fb244 <= sVar14 ||
            (piVar4 = *(int **)(DAT_007fb248 +
                               ((int)SHORT_007fb246 * (int)sVar14 +
                                (int)SHORT_007fb240 * (int)sVar13 + (int)sVar12) * 8),
            piVar4 == (int *)0x0)))) {
          FUN_006e3310(DAT_00807598,(*(int *)((int)DAT_00807598 + 0x380) * param_4) / 0xc9,
                       (int *)((*(int *)((int)DAT_00807598 + 0x380) * param_5) / 0xc9),param_3,
                       &local_14);
          lVar11 = Library::MSVCRT::__ftol();
          iVar10 = (int)(short)lVar11;
          iVar8 = param_3 + 1;
          iVar5 = local_14;
          if (local_14 <= iVar8) {
            iVar5 = iVar8;
          }
          if (local_10 < 0) {
            if (iVar10 < param_6) {
              return local_8;
            }
            if (((local_14 <= iVar8) && (iVar8 < 5)) &&
               (bVar7 = thunk_FUN_004961b0(sVar12,sVar13,sVar14 + 1),
               CONCAT31(extraout_var_00,bVar7) == 0)) {
              return 3;
            }
            if (iVar5 * 200 < iVar10) {
              return 3;
            }
          }
          else {
            if (iVar10 <= param_6) {
              return local_8;
            }
            if ((iVar8 < 5) &&
               (bVar7 = thunk_FUN_004961b0(sVar12,sVar13,sVar14 + -1),
               CONCAT31(extraout_var_01,bVar7) != 0)) {
              *param_7 = param_3 * 200;
              return 1;
            }
          }
          *param_7 = iVar10;
          return 2;
        }
        if (0 < local_10) {
          iVar8 = *(int *)((int)this + 0xcf);
          sVar12 = (short)(iVar8 >> 0x1f);
          if (iVar8 < 0) {
            iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar12) -
                           (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar12) -
                                (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
          }
          if (iVar8 == param_1) {
            iVar8 = *(int *)((int)this + 0xd3);
            sVar12 = (short)(iVar8 >> 0x1f);
            if (iVar8 < 0) {
              iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar12) -
                             (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar12) -
                                  (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
            }
            if (iVar8 == param_2) {
              iVar8 = *(int *)((int)this + 0xd7);
              sVar12 = (short)(iVar8 >> 0x1f);
              if (iVar8 < 0) {
                iVar8 = (short)(((short)(iVar8 / 200) + sVar12) -
                               (short)((longlong)iVar8 * 0x51eb851f >> 0x3f)) + -1;
              }
              else {
                iVar8 = (int)(short)(((short)(iVar8 / 200) + sVar12) -
                                    (short)((longlong)iVar8 * 0x51eb851f >> 0x3f));
              }
              if (iVar8 == param_3) {
                return local_8;
              }
            }
          }
          iVar8 = param_3 * 0xc9 + 0x97;
          if (param_6 < iVar8) {
            return local_8;
          }
          *param_7 = iVar8;
          return 2;
        }
        if (((((uint)piVar4[9] < 8) &&
             ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[piVar4[9] * 0x51] < 8)))) &&
            (piVar4[8] == 1000)) &&
           ((iVar8 = (**(code **)(*piVar4 + 0xf0))(), iVar8 != 0 &&
            (iVar8 = (**(code **)(*piVar4 + 0xf8))(), iVar8 != 0)))) {
          bVar1 = *(byte *)(piVar4 + 9);
          bVar2 = *(byte *)((int)this + 0x51);
          _local_c = CONCAT31(uStack_b,bVar1);
          local_10 = CONCAT31(local_10._1_3_,bVar2);
          if (DAT_00808a8f == '\0') {
            if (bVar1 == bVar2) {
LAB_0061b627:
              iVar8 = 0;
            }
            else {
              uVar9 = (uint)bVar1;
              uVar6 = (uint)bVar2;
              cVar3 = *(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar6);
              if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar9) == '\0')) {
                iVar8 = -2;
              }
              else if ((cVar3 == '\x01') &&
                      (*(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar9) == '\0')) {
                iVar8 = -1;
              }
              else if ((cVar3 == '\0') &&
                      (*(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar9) == '\x01')) {
                iVar8 = 1;
              }
              else {
                if ((cVar3 != '\x01') ||
                   (*(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar9) != '\x01')) goto LAB_0061b627;
                iVar8 = 2;
              }
            }
            bVar7 = iVar8 < 0;
          }
          else {
            bVar7 = (&DAT_008087ea)[(uint)bVar2 * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
          }
          if (bVar7) {
            uVar9 = thunk_FUN_00601500((void *)((int)this + 0x20),param_4,param_5,param_6,
                                       *(int *)((int)this + 0xdb),*(int *)((int)this + 0xdf),
                                       *(int *)((int)this + 0xe3),*(int *)((int)this + 0x51),
                                       DAT_007e66ac,*(int *)((int)this + 0x85),
                                       *(undefined2 *)((int)this + 0x89),0xb3,0,0);
            if ((uVar9 != 2) && (uVar9 != 3)) {
              return local_8;
            }
            iVar8 = *(int *)((int)this + 0x93);
            goto LAB_0061b6ac;
          }
        }
        iVar8 = param_3 * 0xc9 + 0x96;
        goto LAB_0061ba9b;
      }
      if (sVar12 < 0) {
        return local_8;
      }
      if (SHORT_007fb240 <= sVar12) {
        return local_8;
      }
      if (sVar13 < 0) {
        return local_8;
      }
      if (SHORT_007fb242 <= sVar13) {
        return local_8;
      }
      if (sVar14 < 0) {
        return local_8;
      }
      if (SHORT_007fb244 <= sVar14) {
        return local_8;
      }
      piVar4 = *(int **)(DAT_007fb248 +
                        ((int)SHORT_007fb246 * (int)sVar14 + (int)SHORT_007fb240 * (int)sVar13 +
                        (int)sVar12) * 8);
      if (piVar4 == (int *)0x0) {
        return local_8;
      }
      if (7 < (uint)piVar4[9]) {
        return local_8;
      }
      if ((DAT_00802a38 != 0) && (7 < (byte)(&DAT_008087e9)[piVar4[9] * 0x51])) {
        return local_8;
      }
      if (piVar4[8] != 1000) {
        return local_8;
      }
      bVar1 = *(byte *)(piVar4 + 9);
      bVar2 = *(byte *)((int)this + 0x51);
      local_10 = CONCAT31(local_10._1_3_,bVar1);
      _local_c = CONCAT31(uStack_b,bVar2);
      if (DAT_00808a8f == '\0') {
        if (bVar1 == bVar2) {
LAB_0061b993:
          iVar8 = 0;
        }
        else {
          uVar9 = (uint)bVar1;
          uVar6 = (uint)bVar2;
          cVar3 = *(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar6);
          if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar9) == '\0')) {
            iVar8 = -2;
          }
          else if ((cVar3 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar9) == '\0'))
          {
            iVar8 = -1;
          }
          else if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar9) == '\x01'))
          {
            iVar8 = 1;
          }
          else {
            if ((cVar3 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar9) != '\x01'))
            goto LAB_0061b993;
            iVar8 = 2;
          }
        }
        bVar7 = iVar8 < 0;
      }
      else {
        bVar7 = (&DAT_008087ea)[(uint)bVar2 * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
      }
      if (bVar7) {
        iVar8 = (**(code **)(*piVar4 + 0xf0))();
        if (iVar8 == 0) {
          return local_8;
        }
        iVar8 = (**(code **)(*piVar4 + 0xf8))();
        if (iVar8 == 0) {
          return local_8;
        }
        uVar9 = thunk_FUN_00601500((void *)((int)this + 0x20),param_4,param_5,param_6,
                                   *(int *)((int)this + 0xdb),*(int *)((int)this + 0xdf),
                                   *(int *)((int)this + 0xe3),*(int *)((int)this + 0x51),
                                   DAT_007e66ac,*(int *)((int)this + 0x85),
                                   *(undefined2 *)((int)this + 0x89),0xb3,0,0);
        if ((uVar9 != 2) && (uVar9 != 3)) {
          return local_8;
        }
        iVar8 = *(int *)((int)this + 0x93);
LAB_0061b6ac:
        iVar8 = thunk_FUN_0061c910(this,uVar9,iVar8,param_1,param_2,param_3,param_4,param_5,param_6)
        ;
        *(int *)((int)this + 0x93) = iVar8;
        if (iVar8 != 5) {
          return local_8;
        }
        *(undefined4 *)((int)this + 0xaf) = 0x19;
        *(undefined4 *)((int)this + 0xc0) = 0xb;
        *(undefined4 *)((int)this + 0xb3) = 0x14;
        *(undefined4 *)((int)this + 0xbc) = 0;
        *(undefined4 *)((int)this + 0xb7) = 0;
        *(undefined4 *)((int)this + 0xab) = 0;
        return 3;
      }
      if (*(int *)((int)this + 0xa7) != *(int *)((int)this + 0xe3) &&
          -1 < *(int *)((int)this + 0xa7) - *(int *)((int)this + 0xe3)) {
        iVar8 = *(int *)((int)this + 0xcf);
        sVar12 = (short)(iVar8 >> 0x1f);
        if (iVar8 < 0) {
          iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar12) -
                         (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar12) -
                              (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
        }
        if (iVar8 == param_1) {
          iVar8 = *(int *)((int)this + 0xd3);
          sVar12 = (short)(iVar8 >> 0x1f);
          if (iVar8 < 0) {
            iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar12) -
                           (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar12) -
                                (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
          }
          if (iVar8 == param_2) {
            iVar8 = *(int *)((int)this + 0xd7);
            sVar12 = (short)(iVar8 >> 0x1f);
            if (iVar8 < 0) {
              iVar8 = (short)(((short)(iVar8 / 200) + sVar12) -
                             (short)((longlong)iVar8 * 0x51eb851f >> 0x3f)) + -1;
            }
            else {
              iVar8 = (int)(short)(((short)(iVar8 / 200) + sVar12) -
                                  (short)((longlong)iVar8 * 0x51eb851f >> 0x3f));
            }
            if (iVar8 == param_3) {
              return local_8;
            }
          }
        }
        iVar8 = param_3 * 0xc9 + 0x97;
        if (param_6 < iVar8) {
          return local_8;
        }
        *param_7 = iVar8;
        return 2;
      }
      iVar8 = param_3 * 0xc9 + 0x32;
LAB_0061ba9b:
      if (iVar8 < param_6) {
        return local_8;
      }
      *param_7 = iVar8;
      return 2;
    }
  }
  if (-1 < param_3) {
    if (param_3 < 5) {
      local_8 = 4;
    }
    return local_8;
  }
LAB_0061bb57:
  *param_7 = 0;
  return 2;
}

