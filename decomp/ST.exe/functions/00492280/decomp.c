
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::CancelLoading */

void __thiscall STBoatC::CancelLoading(STBoatC *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = this->field_045D;
  if ((((iVar2 == 0xf) || (iVar2 == 0xe)) && (this->field_058E == param_1)) &&
     (this->field_0596 == 2)) {
    this->field_0596 = 1;
    this->field_0592 = 0;
    return;
  }
  if (((iVar2 == 0xf) || (iVar2 == 0xe)) &&
     ((this->field_058E == param_1 && (this->field_0596 == 3)))) {
    iVar2 = this->field_059A;
    if (((iVar2 == 0) || (iVar2 == 1)) || (iVar2 == 2)) {
      this->field_059A = 9;
      return;
    }
    if ((iVar2 == 3) || (iVar2 == 4)) {
      this->field_059A = 5;
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

