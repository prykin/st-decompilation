
int __cdecl FUN_0070b6d0(byte *param_1)

{
  int iVar1;
  byte local_104 [256];

  Library::MSVCRT::FUN_0072e730(param_1,(byte *)0x0,(byte *)0x0,(byte *)0x0,local_104);
  iVar1 = Library::MSVCRT::__strcmpi((char *)local_104,&DAT_007f00d0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = Library::MSVCRT::__strcmpi((char *)local_104,&DAT_007f00c8);
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = Library::MSVCRT::__strcmpi((char *)local_104,&DAT_007f00c0);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = Library::MSVCRT::__strcmpi((char *)local_104,&DAT_007f00b8);
  return (-(uint)(iVar1 != 0) & 0xfffffffc) + 3;
}

