#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::AddPlayerList */

void __thiscall
SettMapMTy::AddPlayerList(SettMapMTy *this,int param_1,uint param_2,int param_3,char *param_4)

{
  byte bVar1;
  SettMapMTy_field_1F84DArray *pSVar2;
  uint uVar3;
  bool bVar5;
  SettMapMTy *this_00;
  int errorCode;
  SettMapMTy_field_1F84Element *element_1f84;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  InternalExceptionFrame local_4c;
  SettMapMTy *local_8;

  if (this->field_1F84 != nullptr) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
    this_00 = local_8;
    if (errorCode == 0) {
      pSVar2 = local_8->field_1F84;
      if (param_2 < pSVar2->count) {
        element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar2, param_2);
      }
      else {
        element_1f84 = nullptr;
      }
      if (element_1f84 != nullptr) {
        bVar1 = element_1f84->field_0x4;
        if (bVar1 == 1) {
          if (param_3 != 2) goto LAB_005d11ad;
          param_3 = 2;
        }
        else {
          if ((bVar1 < 2) || (3 < bVar1)) goto LAB_005d11ad;
          param_2 = param_2 + 1;
          sub_005D00B0(local_8,element_1f84,param_2);
        }
        ChangePlayerList(this_00,param_1,param_2,param_3,'\0',param_4);
      }
LAB_005d11ad:
      if ((DAT_0080877e != '\0') && (this_00->field_1E26 == CASE_C)) {
        pSVar2 = this_00->field_1F84;
        uVar9 = 0;
        bVar5 = true;
        uVar3 = pSVar2->count;
        if (uVar3 != 0) {
          if (uVar3 == 0) {
            pcVar7 = nullptr;
            goto LAB_005d11ee;
          }
          do {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pcVar7 = &pSVar2->data->field_0000 + pSVar2->elementSize * uVar9;
LAB_005d11ee:
            if ((((pcVar7 != nullptr) && (DAT_0080874d == pcVar7[2])) &&
                (DAT_0080874e == pcVar7[3])) && (*(int *)(pcVar7 + 6) == DAT_0080877f)) {
              bVar5 = false;
              break;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar3);
        }
        if ((bVar5) && (uVar9 = 0, uVar3 != 0)) {
          if (uVar3 == 0) {
            pcVar7 = nullptr;
            goto LAB_005d1245;
          }
          while( true ) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pcVar7 = &pSVar2->data->field_0000 + pSVar2->elementSize * uVar9;
LAB_005d1245:
            if (((pcVar7 != nullptr) && (DAT_0080874d == pcVar7[2])) &&
               (DAT_0080874e == pcVar7[3])) break;
            uVar9 = uVar9 + 1;
            if (uVar3 <= uVar9) {
              g_currentExceptionFrame = local_4c.previous;
              return;
            }
          }
          pcVar7 = &DAT_00807e1d;
          if (DAT_008067a0 == '\0') {
            pcVar7 = (char *)&DAT_00807ddd;
          }
          AddPlayerList(local_8,DAT_0080877f,uVar9,(DAT_0080874f != '\0') + 2,pcVar7);
        }
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\Start\\settmobj.cpp",0x62f,0,errorCode,
                               "%s","SettMapMTy::AddPlayerList");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\settmobj.cpp",0x62f);
  }
  return;
}

