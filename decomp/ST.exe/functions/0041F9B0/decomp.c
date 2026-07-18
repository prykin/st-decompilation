
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STSprGameObjC::CheckRay */

undefined4 __thiscall
STSprGameObjC::CheckRay
          (STSprGameObjC *this,short param_1,short param_2,short param_3,short param_4,short param_5
          ,short param_6,int param_7,int *param_8,int param_9)

{
  STSprGameObjC SVar1;
  STSprGameObjC SVar2;
  char cVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  undefined4 uVar9;
  short sVar10;
  short sVar11;
  undefined4 unaff_ESI;
  int iVar12;
  short sVar13;
  void *unaff_EDI;
  int iVar14;
  bool bVar15;
  undefined4 local_ac;
  undefined4 local_a8 [16];
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  STSprGameObjC local_40;
  undefined3 uStack_3f;
  STSprGameObjC local_3c;
  undefined3 uStack_3b;
  STSprGameObjC local_38;
  undefined3 uStack_37;
  STSprGameObjC local_34;
  undefined3 uStack_33;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  STSprGameObjC *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_ac = DAT_00858df8;
  DAT_00858df8 = &local_ac;
  local_1c = this;
  iVar8 = __setjmp3(local_a8,0,unaff_EDI,unaff_ESI);
  if (iVar8 != 0) {
    DAT_00858df8 = (undefined4 *)local_ac;
    if (iVar8 != -0x5001fff7) {
      if (iVar8 == -0x5001fff6) {
        return 1;
      }
      iVar12 = FUN_006ad4d0(s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xb9b,0,iVar8,&DAT_007a4ccc);
      if (iVar12 != 0) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return uVar9;
      }
      FUN_006a5e40(iVar8,0,0x7a4e0c,0xb9c);
    }
    return 0;
  }
  switch(param_7) {
  case 0x9b:
  case 0xa3:
  case 0xa5:
  case 0xa6:
  case 0xa7:
  case 0xa8:
  case 0xa9:
  case 0xaa:
  case 0xab:
  case 0xaf:
  case 0xb0:
  case 0xb1:
  case 0xb2:
  case 0xb3:
  case 0xb4:
  case 0xb5:
  case 0xb9:
  case 0xbb:
  case 0xbc:
    FUN_006a5e40(-0x5001fff6,DAT_007ed77c,0x7a4e0c,0xb69);
  }
  if (param_8 != (int *)0x0) {
    *param_8 = 0;
  }
  iVar8 = FUN_006acf0d((int)param_1,(int)param_2,(int)param_3,(int)param_4,(int)param_5,(int)param_6
                      );
  bVar7 = thunk_FUN_00430750(param_7);
  local_30 = iVar8 / (int)(uint)bVar7;
  if (local_30 < 1) {
    local_30 = 1;
  }
  local_28 = 1;
  if (0 < local_30) {
    local_60 = (int)param_4 - (int)param_1;
    local_50 = (int)param_5 - (int)param_2;
    local_48 = (int)param_6 - (int)param_3;
    local_18 = (int)param_1;
    local_14 = (int)param_2;
    local_10 = (int)param_3;
    do {
      iVar12 = (local_60 * local_28) / local_30 + (int)param_1;
      iVar8 = (local_50 * local_28) / local_30 + (int)param_2;
      iVar14 = (local_48 * local_28) / local_30 + (int)param_3;
      local_64 = iVar12;
      local_5c = iVar8;
      local_54 = iVar14;
      local_8 = FUN_006acf0d(local_18,local_14,local_10,iVar12,iVar8,iVar14);
      local_8 = local_8 / 0x32;
      if (local_8 < 1) {
        local_8 = 1;
      }
      if (0 < local_8) {
        local_4c = iVar14 - local_10;
        local_68 = iVar8 - local_14;
        local_58 = iVar12 - local_18;
        local_44 = local_8;
        local_2c = local_68;
        local_24 = local_4c;
        local_20 = local_58;
        do {
          iVar8 = local_20 / local_8 + local_18;
          sVar11 = (short)(iVar8 >> 0x1f);
          if (iVar8 < 0) {
            local_c = (short)(((short)(iVar8 / 0xc9) + sVar11) -
                             (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            local_c = (int)(short)(((short)(iVar8 / 0xc9) + sVar11) -
                                  (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
          }
          iVar8 = local_2c / local_8 + local_14;
          sVar11 = (short)(iVar8 >> 0x1f);
          if (iVar8 < 0) {
            iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar11) -
                           (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar11) -
                                (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
          }
          iVar12 = local_24 / local_8 + local_10;
          sVar11 = (short)(iVar12 >> 0x1f);
          if (iVar12 < 0) {
            iVar12 = (short)(((short)(iVar12 / 200) + sVar11) -
                            (short)((longlong)iVar12 * 0x51eb851f >> 0x3f)) + -1;
          }
          else {
            iVar12 = (int)(short)(((short)(iVar12 / 200) + sVar11) -
                                 (short)((longlong)iVar12 * 0x51eb851f >> 0x3f));
          }
          sVar10 = (short)local_c;
          sVar11 = (short)iVar8;
          sVar13 = (short)iVar12;
          if (((((sVar10 < 0) || (DAT_007fb240 <= sVar10)) || (sVar11 < 0)) ||
              ((DAT_007fb242 <= sVar11 || (sVar13 < 0)))) || (DAT_007fb244 <= sVar13)) {
            iVar14 = 0;
          }
          else {
            iVar14 = *(int *)(DAT_007fb248 +
                             ((int)DAT_007fb246 * (int)sVar13 + (int)DAT_007fb240 * (int)sVar11 +
                             (int)sVar10) * 8);
          }
          if (((iVar14 == 0) || (7 < *(uint *)(iVar14 + 0x24))) ||
             ((DAT_00802a38 != 0 && (7 < (byte)(&DAT_008087e9)[*(uint *)(iVar14 + 0x24) * 0x51]))))
          {
LAB_0041fe0d:
            if (*(short *)(DAT_007fb280 +
                          (DAT_007fb278 * iVar8 + local_c + DAT_007fb27e * iVar12) * 2) < 0) {
              FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a4e0c,0xb85);
            }
            sVar10 = (short)local_c;
            if ((((sVar10 < 0) || (DAT_007fb240 <= sVar10)) || (sVar11 < 0)) ||
               (((DAT_007fb242 <= sVar11 || (sVar13 < 0)) || (DAT_007fb244 <= sVar13)))) {
              iVar8 = 0;
            }
            else {
              iVar8 = *(int *)(DAT_007fb248 + 4 +
                              ((int)DAT_007fb246 * (int)sVar13 + (int)DAT_007fb240 * (int)sVar11 +
                              (int)sVar10) * 8);
            }
            if (((iVar8 != 0) && (*(uint *)(iVar8 + 0x24) < 8)) &&
               (((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[*(uint *)(iVar8 + 0x24) * 0x51] < 8))
                && (*(int *)(local_1c + 0x18) != *(int *)(iVar8 + 0x18))))) {
              if ((*(byte *)(iVar8 + 0x1d1) & 0x10) != 0) {
                if (param_8 != (int *)0x0) {
                  *param_8 = iVar8;
                }
                FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a4e0c,0xb8c);
              }
              if (param_9 == 0) {
                if ((7 < *(uint *)(iVar8 + 0x24)) ||
                   ((DAT_00802a38 != 0 &&
                    (7 < (byte)(&DAT_008087e9)[*(uint *)(iVar8 + 0x24) * 0x51]))))
                goto LAB_0042004a;
                SVar1 = *(STSprGameObjC *)(iVar8 + 0x24);
                SVar2 = local_1c[0x24];
                _local_38 = CONCAT31(uStack_37,SVar1);
                _local_3c = CONCAT31(uStack_3b,SVar2);
                if (DAT_00808a8f == '\0') {
                  if (SVar1 == SVar2) {
LAB_0041fffd:
                    iVar12 = 0;
                  }
                  else {
                    uVar5 = (uint)(byte)SVar1;
                    uVar6 = (uint)(byte)SVar2;
                    cVar3 = *(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar6);
                    if ((cVar3 == '\0') &&
                       (*(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar5) == '\0')) {
                      iVar12 = -2;
                    }
                    else if ((cVar3 == '\x01') &&
                            (*(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar5) == '\0')) {
                      iVar12 = -1;
                    }
                    else if ((cVar3 == '\0') &&
                            (*(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar5) == '\x01')) {
                      iVar12 = 1;
                    }
                    else {
                      if ((cVar3 != '\x01') ||
                         (*(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar5) != '\x01'))
                      goto LAB_0041fffd;
                      iVar12 = 2;
                    }
                  }
                  bVar15 = iVar12 < 0;
                }
                else {
                  bVar15 = (&DAT_008087ea)[(uint)(byte)SVar2 * 0x51] !=
                           (&DAT_008087ea)[(uint)(byte)SVar1 * 0x51];
                }
                if ((!bVar15) && (*(int *)(iVar8 + 0x20) == 0x1ae)) {
                  FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a4e0c,0xb91);
                }
              }
              FUN_006a5e40(-0x5001fff6,DAT_007ed77c,0x7a4e0c,0xb93);
            }
          }
          else if (*(int *)(local_1c + 0x18) != *(int *)(iVar14 + 0x18)) {
            if (param_8 != (int *)0x0) {
              *param_8 = iVar14;
            }
            if ((*(byte *)(iVar14 + 0x1d1) & 0x10) != 0) {
              FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a4e0c,0xb7e);
            }
            if (param_9 == 0) {
              if ((7 < *(uint *)(iVar14 + 0x24)) ||
                 ((DAT_00802a38 != 0 && (7 < (byte)(&DAT_008087e9)[*(uint *)(iVar14 + 0x24) * 0x51])
                  ))) goto LAB_0042004a;
              SVar1 = *(STSprGameObjC *)(iVar14 + 0x24);
              SVar2 = local_1c[0x24];
              _local_40 = CONCAT31(uStack_3f,SVar1);
              _local_34 = CONCAT31(uStack_33,SVar2);
              if (DAT_00808a8f == '\0') {
                if (SVar1 == SVar2) {
LAB_0041fdc6:
                  iVar14 = 0;
                }
                else {
                  uVar5 = (uint)(byte)SVar1;
                  uVar6 = (uint)(byte)SVar2;
                  cVar3 = *(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar6);
                  if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar5) == '\0')
                     ) {
                    iVar14 = -2;
                  }
                  else if ((cVar3 == '\x01') &&
                          (*(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar5) == '\0')) {
                    iVar14 = -1;
                  }
                  else if ((cVar3 == '\0') &&
                          (*(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar5) == '\x01')) {
                    iVar14 = 1;
                  }
                  else {
                    if ((cVar3 != '\x01') ||
                       (*(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar5) != '\x01'))
                    goto LAB_0041fdc6;
                    iVar14 = 2;
                  }
                }
                bVar15 = iVar14 < 0;
              }
              else {
                bVar15 = (&DAT_008087ea)[(uint)(byte)SVar2 * 0x51] !=
                         (&DAT_008087ea)[(uint)(byte)SVar1 * 0x51];
              }
              if (!bVar15) {
                FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a4e0c,0xb81);
              }
            }
            FUN_006a5e40(-0x5001fff6,DAT_007ed77c,0x7a4e0c,0xb83);
            goto LAB_0041fe0d;
          }
LAB_0042004a:
          local_20 = local_20 + local_58;
          local_2c = local_2c + local_68;
          local_24 = local_24 + local_4c;
          local_44 = local_44 + -1;
        } while (local_44 != 0);
        local_44 = 0;
        iVar8 = local_5c;
        iVar12 = local_64;
        iVar14 = local_54;
      }
      local_28 = local_28 + 1;
      local_18 = iVar12;
      local_14 = iVar8;
      local_10 = iVar14;
    } while (local_28 <= local_30);
  }
  DAT_00858df8 = (undefined4 *)local_ac;
  return 1;
}

