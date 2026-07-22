#include "../../pseudocode_runtime.h"


/* [STObjectFactoryApplier] Central object factory for 0x030E (ST_OBJECT_FSGS).
   Evidence: registry[51] at 007CA8B8 stores type 0x030E and executable pointer 004038C8; allocation
   size 8387 uniquely matches /FSGSTy; calls base/helper constructor(s) SpriteClassTy; exact derived
   allocation size wins */

FSGSTy * __cdecl CreateFSGS(void)

{
  FSGSTy *this;
  int iVar1;
  undefined4 *puVar2;
  SpriteClassTy *this_00;
  undefined4 *puVar3;
  int local_8;

  this = (FSGSTy *)FUN_006b04d0(0x20c3);
  if (this != (FSGSTy *)0x0) {
    sub_006E5FB0(this);
    this->field_0000 = (AnonPointee_FSGSTy_0000 *)&VTable_0079C018;
    *(undefined4 *)&this->field_0x18 = 0;
    this->field_005D = (ushort *)0x0;
    memset(&this->field_0x1d, 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    memset(&this->field_0x3d, 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    DAT_0080879c = 0;
    this_00 = (SpriteClassTy *)&this->field_0x174;
    local_8 = 0xd;
    do {
      SpriteClassTy::SpriteClassTy(this_00 + -1);
      SpriteClassTy::SpriteClassTy(this_00);
      SpriteClassTy::SpriteClassTy(this_00 + 1);
      this_00 = (SpriteClassTy *)&this_00[3].field_0048;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    this->field_0000 = (AnonPointee_FSGSTy_0000 *)&MMObjTyVTable;
    this->field_0065 = CASE_2;
    this->field_0x9a = 0;
    memset(&this->field_0x66, 0, 0x34); /* compiler bulk-zero initialization */
    iVar1 = 0;
    local_8 = 0xd;
    puVar2 = (undefined4 *)&this->field_0xbc;
    do {
      puVar3 = puVar2;
      memset(puVar3, 0, 0x26); /* compiler bulk-zero initialization */
      puVar3 = (undefined4 *)((byte *)puVar3 + 0x24);
      iVar1 = 0;
      *(undefined1 *)((int)puVar3 + 2) = 0;
      local_8 = local_8 + -1;
      puVar2 = (undefined4 *)((int)puVar2 + 0x1fb);
    } while (local_8 != 0);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_1B28);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_1BB9);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_1C4A);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_1CDB);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_1D6C);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_1DFD);
    this->field_0000 = (AnonPointee_FSGSTy_0000 *)&VTable_0079C02C;
    this->field_1A6B = 1;
    this->field_0065 = 1;
    this->field_1A61 = 0;
    this->field_1A5F = 0;
    this->field_1A60 = 0;
    this->field_1A62 = 1;
    this->field_1F2F = (HoloTy *)0x0;
    this->field_1F23 = (HoloTy *)0x0;
    this->field_1F27 = (HoloTy *)0x0;
    this->field_1F2B = (HoloTy *)0x0;
    this->field_1A67 = (HGDIOBJ)0x0;
    this->field_1A7F = (StartServTy *)0x0;
    this->field_1A7B = (void *)0x0;
    this->field_1A77 = (ccFntTy *)0x0;
    this->field_1A73 = (ccFntTy *)0x0;
    this->field_1A6F = 0;
    this->field_1A8B = (ushort *)0x0;
    this->field_1A87 = (ushort *)0x0;
    this->field_1A83 = (ushort *)0x0;
    this->field_1A8F = -1;
    this->field_1A93 = 9;
    this->field_1A97 = (AnonPointee_FSGSTy_1A97 *)0x0;
    this->field_1AAB = (LPCSTR)0x0;
    this->field_1AB3 = 0;
    this->field_1A9B = 0;
    this->field_1A9F = (void *)0x0;
    this->field_1AA3 = 0;
    this->field_1AB7 = 0;
    this->field_1ABC = -1;
    this->field_1AC0 = (ushort *)0x0;
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
    this->field_1B04 = (uint *)0x0;
    this->field_1B00 = (DArrayTy *)0x0;
    this->field_1AFC = (DArrayTy *)0x0;
    this->field_1AF8 = (DArrayTy *)0x0;
    this->field_1AF4 = (DArrayTy *)0x0;
    this->field_1AF0 = (DArrayTy *)0x0;
    this->field_1AEC = (DArrayTy *)0x0;
    this->field_1AE8 = (DArrayTy *)0x0;
    this->field_1B08 = (DArrayTy *)0x0;
    this->field_1B0C = (byte *)0x0;
    this->field_1E9A = (tagBITMAPINFO *)0x0;
    this->field_1E96 = 0;
    this->field_1E92 = (tagBITMAPINFO *)0x0;
    this->field_1E8E = 0;
    this->field_1B24 = 0;
    this->field_1B20 = 0;
    this->field_1B1C = 0;
    this->field_1B18 = 0;
    this->field_1B14 = 0;
    this->field_1B10 = 0;
    this->field_1EA2 = (AnonPointee_FSGSTy_1EA2 *)0x0;
    this->field_1E9E = (uint *)0x0;
    this->field_1EAA = (DArrayTy *)0x0;
    this->field_1EA6 = (DArrayTy *)0x0;
    this->field_1EAE = 0;
    this->field_1ED7 = 0;
    this->field_1ED3 = 0;
    this->field_1EBA = 0;
    this->field_1EB6 = 0;
    this->field_1EBE = (DArrayTy *)0x0;
    this->field_1EC2 = 0x100;
    *(undefined4 *)&this->field_0x1ece = 0;
    this->field_1EDB = 0;
    this->field_1EE3 = 0;
    this->field_1EDF = 0;
    memset(&this->field_1EE7, 0, 0x3c); /* compiler bulk-zero initialization */
    this->field_1FB3 = (DArrayTy *)0x0;
    return this;
  }
  return (FSGSTy *)0x0;
}

