
int __cdecl
FUN_00715360(undefined4 *param_1,int param_2,char param_3,char *param_4,uint param_5,int param_6,
            undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar4;
  InternalExceptionFrame local_6c;
  char local_28;
  undefined4 local_27;
  char local_23 [23];
  uint local_c;
  char *local_8;
  
  local_8 = (char *)0x0;
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  iVar1 = __setjmp3(local_6c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar1 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    if (local_8 != (char *)0x0) {
      FUN_006ab060(&local_8);
    }
    return iVar1;
  }
  if (((int)param_5 < 0x16) || (param_4 == (char *)0x0)) {
    local_28 = param_3;
    local_27 = param_7;
    if ((0 < (int)param_5) && (param_4 != (char *)0x0)) {
      pcVar4 = local_23;
      for (uVar2 = param_5 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined4 *)pcVar4 = *(undefined4 *)param_4;
        param_4 = param_4 + 4;
        pcVar4 = pcVar4 + 4;
      }
      for (uVar2 = param_5 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pcVar4 = *param_4;
        param_4 = param_4 + 1;
        pcVar4 = pcVar4 + 1;
      }
    }
    FUN_006b7650(param_1,param_2,&local_28,param_5 + 5);
  }
  else {
    if (param_6 == 0) {
      uVar2 = param_5 + 5;
      local_c = uVar2;
      local_8 = (char *)FUN_006aac10(uVar2);
      *local_8 = param_3;
      *(undefined4 *)(local_8 + 1) = param_7;
      if (0 < (int)param_5) {
        pcVar4 = local_8 + 5;
        for (uVar2 = param_5 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)param_4;
          param_4 = param_4 + 4;
          pcVar4 = pcVar4 + 4;
        }
        for (uVar3 = param_5 & 3; uVar2 = local_c, uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar4 = *param_4;
          param_4 = param_4 + 1;
          pcVar4 = pcVar4 + 1;
        }
      }
    }
    else {
      local_8 = (char *)FUN_006aac10(param_5 * 2 + 9);
      *local_8 = param_3 + -0x80;
      *(undefined4 *)(local_8 + 1) = param_7;
      *(uint *)(local_8 + 5) = param_5;
      iVar1 = FUN_00751140(param_4,param_5,local_8 + 9,param_5 * 2);
      uVar2 = iVar1 + 9;
    }
    FUN_006b7650(param_1,param_2,local_8,uVar2);
    if (local_8 != (char *)0x0) {
      FUN_006ab060(&local_8);
      g_currentExceptionFrame = local_6c.previous;
      return 0;
    }
  }
  g_currentExceptionFrame = local_6c.previous;
  return 0;
}

