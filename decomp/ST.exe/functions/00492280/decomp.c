
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::CancelLoading */

void __thiscall STBoatC::CancelLoading(STBoatC *this,int param_1)

{
  STBoatC_field_045DState SVar1;
  code *pcVar2;
  int iVar3;
  
  SVar1 = this->field_045D;
  if ((((SVar1 == CASE_F) || (SVar1 == CASE_E)) && (this->field_058E == param_1)) &&
     (this->field_0596 == 2)) {
    this->field_0596 = 1;
    this->field_0592 = 0;
    return;
  }
  if (((SVar1 == CASE_F) || (SVar1 == CASE_E)) &&
     ((this->field_058E == param_1 && (this->field_0596 == 3)))) {
    iVar3 = this->field_059A;
    if (((iVar3 == 0) || (iVar3 == 1)) || (iVar3 == 2)) {
      this->field_059A = 9;
      return;
    }
    if ((iVar3 == 3) || (iVar3 == 4)) {
      this->field_059A = 5;
      return;
    }
  }
  else {
    iVar3 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x50f0,0,0,&DAT_007a4ccc,
                               s_STBoatC__CancelLoading_incorrect_007abbc4);
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

