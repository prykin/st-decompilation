
undefined4 __cdecl FUN_00677250(undefined4 param_1,undefined4 param_2,int param_3,uint *param_4)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = param_4;
  if (param_4 != (uint *)0x0) {
    uVar2 = thunk_FUN_00423120(param_3);
    if ((uVar2 & 8) == 0) {
      Library::DKW::TBL::FUN_006ae1c0(puVar1,&param_2);
    }
  }
  return 0;
}

