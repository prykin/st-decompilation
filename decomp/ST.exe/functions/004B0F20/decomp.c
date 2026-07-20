
void __cdecl
FUN_004b0f20(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,int param_7,char *param_8,undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  char local_34 [15];
  undefined4 local_25;
  undefined4 local_21;
  undefined4 local_1d;
  undefined4 local_9;
  
  puVar2 = &local_74;
  for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  local_64 = *(undefined4 *)(&DAT_00791d68 + param_2 * 4);
  local_4c = param_2;
  local_48 = param_3;
  local_40 = param_5;
  local_44 = param_4;
  local_68 = 1;
  local_6c = 1;
  local_70 = param_1;
  local_74 = 0x3e9;
  local_9 = 0;
  local_54 = 3;
  local_58 = 1;
  local_5c = param_1;
  local_60 = 1000;
  local_3c = param_6;
  local_38 = param_1;
  if (param_7 != 0xff) {
    local_38 = param_7;
  }
  local_50 = local_64;
  if (param_8 != (char *)0x0) {
    Library::MSVCRT::_strncpy(local_34,param_8,0xe);
  }
  local_25 = param_9;
  local_21 = param_10;
  local_1d = 100;
  STPlaySystemC::CreateGameObject(PTR_00802a38,0x3e9,0,0,&local_74,0);
  return;
}

