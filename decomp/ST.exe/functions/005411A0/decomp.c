
void __cdecl FUN_005411a0(int param_1,char *param_2,LPCSTR param_3)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar6;
  LPCSTR pCVar7;
  InternalExceptionFrame local_4c;
  uint *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar2 = __setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  if (((param_1 != 0) && (param_2 != (char *)0x0)) && (param_3 != (LPCSTR)0x0)) {
    uVar4 = 0xffffffff;
    pcVar6 = param_2;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar5 = 0xffffffff;
    pCVar7 = param_3;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pCVar7;
      pCVar7 = pCVar7 + 1;
    } while (cVar1 != '\0');
    local_8 = (uint *)FUN_006aac70(~uVar4 + ~uVar5 + 2);
    if (local_8 != (uint *)0x0) {
      wsprintfA((LPSTR)local_8,param_3,param_2);
      for (puVar3 = FUN_0072e560(local_8,'\n'); puVar3 != (uint *)0x0;
          puVar3 = FUN_0072e560(puVar3,'\n')) {
        *(undefined1 *)puVar3 = 0x20;
      }
      FUN_006b5aa0(param_1,(char *)local_8);
      FUN_006ab060(&local_8);
    }
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

