
undefined4 * __thiscall thunk_FUN_0055c050(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)((int)this + 0x40) == 0) {
    thunk_FUN_0055bf20(this,*(undefined4 *)((int)this + 0x3c));
    if (*(int *)((int)this + 0x40) == 0) {
      return (undefined4 *)0x0;
    }
  }
  iVar4 = 0xe;
  iVar3 = 0x1c;
  iVar1 = CFsgsConnection::GetUserIconIndex
                    (this,(char *)(param_1 + 0x10),*(ulong *)(param_1 + 0x25));
  puVar2 = Library::DKW::WGR::FUN_006b55f0
                     ((undefined4 *)0x0,0,0,0,*(int *)((int)this + 0x40),0,0,iVar1 * 0xe,iVar3,iVar4
                     );
  return puVar2;
}

