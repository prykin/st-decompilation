
void __fastcall FUN_0055c180(CFsgsConnection *param_1)

{
  char cVar1;
  ulong uVar2;
  DWORD lastError;
  int iVar3;
  char *pcVar4;
  
  *(undefined4 *)(param_1 + 0x6b8) = 0;
  CFsgsConnection::Initialize
            (param_1,(-(uint)((DAT_00807dd1 & 0xffff0000) != 0xd0dd0000) & 0x10) + 0x45535344,
             DAT_00807dd5 & 0xffff0000 | DAT_00807dd1 >> 0x10,&DAT_00807da1,(_GUID *)&DAT_007cd6f0,9
            );
  iVar3 = -1;
  pcVar4 = &DAT_00808406;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (iVar3 == -2) {
    CFsgsConnection::GetFastestServer(param_1);
    (**(code **)(*(int *)param_1 + 0x3c))(1,100,0,0);
    return;
  }
  uVar2 = CFsgsConnection::InitConnection(param_1,&DAT_00808406);
  if (uVar2 == 0) {
    lastError = GetLastError();
    thunk_FUN_0055beb0(param_1,lastError);
    return;
  }
  param_1[8] = (CFsgsConnection)0x1;
  return;
}

