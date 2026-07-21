#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::PrepAsses */

void __thiscall OptPanelTy::PrepAsses(OptPanelTy *this,void *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  byte bVar3;
  code *pcVar4;
  int iVar5;
  cMf32 *pcVar6;
  DArrayTy *pDVar7;
  char *pcVar8;
  int iVar9;
  cMf32 *this_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX_00;
  uint uVar10;
  uint uVar11;
  OptPanelTy *pOVar12;
  byte *pbVar13;
  char *pcVar14;
  byte *pbVar15;
  bool bVar16;
  char local_12c [108];
  undefined4 local_c0;
  InternalExceptionFrame local_94;
  InternalExceptionFrame local_50;
  uint local_c;
  OptPanelTy *local_8;

  this->field_0028 = 0x20;
  *(undefined4 *)&this->field_0x2c = 0;
  local_8 = this;
  FUN_006e6080(this,2,this->field_01B5,(undefined4 *)&this->field_0x18);
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar5 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pOVar12 = local_8;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar9 = ReportDebugMessage(s_E____titans_Andrey_optpanel_cpp_007c70a0,0x3ad,0,iVar5,
                               &DAT_007a4ccc,s_OptPanelTy__PrepAsses_007c727c);
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar5,0,s_E____titans_Andrey_optpanel_cpp_007c70a0,0x3ad);
    return;
  }
  if (local_8->field_02FD != (DArrayTy *)0x0) {
    DArrayDestroy(local_8->field_02FD);
  }
  pOVar12->field_02FD = (DArrayTy *)0x0;
  local_94.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_94;
  iVar5 = Library::MSVCRT::__setjmp3(local_94.jumpBuffer,0);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_94.previous;
    pDVar7 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,0x98,1);
    local_8->field_02FD = pDVar7;
    pOVar12 = local_8;
    goto LAB_00532758;
  }
  switch(_DAT_008087a0 & 0xff) {
  case 1:
  case 4:
  case 6:
  case 7:
  case 0xd:
  case 0xe:
  case 0x13:
    wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s_007c6edc,&DAT_00807680,PTR_s_SYSTEM__0079acf0,
              PTR_s_STRATEGS_0079acfc);
    break;
  case 2:
  case 3:
  case 5:
  case 8:
  case 0xf:
    wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c6ee4,&DAT_00807680,&DAT_0080ef1e);
  }
  pcVar6 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
  pOVar12 = local_8;
  this_00 = (cMf32 *)(_DAT_008087a0 & 0xff);
  switch(this_00) {
  case (cMf32 *)0x1:
  case (cMf32 *)0x4:
  case (cMf32 *)0x6:
  case (cMf32 *)0x7:
  case (cMf32 *)0xd:
  case (cMf32 *)0xe:
  case (cMf32 *)0x13:
    pDVar7 = (DArrayTy *)CreateAssistantList((int)pcVar6,(uint)DAT_0080874e,DAT_0080995c);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    this_00 = extraout_ECX;
    break;
  case (cMf32 *)0x2:
  case (cMf32 *)0x3:
  case (cMf32 *)0x5:
  case (cMf32 *)0x8:
  case (cMf32 *)0xf:
    pDVar7 = (DArrayTy *)CreateStrategList((int)pcVar6,(uint)DAT_0080874d,0xffffffff);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    this_00 = extraout_ECX_00;
    break;
  default:
    goto switchD_005326e6_caseD_9;
  }
  pOVar12->field_02FD = pDVar7;
switchD_005326e6_caseD_9:
  cMf32::delete(this_00,pcVar6);
  g_currentExceptionFrame = local_94.previous;
LAB_00532758:
  if ((&stack0x00000000 != (undefined1 *)0x12c) &&
     (pcVar8 = LoadResourceString(0x2711,HINSTANCE_00807618), pcVar8 != (char *)0x0)) {
    pcVar8 = LoadResourceString(0x2711,HINSTANCE_00807618);
    uVar10 = 0xffffffff;
    do {
      pcVar14 = pcVar8;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar14 = pcVar8 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar14;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    pcVar8 = pcVar14 + -uVar10;
    pcVar14 = local_12c;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar14 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar14 = pcVar14 + 1;
    }
  }
  local_c0 = 1;
  Library::DKW::TBL::FUN_006b11d0(&pOVar12->field_02FD->flags,0,(undefined4 *)local_12c);
  pOVar12->field_0028 = 0x28;
  puVar1 = &pOVar12->field_0x18;
  *(dword *)&pOVar12->field_0x2c = pOVar12->field_02FD->count;
  FUN_006e6080(pOVar12,2,pOVar12->field_01B5,(undefined4 *)puVar1);
  pOVar12->field_0028 = 0x20;
  *(undefined4 *)&pOVar12->field_0x2c = 1;
  FUN_006e6080(pOVar12,2,pOVar12->field_01B5,(undefined4 *)puVar1);
  iVar5 = thunk_FUN_00648a30((uint)DAT_0080874d,(char *)&DAT_0080f33a);
  if (iVar5 == 0) {
    pOVar12->field_0028 = 0x22;
    *(undefined4 *)&pOVar12->field_0x2c = 0;
    FUN_006e6080(pOVar12,2,pOVar12->field_01B5,(undefined4 *)puVar1);
  }
  else {
    pDVar7 = pOVar12->field_02FD;
    local_c = 0;
    if (pDVar7->count != 0) {
      if (pDVar7->count == 0) {
        pbVar13 = (byte *)0x0;
        goto LAB_00532855;
      }
      do {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar7, local_c) (runtime stride) */
        pbVar13 = (byte *)(pDVar7->elementSize * local_c + (int)pDVar7->data);
LAB_00532855:
        pbVar15 = (byte *)&DAT_0080f33a;
        do {
          bVar3 = *pbVar13;
          bVar16 = bVar3 < *pbVar15;
          if (bVar3 != *pbVar15) {
LAB_0053287e:
            iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
            goto LAB_00532883;
          }
          if (bVar3 == 0) break;
          bVar3 = pbVar13[1];
          bVar16 = bVar3 < pbVar15[1];
          if (bVar3 != pbVar15[1]) goto LAB_0053287e;
          pbVar13 = pbVar13 + 2;
          pbVar15 = pbVar15 + 2;
        } while (bVar3 != 0);
        iVar5 = 0;
LAB_00532883:
        if (iVar5 == 0) {
          *(uint *)&pOVar12->field_0x2c = local_c;
          pOVar12->field_0028 = 0x22;
          FUN_006e6080(pOVar12,2,pOVar12->field_01B5,(undefined4 *)&pOVar12->field_0x18);
        }
        pDVar7 = pOVar12->field_02FD;
        local_c = local_c + 1;
        if (pDVar7->count <= local_c) {
          g_currentExceptionFrame = local_50.previous;
          return;
        }
      } while( true );
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

