#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\settsobj.cpp
   SettMapSTy::SetListCtrls */

void __thiscall SettMapSTy::SetListCtrls(SettMapSTy *this)

{
  DArrayTy *pDVar1;
  AnonPointee_SettMapSTy_0000 *pAVar2;
  char cVar4;
  SettMapSTy *pSVar5;
  int iVar6;
  uint *puVar6;
  int iVar8;
  int iVar7;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  InternalExceptionFrame local_58;
  SettMapSTy *local_14;
  int local_10;
  int local_c;
  cMf32 *local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  iVar6 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  pSVar5 = local_14;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar7 = ReportDebugMessage("E:\\__titans\\Start\\settsobj.cpp",0x3b,0,iVar6,"%s",
                               "SettMapSTy::SetListCtrls");
    if (iVar7 == 0) {
      RaiseInternalException(iVar6,0,"E:\\__titans\\Start\\settsobj.cpp",0x3b);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (local_14->field_1E26 == '\x02') {
    local_8 = (cMf32 *)local_14->field_1F3F;
  }
  else {
    local_8 = local_14->field_1F43;
  }
  local_14->field_0029 = 2;
  local_14->field_002D = 0x20;
  local_c = 0;
  local_10 = 0x7e3;
  do {
    iVar10 = 0;
    iVar8 = local_10;
    do {
      if ((&pSVar5->field_0000)[iVar8 + iVar10] != nullptr) {
        pDVar1 = pSVar5->field_1F84;
        if ((pDVar1 == nullptr) ||
           (uVar9 = pSVar5->field_1F88 + local_c, pDVar1->count <= uVar9)) {
          pcVar11 = nullptr;
        }
        else {
          pcVar11 = DArrayAt<char>(pDVar1, uVar9);
        }
        pAVar2 = (&pSVar5->field_0000)[iVar8 + iVar10];
        pSVar5->field_0031 = 0;
        pSVar5->field_0025 = pAVar2;
        if (pcVar11 != nullptr) {
          switch(iVar10) {
          case 0:
            if (*(DArrayTy **)(pcVar11 + 0x50) != nullptr) {
              DArrayDestroy(*(DArrayTy **)(pcVar11 + 0x50));
            }
            if (pSVar5->field_1E26 == '\x02') {
              puVar6 = CreateStrategList((int)local_8,(uint)(byte)pcVar11[2],0xffffffff);
            }
            else {
              puVar6 = CreateOpponentList(local_8,(uint)(byte)pcVar11[3],DAT_0080995c);
            }
            *(uint **)(pcVar11 + 0x50) = puVar6;
            if (puVar6[3] <= (uint)(byte)pcVar11[5]) {
              pcVar11[5] = (char)puVar6[3];
            }
            if ((puVar6[3] == 0) && (pcVar11[4] == '\x04')) {
              pcVar11[4] = '\x01';
            }
            break;
          case 1:
          case 2:
            if ((pSVar5->field_1E26 != '\x02') && (*pcVar11 != '\0')) {
              cVar4 = pcVar11[4];
joined_r0x005d502e:
              if (cVar4 != '\0') goto LAB_005d5030;
            }
            break;
          case 3:
            if (((pSVar5->field_1E26 != '\x02') || (pcVar11[4] != '\x02')) &&
               (*(int *)(*(int *)(pcVar11 + 0x50) + 0xc) != 0)) {
LAB_005d5030:
              pSVar5->field_0031 = 1;
            }
            break;
          case 5:
            if ((((DAT_0080874d != -1) && (*pcVar11 != '\0')) && (pcVar11[4] != '\0')) &&
               (pSVar5->field_1E26 != '\x02')) {
              if ((pcVar11[4] == '\x02') &&
                 (cVar4 = DAT_00808a8f, *(int *)(pcVar11 + 6) == DAT_0080877f))
              goto joined_r0x005d502e;
              goto LAB_005d5030;
            }
          }
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*(int *)pSVar5->field_000C + 0x18))(&pSVar5->field_0x1d);
        iVar8 = local_10;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < 8);
    local_10 = iVar8 + 8;
    local_c = local_c + 1;
    if (0x832 < local_10) {
      g_currentExceptionFrame = local_58.previous;
      return;
    }
  } while( true );
}

