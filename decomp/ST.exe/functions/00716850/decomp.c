
int * __cdecl FUN_00716850(int param_1,char *param_2,char param_3,byte param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  ushort *puVar8;
  undefined4 unaff_ESI;
  int iVar9;
  int *piVar10;
  void *unaff_EDI;
  InternalExceptionFrame local_68;
  short local_24 [2];
  short local_20;
  short local_1e;
  undefined2 uStack_1c;
  short local_1a;
  undefined2 local_18;
  ushort uStack_16;
  ushort *local_10;
  ushort *local_c;
  int *local_8;
  
  iVar9 = 0;
  local_10 = (ushort *)0x0;
  local_c = (ushort *)0x0;
  local_8 = (int *)0x0;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  iVar4 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 == 0) {
    if (param_1 == 0) {
      RaiseInternalException(-0x34,DAT_007ed77c,s_E__Ourlib_mftspr_cpp_007f0504,0x31);
    }
    if (param_3 == '\x1d') {
      local_c = cMf32::RecGet((cMf32 *)param_1,0x1d,param_2,(int *)0x0,param_5);
      if (local_c == (ushort *)0x0) {
        RaiseInternalException(-4,DAT_007ed77c,s_E__Ourlib_mftspr_cpp_007f0504,0x34);
      }
      puVar5 = cMf32::RecGetParam((cMf32 *)param_1,6,(char *)local_c,(undefined4 *)local_24,param_5)
      ;
      if (puVar5 == (undefined4 *)0x0) {
        RaiseInternalException(-4,DAT_007ed77c,s_E__Ourlib_mftspr_cpp_007f0504,0x36);
      }
      iVar4 = (int)local_1a;
      cMf32::RecGetParam((cMf32 *)param_1,0x1d,param_2,(undefined4 *)local_24,1);
      local_8 = Library::DKW::LIB::FUN_006aac10(iVar4 * 4 + 0x35);
      *local_8 = iVar4;
      local_8[1] = param_1;
      *(undefined1 *)(local_8 + 2) = 0x1d;
      puVar5 = Library::DKW::LIB::FUN_006aac10(*local_8 << 2);
      *(undefined4 **)((int)local_8 + 0x21) = puVar5;
      puVar5 = Library::DKW::LIB::FUN_006aac10(*local_8 << 2);
      *(undefined4 **)((int)local_8 + 0x29) = puVar5;
      iVar4 = FUN_0070a6f0(param_1,6,(char *)local_c,param_5);
      *(int *)((int)local_8 + 9) = iVar4;
      iVar4 = FUN_0070a7b0(param_1,6,(char *)local_c,param_5);
      *(int *)((int)local_8 + 0xd) = iVar4;
      *(int *)((int)local_8 + 0x1d) = (int)local_20;
      *(uint *)((int)local_8 + 0x19) = CONCAT22(uStack_1c,local_1e);
      *(undefined4 *)((int)local_8 + 0x11) = *(undefined4 *)(local_c + 0x20);
      *(undefined4 *)((int)local_8 + 0x15) = *(undefined4 *)(local_c + 0x22);
      uVar6 = FUN_0070aa50(param_1,(char *)local_c,param_4,1);
      **(undefined4 **)((int)local_8 + 0x21) = uVar6;
      puVar5 = *(undefined4 **)((int)local_8 + 0x21);
      piVar10 = (int *)*puVar5;
      iVar4 = 1;
      if (1 < *local_8) {
        do {
          puVar5[iVar4] = *piVar10 + (int)piVar10;
          iVar9 = iVar4 + 1;
          puVar5 = *(undefined4 **)((int)local_8 + 0x21);
          piVar10 = (int *)puVar5[iVar4];
          iVar4 = iVar9;
        } while (iVar9 < *local_8);
      }
      if ((char)local_c[0x10] != '\0') {
        puVar5 = cMf32::RecGetParam((cMf32 *)param_1,0x16,(char *)(local_c + 0x10),
                                    (undefined4 *)local_24,param_5);
        if (puVar5 == (undefined4 *)0x0) {
          RaiseInternalException(-4,DAT_007ed77c,s_E__Ourlib_mftspr_cpp_007f0504,0x52);
        }
        uVar6 = FUN_0070aa90(param_1,(char *)(local_c + 0x10),param_4,1);
        iVar4 = 0;
        *(undefined4 *)((int)local_8 + 0x25) = uVar6;
        piVar10 = *(int **)((int)local_8 + 0x25);
        if (0 < local_1a) {
          do {
            if (iVar4 < *local_8) {
              *(int **)(*(int *)((int)local_8 + 0x29) + iVar4 * 4) = piVar10 + 1;
              piVar10 = (int *)(*(int *)(*(int *)((int)local_8 + 0x29) + iVar4 * 4) + *piVar10);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < local_1a);
        }
      }
      iVar4 = 0;
      if (0 < *local_8) {
        do {
          *(undefined4 *)((int)local_8 + iVar4 * 4 + 0x31) = *(undefined4 *)(local_c + 0x24);
          iVar4 = iVar4 + 1;
        } while (iVar4 < *local_8);
      }
      iVar4 = 0;
      piVar10 = local_8;
      if (0 < *(int *)(local_c + 0x26)) {
        iVar9 = 0;
        puVar8 = local_c;
        do {
          iVar1 = *(int *)(iVar9 + 0x50 + (int)puVar8);
          if ((((-1 < iVar1) && (iVar1 < *piVar10)) &&
              (*(undefined4 *)((int)piVar10 + iVar1 * 4 + 0x31) =
                    *(undefined4 *)(iVar9 + 0x58 + (int)puVar8), piVar10 = local_8, puVar8 = local_c
              , (char)local_c[0x10] != '\0')) &&
             ((iVar1 = *(int *)(iVar9 + 0x54 + (int)local_c),
              *(int *)(iVar9 + 0x50 + (int)local_c) != iVar1 &&
              (piVar7 = FUN_00716820(*(int **)((int)local_8 + 0x25),(int)local_1a,iVar1),
              piVar10 = local_8, puVar8 = local_c, piVar7 != (int *)0x0)))) {
            *(int **)(*(int *)((int)local_8 + 0x29) + *(int *)(iVar9 + 0x50 + (int)local_c) * 4) =
                 piVar7;
          }
          iVar4 = iVar4 + 1;
          iVar9 = iVar9 + 0xc;
        } while (iVar4 < *(int *)(puVar8 + 0x26));
      }
    }
    else {
      local_10 = cMf32::RecGet((cMf32 *)param_1,0x13,param_2,(int *)0x0,param_5);
      if (local_10 == (ushort *)0x0) {
        RaiseInternalException(-4,DAT_007ed77c,s_E__Ourlib_mftspr_cpp_007f0504,0x6d);
      }
      cMf32::RecGetParam((cMf32 *)param_1,0x13,param_2,(undefined4 *)local_24,1);
      local_8 = Library::DKW::LIB::FUN_006aac10(local_24[0] * 4 + 0x35);
      *local_8 = (int)local_24[0];
      local_8[1] = param_1;
      *(undefined1 *)(local_8 + 2) = 0x13;
      puVar5 = Library::DKW::LIB::FUN_006aac10(*local_8 << 2);
      *(undefined4 **)((int)local_8 + 0x21) = puVar5;
      puVar5 = Library::DKW::LIB::FUN_006aac10(*local_8 << 2);
      *(undefined4 **)((int)local_8 + 0x29) = puVar5;
      *(int *)((int)local_8 + 0x1d) = (int)local_1e;
      *(uint *)((int)local_8 + 0x19) = CONCAT22(local_1a,uStack_1c);
      uVar2 = *(uint *)(local_10 + *local_8 * 0x22);
      local_18 = (undefined2)uVar2;
      uStack_16 = (ushort)(uVar2 >> 0x10);
      *(uint *)((int)local_8 + 0x11) = uVar2 & 0xffff;
      *(uint *)((int)local_8 + 0x15) = (uint)uStack_16;
      if (0 < *local_8) {
        iVar4 = 0;
        do {
          uVar6 = FUN_0070aa50(param_1,(char *)(iVar4 + (int)local_10),param_4,param_5);
          *(undefined4 *)(*(int *)((int)local_8 + 0x21) + iVar9 * 4) = uVar6;
          if (*(int *)(*(int *)((int)local_8 + 0x21) + iVar9 * 4) == 0) {
            RaiseInternalException(-4,DAT_007ed77c,s_E__Ourlib_mftspr_cpp_007f0504,0x82);
          }
          *(undefined4 *)((int)local_8 + iVar9 * 4 + 0x31) =
               *(undefined4 *)(iVar4 + 0x20 + (int)local_10);
          if (*(char *)(iVar4 + 0x24 + (int)local_10) == '\0') {
            *(undefined4 *)(*(int *)((int)local_8 + 0x29) + iVar9 * 4) = 0;
          }
          else {
            uVar6 = FUN_0070aa90(param_1,(char *)(iVar4 + 0x24 + (int)local_10),param_4,param_5);
            *(undefined4 *)(*(int *)((int)local_8 + 0x29) + iVar9 * 4) = uVar6;
            if (*(int *)(*(int *)((int)local_8 + 0x29) + iVar9 * 4) == 0) {
              RaiseInternalException(-4,DAT_007ed77c,s_E__Ourlib_mftspr_cpp_007f0504,0x86);
            }
          }
          iVar9 = iVar9 + 1;
          iVar4 = iVar4 + 0x44;
        } while (iVar9 < *local_8);
      }
      iVar4 = FUN_0070a6f0(param_1,6,(char *)local_10,param_5);
      *(int *)((int)local_8 + 9) = iVar4;
      iVar4 = FUN_0070a7b0(param_1,6,(char *)local_10,param_5);
      *(int *)((int)local_8 + 0xd) = iVar4;
      piVar10 = local_8;
    }
    iVar4 = *piVar10;
    iVar9 = 0;
    if (0 < iVar4) {
      piVar7 = *(int **)((int)piVar10 + 0x29);
      do {
        if (*piVar7 != 0) {
          iVar9 = iVar9 + 1;
        }
        piVar7 = piVar7 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if ((iVar9 == 0) && (*(int *)((int)piVar10 + 0x29) != 0)) {
      FUN_006ab060((undefined4 *)((int)piVar10 + 0x29));
    }
    g_currentExceptionFrame = local_68.previous;
    cMf32::RecMemFree((cMf32 *)param_1,(uint *)&local_10);
    cMf32::RecMemFree((cMf32 *)param_1,(uint *)&local_c);
    return local_8;
  }
  g_currentExceptionFrame = local_68.previous;
  cMf32::RecMemFree((cMf32 *)param_1,(uint *)&local_10);
  cMf32::RecMemFree((cMf32 *)param_1,(uint *)&local_c);
  FUN_00716db0((int *)&local_8);
  if ((param_5 != 0) || (iVar4 != -4)) {
    iVar9 = ReportDebugMessage(s_E__Ourlib_mftspr_cpp_007f0504,0x9a,0,iVar4,&DAT_007a4ccc,
                               s_mfTSprLoad_007f04f8);
    if (iVar9 != 0) {
      pcVar3 = (code *)swi(3);
      piVar10 = (int *)(*pcVar3)();
      return piVar10;
    }
    RaiseInternalException(iVar4,0,s_E__Ourlib_mftspr_cpp_007f0504,0x9c);
  }
  return (int *)0x0;
}

