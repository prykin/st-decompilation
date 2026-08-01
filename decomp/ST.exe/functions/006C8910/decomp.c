
void FUN_006c8910(uint *param_1,int *param_2)

{
  uint size;
  uint *puVar1;

  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  size = FUN_006c87f0(param_1);
  puVar1 = Library::DKW::LIB::MemAlloc(size);
  if (puVar1 == (uint *)0x0) {
    return;
  }
  FUN_006c8840(param_1,puVar1,param_2);
  return;
}

