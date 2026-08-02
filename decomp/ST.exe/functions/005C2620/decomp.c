#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA8C4>0040166D

   [STObjectFactoryApplier] Central object factory for 0x0304 (ST_OBJECT_M_REPORT).
   Evidence: registry[52] at 007CA8C0 stores type 0x0304 and executable pointer 0040166D; allocation
   size 1115 uniquely matches /MReportTy */

MReportTy * __cdecl CreateMReport(void)

{
  MReportTy *this;
  int iVar1;

  this = (MReportTy *)FUN_006b04d0(0x45b);
  if (this != nullptr) {
    sub_006E5FB0(this);
    *(undefined4 *)&this->field_0x18 = 0;
    this->field_005D = 0;
    memset(&this->field_0x1d, 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    memset(&this->field_0x3d, 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    DAT_0080879c = 0;
    *(undefined **)this = &UNK_0079c0e4;
    memset(&this->field_0x1d, 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    memset(&this->field_0x3d, 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    this->field_0065 = 2;
    this->field_0066 = 1;
    this->field_0073 = nullptr;
    this->field_007B = 0;
    this->field_0077 = nullptr;
    this->field_006F = 0;
    this->field_008B = nullptr;
    this->field_0087 = nullptr;
    this->field_0083 = nullptr;
    this->field_007F = nullptr;
    this->field_008F = 0;
    this->field_0093 = 0;
    this->field_0097 = 0;
    this->field_009B = 0;
    this->field_0068 = 1;
    this->field_009F = 0;
    this->field_0067 = 0;
    this->field_0069 = 0;
    memset(&this->field_0x2a7, 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    this->field_02A3 = 0;
    this->field_006A = 0;
    this->field_006B = 0;
    this->field_0347 = nullptr;
    *(undefined4 *)&this->field_0x34b = 0;
    this->field_034F = 0;
    memset(&this->field_0353, 0, 0xfc); /* compiler bulk-zero initialization */
    this->field_044F = 0;
    this->field_0457 = nullptr;
    this->field_0453 = nullptr;
    return this;
  }
  return nullptr;
}

