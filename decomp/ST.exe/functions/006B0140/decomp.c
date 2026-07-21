
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005DE5B0 -> 006B0140 @ 005DE5F2 | 006B0140 -> EXTERNAL:00000097 @ 006B0183
   
   [STUtilityFunctionApplier] load_resource_string: loads a Win32 string resource into the process
   ring buffer
   Evidence: body pattern verified */

void LoadResourceString(UINT resourceId,HINSTANCE module)

{
  uint uVar1;
  
  if (0x1004 < DAT_008568e0 + 0x800) {
    DAT_008568e0 = 0;
  }
  if (module == (HINSTANCE)0x0) {
    module = GetModuleHandleA((LPCSTR)0x0);
  }
  uVar1 = LoadStringA(module,resourceId,&DAT_00857a60 + DAT_008568e0,0x800);
  if ((uVar1 != 0) && (uVar1 < 0x800)) {
    DAT_008568e0 = DAT_008568e0 + 1 + uVar1;
    return;
  }
  (&DAT_00857a60)[DAT_008568e0] = 0;
  DAT_008568e0 = DAT_008568e0 + 1;
  return;
}

