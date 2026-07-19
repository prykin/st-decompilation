
DWORD FUN_00754ec0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  DWORD exceptionCode;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 8) != 0)) {
    for (puVar1 = *(undefined4 **)(*(int *)(param_1 + 8) + 0x4c); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
      exceptionCode = FUN_00757360(param_1,(int)puVar1);
      if (exceptionCode != 0) goto LAB_00754f0b;
    }
    iVar2 = *(int *)(param_1 + 8);
    if (((*(byte *)(iVar2 + 8) & 0x10) != 0) &&
       (exceptionCode = FUN_006d4860(iVar2,0,(undefined4 *)(iVar2 + 0x10),0x20), exceptionCode != 0)
       ) {
LAB_00754f0b:
      RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_DB_C_btflush_c_007f2cd0,0x20);
      return exceptionCode;
    }
  }
  return 0;
}

