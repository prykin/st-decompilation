
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00725C20 -> EXTERNAL:00000006 @ 00725C39 */

undefined4 __cdecl FUN_00725c20(LPCSTR lpPathName,undefined4 param_2,char param_3)

{
  if (param_3 != '\0') {
    if (param_3 == '\x02') {
      RemoveDirectoryA(lpPathName);
    }
    return 0;
  }
  SetFileAttributesA(lpPathName,0);
  DeleteFileA(lpPathName);
  return 0;
}

