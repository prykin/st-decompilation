
DWORD FUN_00754360(int param_1,DWORD param_2,undefined4 *param_3,uint param_4)

{
  DWORD DVar1;
  
  DVar1 = Library::DKW::FMM::FUN_006d49f0(param_1,param_2,param_3,param_4);
  if (DVar1 != 0) {
    return 0xffffffff;
  }
  return param_2;
}

