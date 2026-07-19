
undefined4 FUN_006c13d0(undefined4 *param_1,char *param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  int exceptionCode;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  char *pcVar7;
  void *unaff_EDI;
  InternalExceptionFrame local_48;
  
  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  exceptionCode = __setjmp3(local_48.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (exceptionCode != 0) {
    g_currentExceptionFrame = local_48.previous;
    RaiseInternalException(exceptionCode,0,s_E__DKW_SND_C_dxsnd2_cpp_007ede14,0x405);
    return 0;
  }
  puVar2 = FUN_006aac10(0xc);
  if (param_1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_006aac70(0x10);
    puVar2[1] = puVar3;
    FUN_0072da70(puVar3,param_1,0x10);
  }
  uVar5 = 0xffffffff;
  pcVar4 = param_2;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar4 = (char *)FUN_006aac10(~uVar5);
  puVar2[2] = pcVar4;
  if ((pcVar4 != (char *)0x0) && (param_2 != (char *)0x0)) {
    uVar5 = 0xffffffff;
    do {
      pcVar7 = param_2;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar7 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar7;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar7 = pcVar7 + -uVar5;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar4 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar4 = pcVar4 + 1;
    }
  }
  FUN_006b9910(param_4,puVar2);
  g_currentExceptionFrame = local_48.previous;
  return 1;
}

