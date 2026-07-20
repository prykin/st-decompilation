
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STSprGameObjC::CheckRay
   
   [STSwitchEnumApplier] Switch target param_7 uses
   /SubmarineTitans/Recovered/Enums/STSprGameObjC_CheckRay_param_7Enum. Cases:
   CASE_9B=155;CASE_A3=163;CASE_A5=165;CASE_A6=166;CASE_A7=167;CASE_A8=168;CASE_A9=169;CASE_AA=170;CASE_AB=171;CASE_AF=175;CASE_B0=176;CASE_B1=177;CASE_B2=178;CASE_B3=179;CASE_B4=180;CASE_B5=181;CASE_B9=185;CASE_BB=187;CASE_BC=188
    */

undefined4 __thiscall
STSprGameObjC::CheckRay
          (STSprGameObjC *this,short param_1,short param_2,short param_3,short param_4,short param_5
          ,short param_6,STSprGameObjC_CheckRay_param_7Enum param_7,int *param_8,int param_9)

{
  byte bVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  short sVar9;
  short sVar10;
  undefined4 unaff_ESI;
  int iVar11;
  short sVar12;
  void *unaff_EDI;
  int iVar13;
  bool bVar14;
  InternalExceptionFrame local_ac;
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
  byte local_40;
  undefined3 uStack_3f;
  byte local_3c;
  undefined3 uStack_3b;
  byte local_38;
  undefined3 uStack_37;
  byte local_34;
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
  
  local_ac.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_ac;
  local_1c = this;
  iVar7 = Library::MSVCRT::__setjmp3(local_ac.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_ac.previous;
    if (iVar7 != -0x5001fff7) {
      if (iVar7 == -0x5001fff6) {
        return 1;
      }
      iVar11 = ReportDebugMessage(s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xb9b,0,iVar7,
                                  &DAT_007a4ccc,s_STSprGameObjC__CheckRay_007a4f54);
      if (iVar11 != 0) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return uVar8;
      }
      RaiseInternalException(iVar7,0,s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xb9c);
    }
    return 0;
  }
  switch(param_7) {
  case CASE_9B:
  case CASE_A3:
  case CASE_A5:
  case CASE_A6:
  case CASE_A7:
  case CASE_A8:
  case CASE_A9:
  case CASE_AA:
  case CASE_AB:
  case CASE_AF:
  case CASE_B0:
  case CASE_B1:
  case CASE_B2:
  case CASE_B3:
  case CASE_B4:
  case CASE_B5:
  case CASE_B9:
  case CASE_BB:
  case CASE_BC:
    RaiseInternalException
              (-0x5001fff6,g_overwriteContext_007ED77C,s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xb69
              );
  }
  if (param_8 != (int *)0x0) {
    *param_8 = 0;
  }
  iVar7 = FUN_006acf0d((int)param_1,(int)param_2,(int)param_3,(int)param_4,(int)param_5,(int)param_6
                      );
  bVar6 = thunk_FUN_00430750(param_7);
  local_30 = iVar7 / (int)(uint)bVar6;
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
      iVar11 = (local_60 * local_28) / local_30 + (int)param_1;
      iVar7 = (local_50 * local_28) / local_30 + (int)param_2;
      iVar13 = (local_48 * local_28) / local_30 + (int)param_3;
      local_64 = iVar11;
      local_5c = iVar7;
      local_54 = iVar13;
      local_8 = FUN_006acf0d(local_18,local_14,local_10,iVar11,iVar7,iVar13);
      local_8 = local_8 / 0x32;
      if (local_8 < 1) {
        local_8 = 1;
      }
      if (0 < local_8) {
        local_4c = iVar13 - local_10;
        local_68 = iVar7 - local_14;
        local_58 = iVar11 - local_18;
        local_44 = local_8;
        local_2c = local_68;
        local_24 = local_4c;
        local_20 = local_58;
        do {
          iVar7 = local_20 / local_8 + local_18;
          sVar10 = (short)(iVar7 >> 0x1f);
          if (iVar7 < 0) {
            local_c = (short)(((short)(iVar7 / 0xc9) + sVar10) -
                             (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            local_c = (int)(short)(((short)(iVar7 / 0xc9) + sVar10) -
                                  (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
          }
          iVar7 = local_2c / local_8 + local_14;
          sVar10 = (short)(iVar7 >> 0x1f);
          if (iVar7 < 0) {
            iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar10) -
                           (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar10) -
                                (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
          }
          iVar11 = local_24 / local_8 + local_10;
          sVar10 = (short)(iVar11 >> 0x1f);
          if (iVar11 < 0) {
            iVar11 = (short)(((short)(iVar11 / 200) + sVar10) -
                            (short)((longlong)iVar11 * 0x51eb851f >> 0x3f)) + -1;
          }
          else {
            iVar11 = (int)(short)(((short)(iVar11 / 200) + sVar10) -
                                 (short)((longlong)iVar11 * 0x51eb851f >> 0x3f));
          }
          sVar9 = (short)local_c;
          sVar10 = (short)iVar7;
          sVar12 = (short)iVar11;
          if (((((sVar9 < 0) || (SHORT_007fb240 <= sVar9)) || (sVar10 < 0)) ||
              ((SHORT_007fb242 <= sVar10 || (sVar12 < 0)))) || (SHORT_007fb244 <= sVar12)) {
            iVar13 = 0;
          }
          else {
            iVar13 = *(int *)(DAT_007fb248 +
                             ((int)SHORT_007fb246 * (int)sVar12 + (int)SHORT_007fb240 * (int)sVar10
                             + (int)sVar9) * 8);
          }
          if (((iVar13 == 0) || (7 < *(uint *)(iVar13 + 0x24))) ||
             ((PTR_00802a38 != (STPlaySystemC *)0x0 &&
              (7 < (byte)(&DAT_008087e9)[*(uint *)(iVar13 + 0x24) * 0x51])))) {
LAB_0041fe0d:
            if (*(short *)(DAT_007fb280 +
                          (SHORT_007fb278 * iVar7 + local_c + SHORT_007fb27e * iVar11) * 2) < 0) {
              RaiseInternalException
                        (-0x5001fff7,g_overwriteContext_007ED77C,
                         s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xb85);
            }
            sVar9 = (short)local_c;
            if ((((sVar9 < 0) || (SHORT_007fb240 <= sVar9)) || (sVar10 < 0)) ||
               (((SHORT_007fb242 <= sVar10 || (sVar12 < 0)) || (SHORT_007fb244 <= sVar12)))) {
              iVar7 = 0;
            }
            else {
              iVar7 = *(int *)(DAT_007fb248 + 4 +
                              ((int)SHORT_007fb246 * (int)sVar12 + (int)SHORT_007fb240 * (int)sVar10
                              + (int)sVar9) * 8);
            }
            if (((iVar7 != 0) && (*(uint *)(iVar7 + 0x24) < 8)) &&
               (((PTR_00802a38 == (STPlaySystemC *)0x0 ||
                 ((byte)(&DAT_008087e9)[*(uint *)(iVar7 + 0x24) * 0x51] < 8)) &&
                (local_1c->field_0018 != *(int *)(iVar7 + 0x18))))) {
              if ((*(byte *)(iVar7 + 0x1d1) & 0x10) != 0) {
                if (param_8 != (int *)0x0) {
                  *param_8 = iVar7;
                }
                RaiseInternalException
                          (-0x5001fff7,g_overwriteContext_007ED77C,
                           s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xb8c);
              }
              if (param_9 == 0) {
                if ((7 < *(uint *)(iVar7 + 0x24)) ||
                   ((PTR_00802a38 != (STPlaySystemC *)0x0 &&
                    (7 < (byte)(&DAT_008087e9)[*(uint *)(iVar7 + 0x24) * 0x51]))))
                goto cf_continue_loop_0042004A;
                bVar6 = *(byte *)(iVar7 + 0x24);
                bVar1 = local_1c->field_0024;
                _local_38 = CONCAT31(uStack_37,bVar6);
                _local_3c = CONCAT31(uStack_3b,bVar1);
                if (DAT_00808a8f == '\0') {
                  if (bVar6 == bVar1) {
LAB_0041fffd:
                    iVar11 = 0;
                  }
                  else {
                    uVar4 = (uint)bVar6;
                    uVar5 = (uint)bVar1;
                    cVar2 = *(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar5);
                    if ((cVar2 == '\0') &&
                       (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar4) == '\0')) {
                      iVar11 = -2;
                    }
                    else if ((cVar2 == '\x01') &&
                            (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar4) == '\0')) {
                      iVar11 = -1;
                    }
                    else if ((cVar2 == '\0') &&
                            (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar4) == '\x01')) {
                      iVar11 = 1;
                    }
                    else {
                      if ((cVar2 != '\x01') ||
                         (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar4) != '\x01'))
                      goto LAB_0041fffd;
                      iVar11 = 2;
                    }
                  }
                  bVar14 = iVar11 < 0;
                }
                else {
                  bVar14 = (&DAT_008087ea)[(uint)bVar1 * 0x51] !=
                           (&DAT_008087ea)[(uint)bVar6 * 0x51];
                }
                if ((!bVar14) && (*(int *)(iVar7 + 0x20) == 0x1ae)) {
                  RaiseInternalException
                            (-0x5001fff7,g_overwriteContext_007ED77C,
                             s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xb91);
                }
              }
              RaiseInternalException
                        (-0x5001fff6,g_overwriteContext_007ED77C,
                         s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xb93);
            }
          }
          else if (local_1c->field_0018 != *(int *)(iVar13 + 0x18)) {
            if (param_8 != (int *)0x0) {
              *param_8 = iVar13;
            }
            if ((*(byte *)(iVar13 + 0x1d1) & 0x10) != 0) {
              RaiseInternalException
                        (-0x5001fff7,g_overwriteContext_007ED77C,
                         s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xb7e);
            }
            if (param_9 == 0) {
              if ((7 < *(uint *)(iVar13 + 0x24)) ||
                 ((PTR_00802a38 != (STPlaySystemC *)0x0 &&
                  (7 < (byte)(&DAT_008087e9)[*(uint *)(iVar13 + 0x24) * 0x51]))))
              goto cf_continue_loop_0042004A;
              bVar6 = *(byte *)(iVar13 + 0x24);
              bVar1 = local_1c->field_0024;
              _local_40 = CONCAT31(uStack_3f,bVar6);
              _local_34 = CONCAT31(uStack_33,bVar1);
              if (DAT_00808a8f == '\0') {
                if (bVar6 == bVar1) {
LAB_0041fdc6:
                  iVar13 = 0;
                }
                else {
                  uVar4 = (uint)bVar6;
                  uVar5 = (uint)bVar1;
                  cVar2 = *(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar5);
                  if ((cVar2 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar4) == '\0')
                     ) {
                    iVar13 = -2;
                  }
                  else if ((cVar2 == '\x01') &&
                          (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar4) == '\0')) {
                    iVar13 = -1;
                  }
                  else if ((cVar2 == '\0') &&
                          (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar4) == '\x01')) {
                    iVar13 = 1;
                  }
                  else {
                    if ((cVar2 != '\x01') ||
                       (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar4) != '\x01'))
                    goto LAB_0041fdc6;
                    iVar13 = 2;
                  }
                }
                bVar14 = iVar13 < 0;
              }
              else {
                bVar14 = (&DAT_008087ea)[(uint)bVar1 * 0x51] != (&DAT_008087ea)[(uint)bVar6 * 0x51];
              }
              if (!bVar14) {
                RaiseInternalException
                          (-0x5001fff7,g_overwriteContext_007ED77C,
                           s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xb81);
              }
            }
            RaiseInternalException
                      (-0x5001fff6,g_overwriteContext_007ED77C,
                       s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xb83);
            goto LAB_0041fe0d;
          }
cf_continue_loop_0042004A:
          local_20 = local_20 + local_58;
          local_2c = local_2c + local_68;
          local_24 = local_24 + local_4c;
          local_44 = local_44 + -1;
        } while (local_44 != 0);
        local_44 = 0;
        iVar7 = local_5c;
        iVar11 = local_64;
        iVar13 = local_54;
      }
      local_28 = local_28 + 1;
      local_18 = iVar11;
      local_14 = iVar7;
      local_10 = iVar13;
    } while (local_28 <= local_30);
  }
  g_currentExceptionFrame = local_ac.previous;
  return 1;
}

