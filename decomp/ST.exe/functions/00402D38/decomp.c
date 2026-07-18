
void __thiscall thunk_FUN_00515180(void *this,char param_1)

{
  if ((*(char *)((int)this + 0x1a1) == param_1) || (param_1 == '\a')) {
    switch(param_1) {
    case '\x01':
      HelpPanelTy::RCProc(this,*(int *)((int)this + 0x1a3),*(uint *)((int)this + 0x1a7),'\x01');
      return;
    case '\x02':
      HelpPanelTy::ObjProc(this,*(int *)((int)this + 0x1a3),*(uint *)((int)this + 0x1a7),'\x01');
      return;
    case '\x03':
      HelpPanelTy::SubProc(this,*(int *)((int)this + 0x1a3),'\x01');
      return;
    case '\x04':
      HelpPanelTy::ArmProc(this,*(int *)((int)this + 0x1a3),*(int *)((int)this + 0x1a7),'\x01');
      return;
    case '\x05':
      HelpPanelTy::TechProc(this,*(uint *)((int)this + 0x1a3),*(byte *)((int)this + 0x1a7),'\x01');
      return;
    case '\x06':
      HelpPanelTy::TTreeProc(this,*(uint *)((int)this + 0x1a3),'\x01');
      return;
    case '\a':
      HelpPanelTy::PrepMissObj(this);
      return;
    case '\b':
      HelpPanelTy::TipProc(this,*(void **)((int)this + 0x1a3),*(int *)((int)this + 0x1a7),'\x01');
      break;
    case '\v':
      HelpPanelTy::SpecProc(this,*(int *)((int)this + 0x1a3),*(int *)((int)this + 0x1a7),'\x01');
      return;
    case '\f':
      HelpPanelTy::NatProc(this,*(int *)((int)this + 0x1a3),'\x01');
      return;
    }
  }
  return;
}

