
void __thiscall FUN_00492080(void *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  int *local_14;
  short local_e;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  if ((((*(int *)((int)this + 0x45d) != 0xf) && (*(int *)((int)this + 0x45d) != 0xe)) ||
      (*(int *)((int)this + 0x58e) != param_1)) || (*(int *)((int)this + 0x596) != 2)) {
    iVar2 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x50db,0,0,&DAT_007a4ccc);
    if (iVar2 == 0) {
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + 0x58e),(int *)&local_14);
  if (iVar2 != -4) {
    (**(code **)(*local_14 + 0xac))(*(undefined4 *)((int)this + 0x18));
    thunk_FUN_004162f0(local_14,(undefined2 *)((int)this + 0x588),(short *)((int)this + 0x58a),
                       (short *)((int)this + 0x58c));
    iVar2 = thunk_FUN_004919c0(*(short *)((int)this + 0x5b),*(short *)((int)this + 0x5d),
                               *(short *)((int)this + 0x5f),*(short *)((int)this + 0x588),
                               *(short *)((int)this + 0x58a),*(short *)((int)this + 0x58c),&local_6,
                               (undefined2 *)((int)&param_1 + 2),&local_8,&local_e,&local_c,&local_a
                              );
    if (iVar2 != -2) {
      *(undefined4 *)((int)this + 0x596) = 0;
      if (iVar2 != -1) {
        local_e = local_6;
        local_c = param_1._2_2_;
        local_a = local_8;
      }
      thunk_FUN_00481520(this,(int)local_e,(int)local_c,(int)local_a);
      thunk_FUN_00460260(this,0);
      return;
    }
    *(undefined4 *)((int)this + 0x596) = 1;
    *(undefined4 *)((int)this + 0x592) = 0;
    return;
  }
  iVar2 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x50c8,0,0,&DAT_007a4ccc);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x596) = 1;
    *(undefined4 *)((int)this + 0x592) = 0;
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

