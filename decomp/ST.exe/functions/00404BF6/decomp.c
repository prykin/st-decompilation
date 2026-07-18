
undefined4 __thiscall
thunk_FUN_00581ac0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)((int)this + 0x20f) < *(int *)((int)this + 0x1fd)) {
    uVar3 = thunk_FUN_00582460(param_1,param_2,param_3,*(undefined4 *)((int)this + 0x1ed),
                               *(undefined4 *)((int)this + 0x1f1),*(undefined4 *)((int)this + 0x1f5)
                               ,*(undefined4 *)((int)this + 0x1f9),*(undefined4 *)((int)this + 0x18)
                               ,*(undefined4 *)((int)this + 0x24),*(undefined4 *)((int)this + 0x201)
                               ,(uint)*(ushort *)((int)this + 0x205),0xffff);
    return uVar3;
  }
  iVar2 = FUN_006ad4d0(s_E____titans_Igor_to_jell_m_cpp_007cb2f0,0xda,0,0,&DAT_007a4ccc);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return 0;
}

