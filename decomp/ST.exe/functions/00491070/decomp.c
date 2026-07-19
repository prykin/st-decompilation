
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::ReleaseLoad */

void __thiscall STBoatC::ReleaseLoad(STBoatC *this,undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  STBoatC *pSVar3;
  
  if (*(int *)(this + 0x7c2) < 1) {
    iVar2 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x4f96,0,0,&DAT_007a4ccc,
                               s_STBoatC__ReleaseLoad_data_lload<_007aba78);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    iVar2 = *(int *)(this + 0x7c2) + -1;
    *(int *)(this + 0x7c2) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)(this + 0x5a2) = 0;
      pSVar3 = this + 0x2cc;
      iVar2 = 0;
      do {
        if (*(int *)pSVar3 == 1) break;
        iVar2 = iVar2 + 1;
        pSVar3 = pSVar3 + 4;
      } while (iVar2 < 0x17);
      if ((*(int *)(this + 0x45d) == 0x14) && (iVar2 == 0x17)) {
        param_1 = *(undefined4 *)(DAT_00802a38 + 0xe4);
        CmdToObj(this,3,&param_1);
      }
      *(undefined4 *)(this + 0x314) = 0;
      *(undefined4 *)(this + 0x76) = 1;
      return;
    }
    iVar2 = (**(code **)(*(int *)this + 0xac))(param_1);
    if (iVar2 == 1) {
      *(undefined4 *)(this + 0x5c0) = 2;
    }
  }
  return;
}

