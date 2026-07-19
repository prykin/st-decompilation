
void __fastcall FUN_00542ec0(int param_1)

{
  ccFntTy *extraout_ECX;
  ccFntTy *extraout_ECX_00;
  ccFntTy *extraout_ECX_01;
  ccFntTy *this;
  
  this = (ccFntTy *)param_1;
  if (*(uint **)(param_1 + 0x24) != (uint *)0x0) {
    ccFntTy::operator((ccFntTy *)param_1,*(uint **)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0;
    this = extraout_ECX;
  }
  if (*(uint **)(param_1 + 0x28) != (uint *)0x0) {
    ccFntTy::operator(this,*(uint **)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0;
    this = extraout_ECX_00;
  }
  if (*(uint **)(param_1 + 0x2c) != (uint *)0x0) {
    ccFntTy::operator(this,*(uint **)(param_1 + 0x2c));
    *(undefined4 *)(param_1 + 0x2c) = 0;
    this = extraout_ECX_01;
  }
  if (*(uint **)(param_1 + 0x30) != (uint *)0x0) {
    ccFntTy::operator(this,*(uint **)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  FUN_006e52d0(param_1);
  return;
}

