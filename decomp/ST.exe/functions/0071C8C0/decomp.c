
int FUN_0071c8c0(int param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 unaff_EBX;
  void *unaff_ESI;
  InternalExceptionFrame local_60;
  uint local_1c [3];
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_10 = 0;
  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  iVar2 = __setjmp3(local_60.jumpBuffer,0,unaff_ESI,unaff_EBX);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_60.previous;
    iVar4 = ReportDebugMessage(s_E__Ourlib_Sinput_cpp_007f092c,0x280,0,iVar2,&DAT_007a4ccc,
                               s_InputClassTy__AddToMouse_Error___007f09b4);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
    RaiseInternalException(iVar2,0,s_E__Ourlib_Sinput_cpp_007f092c,0x281);
    return iVar2;
  }
  if (param_1 != 0) {
    iVar2 = FUN_006e3a90(*(void **)(local_c + 0x10),param_1,&local_8);
    if (iVar2 == 0) {
      if (*(int *)(local_c + 0x28) == 0) {
        puVar3 = FUN_006ae290((uint *)0x0,10,0xc,10);
        *(uint **)(local_c + 0x28) = puVar3;
      }
      local_1c[2] = local_8;
      local_1c[1] = 1;
      local_1c[0] = param_2;
      FUN_006ae1c0(*(uint **)(local_c + 0x28),local_1c);
      if ((param_2 & 2) != 0) {
        *(undefined4 *)(local_c + 0x58) = 1;
        g_currentExceptionFrame = local_60.previous;
        return local_10;
      }
    }
    else {
      RaiseInternalException(-4,DAT_007ed77c,s_E__Ourlib_Sinput_cpp_007f092c,0x27c);
    }
  }
  g_currentExceptionFrame = local_60.previous;
  return local_10;
}

