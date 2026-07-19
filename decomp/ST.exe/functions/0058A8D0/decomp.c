
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_oct.cpp
   STOctopusC::Bad */

void __thiscall STOctopusC::Bad(STOctopusC *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)DAT_007fb242;
  iVar4 = (int)DAT_007fb240;
  if (7 < (int)this->field_02A9) {
    iVar2 = ReportDebugMessage(s_E____titans_Igor_to_oct_cpp_007cba18,0x21a,0,0,&DAT_007a4ccc,
                               s_STOctopusC__Bad_direction_007cba88);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this->field_02A9 = 0;
  }
  if ((((iVar4 + -1 < (int)this->field_0299) || ((int)this->field_0299 < 0)) ||
      (iVar3 + -1 < (int)this->field_029D)) || ((int)this->field_029D < 0)) {
    this->field_0299 = iVar4 + -1 >> 1;
    this->field_029D = iVar3 + -1 >> 1;
  }
  return;
}

