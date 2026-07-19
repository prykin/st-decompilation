
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::SaveTmp */

void __thiscall STAllPlayersC::SaveTmp(STAllPlayersC *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  undefined4 *local_c;
  int *local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar4 = __setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_50.previous;
    if (iVar4 != -0x5001fff7) {
      iVar5 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x16fd,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__SaveTmp_007a745c);
      if (iVar5 != 0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      RaiseInternalException(iVar4,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x16fe);
    }
    return;
  }
  if ((param_1 < 0) || (9 < param_1)) {
    RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x16d8)
    ;
  }
  iVar4 = (uint)DAT_0080874d * 0xa62;
  if (*(int *)((int)&DAT_007f5023 + iVar4) == 0) {
    local_8 = (int *)((int)&DAT_007f4f83 + iVar4);
  }
  else if (*(int *)((int)&DAT_007f5023 + iVar4) == 1) {
    local_8 = (int *)((int)&DAT_007f4fd3 + iVar4);
  }
  else {
    iVar5 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x16dd,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC__SaveTmp_invalid_p_007a74ac);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x16de)
    ;
  }
  piVar3 = local_8;
  if (*local_8 != 0) {
    local_c = (undefined4 *)((int)&DAT_007f5027 + iVar4 + param_1 * 0x10);
    if (*(byte **)((int)local_c + 10) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_c + 10));
      *(undefined4 *)((int)local_c + 10) = 0;
      *local_c = 0;
    }
  }
  iVar5 = *piVar3;
  if (0x19a < iVar5) {
    if (((iVar5 == 0x1a4) || (iVar5 == 0x1ae)) || (iVar5 == 0x1b8)) goto LAB_00438fe7;
    goto LAB_00438fb0;
  }
  if (iVar5 == 0x19a) {
LAB_00438f65:
    piVar1 = (int *)((int)&DAT_007f5027 + iVar4 + param_1 * 0x10);
    *piVar1 = iVar5;
    piVar1[1] = piVar3[1];
    *(undefined2 *)((int)piVar1 + 0xe) = *(undefined2 *)((int)piVar3 + 0xe);
    FUN_006afe40((int *)((int)piVar1 + 10),*(uint **)((int)piVar3 + 10));
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  if (iVar5 < 0x5b) {
    if (iVar5 == 0x5a) {
LAB_00438fe7:
      piVar1 = (int *)((int)&DAT_007f5027 + iVar4 + param_1 * 0x10);
      *piVar1 = iVar5;
      piVar1[1] = piVar3[1];
      *(short *)(piVar1 + 2) = (short)piVar3[2];
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    if (iVar5 == 0) {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    if (iVar5 == 0x3c) goto LAB_00438f65;
  }
  else if (iVar5 == 0x172) goto LAB_00438fe7;
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

