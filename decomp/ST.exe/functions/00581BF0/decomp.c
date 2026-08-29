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
  STJellyManC *pSVar4;
  int local_EAX_35;
  void *pvVar5;
  int local_EAX_334;
  int local_EAX_556;
  int local_EAX_677;
  int *piVar6;
  int iVar7_mg1;
  int iVar7;
  int iVar8;
  int local_EAX_1154;
  int iVar11;
  int iVar9;
  uint uVar10;
  byte *puVar11;
  byte *puVar12;
  byte *puVar13;
  byte *pbVar14;
  InternalExceptionFrame local_54;
  STJellyManC *local_10;
  int local_c;
  byte *local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;

  local_EAX_35 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  pSVar4 = local_10;
  if (local_EAX_35 != 0) {
    g_currentExceptionFrame = local_54.previous;

    iVar11 = ReportDebugMessage("E:\\__titans\\Igor\\to_jell_m.cpp",0x191,0,local_EAX_35,
                                "%s","STJellyManC::GetMessage");
    if (iVar11 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_35,0,"E:\\__titans\\Igor\\to_jell_m.cpp",0x192);
    return 0xffff;
  }
  /* ST_CALLSITE[00581C2E]: CALL 0x00403ebd; direct=00403EBD STGameObjC::GetMessage */
  STGameObjC::GetMessage((STGameObjC *)local_10,message);
  SVar1 = message->id;
  if (MESS_SHARED_010F < SVar1) {
    if (SVar1 == MESS_STJELLYMANC_0124) {
      iVar9 = pSVar4->field_01FD + -1;
      if (iVar9 < 0) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      while ((iVar7 = *(int *)((int)pSVar4->field_0207 + iVar9 * 4), iVar7 == 0 ||
             (STField<dword>(iVar7,0x8) != (message->arg0).u32))) {
        if ((iVar9 < 0) &&

           (local_EAX_1154 =
                 ReportDebugMessage("E:\\__titans\\Igor\\to_jell_m.cpp",0x128,0,0,
                                    "%s","Jell_m:Small finding jelly"),
           local_EAX_1154 != 0)) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar9 = iVar9 + -1;
        if (iVar9 < 0) {
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
      }
      *(undefined4 *)((int)pSVar4->field_0207 + iVar9 * 4) = 0;
      iVar9 = pSVar4->field_020F + -1;
      pSVar4->field_020F = iVar9;
      if (((byte)pSVar4->field_01D5 & 1) == 0) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (iVar9 != 0) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
    }
    else {
      if (SVar1 == MESS_STJELLYMANC_0125) {
        iVar9 = pSVar4->field_01FD + -1;
        if (-1 < iVar9) {
          piVar6 = (int *)((int)pSVar4->field_0207 + iVar9 * 4);
          do {
            if (*piVar6 == 0) break;
            iVar9 = iVar9 + -1;
            piVar6 = piVar6 + -1;
          } while (-1 < iVar9);
        }
        if (iVar9 < 0) {
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }

        iVar7_mg1 = FUN_006e5380(g_playSystem_00802A38,(message->arg0).i32,&local_c);
        if (iVar7_mg1 != 0) {
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        iVar7 = pSVar4->field_01FD + -1;
        if (-1 < iVar7) {
          piVar6 = (int *)((int)pSVar4->field_0207 + iVar7 * 4);
          do {
            if (*piVar6 == local_c) break;
            iVar7 = iVar7 + -1;
            piVar6 = piVar6 + -1;
          } while (-1 < iVar7);
        }
        if (iVar7 < 0) {
          *(int *)((int)pSVar4->field_0207 + iVar9 * 4) = local_c;
          pSVar4->field_020F = pSVar4->field_020F + 1;
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

    thunk_FUN_005811c0((RecoveredRecord_005811C0_696D31CF *)pSVar4);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if (SVar1 == MESS_SHARED_010F) {

    local_8 = Library::DKW::LIB::MemAlloc(0x3a);
    if (local_8 == nullptr) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    puVar12 = (byte *)&pSVar4->field_0x1d9;
    pbVar14 = local_8;
    memmove(pbVar14, puVar12, 0x2e); /* compiler REP MOVS byte copy */
    local_8[0xc] = 2;
    local_8[0xd] = 0;
    local_8[0xe] = 0;
    local_8[0xf] = 0;
    *(int *)(local_8 + 0x32) = pSVar4->field_020F;
    *(undefined4 *)(local_8 + 0x2e) = pSVar4->field_01D5;
    local_8[0x36] = 0;
    local_8[0x37] = 0;
    local_8[0x38] = 0;
    local_8[0x39] = 0;
    /* ST_CALLSITE[00581F26]: CALL 0x004025f9; direct=004025F9 STPlaySystemC::SaveObjData */
    STPlaySystemC::SaveObjData(g_playSystem_00802A38,(int *)pSVar4->field_0018,local_8,0x3a);
    FreeAndNull(&local_8);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if (SVar1 == MESS_ID_NONE) {

    thunk_FUN_00581bc0((int)pSVar4);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if (SVar1 != MESS_ID_CREATE) {
    if (SVar1 != MESS_SHARED_0003) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if (pSVar4->field_0207 != nullptr) {
      FreeAndNull(&pSVar4->field_0207);
    }
    if (pSVar4->field_020B == nullptr) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    FreeAndNull(&pSVar4->field_020B);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  dVar2 = (message->arg0).u32;
  pSVar4->field_0207 = nullptr;
  pSVar4->field_020B = nullptr;
  uVar10 = STField<uint>(dVar2,0xC);
  if (uVar10 < 2) {
    pSVar4->field_01D5 = 0;
    pSVar4->field_020F = 0;
    puVar12 = (byte *)((message->arg0).ptr);
    puVar11 = (byte *)&pSVar4->field_0x1d9;
    memmove(puVar11, puVar12, 0x2e); /* compiler REP MOVS byte copy */
    if ((((pSVar4->field_01ED < 0) || (pSVar4->field_01F1 < 0)) ||
        ((int)g_worldGrid.sizeX < pSVar4->field_01F5)) ||
       ((int)g_worldGrid.sizeY < pSVar4->field_01F9)) {

      local_EAX_556 =
           ReportDebugMessage("E:\\__titans\\Igor\\to_jell_m.cpp",0x13d,0,0,"%s",
                              "Bad init coordinates");
      if (local_EAX_556 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\to_jell_m.cpp",0x13e);
    }

    pvVar5 = Library::DKW::LIB::MemAlloc(pSVar4->field_01FD << 2);
    pSVar4->field_0207 = pvVar5;

    pvVar5 = Library::DKW::LIB::MemAlloc(pSVar4->field_01FD << 2);
    pSVar4->field_020B = pvVar5;
    if ((pSVar4->field_0207 != nullptr) && (pvVar5 != nullptr))
    goto cf_common_exit_00581D62;

    local_EAX_677 =
         ReportDebugMessage("E:\\__titans\\Igor\\to_jell_m.cpp",0x143,0,0,"%s",
                            "Not enough memory");
    if (local_EAX_677 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    iVar9 = 0x144;
  }
  else {
    if (uVar10 != 2) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    puVar12 = (byte *)((message->arg0).ptr);
    puVar11 = (byte *)(puVar12);
    puVar13 = (byte *)&pSVar4->field_0x1d9;
    memmove(puVar13, puVar11, 0x2e); /* compiler REP MOVS byte copy */
    pSVar4->field_01D5 = STField<undefined4>(puVar12,0x2e);
    pSVar4->field_020F = 0;

    pvVar5 = Library::DKW::LIB::MemAlloc(pSVar4->field_01FD << 2);
    pSVar4->field_0207 = pvVar5;

    pvVar5 = Library::DKW::LIB::MemAlloc(pSVar4->field_01FD << 2);
    pSVar4->field_020B = pvVar5;
    if ((pSVar4->field_0207 != nullptr) && (pvVar5 != nullptr))
    goto cf_common_exit_00581D62;

    local_EAX_334 =
         ReportDebugMessage("E:\\__titans\\Igor\\to_jell_m.cpp",0x15a,0,0,"%s",
                            "Not enough memory");
    if (local_EAX_334 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    iVar9 = 0x15b;
  }
  RaiseInternalException
            (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\to_jell_m.cpp",iVar9);
cf_common_exit_00581D62:
  puVar12 = (byte *)(pSVar4->field_0207);
  for (uVar10 = pSVar4->field_01FD & 0x3fffffff; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar12 = 0;
    puVar12 = (byte *)(puVar12 + 1);
  }
  for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
    *(undefined1 *)puVar12 = 0;
    puVar12 = (byte *)((int)puVar12 + 1);
  }
  puVar12 = (byte *)(pSVar4->field_020B);
  for (uVar10 = pSVar4->field_01FD & 0x3fffffff; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar12 = 0;
    puVar12 = (byte *)(puVar12 + 1);
  }
  for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
    *(undefined1 *)puVar12 = 0;
    puVar12 = (byte *)((int)puVar12 + 1);
  }
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

