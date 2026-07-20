
undefined4 * __thiscall FUN_0056a5f0(void *this,undefined4 param_1)

{
  DWORD DVar1;
  int iVar2;
  undefined4 *puVar3;
  
  AppClassTy::AppClassTy(this,0,param_1);
  thunk_FUN_00571cd0((undefined4 *)((int)this + 0x38));
  *(undefined4 *)((int)this + 0x1111) = 10;
  *(undefined4 *)((int)this + 0x1115) = 10;
  *(undefined4 *)((int)this + 0xfc7) = 0;
  *(undefined4 *)((int)this + 0xfcb) = 0;
  *(undefined4 *)((int)this + 0x1119) = 1;
  *(undefined4 *)((int)this + 0x111d) = 0;
  *(undefined4 *)((int)this + 0x1121) = 1;
  *(undefined4 *)((int)this + 0x1125) = 0x14;
  *(undefined4 *)((int)this + 0xe27) = 0;
  *(undefined4 *)((int)this + 0xe2b) = 0;
  *(undefined4 *)((int)this + 0xe2f) = 0;
  *(undefined4 *)((int)this + 0xe33) = 1000;
  *(undefined4 *)((int)this + 0xe37) = 0;
  *(undefined4 *)((int)this + 0xe3f) = 0xffffffff;
  *(undefined4 *)((int)this + 0xe3b) = 0xffffffff;
  *(STAppCVTable **)this = &STAppCVTable;
  g_appClass_00806728 = this;
  *(undefined4 *)((int)this + 0x115a) = 0;
  DAT_0080673c = 0;
  *(undefined1 *)((int)this + 0x115e) = 1;
  *(undefined4 *)((int)this + 0x115f) = 0;
  *(undefined1 *)((int)this + 0x1163) = 2;
  *(undefined4 *)((int)this + 0x1164) = 0;
  *(undefined4 *)((int)this + 0x1168) = 0;
  *(undefined4 *)((int)this + 0x116c) = 0;
  *(undefined4 *)((int)this + 0x1170) = 0;
  *(undefined4 *)((int)this + 0x1174) = 0;
  *(undefined4 *)((int)this + 0x1181) = 0;
  *(undefined4 *)((int)this + 0x1185) = 0;
  *(undefined4 *)((int)this + 0x1189) = 0;
  *(undefined4 *)((int)this + 0x118d) = 0;
  *(undefined4 *)((int)this + 0x1191) = 4;
  *(undefined1 *)((int)this + 0x1195) = 0;
  *(undefined4 *)((int)this + 0x1178) = 0;
  *(undefined4 *)((int)this + 0x117c) = 0;
  *(undefined1 *)((int)this + 0x112d) = 1;
  *(undefined1 *)((int)this + 0x112e) = 1;
  *(undefined4 *)((int)this + 0x4ede) = 0;
  *(undefined4 *)((int)this + 0x4ee2) = 0;
  *(undefined4 *)((int)this + 0x4ee6) = 0;
  *(undefined4 *)((int)this + 0x4eea) = 0;
  *(undefined4 *)((int)this + 0x4ef2) = 0;
  *(undefined4 *)((int)this + 0x7d12) = 0;
  *(undefined4 *)((int)this + 0x7d16) = 0;
  *(undefined4 *)((int)this + 0x4ef6) = 1;
  *(undefined4 *)((int)this + 0x4efa) = 0;
  *(undefined2 *)((int)this + 0x1138) = 0;
  *(undefined4 *)((int)this + 0x7d0e) = 0;
  DVar1 = FUN_006e51b0((int)this);
  *(DWORD *)((int)this + 0x1134) = DVar1;
  *(undefined4 *)((int)this + 0x76f2) = 0;
  *(undefined4 *)((int)this + 0x854e) = 0;
  *(undefined4 *)((int)this + 0x8552) = 0;
  *(undefined4 *)((int)this + 0x8556) = 0;
  puVar3 = (undefined4 *)((int)this + 0x1196);
  for (iVar2 = 0x666; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)puVar3 = 0;
  puVar3 = (undefined4 *)((int)this + 0x4da3);
  for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x4ea7) = 0;
  *(undefined4 *)((int)this + 0x4eab) = 0;
  *(undefined4 *)((int)this + 0x4efe) = 0;
  return this;
}

