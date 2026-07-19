
char * __cdecl
FUN_0070ae60(cMf32 *param_1,char *param_2,byte param_3,int param_4,undefined4 *param_5,int param_6)

{
  code *pcVar1;
  int iVar2;
  LPSTR pCVar3;
  ushort *puVar4;
  char *pcVar5;
  int iVar6;
  undefined4 unaff_ESI;
  int iVar7;
  void *unaff_EDI;
  byte bVar8;
  InternalExceptionFrame local_54;
  int local_10;
  ushort *local_c;
  char *local_8;
  
  iVar7 = 0;
  local_c = (ushort *)0x0;
  local_8 = (char *)0x0;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar2 = __setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  local_10 = iVar2;
  if (iVar2 == 0) {
    local_c = FUN_006f1ce0(0xb,param_2,(int *)0x0,param_6);
    if (local_c == (ushort *)0x0) {
      RaiseInternalException(-4,DAT_007ed77c,s_E__Ourlib_Mfimg_cpp_007effe0,0x1b0);
    }
    local_8 = (char *)FUN_006aac10(*(short *)((int)local_c + 0x23) * 4 + 0x34);
    puVar4 = local_c;
    pcVar5 = local_8;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)puVar4;
      puVar4 = puVar4 + 2;
      pcVar5 = pcVar5 + 4;
    }
    iVar2 = 0;
    *(cMf32 **)(local_8 + 0x25) = param_1;
    local_8[0x29] = -1;
    local_8[0x2a] = -1;
    if ((param_4 == 0) || (param_5 == (undefined4 *)0x0)) {
      if (0 < *(short *)(local_8 + 0x23)) {
        do {
          iVar7 = param_6;
          bVar8 = param_3;
          pCVar3 = FUN_006f2c00(local_8,(uint)(byte)local_8[0x20],*(short *)(local_8 + 0x21) + iVar2
                               );
          puVar4 = FUN_0070a5a0(param_1,local_8[0x2b],pCVar3,bVar8,iVar7);
          *(ushort **)(local_8 + iVar2 * 4 + 0x30) = puVar4;
          if (*(int *)(local_8 + iVar2 * 4 + 0x30) == 0) {
            RaiseInternalException(-4,DAT_007ed77c,s_E__Ourlib_Mfimg_cpp_007effe0,0x1c8);
          }
          if (iVar2 == 0) {
            iVar7 = 1;
            pCVar3 = FUN_006f2c00(local_8,(uint)(byte)local_8[0x20],(int)*(short *)(local_8 + 0x21))
            ;
            iVar7 = FUN_0070a6f0(param_1,local_8[0x2b],pCVar3,iVar7);
            *(short *)(local_8 + 0x2c) = (short)iVar7;
            iVar7 = 1;
            pCVar3 = FUN_006f2c00(local_8,(uint)(byte)local_8[0x20],(int)*(short *)(local_8 + 0x21))
            ;
            iVar7 = FUN_0070a7b0(param_1,local_8[0x2b],pCVar3,iVar7);
            *(short *)(local_8 + 0x2e) = (short)iVar7;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(short *)(local_8 + 0x23));
      }
    }
    else {
      local_10 = 0;
      if (0 < param_4) {
        do {
          iVar2 = param_5[local_10] - (int)*(short *)(local_8 + 0x21);
          if ((iVar2 < 0) || (*(short *)(local_8 + 0x23) <= iVar2)) {
            RaiseInternalException(-6,DAT_007ed77c,s_E__Ourlib_Mfimg_cpp_007effe0,0x1bc);
          }
          iVar7 = param_6;
          bVar8 = param_3;
          pCVar3 = FUN_006f2c00(local_8,(uint)(byte)local_8[0x20],param_5[local_10]);
          puVar4 = FUN_0070a5a0(param_1,local_8[0x2b],pCVar3,bVar8,iVar7);
          *(ushort **)(local_8 + iVar2 * 4 + 0x30) = puVar4;
          if (*(int *)(local_8 + iVar2 * 4 + 0x30) == 0) {
            RaiseInternalException(-4,DAT_007ed77c,s_E__Ourlib_Mfimg_cpp_007effe0,0x1be);
          }
          iVar2 = local_10;
          if (local_10 == 0) {
            iVar7 = 1;
            pCVar3 = FUN_006f2c00(local_8,(uint)(byte)local_8[0x20],*param_5);
            iVar7 = FUN_0070a6f0(param_1,local_8[0x2b],pCVar3,iVar7);
            *(short *)(local_8 + 0x2c) = (short)iVar7;
            iVar7 = 1;
            pCVar3 = FUN_006f2c00(local_8,(uint)(byte)local_8[0x20],*param_5);
            iVar7 = FUN_0070a7b0(param_1,local_8[0x2b],pCVar3,iVar7);
            *(short *)(local_8 + 0x2e) = (short)iVar7;
          }
          local_10 = iVar2 + 1;
        } while (local_10 < param_4);
      }
    }
    g_currentExceptionFrame = local_54.previous;
    cMf32::RecMemFree(param_1,(uint *)&local_c);
    return local_8;
  }
  g_currentExceptionFrame = local_54.previous;
  cMf32::RecMemFree(param_1,(uint *)&local_c);
  if (local_8 != (char *)0x0) {
    if (0 < *(short *)(local_8 + 0x23)) {
      iVar6 = 0x30;
      do {
        cMf32::RecMemFree(param_1,(uint *)(local_8 + iVar6));
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 4;
        iVar2 = local_10;
      } while (iVar7 < *(short *)(local_8 + 0x23));
    }
    FUN_006ab060(&local_8);
  }
  if ((param_6 != 0) || (iVar2 != -4)) {
    iVar7 = ReportDebugMessage(s_E__Ourlib_Mfimg_cpp_007effe0,0x1d8,0,iVar2,&DAT_007a4ccc,
                               s_mfImtLoad_007f0080);
    if (iVar7 != 0) {
      pcVar1 = (code *)swi(3);
      pcVar5 = (char *)(*pcVar1)();
      return pcVar5;
    }
    RaiseInternalException(iVar2,0,s_E__Ourlib_Mfimg_cpp_007effe0,0x1da);
  }
  return (char *)0x0;
}

