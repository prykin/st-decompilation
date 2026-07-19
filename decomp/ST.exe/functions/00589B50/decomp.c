
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_oct.cpp
   STOctopusC::SetSprRange */

void __thiscall STOctopusC::SetSprRange(STOctopusC *this,uint param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (7 < param_1) {
    iVar2 = ReportDebugMessage(s_E____titans_Igor_to_oct_cpp_007cba18,0x71,0,0,&DAT_007a4ccc,
                               s_STOctopusC__SetSprRange___Bad_di_007cba3c);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    param_1 = 0;
  }
  if ((this->field_02A5 != 0xf8) && (this->field_02A5 != 0xf9)) {
    iVar2 = param_1 * 6;
    this->field_006C = (short)iVar2;
    thunk_FUN_004abce0(&this->field_01D5,0xe,iVar2,iVar2 + 5,'\0');
    return;
  }
  iVar2 = param_1 * 8;
  this->field_006C = (short)iVar2;
  thunk_FUN_004abce0(&this->field_01D5,0xe,iVar2,iVar2 + 7,'\0');
  return;
}

