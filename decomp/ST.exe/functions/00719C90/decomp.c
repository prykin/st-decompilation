
void __cdecl FUN_00719c90(MCIERROR param_1,MCIDEVICEID *param_2)

{
  BOOL BVar1;
  CHAR local_104 [256];
  
  if (*param_2 != 0) {
    FUN_00719c60(param_2);
  }
  *param_2 = 0;
  if (DAT_007f07c4 != 0) {
    BVar1 = mciGetErrorStringA(param_1,local_104,0x100);
    if (BVar1 != 0) {
      MessageBoxA((HWND)0x0,local_104,s_MCI_error_007f07f4,0x2030);
    }
  }
  return;
}

