
void __thiscall STBoatC::ReadyForLoading(STBoatC *this,void *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((((*(int *)(this + 0x45d) == 0xf) || (*(int *)(this + 0x45d) == 0xe)) &&
      (*(void **)(this + 0x58e) == param_1)) && (*(int *)(this + 0x596) == 2)) {
    FUN_006e62d0(DAT_00802a38,(int)*(void **)(this + 0x58e),(int *)&param_1);
    thunk_FUN_004162f0(param_1,(undefined2 *)(this + 0x588),(undefined2 *)(this + 0x58a),
                       (undefined2 *)(this + 0x58c));
    *(undefined4 *)(this + 0x596) = 3;
    *(undefined4 *)(this + 0x59a) = 0;
    return;
  }
  iVar2 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x50bb,0,0,&DAT_007a4ccc,
                             s_STBoatC__ReadyForLoading_incorre_007abb28);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

