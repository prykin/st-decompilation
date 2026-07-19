
int FUN_00672b60(char *param_1,undefined4 *param_2)

{
  char cVar1;
  int *piVar2;
  int exceptionCode;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar6;
  InternalExceptionFrame local_60;
  int *local_1c;
  int local_18;
  char *local_14;
  char *local_10;
  undefined4 *local_c;
  char *local_8;
  
  local_c = (undefined4 *)0x0;
  local_10 = (char *)0x0;
  local_14 = (char *)0x0;
  local_8 = (char *)0x0;
  if (DAT_00811958 == (int *)0x0) {
    DAT_00857540 = 0;
    DAT_00811908 = 0;
    DAT_007d2d24 = 0x600;
  }
  local_1c = Library::DKW::LIB::FUN_006aac10(0x30);
  if (local_1c == (int *)0x0) {
    return -2;
  }
  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  exceptionCode = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (exceptionCode != 0) {
    g_currentExceptionFrame = local_60.previous;
    FUN_006a5e90(local_c);
    FUN_006a5e90((undefined4 *)local_10);
    FUN_006a5e90((undefined4 *)local_14);
    if (DAT_0085753c == (char *)0x0) {
      FUN_006a5e90((undefined4 *)local_8);
    }
    piVar2 = local_1c;
    FUN_006a5e90((undefined4 *)local_1c[6]);
    FUN_006a5e90((undefined4 *)piVar2[0xb]);
    FUN_006a5e90((undefined4 *)piVar2[7]);
    FUN_006a5e90(piVar2);
    RaiseInternalException(exceptionCode,0,s_E____titans_ai_Ai_lex_c_007d2d2c,0xfd);
    return exceptionCode;
  }
  if (DAT_0085755c == (undefined4 *)0x0) {
    local_c = (undefined4 *)Library::DKW::LIB::FUN_006aac70(0x401);
    *(undefined1 *)local_c = 0;
  }
  if (DAT_00857528 == (char *)0x0) {
    local_10 = (char *)Library::DKW::LIB::FUN_006aac70(0x401);
    *local_10 = '\0';
  }
  if (DAT_00811948 == (char *)0x0) {
    local_14 = (char *)Library::DKW::LIB::FUN_006aac70(0x401);
    *local_14 = '\0';
  }
  if (DAT_0085753c == (char *)0x0) {
    local_8 = (char *)Library::DKW::LIB::FUN_006aac70(0x105);
    *local_8 = '\0';
  }
  else {
    local_8 = DAT_0085753c;
  }
  piVar2 = local_1c;
  local_1c[1] = DAT_00857560;
  local_1c[2] = (int)DAT_0081194c;
  pcVar3 = FUN_006c49b0(DAT_00857528);
  piVar2[6] = (int)pcVar3;
  pcVar3 = FUN_006c49b0(DAT_00811948);
  piVar2[0xb] = (int)pcVar3;
  pcVar3 = FUN_006c49b0(DAT_0085753c);
  piVar2[7] = (int)pcVar3;
  DAT_0081194c = param_2;
  local_18 = 0;
  if (param_1 != (char *)0x0) {
    local_18 = (*(code *)*param_2)(param_1);
    if (local_18 == 0) {
      RaiseInternalException(-10,DAT_007ed77c,s_E____titans_ai_Ai_lex_c_007d2d2c,0xe7);
    }
    else {
      uVar4 = 0xffffffff;
      do {
        pcVar3 = param_1;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar3 = param_1 + 1;
        cVar1 = *param_1;
        param_1 = pcVar3;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar3 = pcVar3 + -uVar4;
      pcVar6 = local_8;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar6 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar6 = pcVar6 + 1;
      }
    }
  }
  if (DAT_0085755c == (undefined4 *)0x0) {
    DAT_0085755c = local_c;
  }
  if (DAT_00857528 == (char *)0x0) {
    DAT_00857528 = local_10;
  }
  if (DAT_00811948 == (char *)0x0) {
    DAT_00811948 = local_14;
  }
  if (DAT_0085753c == (char *)0x0) {
    DAT_0085753c = local_8;
  }
  DAT_00857560 = local_18;
  g_currentExceptionFrame = local_60.previous;
  piVar2[9] = DAT_00857548;
  piVar2[10] = DAT_0085754c;
  piVar2[8] = DAT_00857554;
  piVar2[3] = DAT_007d2d24;
  piVar2[4] = DAT_007d2d18;
  piVar2[5] = DAT_00811954;
  *piVar2 = 0;
  DAT_007d2d24 = DAT_007d2d24 & 0xffffff6d | 1;
  DAT_00811914 = 1;
  DAT_00857558 = 0;
  DAT_00857554 = 0;
  DAT_0081190c = 0;
  DAT_00811954 = DAT_007d2d18;
  DAT_007d2d18 = 0x84e;
  *piVar2 = (int)DAT_00811958;
  DAT_00811958 = piVar2;
  return 0;
}

