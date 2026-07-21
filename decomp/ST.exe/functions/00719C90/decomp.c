
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00719C90 -> EXTERNAL:000000D2 @ 00719CCB */

void __cdecl FUN_00719c90(MCIERROR mcierr,MCIDEVICEID *param_2)

{
  BOOL BVar1;
  CHAR local_104 [256];

  if (*param_2 != 0) {
    FUN_00719c60((DWORD_PTR)param_2);
  }
  *param_2 = 0;
  if (DAT_007f07c4 != 0) {
    BVar1 = mciGetErrorStringA(mcierr,local_104,0x100);
    if (BVar1 != 0) {
      MessageBoxA((HWND)0x0,local_104,"MCI error",0x2030);
    }
  }
  return;
}

