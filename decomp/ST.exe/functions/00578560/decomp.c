
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_crab.cpp
   STCrabC::SetSprRange */

void __thiscall STCrabC::SetSprRange(STCrabC *this,uint param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (7 < param_1) {
    iVar2 = ReportDebugMessage(s_E____titans_Igor_to_crab_cpp_007cad4c,0x7a,0,0,&DAT_007a4ccc,
                               s_STCrabC__SetSprRange___Bad_direc_007cad70);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    param_1 = 0;
  }
  iVar2 = param_1 * 6;
  this->field_006C = (short)iVar2;
  thunk_FUN_004abce0(&this->field_01D5,0xe,iVar2,iVar2 + 5,'\0');
  return;
}

