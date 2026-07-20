
undefined4 __thiscall
FUN_004cf4e0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,char *param_6)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x361) != 0) {
    thunk_FUN_004c90c0(this);
  }
  if (*(int *)((int)this + 0x3d8) <= *(int *)((int)this + 0x3d4) + 1) {
    iVar1 = *(int *)((int)this + 0x3d8) + 0x14;
    *(int *)((int)this + 0x3d8) = iVar1;
    iVar1 = Library::DKW::LIB::FUN_006acf50(*(int *)((int)this + 0x607),iVar1 * 0x27);
    *(int *)((int)this + 0x607) = iVar1;
  }
  Library::MSVCRT::FUN_0072da70
            ((undefined4 *)((int)*(undefined4 **)((int)this + 0x607) + 0x27),
             *(undefined4 **)((int)this + 0x607),*(int *)((int)this + 0x3d4) * 0x27);
  **(undefined4 **)((int)this + 0x607) = 1;
  *(undefined4 *)(*(int *)((int)this + 0x607) + 4) = param_1;
  *(undefined4 *)(*(int *)((int)this + 0x607) + 8) = param_2;
  *(undefined4 *)(*(int *)((int)this + 0x607) + 0xc) = param_3;
  *(undefined4 *)(*(int *)((int)this + 0x607) + 0x10) = param_4;
  *(undefined4 *)(*(int *)((int)this + 0x607) + 0x14) = param_5;
  iVar1 = *(int *)((int)this + 0x607);
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined2 *)(iVar1 + 0x24) = 0;
  *(undefined1 *)(iVar1 + 0x26) = 0;
  if (param_6 != (char *)0x0) {
    Library::MSVCRT::_strncpy((char *)(*(int *)((int)this + 0x607) + 0x18),param_6,0xf);
  }
  *(int *)((int)this + 0x3d4) = *(int *)((int)this + 0x3d4) + 1;
  thunk_FUN_004c7460(this);
  return 0;
}

