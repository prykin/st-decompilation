#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_jell_m.cpp
   STJellyManC::GetMessage */

undefined4 __thiscall
STJellyManC::GetMessage(STJellyManC *this,AnonShape_00581BF0_F07EE3A2 *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  STGameObjC *pSVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  byte *pbVar14;
  InternalExceptionFrame local_54;
  STGameObjC *local_10;
  int local_c;
  byte *local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = (STGameObjC *)this;
  iVar6 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  pSVar5 = local_10;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar9 = ReportDebugMessage(s_E____titans_Igor_to_jell_m_cpp_007cb2f0,0x191,0,iVar6,&DAT_007a4ccc
                               ,s_STJellyManC__GetMessage_007cb348);
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar6,0,s_E____titans_Igor_to_jell_m_cpp_007cb2f0,0x192);
    return 0xffff;
  }
  STGameObjC::GetMessage(local_10,(AnonShape_0041AF40_F59F8577 *)param_1);
  uVar10 = param_1->field_0010;
  if (0x10f < uVar10) {
    if (uVar10 == 0x124) {
      iVar6 = pSVar5[1].field_002C + -1;
      if (iVar6 < 0) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      while ((iVar9 = *(int *)(*(int *)&pSVar5[1].field_0x36 + iVar6 * 4), iVar9 == 0 ||
             (*(int *)(iVar9 + 8) != param_1->field_0014))) {
        if ((iVar6 < 0) &&
           (iVar9 = ReportDebugMessage(s_E____titans_Igor_to_jell_m_cpp_007cb2f0,0x128,0,0,
                                       &DAT_007a4ccc,s_Jell_m_Small_finding_jelly_007cb364),
           iVar9 != 0)) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar6 = iVar6 + -1;
        if (iVar6 < 0) {
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
      }
      *(undefined4 *)(*(int *)&pSVar5[1].field_0x36 + iVar6 * 4) = 0;
      iVar6 = *(int *)&pSVar5[1].field_0x3e + -1;
      *(int *)&pSVar5[1].field_0x3e = iVar6;
      if ((pSVar5[1].field_0x4 & 1) == 0) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (iVar6 != 0) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
    }
    else {
      if (uVar10 == 0x125) {
        iVar6 = pSVar5[1].field_002C + -1;
        if (-1 < iVar6) {
          piVar8 = (int *)(*(int *)&pSVar5[1].field_0x36 + iVar6 * 4);
          do {
            if (*piVar8 == 0) break;
            iVar6 = iVar6 + -1;
            piVar8 = piVar8 + -1;
          } while (-1 < iVar6);
        }
        if (iVar6 < 0) {
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        iVar9 = FUN_006e5380(PTR_00802a38,param_1->field_0014,&local_c);
        if (iVar9 != 0) {
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        iVar9 = pSVar5[1].field_002C + -1;
        if (-1 < iVar9) {
          piVar8 = (int *)(*(int *)&pSVar5[1].field_0x36 + iVar9 * 4);
          do {
            if (*piVar8 == local_c) break;
            iVar9 = iVar9 + -1;
            piVar8 = piVar8 + -1;
          } while (-1 < iVar9);
        }
        if (iVar9 < 0) {
          *(int *)(*(int *)&pSVar5[1].field_0x36 + iVar6 * 4) = local_c;
          *(int *)&pSVar5[1].field_0x3e = *(int *)&pSVar5[1].field_0x3e + 1;
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        iVar6 = ReportDebugMessage(s_E____titans_Igor_to_jell_m_cpp_007cb2f0,0x110,0,0,&DAT_007a4ccc
                                   ,s_STJellyManC__max_jellies_error_007cb384);
        if (iVar6 == 0) {
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      if (uVar10 != 0x128) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
    }
    thunk_FUN_005811c0((STJellyGunC *)pSVar5);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if (uVar10 == 0x10f) {
    local_8 = (byte *)Library::DKW::LIB::FUN_006aac70(0x3a);
    if (local_8 == (byte *)0x0) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    puVar12 = (undefined4 *)&pSVar5[1].field_0x8;
    pbVar14 = local_8;
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pbVar14 = *puVar12;
      puVar12 = puVar12 + 1;
      pbVar14 = pbVar14 + 4;
    }
    *(undefined2 *)pbVar14 = *(undefined2 *)puVar12;
    local_8[0xc] = 2;
    local_8[0xd] = 0;
    local_8[0xe] = 0;
    local_8[0xf] = 0;
    uVar2 = pSVar5[1].field_0x3f;
    uVar3 = pSVar5[1].field_0x40;
    uVar4 = pSVar5[1].field_0x41;
    local_8[0x32] = pSVar5[1].field_0x3e;
    local_8[0x33] = uVar2;
    local_8[0x34] = uVar3;
    local_8[0x35] = uVar4;
    uVar2 = pSVar5[1].field_0x5;
    uVar3 = pSVar5[1].field_0x6;
    uVar4 = pSVar5[1].field_0x7;
    local_8[0x2e] = pSVar5[1].field_0x4;
    local_8[0x2f] = uVar2;
    local_8[0x30] = uVar3;
    local_8[0x31] = uVar4;
    local_8[0x36] = 0;
    local_8[0x37] = 0;
    local_8[0x38] = 0;
    local_8[0x39] = 0;
    STPlaySystemC::SaveObjData
              (PTR_00802a38,pSVar5->field_0018,local_8,(AnonShape_0060EA30_DCEB68AD *)0x3a);
    FreeAndNull(&local_8);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if (uVar10 == 0) {
    thunk_FUN_00581bc0((int)pSVar5);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if (uVar10 != 2) {
    if (uVar10 != 3) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if (*(int *)&pSVar5[1].field_0x36 != 0) {
      FreeAndNull((void **)&pSVar5[1].field_0x36);
    }
    if (*(int *)&pSVar5[1].field_0x3a == 0) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    FreeAndNull((void **)&pSVar5[1].field_0x3a);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  iVar6 = param_1->field_0014;
  *(undefined4 *)&pSVar5[1].field_0x36 = 0;
  *(undefined4 *)&pSVar5[1].field_0x3a = 0;
  uVar10 = *(uint *)(iVar6 + 0xc);
  if (uVar10 < 2) {
    *(undefined4 *)&pSVar5[1].field_0x4 = 0;
    *(undefined4 *)&pSVar5[1].field_0x3e = 0;
    puVar12 = (undefined4 *)param_1->field_0014;
    puVar11 = (undefined4 *)&pSVar5[1].field_0x8;
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar11 = puVar11 + 1;
    }
    *(undefined2 *)puVar11 = *(undefined2 *)puVar12;
    if (((((int)pSVar5[1].field_001C < 0) || ((int)pSVar5[1].field_0020 < 0)) ||
        ((int)g_worldGrid.sizeX < (int)pSVar5[1].field_0024)) ||
       ((int)g_worldGrid.sizeY < (int)pSVar5[1].field_0028)) {
      iVar6 = ReportDebugMessage(s_E____titans_Igor_to_jell_m_cpp_007cb2f0,0x13d,0,0,&DAT_007a4ccc,
                                 s_Bad_init_coordinates_007cb3ac);
      if (iVar6 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,s_E____titans_Igor_to_jell_m_cpp_007cb2f0,0x13e);
    }
    iVar6 = Library::DKW::LIB::FUN_006aac70(pSVar5[1].field_002C << 2);
    *(int *)&pSVar5[1].field_0x36 = iVar6;
    iVar6 = Library::DKW::LIB::FUN_006aac70(pSVar5[1].field_002C << 2);
    *(int *)&pSVar5[1].field_0x3a = iVar6;
    if ((*(int *)&pSVar5[1].field_0x36 != 0) && (iVar6 != 0)) goto cf_common_exit_00581D62;
    iVar6 = ReportDebugMessage(s_E____titans_Igor_to_jell_m_cpp_007cb2f0,0x143,0,0,&DAT_007a4ccc,
                               s_Not_enough_memory_007cb3c8);
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    iVar6 = 0x144;
  }
  else {
    if (uVar10 != 2) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    puVar12 = (undefined4 *)param_1->field_0014;
    puVar11 = puVar12;
    puVar13 = (undefined4 *)&pSVar5[1].field_0x8;
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
    }
    *(undefined2 *)puVar13 = *(undefined2 *)puVar11;
    *(undefined4 *)&pSVar5[1].field_0x4 = *(undefined4 *)((int)puVar12 + 0x2e);
    *(undefined4 *)&pSVar5[1].field_0x3e = 0;
    iVar6 = Library::DKW::LIB::FUN_006aac70(pSVar5[1].field_002C << 2);
    *(int *)&pSVar5[1].field_0x36 = iVar6;
    iVar6 = Library::DKW::LIB::FUN_006aac70(pSVar5[1].field_002C << 2);
    *(int *)&pSVar5[1].field_0x3a = iVar6;
    if ((*(int *)&pSVar5[1].field_0x36 != 0) && (iVar6 != 0)) goto cf_common_exit_00581D62;
    iVar6 = ReportDebugMessage(s_E____titans_Igor_to_jell_m_cpp_007cb2f0,0x15a,0,0,&DAT_007a4ccc,
                               s_Not_enough_memory_007cb3c8);
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    iVar6 = 0x15b;
  }
  RaiseInternalException
            (-1,g_overwriteContext_007ED77C,s_E____titans_Igor_to_jell_m_cpp_007cb2f0,iVar6);
cf_common_exit_00581D62:
  puVar12 = *(undefined4 **)&pSVar5[1].field_0x36;
  for (uVar10 = pSVar5[1].field_002C & 0x3fffffff; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined1 *)puVar12 = 0;
    puVar12 = (undefined4 *)((int)puVar12 + 1);
  }
  puVar12 = *(undefined4 **)&pSVar5[1].field_0x3a;
  for (uVar10 = pSVar5[1].field_002C & 0x3fffffff; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined1 *)puVar12 = 0;
    puVar12 = (undefined4 *)((int)puVar12 + 1);
  }
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

