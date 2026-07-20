
void __thiscall FUN_006ddae0(void *this,int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  *(int *)((int)this + 0x14c) = param_2;
  *(int *)((int)this + 0x148) = param_1;
  uVar2 = param_1 + param_2 + param_3;
  *(int *)((int)this + 0x150) = param_3;
  iVar1 = Library::DKW::LIB::FUN_006acf50(*(int *)((int)this + 0x154),(uVar2 + 1) * 0x100);
  *(int *)((int)this + 0x154) = iVar1;
  iVar1 = 0;
  do {
    *(char *)(*(int *)((int)this + 0x154) + iVar1) = (char)iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x100);
  puVar3 = (undefined4 *)(*(int *)((int)this + 0x154) + 0x100);
  for (iVar1 = (uVar2 & 0xffffff) << 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *param_4;
    param_4 = param_4 + 1;
    puVar3 = puVar3 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)puVar3 = *(undefined1 *)param_4;
    param_4 = (undefined4 *)((int)param_4 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  FUN_006dd870(this);
  FUN_006ddb70(this);
  return;
}

