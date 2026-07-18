
undefined4 __cdecl FUN_00725c20(LPCSTR param_1,undefined4 param_2,char param_3)

{
  if (param_3 != '\0') {
    if (param_3 == '\x02') {
      RemoveDirectoryA(param_1);
    }
    return 0;
  }
  SetFileAttributesA(param_1,0);
  DeleteFileA(param_1);
  return 0;
}

