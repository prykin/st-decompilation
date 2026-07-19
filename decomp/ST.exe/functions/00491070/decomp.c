
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::ReleaseLoad */

void __thiscall STBoatC::ReleaseLoad(STBoatC *this,undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  
  if ((int)this->field_07C2 < 1) {
    iVar2 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x4f96,0,0,&DAT_007a4ccc,
                               s_STBoatC__ReleaseLoad_data_lload<_007aba78);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    iVar2 = this->field_07C2 + -1;
    this->field_07C2 = iVar2;
    if (iVar2 == 0) {
      this->field_05A2 = 0;
      piVar3 = &this->field_02CC;
      iVar2 = 0;
      do {
        if (*piVar3 == 1) break;
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar2 < 0x17);
      if ((this->field_045D == 0x14) && (iVar2 == 0x17)) {
        param_1 = *(undefined4 *)(DAT_00802a38 + 0xe4);
        CmdToObj(this,CASE_3,&param_1);
      }
      this->field_0314 = 0;
      this->field_0076 = 1;
      return;
    }
    iVar2 = (*this->vtable->vfunc_AC)(param_1);
    if (iVar2 == 1) {
      this->field_05C0 = 2;
    }
  }
  return;
}

