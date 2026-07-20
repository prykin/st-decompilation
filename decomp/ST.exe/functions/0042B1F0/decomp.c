
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetGObjFromBox */

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
  InternalExceptionFrame local_70;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = (int)param_2;
  local_14 = param_5 + -1 + local_8;
  local_c = (int)param_3;
  local_10 = param_6 + -1 + local_c;
  local_18 = (int)param_4;
  local_1c = param_7 + -1 + local_18;
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  iVar4 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_70.previous;
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
  if (local_8 < 0) {
    local_8 = 0;
  }
  iVar4 = SHORT_007fb240 + -1;
  if (iVar4 < local_14) {
    local_14 = iVar4;
  }
  if (local_c < 0) {
    local_c = 0;
  }
  iVar4 = SHORT_007fb242 + -1;
  if (iVar4 < local_10) {
    local_10 = iVar4;
  }
  if (local_18 < 0) {
    local_18 = 0;
  }
  iVar6 = local_18;
  iVar4 = SHORT_007fb244 + -1;
  if (iVar4 < local_1c) {
    local_1c = iVar4;
  }
  iVar4 = local_1c;
  if ((((SHORT_007fb240 < local_8) || (SHORT_007fb242 < local_c)) || (SHORT_007fb244 < local_18)) ||
     (((local_14 < local_8 || (local_10 < local_c)) || (local_1c < local_18)))) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x133);
  }
  if (param_8 == (int *)0x0) {
    if (((param_9 == (int *)0x0) && (param_10 == (int *)0x0)) && (param_11 == (int *)0x0)) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
                 0x135);
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
  iVar7 = SHORT_007fb240 * local_c + local_8 + (iVar6 + -1) * (int)SHORT_007fb246;
  if (iVar6 <= iVar4) {
    local_24 = (iVar4 - iVar6) + 1;
    iVar4 = local_c;
    do {
      iVar7 = iVar7 + SHORT_007fb246;
      local_2c = iVar7 - SHORT_007fb240;
      if (iVar4 <= local_10) {
        local_20 = (local_10 - iVar4) + 1;
        local_28 = iVar7;
        do {
          local_2c = local_2c + SHORT_007fb240;
          if (local_8 <= local_14) {
            iVar4 = local_2c * 8 + -8;
            iVar6 = (local_14 - local_8) + 1;
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
              iVar7 = local_28;
            } while (iVar6 != 0);
          }
          local_20 = local_20 + -1;
          iVar4 = local_c;
        } while (local_20 != 0);
      }
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  g_currentExceptionFrame = local_70.previous;
  return;
}

