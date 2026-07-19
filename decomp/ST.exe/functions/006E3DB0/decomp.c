
void FUN_006e3db0(int param_1)

{
  AppClassTy *in_ECX;
  
  AppClassTy::SendMessage(in_ECX,*(uint *)(param_1 + 0xc),*(int *)(param_1 + 8),param_1);
  return;
}

