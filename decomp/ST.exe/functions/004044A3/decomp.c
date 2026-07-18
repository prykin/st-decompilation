
void thunk_FUN_00502330(void)

{
  CPanelTy *in_ECX;
  
  if (DAT_0080874e == '\x03') {
    CPanelTy::Update2PanelSI(in_ECX);
    return;
  }
  CPanelTy::Update2PanelWB(in_ECX);
  return;
}

