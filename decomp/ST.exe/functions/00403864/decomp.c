
void __thiscall thunk_FUN_00492280(void *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x45d);
  if ((((iVar2 == 0xf) || (iVar2 == 0xe)) && (*(int *)((int)this + 0x58e) == param_1)) &&
     (*(int *)((int)this + 0x596) == 2)) {
    *(undefined4 *)((int)this + 0x596) = 1;
    *(undefined4 *)((int)this + 0x592) = 0;
    return;
  }
  if (((iVar2 == 0xf) || (iVar2 == 0xe)) &&
     ((*(int *)((int)this + 0x58e) == param_1 && (*(int *)((int)this + 0x596) == 3)))) {
    iVar2 = *(int *)((int)this + 0x59a);
    if (((iVar2 == 0) || (iVar2 == 1)) || (iVar2 == 2)) {
      *(undefined4 *)((int)this + 0x59a) = 9;
      return;
    }
    if ((iVar2 == 3) || (iVar2 == 4)) {
      *(undefined4 *)((int)this + 0x59a) = 5;
      return;
    }
  }
  else {
    iVar2 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x50f0,0,0,&DAT_007a4ccc,
                               s_STBoatC__CancelLoading_incorrect_007abbc4);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

