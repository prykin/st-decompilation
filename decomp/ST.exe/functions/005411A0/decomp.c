
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004F95B0 -> 005411A0 @ 004F95F6

   [STPrototypeRepairApplier] Propagated parameter 2.
   Evidence: 004F9480 -> 005411A0 @ 004F94F8 | 004F95B0 -> 005411A0 @ 004F95F6 | 00532A80 ->
   005411A0 @ 00532B02 | 005DC050 -> 005411A0 @ 005DC23A | 005DC730 -> 005411A0 @ 005DC835 |
   005E1330 -> 005411A0 @ 005E2306 */

void __cdecl FUN_005411a0(uint *param_1,char *param_2,char *text)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  InternalExceptionFrame local_4c;
  uint *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  if (((param_1 != (uint *)0x0) && (param_2 != (char *)0x0)) && (text != (char *)0x0)) {
    uVar4 = 0xffffffff;
    pcVar6 = param_2;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar5 = 0xffffffff;
    pcVar6 = text;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    local_8 = (uint *)Library::DKW::LIB::FUN_006aac70(~uVar4 + ~uVar5 + 2);
    if (local_8 != (uint *)0x0) {
      wsprintfA((LPSTR)local_8,text,param_2);
      for (puVar3 = Library::MSVCRT::FUN_0072e560(local_8,'\n'); puVar3 != (uint *)0x0;
          puVar3 = Library::MSVCRT::FUN_0072e560(puVar3,'\n')) {
        *(undefined1 *)puVar3 = 0x20;
      }
      Library::DKW::TBL::FUN_006b5aa0(param_1,(char *)local_8);
      FreeAndNull(&local_8);
    }
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

