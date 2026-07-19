
void __thiscall
STAllPlayersC::GetGObjFromBox
          (STAllPlayersC *this,char param_1,short param_2,short param_3,short param_4,short param_5,
          short param_6,short param_7,int *param_8,int *param_9,int *param_10,int *param_11)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  undefined4 unaff_ESI;
  int iVar7;
  void *unaff_EDI;
  InternalExceptionFrame IStack_70;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  iStack_8 = (int)param_2;
  iStack_14 = param_5 + -1 + iStack_8;
  iStack_c = (int)param_3;
  iStack_10 = param_6 + -1 + iStack_c;
  iStack_18 = (int)param_4;
  iStack_1c = param_7 + -1 + iStack_18;
  IStack_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_70;
  iVar4 = Library::MSVCRT::__setjmp3(IStack_70.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    g_currentExceptionFrame = IStack_70.previous;
    if (iVar4 != -0x5001fff7) {
      iVar6 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x155,0,iVar4,
                                 &DAT_007a4ccc,s_STAllPlayersC__GetGObjFromBox_007a6078);
      if (iVar6 != 0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      RaiseInternalException(iVar4,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x156);
    }
    return;
  }
  if (iStack_8 < 0) {
    iStack_8 = 0;
  }
  iVar4 = DAT_007fb240 + -1;
  if (iVar4 < iStack_14) {
    iStack_14 = iVar4;
  }
  if (iStack_c < 0) {
    iStack_c = 0;
  }
  iVar4 = DAT_007fb242 + -1;
  if (iVar4 < iStack_10) {
    iStack_10 = iVar4;
  }
  if (iStack_18 < 0) {
    iStack_18 = 0;
  }
  iVar6 = iStack_18;
  iVar4 = DAT_007fb244 + -1;
  if (iVar4 < iStack_1c) {
    iStack_1c = iVar4;
  }
  iVar4 = iStack_1c;
  if ((((DAT_007fb240 < iStack_8) || (DAT_007fb242 < iStack_c)) || (DAT_007fb244 < iStack_18)) ||
     (((iStack_14 < iStack_8 || (iStack_10 < iStack_c)) || (iStack_1c < iStack_18)))) {
    RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x133);
  }
  if (param_8 == (int *)0x0) {
    if (((param_9 == (int *)0x0) && (param_10 == (int *)0x0)) && (param_11 == (int *)0x0)) {
      RaiseInternalException
                (-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x135);
    }
  }
  else if (*param_8 == 0) {
    puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,7,2,5);
    *param_8 = (int)puVar5;
  }
  if ((param_9 != (int *)0x0) && (*param_9 == 0)) {
    puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,7,2,5);
    *param_9 = (int)puVar5;
  }
  if (param_10 != (int *)0x0) {
    *param_10 = 0;
  }
  if (param_11 != (int *)0x0) {
    *param_11 = 0;
  }
  iVar7 = DAT_007fb240 * iStack_c + iStack_8 + (iVar6 + -1) * (int)DAT_007fb246;
  if (iVar6 <= iVar4) {
    iStack_24 = (iVar4 - iVar6) + 1;
    iVar4 = iStack_c;
    do {
      iVar7 = iVar7 + DAT_007fb246;
      iStack_2c = iVar7 - DAT_007fb240;
      if (iVar4 <= iStack_10) {
        iStack_20 = (iStack_10 - iVar4) + 1;
        iStack_28 = iVar7;
        do {
          iStack_2c = iStack_2c + DAT_007fb240;
          if (iStack_8 <= iStack_14) {
            iVar4 = iStack_2c * 8 + -8;
            iVar6 = (iStack_14 - iStack_8) + 1;
            do {
              iVar4 = iVar4 + 8;
              piVar1 = *(int **)(iVar4 + DAT_007fb248);
              if (((piVar1 != (int *)0x0) && (piVar1[9] == (int)param_1)) &&
                 (iVar7 = (**(code **)(*piVar1 + 0xf8))(), iVar7 == 1)) {
                iVar7 = piVar1[8];
                if (iVar7 == 0x14) {
                  piVar3 = param_10;
                  if (param_8 != (int *)0x0) {
                    Library::DKW::TBL::FUN_006ae1c0
                              ((uint *)*param_8,(undefined4 *)((int)piVar1 + 0x32));
                  }
                }
                else {
                  if ((iVar7 != 1000) && (iVar7 != 0x3e9)) goto LAB_0042b469;
                  piVar3 = param_11;
                  if (param_9 != (int *)0x0) {
                    Library::DKW::TBL::FUN_006ae1c0
                              ((uint *)*param_9,(undefined4 *)((int)piVar1 + 0x32));
                  }
                }
                if (piVar3 != (int *)0x0) {
                  *piVar3 = *piVar3 + 1;
                }
              }
LAB_0042b469:
              iVar6 = iVar6 + -1;
              iVar7 = iStack_28;
            } while (iVar6 != 0);
          }
          iStack_20 = iStack_20 + -1;
          iVar4 = iStack_c;
        } while (iStack_20 != 0);
      }
      iStack_24 = iStack_24 + -1;
    } while (iStack_24 != 0);
  }
  g_currentExceptionFrame = IStack_70.previous;
  return;
}

