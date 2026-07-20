
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::SaveTmp */

void __thiscall STAllPlayersC::SaveTmp(STAllPlayersC *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  undefined4 *local_c;
  int *local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_50.previous;
    if (iVar4 != -0x5001fff7) {
      iVar6 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x16fd,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__SaveTmp_007a745c);
      if (iVar6 != 0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      RaiseInternalException(iVar4,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x16fe);
    }
    return;
  }
  if ((param_1 < 0) || (9 < param_1)) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x16d8);
  }
  uVar5 = (uint)DAT_0080874d;
  iVar4 = uVar5 * 0xa62;
  if (g_playerRuntime[uVar5].field442_0x203 == 0) {
    local_8 = &g_playerRuntime[uVar5].field326_0x163;
  }
  else if (g_playerRuntime[uVar5].field442_0x203 == 1) {
    local_8 = &g_playerRuntime[uVar5].field384_0x1b3;
  }
  else {
    iVar6 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x16dd,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC__SaveTmp_invalid_p_007a74ac);
    if (iVar6 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x16de);
  }
  piVar3 = local_8;
  if (*local_8 != 0) {
    local_c = (undefined4 *)(param_1 * 0x10 + 0x7f5027 + iVar4);
    if (*(byte **)((int)local_c + 10) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_c + 10));
      *(undefined4 *)((int)local_c + 10) = 0;
      *local_c = 0;
    }
  }
  iVar6 = *piVar3;
  if (0x19a < iVar6) {
    if (((iVar6 == 0x1a4) || (iVar6 == 0x1ae)) || (iVar6 == 0x1b8)) goto cf_common_exit_00438FE7;
    goto LAB_00438fb0;
  }
  if (iVar6 == 0x19a) {
LAB_00438f65:
    piVar1 = (int *)(param_1 * 0x10 + 0x7f5027 + iVar4);
    *piVar1 = iVar6;
    piVar1[1] = piVar3[1];
    *(undefined2 *)((int)piVar1 + 0xe) = *(undefined2 *)((int)piVar3 + 0xe);
    Library::DKW::TBL::FUN_006afe40((int *)((int)piVar1 + 10),*(uint **)((int)piVar3 + 10));
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  if (iVar6 < 0x5b) {
    if (iVar6 == 0x5a) {
cf_common_exit_00438FE7:
      piVar1 = (int *)(param_1 * 0x10 + 0x7f5027 + iVar4);
      *piVar1 = iVar6;
      piVar1[1] = piVar3[1];
      *(short *)(piVar1 + 2) = (short)piVar3[2];
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    if (iVar6 == 0) {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    if (iVar6 == 0x3c) goto LAB_00438f65;
  }
  else if (iVar6 == 0x172) goto cf_common_exit_00438FE7;
LAB_00438fb0:
  iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x16f9,0,0,&DAT_007a4ccc,
                             s_STAllPlayersC__SaveTmp_invalid_g_007a7478);
  if (iVar4 == 0) {
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

