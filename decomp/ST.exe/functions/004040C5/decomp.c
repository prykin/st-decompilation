
byte __cdecl thunk_FUN_00529500(undefined4 param_1)

{
  byte bVar1;
  
  bVar1 = (DAT_0080874e != '\x03') - 1U & 5;
  switch(param_1) {
  case 0x271d:
    return 2;
  case 0x271e:
  case 0x2731:
    bVar1 = 4;
    break;
  case 0x271f:
    return 3;
  }
  return bVar1;
}

