
int __cdecl FUN_006f0800(int param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar7;
  int iVar8;
  InternalExceptionFrame local_60;
  int local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  iVar2 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if ((param_1 == 0) || (param_2 == (int *)0x0)) {
      RaiseInternalException(-0x34,DAT_007ed77c,s_E__ourlib_Mfstmap_cpp_007eef88,0x247);
    }
    local_1c = 0;
    uVar4 = *param_2 * param_2[1] * 0xe;
    piVar7 = param_2 + 2;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *piVar7 = 0;
      piVar7 = piVar7 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)piVar7 = 0;
      piVar7 = (int *)((int)piVar7 + 1);
    }
    if (0 < *(int *)(param_1 + 0x455)) {
      piVar7 = (int *)(param_1 + 0x459);
      do {
        local_c = piVar7;
        if (*piVar7 != 0) {
          if (*(short *)(*piVar7 + 0x4e) == 0) {
            RaiseInternalException(-5,DAT_007ed77c,s_E__ourlib_Mfstmap_cpp_007eef88,0x24e);
          }
          iVar2 = *piVar7;
          local_10 = 0;
          iVar3 = (int)*(short *)(iVar2 + 6);
          local_14 = CONCAT22((short)((uint)(iVar3 - (iVar3 >> 0x1f)) >> 0x10),
                              *(ushort *)(iVar2 + 0x4e));
          iVar6 = (int)*(short *)(iVar2 + 8);
          iVar8 = (int)*(short *)(iVar2 + 4) / 2;
          iVar3 = iVar3 / 2;
          local_18 = (*(ushort *)(iVar2 + 0x4e) & 0xf00) >> 8;
          if (local_18 != 0) {
            do {
              if ((((iVar8 < 0) || (*param_2 <= iVar8)) || (iVar3 < 0)) ||
                 (((param_2[1] <= iVar3 || (iVar6 < 0)) || (5 < iVar6)))) {
                local_8 = iVar6;
                RaiseInternalException(-5,DAT_007ed77c,s_E__ourlib_Mfstmap_cpp_007eef88,0x25c);
              }
              else {
                *(undefined2 *)
                 ((int)param_2 + ((iVar6 * param_2[1] + iVar3) * *param_2 + iVar8) * 6 + 10) =
                     *(undefined2 *)(*local_c + 0x4c);
                local_14 = (uint)(ushort)(((byte)(~-(local_10 != 0) & (byte)local_18) & 0xf) << 8) |
                           local_14 & 0xf0ff;
                *(short *)((int)param_2 + ((iVar6 * param_2[1] + iVar3) * *param_2 + 2 + iVar8) * 6)
                     = (short)local_14;
                *(undefined2 *)
                 ((int)param_2 + ((iVar6 * param_2[1] + iVar3) * *param_2 + iVar8) * 6 + 8) =
                     *(undefined2 *)(*local_c + 0x4a);
                local_8 = iVar6;
              }
              local_10 = local_10 + 1;
              iVar6 = local_8 + -1;
              local_8 = iVar6;
            } while (local_10 < (int)local_18);
          }
        }
        local_1c = local_1c + 1;
        piVar7 = local_c + 1;
      } while (local_1c < *(int *)(param_1 + 0x455));
    }
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  g_currentExceptionFrame = local_60.previous;
  iVar3 = ReportDebugMessage(s_E__ourlib_Mfstmap_cpp_007eef88,0x262,0,iVar2,&DAT_007a4ccc,
                             s_AuxTMapRefresh_007ef064);
  if (iVar3 == 0) {
    RaiseInternalException(iVar2,0,s_E__ourlib_Mfstmap_cpp_007eef88,0x264);
    return iVar2;
  }
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}

