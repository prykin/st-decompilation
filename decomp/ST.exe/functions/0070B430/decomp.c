
short * __cdecl FUN_0070b430(undefined4 param_1,char *param_2,byte param_3,byte param_4,int param_5)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  int iVar5;
  short *psVar6;
  undefined4 unaff_ESI;
  int *piVar7;
  void *unaff_EDI;
  InternalExceptionFrame local_58;
  undefined2 local_14;
  undefined2 local_12;
  short local_a;
  short *local_8;
  
  local_8 = (short *)0x0;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  iVar2 = __setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar5 = ReportDebugMessage(s_E__Ourlib_Mfimg_cpp_007effe0,0x287,0,iVar2,&DAT_007a4ccc,
                               s_mfQmtLoad_007f00ac);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      psVar6 = (short *)(*pcVar1)();
      return psVar6;
    }
    FUN_0070b600((int *)&local_8);
    RaiseInternalException(iVar2,0,s_E__Ourlib_Mfimg_cpp_007effe0,0x28b);
    return (short *)0x0;
  }
  puVar3 = FUN_006f2310(param_3,param_2,(undefined4 *)&local_14,param_5);
  if (puVar3 != (undefined4 *)0x0) {
    local_8 = (short *)FUN_006aac10(local_a * 4 + 0x15);
    *(undefined4 *)(local_8 + 1) = param_1;
    *local_8 = local_a;
    local_8[3] = -1;
    *(byte *)(local_8 + 4) = param_3;
    *(undefined2 *)((int)local_8 + 9) = local_14;
    *(undefined2 *)((int)local_8 + 0xb) = local_12;
    puVar4 = FUN_0070a5a0(*(undefined4 *)(local_8 + 1),*(byte *)(local_8 + 4),param_2,param_4,
                          param_5);
    iVar2 = 0;
    *(ushort **)((int)local_8 + 0xd) = puVar4;
    piVar7 = *(int **)((int)local_8 + 0xd);
    if (0 < *local_8) {
      do {
        switch((char)local_8[4]) {
        case '\x01':
          *(int **)((int)local_8 + iVar2 * 4 + 0x11) = piVar7;
          iVar5 = FUN_006b5050((int)piVar7);
          piVar7 = (int *)((int)piVar7 + iVar5);
          break;
        default:
          RaiseInternalException(-0x34,DAT_007ed77c,s_E__Ourlib_Mfimg_cpp_007effe0,0x282);
          break;
        case '\x06':
          *(int **)((int)local_8 + iVar2 * 4 + 0x11) = piVar7;
          piVar7 = (int *)((int)piVar7 + *piVar7);
          break;
        case '\x0e':
        case '\x12':
        case '\x16':
        case '\x1c':
          *(int **)((int)local_8 + iVar2 * 4 + 0x11) = piVar7 + 1;
          piVar7 = (int *)((int)piVar7 + *piVar7 + 4);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *local_8);
    }
    g_currentExceptionFrame = local_58.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_58.previous;
  return (short *)0x0;
}

