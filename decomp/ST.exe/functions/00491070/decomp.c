
void __thiscall FUN_00491070(void *this,undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)((int)this + 0x7c2) < 1) {
    iVar2 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x4f96,0,0,&DAT_007a4ccc);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    iVar2 = *(int *)((int)this + 0x7c2) + -1;
    *(int *)((int)this + 0x7c2) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)((int)this + 0x5a2) = 0;
      piVar3 = (int *)((int)this + 0x2cc);
      iVar2 = 0;
      do {
        if (*piVar3 == 1) break;
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar2 < 0x17);
      if ((*(int *)((int)this + 0x45d) == 0x14) && (iVar2 == 0x17)) {
        param_1 = *(undefined4 *)(DAT_00802a38 + 0xe4);
        thunk_FUN_0045ef00(this,3,&param_1);
      }
      *(undefined4 *)((int)this + 0x314) = 0;
      *(undefined4 *)((int)this + 0x76) = 1;
      return;
    }
    iVar2 = (**(code **)(*(int *)this + 0xac))(param_1);
    if (iVar2 == 1) {
      *(undefined4 *)((int)this + 0x5c0) = 2;
    }
  }
  return;
}

