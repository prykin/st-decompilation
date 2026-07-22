#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_jell_m.cpp
   STJellyManC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00402F4F|00581BF0; family_names=STJellyManC::GetMessage; ret4=8;
   direct_offsets={10:1,14:5,18:1,1c:0} */

int __thiscall STJellyManC::GetMessage(STJellyManC *this,STMessage *message)

{
  STMessageId SVar1;
  dword dVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  STGameObjC *pSVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  byte *pbVar15;
  InternalExceptionFrame local_54;
  STGameObjC *local_10;
  int local_c;
  byte *local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = (STGameObjC *)this;
  iVar8 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  pSVar7 = local_10;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar10 = ReportDebugMessage("E:\\__titans\\Igor\\to_jell_m.cpp",0x191,0,iVar8,
                                "%s","STJellyManC::GetMessage");
    if (iVar10 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar8,0,"E:\\__titans\\Igor\\to_jell_m.cpp",0x192);
    return 0xffff;
  }
  STGameObjC::GetMessage(local_10,message);
  SVar1 = message->id;
  if (MESS_SHARED_010F < SVar1) {
    if (SVar1 == MESS_STJELLYMANC_0124) {
      iVar8 = *(int *)&pSVar7->field_0x1fd + -1;
      if (iVar8 < 0) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      while ((iVar10 = *(int *)(*(int *)&pSVar7->field_0x207 + iVar8 * 4), iVar10 == 0 ||
             (*(dword *)(iVar10 + 8) != (message->arg0).u32))) {
        if ((iVar8 < 0) &&
           (iVar10 = ReportDebugMessage("E:\\__titans\\Igor\\to_jell_m.cpp",0x128,0,0,
                                        "%s","Jell_m:Small finding jelly"),
           iVar10 != 0)) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar8 = iVar8 + -1;
        if (iVar8 < 0) {
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
      }
      *(undefined4 *)(*(int *)&pSVar7->field_0x207 + iVar8 * 4) = 0;
      iVar8 = *(int *)&pSVar7->field_0x20f + -1;
      *(int *)&pSVar7->field_0x20f = iVar8;
      if ((pSVar7->field_0x1d5 & 1) == 0) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (iVar8 != 0) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
    }
    else {
      if (SVar1 == MESS_STJELLYMANC_0125) {
        iVar8 = *(int *)&pSVar7->field_0x1fd + -1;
        if (-1 < iVar8) {
          piVar9 = (int *)(*(int *)&pSVar7->field_0x207 + iVar8 * 4);
          do {
            if (*piVar9 == 0) break;
            iVar8 = iVar8 + -1;
            piVar9 = piVar9 + -1;
          } while (-1 < iVar8);
        }
        if (iVar8 < 0) {
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        iVar10 = FUN_006e5380(g_playSystem_00802A38,(message->arg0).i32,&local_c);
        if (iVar10 != 0) {
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        iVar10 = *(int *)&pSVar7->field_0x1fd + -1;
        if (-1 < iVar10) {
          piVar9 = (int *)(*(int *)&pSVar7->field_0x207 + iVar10 * 4);
          do {
            if (*piVar9 == local_c) break;
            iVar10 = iVar10 + -1;
            piVar9 = piVar9 + -1;
          } while (-1 < iVar10);
        }
        if (iVar10 < 0) {
          *(int *)(*(int *)&pSVar7->field_0x207 + iVar8 * 4) = local_c;
          *(int *)&pSVar7->field_0x20f = *(int *)&pSVar7->field_0x20f + 1;
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        iVar8 = ReportDebugMessage("E:\\__titans\\Igor\\to_jell_m.cpp",0x110,0,0,"%s"
                                   ,"STJellyManC::max jellies error");
        if (iVar8 == 0) {
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      if (SVar1 != MESS_HITKILL) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
    }
    thunk_FUN_005811c0(pSVar7);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if (SVar1 == MESS_SHARED_010F) {
    local_8 = (byte *)Library::DKW::LIB::FUN_006aac70(0x3a);
    if (local_8 == (byte *)0x0) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    puVar13 = (undefined4 *)&pSVar7->field_0x1d9;
    pbVar15 = local_8;
    for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(undefined4 *)pbVar15 = *puVar13;
      puVar13 = puVar13 + 1;
      pbVar15 = pbVar15 + 4;
    }
    *(undefined2 *)pbVar15 = *(undefined2 *)puVar13;
    local_8[0xc] = 2;
    local_8[0xd] = 0;
    local_8[0xe] = 0;
    local_8[0xf] = 0;
    uVar4 = pSVar7->field_0x210;
    uVar5 = pSVar7->field_0x211;
    uVar6 = pSVar7->field_0x212;
    local_8[0x32] = pSVar7->field_0x20f;
    local_8[0x33] = uVar4;
    local_8[0x34] = uVar5;
    local_8[0x35] = uVar6;
    uVar4 = pSVar7->field_0x1d6;
    uVar5 = pSVar7->field_0x1d7;
    uVar6 = pSVar7->field_0x1d8;
    local_8[0x2e] = pSVar7->field_0x1d5;
    local_8[0x2f] = uVar4;
    local_8[0x30] = uVar5;
    local_8[0x31] = uVar6;
    local_8[0x36] = 0;
    local_8[0x37] = 0;
    local_8[0x38] = 0;
    local_8[0x39] = 0;
    STPlaySystemC::SaveObjData
              (g_playSystem_00802A38,pSVar7->field_0018,local_8,(AnonShape_0060EA30_DCEB68AD *)0x3a)
    ;
    FreeAndNull(&local_8);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if (SVar1 == MESS_ID_NONE) {
    thunk_FUN_00581bc0((int)pSVar7);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if (SVar1 != MESS_ID_CREATE) {
    if (SVar1 != MESS_SHARED_0003) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if (*(int *)&pSVar7->field_0x207 != 0) {
      FreeAndNull((void **)&pSVar7->field_0x207);
    }
    if (*(int *)&pSVar7->field_0x20b == 0) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    FreeAndNull((void **)&pSVar7->field_0x20b);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  dVar2 = (message->arg0).u32;
  *(undefined4 *)&pSVar7->field_0x207 = 0;
  *(undefined4 *)&pSVar7->field_0x20b = 0;
  uVar11 = *(uint *)(dVar2 + 0xc);
  if (uVar11 < 2) {
    *(undefined4 *)&pSVar7->field_0x1d5 = 0;
    *(undefined4 *)&pSVar7->field_0x20f = 0;
    puVar13 = (message->arg0).ptr;
    puVar12 = (undefined4 *)&pSVar7->field_0x1d9;
    for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar12 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar12 = puVar12 + 1;
    }
    *(undefined2 *)puVar12 = *(undefined2 *)puVar13;
    if (((((int)pSVar7->field_01ED < 0) || (*(int *)&pSVar7->field_0x1f1 < 0)) ||
        ((int)g_worldGrid.sizeX < *(int *)&pSVar7->field_0x1f5)) ||
       ((int)g_worldGrid.sizeY < *(int *)&pSVar7->field_0x1f9)) {
      iVar8 = ReportDebugMessage("E:\\__titans\\Igor\\to_jell_m.cpp",0x13d,0,0,"%s",
                                 "Bad init coordinates");
      if (iVar8 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\to_jell_m.cpp",0x13e);
    }
    iVar8 = Library::DKW::LIB::FUN_006aac70(*(int *)&pSVar7->field_0x1fd << 2);
    *(int *)&pSVar7->field_0x207 = iVar8;
    iVar8 = Library::DKW::LIB::FUN_006aac70(*(int *)&pSVar7->field_0x1fd << 2);
    *(int *)&pSVar7->field_0x20b = iVar8;
    if ((*(int *)&pSVar7->field_0x207 != 0) && (iVar8 != 0)) goto cf_common_exit_00581D62;
    iVar8 = ReportDebugMessage("E:\\__titans\\Igor\\to_jell_m.cpp",0x143,0,0,"%s",
                               "Not enough memory");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    iVar8 = 0x144;
  }
  else {
    if (uVar11 != 2) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    puVar13 = (message->arg0).ptr;
    puVar12 = puVar13;
    puVar14 = (undefined4 *)&pSVar7->field_0x1d9;
    for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar14 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar14 = puVar14 + 1;
    }
    *(undefined2 *)puVar14 = *(undefined2 *)puVar12;
    *(undefined4 *)&pSVar7->field_0x1d5 = *(undefined4 *)((int)puVar13 + 0x2e);
    *(undefined4 *)&pSVar7->field_0x20f = 0;
    iVar8 = Library::DKW::LIB::FUN_006aac70(*(int *)&pSVar7->field_0x1fd << 2);
    *(int *)&pSVar7->field_0x207 = iVar8;
    iVar8 = Library::DKW::LIB::FUN_006aac70(*(int *)&pSVar7->field_0x1fd << 2);
    *(int *)&pSVar7->field_0x20b = iVar8;
    if ((*(int *)&pSVar7->field_0x207 != 0) && (iVar8 != 0)) goto cf_common_exit_00581D62;
    iVar8 = ReportDebugMessage("E:\\__titans\\Igor\\to_jell_m.cpp",0x15a,0,0,"%s",
                               "Not enough memory");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    iVar8 = 0x15b;
  }
  RaiseInternalException
            (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\to_jell_m.cpp",iVar8);
cf_common_exit_00581D62:
  puVar13 = *(undefined4 **)&pSVar7->field_0x207;
  for (uVar11 = *(uint *)&pSVar7->field_0x1fd & 0x3fffffff; uVar11 != 0; uVar11 = uVar11 - 1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
  for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined1 *)puVar13 = 0;
    puVar13 = (undefined4 *)((int)puVar13 + 1);
  }
  puVar13 = *(undefined4 **)&pSVar7->field_0x20b;
  for (uVar11 = *(uint *)&pSVar7->field_0x1fd & 0x3fffffff; uVar11 != 0; uVar11 = uVar11 - 1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
  for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined1 *)puVar13 = 0;
    puVar13 = (undefined4 *)((int)puVar13 + 1);
  }
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

