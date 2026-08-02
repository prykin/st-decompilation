
void FUN_006b0020(uint *param_1,int *param_2)

{
  uint *puVar1;

  if (param_2 != nullptr) {
    *param_2 = 0;
  }
  puVar1 = Library::DKW::LIB::MemAlloc(param_1[3] * param_1[2] + 0x1c);
  if (puVar1 == nullptr) {
    return;
  }
  FUN_006affc0(param_1,puVar1,param_2);
  return;
}

