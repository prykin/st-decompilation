
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00522810(char *param_1)

{
  char *_Str1;
  char cVar1;
  AnonShape_GLOBAL_00807598_0C6808FB *pAVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  InternalExceptionFrame local_4c;
  int local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  uVar4 = 0xffffffff;
  _Str1 = (char *)(local_8 + 0x6c);
  do {
    pcVar6 = param_1;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar6;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar6 + -uVar4;
  pcVar7 = _Str1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  FUN_006b77e0(_Str1,(byte *)_Str1);
  FUN_006b7780(_Str1,_Str1);
  if (_DAT_008087a1 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  if (DAT_008087a5 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  if (DAT_00808783 == '\x03') {
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  if (DAT_0080874e == '\0') {
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  if (DAT_0080874d == 0xff) {
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  iVar3 = Library::MSVCRT::_strncmp(_Str1,"EXITON",6);
  if ((iVar3 == 0) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
    thunk_FUN_004d88f0(DAT_0080874d,5000);
    if (DAT_0080874e == '\x03') {
      thunk_FUN_004e4380((uint)DAT_0080874d,10000);
    }
    else {
      thunk_FUN_004d87b0(DAT_0080874d,1000);
      thunk_FUN_004d8a30(DAT_0080874d,10000);
    }
    thunk_FUN_004d8b70(DAT_0080874d);
    thunk_FUN_004d78e0(DAT_0080874d);
  }
  iVar3 = Library::MSVCRT::_strncmp(_Str1,"CORIUM",6);
  if ((iVar3 == 0) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
    thunk_FUN_004d88f0(DAT_0080874d,5000);
    thunk_FUN_004d8b70(DAT_0080874d);
    thunk_FUN_004d78e0(DAT_0080874d);
  }
  if (DAT_0080874e == '\x03') {
LAB_00522a79:
    iVar3 = Library::MSVCRT::_strncmp(_Str1,"SILICON",7);
    if ((iVar3 == 0) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
      thunk_FUN_004e4380((uint)DAT_0080874d,10000);
      thunk_FUN_004d8b70(DAT_0080874d);
      thunk_FUN_004d78e0(DAT_0080874d);
    }
    if (DAT_0080874e != '\x03') goto LAB_00522ad4;
  }
  else {
    iVar3 = Library::MSVCRT::_strncmp(_Str1,&DAT_007c415c,4);
    if ((iVar3 == 0) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
      thunk_FUN_004d87b0(DAT_0080874d,1000);
      thunk_FUN_004d8b70(DAT_0080874d);
      thunk_FUN_004d78e0(DAT_0080874d);
    }
    if (DAT_0080874e == '\x03') goto LAB_00522a79;
    iVar3 = Library::MSVCRT::_strncmp(_Str1,"METAL",5);
    if ((iVar3 == 0) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
      thunk_FUN_004d8a30(DAT_0080874d,1000);
      thunk_FUN_004d8b70(DAT_0080874d);
      thunk_FUN_004d78e0(DAT_0080874d);
    }
    if (DAT_0080874e == '\x03') goto LAB_00522a79;
LAB_00522ad4:
    iVar3 = Library::MSVCRT::_strncmp(_Str1,&DAT_007c4144,3);
    if ((iVar3 == 0) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
      thunk_FUN_004b7080((uint)DAT_0080874d,100);
      thunk_FUN_004d8b70(DAT_0080874d);
    }
    if (DAT_0080874e != '\x03') goto LAB_00522b59;
  }
  iVar3 = Library::MSVCRT::_strncmp(_Str1,"ENERGY",6);
  if ((iVar3 == 0) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
    thunk_FUN_004e4270((uint)DAT_0080874d,100);
    thunk_FUN_004d8b70(DAT_0080874d);
  }
LAB_00522b59:
  iVar3 = Library::MSVCRT::_strncmp(_Str1,&DAT_007c4134,4);
  if ((iVar3 == 0) && (g_allPlayers_007FA174 != (STAllPlayersC *)0x0)) {
    thunk_FUN_004e75f0((uint)DAT_0080874d);
  }
  iVar3 = Library::MSVCRT::_strncmp(_Str1,&DAT_007c4130,3);
  if ((iVar3 == 0) && (g_visibleClass_00802A88 != (VisibleClassTy *)0x0)) {
    if (g_visibleClass_00802A88->field_0114 == 0) {
      g_visibleClass_00802A88->field_00F8 = 0;
    }
    else {
      uVar4 = (uint)(g_visibleClass_00802A88->field_00F8 == 0);
      g_visibleClass_00802A88->field_00F8 = uVar4;
      pAVar2 = PTR_00807598;
      if (uVar4 != 0) {
        PTR_00807598->field_0466 = 1;
        *(undefined4 *)&pAVar2->field_0x2d8 = 1;
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
    }
    pAVar2 = PTR_00807598;
    PTR_00807598->field_0466 = 0;
    *(undefined4 *)&pAVar2->field_0x2d8 = 1;
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

