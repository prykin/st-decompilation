
void FUN_006c8910(uint *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  iVar1 = FUN_006c87f0((int)param_1);
  puVar2 = (uint *)Library::DKW::LIB::FUN_006aac70(iVar1);
  if (puVar2 == (uint *)0x0) {
    return;
  }
  FUN_006c8840(param_1,puVar2,param_2);
  return;
}

