
undefined4 FUN_007318f0(void)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  undefined4 local_8;
  
  local_8 = 0xfffffffe;
  iVar1 = FUN_007330d0();
  if (iVar1 < 0) {
    local_8 = 0xfffffffc;
  }
  BVar2 = HeapValidate(DAT_0085a5c4,0,(LPCVOID)0x0);
  if (BVar2 == 0) {
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      DAT_0085714c = 0x78;
      DAT_00857148 = 0x28;
    }
    else {
      local_8 = 0xfffffffc;
    }
  }
  return local_8;
}

