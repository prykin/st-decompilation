
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
  InternalExceptionFrame IStack_ac;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  STSprGameObjC SStack_40;
  undefined3 uStack_3f;
  STSprGameObjC SStack_3c;
  undefined3 uStack_3b;
  STSprGameObjC SStack_38;
  undefined3 uStack_37;
  STSprGameObjC SStack_34;
  undefined3 uStack_33;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  STSprGameObjC *pSStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  IStack_ac.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_ac;
  pSStack_1c = this;
  iVar8 = __setjmp3(IStack_ac.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar8 != 0) {
    g_currentExceptionFrame = IStack_ac.previous;
    if (iVar8 != -0x5001fff7) {
      if (iVar8 == -0x5001fff6) {
        return 1;
      }
      iVar12 = ReportDebugMessage(s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xb9b,0,iVar8,
                                  &DAT_007a4ccc,s_STSprGameObjC__CheckRay_007a4f54);
      if (iVar12 != 0) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return uVar9;
      }
      RaiseInternalException(iVar8,0,s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xb9c);
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
    RaiseInternalException(-0x5001fff6,DAT_007ed77c,s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xb69);
  }
  if (param_8 != (int *)0x0) {
    *param_8 = 0;
  }
  iVar8 = FUN_006acf0d((int)param_1,(int)param_2,(int)param_3,(int)param_4,(int)param_5,(int)param_6
                      );
  bVar7 = thunk_FUN_00430750(param_7);
  iStack_30 = iVar8 / (int)(uint)bVar7;
  if (iStack_30 < 1) {
    iStack_30 = 1;
  }
  iStack_28 = 1;
  if (0 < iStack_30) {
    iStack_60 = (int)param_4 - (int)param_1;
    iStack_50 = (int)param_5 - (int)param_2;
    iStack_48 = (int)param_6 - (int)param_3;
    iStack_18 = (int)param_1;
    iStack_14 = (int)param_2;
    iStack_10 = (int)param_3;
    do {
      iVar12 = (iStack_60 * iStack_28) / iStack_30 + (int)param_1;
      iVar8 = (iStack_50 * iStack_28) / iStack_30 + (int)param_2;
      iVar14 = (iStack_48 * iStack_28) / iStack_30 + (int)param_3;
      iStack_64 = iVar12;
      iStack_5c = iVar8;
      iStack_54 = iVar14;
      iStack_8 = FUN_006acf0d(iStack_18,iStack_14,iStack_10,iVar12,iVar8,iVar14);
      iStack_8 = iStack_8 / 0x32;
      if (iStack_8 < 1) {
        iStack_8 = 1;
      }
      if (0 < iStack_8) {
        iStack_4c = iVar14 - iStack_10;
        iStack_68 = iVar8 - iStack_14;
        iStack_58 = iVar12 - iStack_18;
        iStack_44 = iStack_8;
        iStack_2c = iStack_68;
        iStack_24 = iStack_4c;
        iStack_20 = iStack_58;
        do {
          iVar8 = iStack_20 / iStack_8 + iStack_18;
          sVar11 = (short)(iVar8 >> 0x1f);
          if (iVar8 < 0) {
            iStack_c = (short)(((short)(iVar8 / 0xc9) + sVar11) -
                              (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            iStack_c = (int)(short)(((short)(iVar8 / 0xc9) + sVar11) -
                                   (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
          }
          iVar8 = iStack_2c / iStack_8 + iStack_14;
          sVar11 = (short)(iVar8 >> 0x1f);
          if (iVar8 < 0) {
            iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar11) -
                           (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar11) -
                                (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
          }
          iVar12 = iStack_24 / iStack_8 + iStack_10;
          sVar11 = (short)(iVar12 >> 0x1f);
          if (iVar12 < 0) {
            iVar12 = (short)(((short)(iVar12 / 200) + sVar11) -
                            (short)((longlong)iVar12 * 0x51eb851f >> 0x3f)) + -1;
          }
          else {
            iVar12 = (int)(short)(((short)(iVar12 / 200) + sVar11) -
                                 (short)((longlong)iVar12 * 0x51eb851f >> 0x3f));
          }
          sVar10 = (short)iStack_c;
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
                          (DAT_007fb278 * iVar8 + iStack_c + DAT_007fb27e * iVar12) * 2) < 0) {
              RaiseInternalException
                        (-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xb85);
            }
            sVar10 = (short)iStack_c;
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
                && (*(int *)(pSStack_1c + 0x18) != *(int *)(iVar8 + 0x18))))) {
              if ((*(byte *)(iVar8 + 0x1d1) & 0x10) != 0) {
                if (param_8 != (int *)0x0) {
                  *param_8 = iVar8;
                }
                RaiseInternalException
                          (-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xb8c);
              }
              if (param_9 == 0) {
                if ((7 < *(uint *)(iVar8 + 0x24)) ||
                   ((DAT_00802a38 != 0 &&
                    (7 < (byte)(&DAT_008087e9)[*(uint *)(iVar8 + 0x24) * 0x51]))))
                goto LAB_0042004a;
                SVar1 = *(STSprGameObjC *)(iVar8 + 0x24);
                SVar2 = pSStack_1c[0x24];
                _SStack_38 = CONCAT31(uStack_37,SVar1);
                _SStack_3c = CONCAT31(uStack_3b,SVar2);
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
                  RaiseInternalException
                            (-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xb91)
                  ;
                }
              }
              RaiseInternalException
                        (-0x5001fff6,DAT_007ed77c,s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xb93);
            }
          }
          else if (*(int *)(pSStack_1c + 0x18) != *(int *)(iVar14 + 0x18)) {
            if (param_8 != (int *)0x0) {
              *param_8 = iVar14;
            }
            if ((*(byte *)(iVar14 + 0x1d1) & 0x10) != 0) {
              RaiseInternalException
                        (-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xb7e);
            }
            if (param_9 == 0) {
              if ((7 < *(uint *)(iVar14 + 0x24)) ||
                 ((DAT_00802a38 != 0 && (7 < (byte)(&DAT_008087e9)[*(uint *)(iVar14 + 0x24) * 0x51])
                  ))) goto LAB_0042004a;
              SVar1 = *(STSprGameObjC *)(iVar14 + 0x24);
              SVar2 = pSStack_1c[0x24];
              _SStack_40 = CONCAT31(uStack_3f,SVar1);
              _SStack_34 = CONCAT31(uStack_33,SVar2);
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
                RaiseInternalException
                          (-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xb81);
              }
            }
            RaiseInternalException
                      (-0x5001fff6,DAT_007ed77c,s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0xb83);
            goto LAB_0041fe0d;
          }
LAB_0042004a:
          iStack_20 = iStack_20 + iStack_58;
          iStack_2c = iStack_2c + iStack_68;
          iStack_24 = iStack_24 + iStack_4c;
          iStack_44 = iStack_44 + -1;
        } while (iStack_44 != 0);
        iStack_44 = 0;
        iVar8 = iStack_5c;
        iVar12 = iStack_64;
        iVar14 = iStack_54;
      }
      iStack_28 = iStack_28 + 1;
      iStack_18 = iVar12;
      iStack_14 = iVar8;
      iStack_10 = iVar14;
    } while (iStack_28 <= iStack_30);
  }
  g_currentExceptionFrame = IStack_ac.previous;
  return 1;
}

