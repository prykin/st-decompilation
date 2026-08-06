#include "../../pseudocode_runtime.h"


undefined4 __thiscall
TLOBaseTy::FUN_004cf4e0
          (TLOBaseTy *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4,undefined4 param_5,char *param_6)

{
  int iVar1;
  AnonPointee_TLOBaseTy_0607 *pAVar2;

  if (*(int *)&this->field_0x361 != 0) {
    sub_004C90C0(this);
  }
  if (this->field_03D8 <= this->field_03D4 + 1) {
    iVar1 = this->field_03D8 + 0x14;
    this->field_03D8 = iVar1;
    pAVar2 = Library::DKW::LIB::MemRealloc(this->field_0607,iVar1 * 0x27);
    this->field_0607 = pAVar2;
  }
  Library::MSVCRT::FUN_0072da70
            ((undefined4 *)((int)&this->field_0607[1].field_000C + 3),this->field_0607,
             this->field_03D4 * 0x27);
  this->field_0607->field_0000 = 1;
  this->field_0607->field_0004 = param_1;
  this->field_0607->field_0008 = param_2;
  this->field_0607->field_000C = param_3;
  this->field_0607->field_0010 = param_4;
  this->field_0607->field_0014 = param_5;
  pAVar2 = this->field_0607;
  pAVar2[1].field_0000 = 0;
  pAVar2[1].field_0004 = 0;
  pAVar2[1].field_0008 = 0;
  *(undefined2 *)&pAVar2[1].field_000C = 0;
  *(undefined1 *)((int)&pAVar2[1].field_000C + 2) = 0;
  if (param_6 != nullptr) {
    Library::MSVCRT::_strncpy((char *)(this->field_0607 + 1),param_6,0xf);
  }
  this->field_03D4 = this->field_03D4 + 1;
  sub_004C7460(this);
  return 0;
}

