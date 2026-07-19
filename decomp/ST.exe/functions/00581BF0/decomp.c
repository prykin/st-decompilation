
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_jell_m.cpp
   STJellyManC::GetMessage */

undefined4 __thiscall STJellyManC::GetMessage(STJellyManC *this,int param_1)

{
  code *pcVar1;
  STGameObjC *pSVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  undefined4 *puVar8;
  undefined4 *puVar9;
  STGameObjC *pSVar10;
  void *unaff_EDI;
  byte *pbVar11;
  InternalExceptionFrame local_54;
  STGameObjC *local_10;
  int local_c;
  byte *local_8;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = (STGameObjC *)this;
  iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_10;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Igor_to_jell_m_cpp_007cb2f0,0x191,0,iVar3,&DAT_007a4ccc
                               ,s_STJellyManC__GetMessage_007cb348);
    if (iVar6 != 0) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Igor_to_jell_m_cpp_007cb2f0,0x192);
    return 0xffff;
  }
  STGameObjC::GetMessage(local_10,param_1);
  uVar7 = *(uint *)(param_1 + 0x10);
  if (0x10f < uVar7) {
    if (uVar7 == 0x124) {
      iVar3 = *(int *)(pSVar2 + 0x1fd) + -1;
      if (iVar3 < 0) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      while ((iVar6 = *(int *)(*(int *)(pSVar2 + 0x207) + iVar3 * 4), iVar6 == 0 ||
             (*(int *)(iVar6 + 8) != *(int *)(param_1 + 0x14)))) {
        if ((iVar3 < 0) &&
           (iVar6 = ReportDebugMessage(s_E____titans_Igor_to_jell_m_cpp_007cb2f0,0x128,0,0,
                                       &DAT_007a4ccc,s_Jell_m_Small_finding_jelly_007cb364),
           iVar6 != 0)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        iVar3 = iVar3 + -1;
        if (iVar3 < 0) {
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
      }
      *(undefined4 *)(*(int *)(pSVar2 + 0x207) + iVar3 * 4) = 0;
      iVar3 = *(int *)(pSVar2 + 0x20f);
      *(int *)(pSVar2 + 0x20f) = iVar3 + -1;
      if (((byte)pSVar2[0x1d5] & 1) == 0) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (iVar3 + -1 != 0) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
    }
    else {
      if (uVar7 == 0x125) {
        iVar3 = *(int *)(pSVar2 + 0x1fd) + -1;
        if (-1 < iVar3) {
          piVar5 = (int *)(*(int *)(pSVar2 + 0x207) + iVar3 * 4);
          do {
            if (*piVar5 == 0) break;
            iVar3 = iVar3 + -1;
            piVar5 = piVar5 + -1;
          } while (-1 < iVar3);
        }
        if (iVar3 < 0) {
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        iVar6 = FUN_006e5380(DAT_00802a38,*(int *)(param_1 + 0x14),&local_c);
        if (iVar6 != 0) {
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        iVar6 = *(int *)(pSVar2 + 0x1fd) + -1;
        if (-1 < iVar6) {
          piVar5 = (int *)(*(int *)(pSVar2 + 0x207) + iVar6 * 4);
          do {
            if (*piVar5 == local_c) break;
            iVar6 = iVar6 + -1;
            piVar5 = piVar5 + -1;
          } while (-1 < iVar6);
        }
        if (iVar6 < 0) {
          *(int *)(*(int *)(pSVar2 + 0x207) + iVar3 * 4) = local_c;
          *(int *)(pSVar2 + 0x20f) = *(int *)(pSVar2 + 0x20f) + 1;
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        iVar3 = ReportDebugMessage(s_E____titans_Igor_to_jell_m_cpp_007cb2f0,0x110,0,0,&DAT_007a4ccc
                                   ,s_STJellyManC__max_jellies_error_007cb384);
        if (iVar3 == 0) {
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      if (uVar7 != 0x128) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
    }
    thunk_FUN_005811c0(pSVar2);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if (uVar7 == 0x10f) {
    local_8 = (byte *)Library::DKW::LIB::FUN_006aac70(0x3a);
    if (local_8 == (byte *)0x0) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    pSVar10 = pSVar2 + 0x1d9;
    pbVar11 = local_8;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pSVar10;
      pSVar10 = pSVar10 + 4;
      pbVar11 = pbVar11 + 4;
    }
    *(undefined2 *)pbVar11 = *(undefined2 *)pSVar10;
    local_8[0xc] = 2;
    local_8[0xd] = 0;
    local_8[0xe] = 0;
    local_8[0xf] = 0;
    *(undefined4 *)(local_8 + 0x32) = *(undefined4 *)(pSVar2 + 0x20f);
    *(undefined4 *)(local_8 + 0x2e) = *(undefined4 *)(pSVar2 + 0x1d5);
    local_8[0x36] = 0;
    local_8[0x37] = 0;
    local_8[0x38] = 0;
    local_8[0x39] = 0;
    STPlaySystemC::SaveObjData(DAT_00802a38,*(undefined4 *)(pSVar2 + 0x18),local_8,0x3a);
    FUN_006ab060(&local_8);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if (uVar7 == 0) {
    thunk_FUN_00581bc0((int)pSVar2);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if (uVar7 != 2) {
    if (uVar7 != 3) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if (*(int *)(pSVar2 + 0x207) != 0) {
      FUN_006ab060((undefined4 *)(pSVar2 + 0x207));
    }
    if (*(int *)(pSVar2 + 0x20b) == 0) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    FUN_006ab060((undefined4 *)(pSVar2 + 0x20b));
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(pSVar2 + 0x207) = 0;
  *(undefined4 *)(pSVar2 + 0x20b) = 0;
  uVar7 = *(uint *)(iVar3 + 0xc);
  if (uVar7 < 2) {
    *(undefined4 *)(pSVar2 + 0x1d5) = 0;
    *(undefined4 *)(pSVar2 + 0x20f) = 0;
    puVar9 = *(undefined4 **)(param_1 + 0x14);
    pSVar10 = pSVar2 + 0x1d9;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pSVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      pSVar10 = pSVar10 + 4;
    }
    *(undefined2 *)pSVar10 = *(undefined2 *)puVar9;
    if ((((*(int *)(pSVar2 + 0x1ed) < 0) || (*(int *)(pSVar2 + 0x1f1) < 0)) ||
        ((int)DAT_007fb240 < *(int *)(pSVar2 + 0x1f5))) ||
       ((int)DAT_007fb242 < *(int *)(pSVar2 + 0x1f9))) {
      iVar3 = ReportDebugMessage(s_E____titans_Igor_to_jell_m_cpp_007cb2f0,0x13d,0,0,&DAT_007a4ccc,
                                 s_Bad_init_coordinates_007cb3ac);
      if (iVar3 != 0) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      RaiseInternalException(-1,DAT_007ed77c,s_E____titans_Igor_to_jell_m_cpp_007cb2f0,0x13e);
    }
    iVar3 = Library::DKW::LIB::FUN_006aac70(*(int *)(pSVar2 + 0x1fd) << 2);
    *(int *)(pSVar2 + 0x207) = iVar3;
    iVar3 = Library::DKW::LIB::FUN_006aac70(*(int *)(pSVar2 + 0x1fd) << 2);
    *(int *)(pSVar2 + 0x20b) = iVar3;
    if ((*(int *)(pSVar2 + 0x207) != 0) && (iVar3 != 0)) goto LAB_00581d62;
    iVar3 = ReportDebugMessage(s_E____titans_Igor_to_jell_m_cpp_007cb2f0,0x143,0,0,&DAT_007a4ccc,
                               s_Not_enough_memory_007cb3c8);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    iVar3 = 0x144;
  }
  else {
    if (uVar7 != 2) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    puVar9 = *(undefined4 **)(param_1 + 0x14);
    puVar8 = puVar9;
    pSVar10 = pSVar2 + 0x1d9;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pSVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      pSVar10 = pSVar10 + 4;
    }
    *(undefined2 *)pSVar10 = *(undefined2 *)puVar8;
    *(undefined4 *)(pSVar2 + 0x1d5) = *(undefined4 *)((int)puVar9 + 0x2e);
    *(undefined4 *)(pSVar2 + 0x20f) = 0;
    iVar3 = Library::DKW::LIB::FUN_006aac70(*(int *)(pSVar2 + 0x1fd) << 2);
    *(int *)(pSVar2 + 0x207) = iVar3;
    iVar3 = Library::DKW::LIB::FUN_006aac70(*(int *)(pSVar2 + 0x1fd) << 2);
    *(int *)(pSVar2 + 0x20b) = iVar3;
    if ((*(int *)(pSVar2 + 0x207) != 0) && (iVar3 != 0)) goto LAB_00581d62;
    iVar3 = ReportDebugMessage(s_E____titans_Igor_to_jell_m_cpp_007cb2f0,0x15a,0,0,&DAT_007a4ccc,
                               s_Not_enough_memory_007cb3c8);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    iVar3 = 0x15b;
  }
  RaiseInternalException(-1,DAT_007ed77c,s_E____titans_Igor_to_jell_m_cpp_007cb2f0,iVar3);
LAB_00581d62:
  puVar9 = *(undefined4 **)(pSVar2 + 0x207);
  for (uVar7 = *(uint *)(pSVar2 + 0x1fd) & 0x3fffffff; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar9 = 0;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  puVar9 = *(undefined4 **)(pSVar2 + 0x20b);
  for (uVar7 = *(uint *)(pSVar2 + 0x1fd) & 0x3fffffff; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar9 = 0;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

