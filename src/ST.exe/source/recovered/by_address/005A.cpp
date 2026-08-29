#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/005A.cpp

// 005AA2C0 CreateFSGS
#line 4 "decomp/ST.exe/functions/005AA2C0/decomp.c"
/* [STObjectFactoryApplier] Central object factory for 0x030E (ST_OBJECT_FSGS).
   Evidence: registry[51] at 007CA8B8 stores type 0x030E and executable pointer 004038C8; allocation
   size 8387 uniquely matches /FSGSTy; calls base/helper constructor(s) SpriteClassTy; exact derived
   allocation size wins */

FSGSTy * __cdecl st::fn_005AA2C0(void)

{
  FSGSTy *this;
  int iVar1;
  FSGSTy_Record_00BC_01FB *pFVar2;
  SpriteClassTy *this_00;
  FSGSTy_Record_00BC_01FB *pFVar3;
  int local_8;


  this = STPointerBoundaryCast<FSGSTy *>(st::fn_006B04D0(0x20c3));
  if (this != nullptr) {

    st::fn_006E5FB0(this);
    this->vtable = reinterpret_cast<FSGSTyVTable *>(&st_global_0079C018);
    this->field_0018 = 0;
    this->field_005D = nullptr;
    memset(&this->field_0x1d, 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    memset(&this->field_0x3d, 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    DAT_0080879c = 0;
    this_00 = &this->array_00BC[0].field_00B8;
    local_8 = 0xd;
    do {
      st::fn_00715820(this_00 + -1);
      st::fn_00715820(this_00);
      st::fn_00715820(this_00 + 1);
      this_00 = reinterpret_cast<SpriteClassTy *>(&this_00[3].field_0048);
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    this->vtable = reinterpret_cast<FSGSTyVTable *>(&st_global_0079C008);
    this->field_0065 = CASE_2;
    this->field_009A = 0;
    memset(&this->field_0x66, 0, 0x34); /* compiler bulk-zero initialization */
    iVar1 = 0;
    local_8 = 0xd;
    pFVar2 = this->array_00BC;
    do {
      pFVar3 = pFVar2;
      for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined4 *)pFVar3 = 0;
        pFVar3 = reinterpret_cast<FSGSTy_Record_00BC_01FB *>(reinterpret_cast<byte *>(pFVar3) + 0x4);
      }
      *(undefined2 *)pFVar3 = 0;
      pFVar3->field_0x2 = 0;
      local_8 = local_8 + -1;
      pFVar2 = pFVar2 + 1;
    } while (local_8 != 0);
    st::fn_00715820(reinterpret_cast<SpriteClassTy *>(&this->field_1B28));
    st::fn_00715820(reinterpret_cast<SpriteClassTy *>(&this->field_1BB9));
    st::fn_00715820(reinterpret_cast<SpriteClassTy *>(&this->field_1C4A));
    st::fn_00715820(reinterpret_cast<SpriteClassTy *>(&this->field_1CDB));
    st::fn_00715820(reinterpret_cast<SpriteClassTy *>(&this->field_1D6C));
    st::fn_00715820(reinterpret_cast<SpriteClassTy *>(&this->field_1DFD));
    this->vtable = &st_global_0079C02C;
    this->array_00BC[0xc].field_01EB = 1;
    this->field_0065 = CASE_1;
    this->array_00BC[0xc].field_01E1 = 0;
    this->array_00BC[0xc].field_01DF = 0;
    this->array_00BC[0xc].field_01E0 = 0;
    this->array_00BC[0xc].field_01E2 = 1;
    this->field_1F2F = nullptr;
    this->field_1F23 = nullptr;
    this->field_1F27 = nullptr;
    this->field_1F2B = nullptr;
    this->array_00BC[0xc].field_01E7 = nullptr;
    this->field_1A7F = nullptr;
    this->field_1A7B = nullptr;
    this->array_00BC[0xc].field_01F7 = nullptr;
    this->array_00BC[0xc].field_01F3 = nullptr;
    this->array_00BC[0xc].field_01EF = 0;
    this->field_1A8B = nullptr;
    this->field_1A87 = nullptr;
    this->field_1A83 = nullptr;
    this->field_1A8F = 0xffffffff;
    this->field_1A93 = 9;
    this->field_1A97 = nullptr;
    this->field_1AAB = (LPCSTR)0x0;
    this->field_1AB3 = 0;
    this->field_1A9B = nullptr;
    this->field_1A9F = nullptr;
    this->field_1AA3 = 0;
    this->field_1AB7 = 0;
    this->field_1ABC = 0xffffffff;
    this->field_1AC0 = nullptr;
    this->field_1ABB = 0;
    this->field_1AE4 = (LPCSTR)0x0;
    this->field_1AE0 = 0;
    this->field_1ADC = 0;
    this->field_1AD8 = 0;
    this->field_1AD0 = 0;
    this->field_1AD4 = 0;
    this->field_1ACC = 0;
    this->field_1AC8 = 0;
    this->field_1AC4 = 0;
    this->field_1B04 = nullptr;
    this->field_1B00 = nullptr;
    this->field_1AFC = nullptr;
    this->field_1AF8 = nullptr;
    this->field_1AF4 = nullptr;
    this->field_1AF0 = nullptr;
    this->field_1AEC = nullptr;
    this->field_1AE8 = nullptr;
    this->field_1B08 = nullptr;
    this->field_1B0C = nullptr;
    this->field_1E9A = nullptr;
    this->field_1E96 = nullptr;
    this->field_1E92 = nullptr;
    this->field_1E8E = 0;
    this->field_1B24 = 0;
    this->field_1B20 = 0;
    this->field_1B1C = 0;
    this->field_1B18 = 0;
    this->field_1B14 = 0;
    this->field_1B10 = 0;
    this->field_1EA2 = nullptr;
    this->field_1E9E = nullptr;
    this->field_1EAA = nullptr;
    this->field_1EA6 = nullptr;
    this->field_1EAE = 0;
    this->field_1ED7 = 0;
    this->field_1ED3 = 0;
    this->field_1EBA = 0;
    this->field_1EB6 = 0;
    this->field_1EBE = nullptr;
    this->field_1EC2 = 0x100;
    this->field_1ECE = 0;
    this->field_1EDB = nullptr;
    this->field_1EE3 = 0;
    this->field_1EDF = 0;
    memset(&this->field_1EE7, 0, 0x3c); /* compiler bulk-zero initialization */
    this->field_1FB3 = nullptr;
    return this;
  }
  return nullptr;
}
