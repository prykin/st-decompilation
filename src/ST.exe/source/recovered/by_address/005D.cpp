#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/005D.cpp

// 005D4B40 CreateSettMapM
#line 4 "decomp/ST.exe/functions/005D4B40/decomp.c"
/* [STObjectFactoryApplier] Central object factory for 0x030B (ST_OBJECT_SETT_MAP_M).
   Evidence: registry[44] at 007CA880 stores type 0x030B and executable pointer 00401AFF; allocation
   size 8773 uniquely matches /SettMapMTy; calls base/helper constructor(s) SpriteClassTy; exact
   derived allocation size wins */

SettMapMTy * __cdecl st::fn_005D4B40(void)

{
  SettMapMTy *this;
  int iVar1;
  undefined4 *puVar2;
  SpriteClassTy *this_00;
  undefined4 *puVar3;
  ushort **ppuVar4;
  uint *puVar5;
  int local_8;

  this = (SettMapMTy *)st::fn_006B04D0(0x2245);
  if (this != nullptr) {
    st::fn_006E5FB0(this);
    this->vtable = (SettMapMTyVTable *)&st_global_0079C018;
    this->field_0018 = 0;
    this->field_005D = 0;
    memset(&this->field_0x1d, 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    memset(&this->field_0x3d, 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    DAT_0080879c = 0;
    this_00 = (SpriteClassTy *)&this->field_0x174;
    local_8 = 0xd;
    do {
      st::fn_00715820(this_00 + -1);
      st::fn_00715820(this_00);
      st::fn_00715820(this_00 + 1);
      this_00 = (SpriteClassTy *)&this_00[3].field_0048;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    this->vtable = (SettMapMTyVTable *)&st_global_0079C008;
    this->field_0065 = 2;
    this->field_009A = 0;
    memset(&this->field_0x66, 0, 0x34); /* compiler bulk-zero initialization */
    iVar1 = 0;
    local_8 = 0xd;
    puVar2 = (undefined4 *)&this->field_0xbc;
    do {
      puVar3 = puVar2;
      memset(puVar3, 0, 0x27); /* compiler bulk-zero initialization */
      puVar3 = (undefined4 *)((byte *)puVar3 + 0x24);
      iVar1 = 0;
      local_8 = local_8 + -1;
      puVar2 = (undefined4 *)((int)puVar2 + 0x1fb);
    } while (local_8 != 0);
    st::fn_00715820((SpriteClassTy *)&this->field_1C6B);
    st::fn_00715820((SpriteClassTy *)&this->field_1CFC);
    st::fn_00715820((SpriteClassTy *)&this->field_1D8D);
    this->field_1C5F = 0;
    this->field_1C63 = 0;
    this->field_1E27 = 0;
    this->field_1E2B = nullptr;
    *(undefined4 *)&this->field_0x21e1 = 0;
    *(undefined2 *)&this->field_0x21e5 = 0;
    this->field_21E7 = 0;
    memset(&this->field_0x2161, 0, 0x80); /* compiler bulk-zero initialization */
    iVar1 = 0;
    this->field_1E2F = nullptr;
    this->field_1F43 = nullptr;
    this->field_1F3F = nullptr;
    this->field_1F4F = nullptr;
    this->field_1F4B = nullptr;
    this->field_1F84 = nullptr;
    memset(this->field_1F8C, 0, 0x140); /* compiler bulk-zero initialization */
    iVar1 = 0;
    this->field_211D = 0;
    this->field_1F88 = 0;
    puVar5 = this->field_20CC;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    ppuVar4 = &this->field_20F4;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppuVar4 = nullptr;
      ppuVar4 = ppuVar4 + 1;
    }
    this->field_1E1E = nullptr;
    this->field_1E22 = 0xffffffff;
    memset(this->field_2125, 0, 0x38); /* compiler bulk-zero initialization */
    iVar1 = 0;
    this->field_215D = 0;
    this->field_21F8 = nullptr;
    this->field_21F4 = nullptr;
    this->field_21F0 = nullptr;
    this->field_21EC = nullptr;
    this->field_21E8 = nullptr;
    this->field_1F80 = 0xffffffff;
    this->field_1C67 = nullptr;
    this->field_1F47 = 0;
    this->field_1F7C = nullptr;
    memset(&this->field_1F60, 0, 0x1c); /* compiler bulk-zero initialization */
    *(undefined4 *)&this->field_0x1f58 = 0;
    this->field_0x1f57 = 1;
    this->field_0x1f5c = 4;
    this->field_0x1f5d = 1;
    this->field_0x1f5e = 1;
    this->field_1F5F = 1;
    this->vtable = &st_global_0079C124;
    this->field_21FC = 0;
    this->field_2200 = 0xffffffff;
    this->field_2204 = nullptr;
    this->field_2211 = 0;
    this->field_2221 = 0;
    this->field_220D = 0;
    this->field_2209 = 0;
    this->field_2225 = 0;
    this->field_221D = 0;
    this->field_2219 = 0;
    this->field_2215 = 0;
    this->field_2226 = nullptr;
    this->field_222A = 0;
    this->field_2208 = 1;
    this->field_222E = 0;
    this->field_222F = nullptr;
    this->field_2237 = nullptr;
    this->field_2243 = 1;
    this->field_2244 = 1;
    this->field_223B = 0;
    this->field_223F = 0;
    return this;
  }
  return nullptr;
}

// 005D77A0 CreateSettMap
#line 4 "decomp/ST.exe/functions/005D77A0/decomp.c"
/* [STObjectFactoryApplier] Central object factory for 0x0306 (ST_OBJECT_SETT_MAP).
   Evidence: registry[43] at 007CA878 stores type 0x0306 and executable pointer 00405745; allocation
   size 8700 uniquely matches /SettMapTy; calls base/helper constructor(s) SpriteClassTy; exact
   derived allocation size wins */

SettMapTy * __cdecl st::fn_005D77A0(void)

{
  SettMapTy *this;
  int iVar1;
  undefined4 *puVar2;
  SpriteClassTy *this_00;
  undefined4 *puVar3;
  void **ppvVar4;
  uint *puVar5;
  int local_8;

  this = (SettMapTy *)st::fn_006B04D0(0x21fc);
  if (this != nullptr) {
    st::fn_006E5FB0(this);
    this->vtable = (SettMapTyVTable *)&st_global_0079C018;
    this->field_0018 = 0;
    this->field_005D = 0;
    memset(&this->field_0x1d, 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    memset(&this->field_0x3d, 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    DAT_0080879c = 0;
    this_00 = (SpriteClassTy *)&this->field_0x174;
    local_8 = 0xd;
    do {
      st::fn_00715820(this_00 + -1);
      st::fn_00715820(this_00);
      st::fn_00715820(this_00 + 1);
      this_00 = (SpriteClassTy *)&this_00[3].field_0048;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    this->vtable = (SettMapTyVTable *)&st_global_0079C008;
    this->field_0065 = 2;
    this->field_009A = 0;
    memset(&this->field_0x66, 0, 0x34); /* compiler bulk-zero initialization */
    iVar1 = 0;
    local_8 = 0xd;
    puVar2 = (undefined4 *)&this->field_0xbc;
    do {
      puVar3 = puVar2;
      memset(puVar3, 0, 0x27); /* compiler bulk-zero initialization */
      puVar3 = (undefined4 *)((byte *)puVar3 + 0x24);
      iVar1 = 0;
      local_8 = local_8 + -1;
      puVar2 = (undefined4 *)((int)puVar2 + 0x1fb);
    } while (local_8 != 0);
    st::fn_00715820((SpriteClassTy *)&this->field_0x1c6b);
    st::fn_00715820((SpriteClassTy *)&this->field_0x1cfc);
    st::fn_00715820((SpriteClassTy *)&this->field_0x1d8d);
    this->field_1C5F = 0;
    this->field_1C63 = 0;
    this->field_1E27 = 0;
    this->field_1E2B = nullptr;
    *(undefined4 *)&this->field_0x21e1 = 0;
    *(undefined2 *)&this->field_0x21e5 = 0;
    this->field_21E7 = 0;
    memset(&this->field_0x2161, 0, 0x80); /* compiler bulk-zero initialization */
    iVar1 = 0;
    this->field_1E2F = nullptr;
    this->field_1F43 = nullptr;
    this->field_1F3F = nullptr;
    this->field_1F4F = nullptr;
    this->field_1F4B = 0;
    this->field_1F84 = nullptr;
    memset(&this->field_1F8C, 0, 0x140); /* compiler bulk-zero initialization */
    iVar1 = 0;
    this->field_211D = 0;
    this->field_1F88 = 0;
    puVar5 = this->field_20CC;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    ppvVar4 = this->field_20F4;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppvVar4 = nullptr;
      ppvVar4 = ppvVar4 + 1;
    }
    this->field_1E1E = 0;
    this->field_1E22 = 0xffffffff;
    memset(this->field_2125, 0, 0x38); /* compiler bulk-zero initialization */
    iVar1 = 0;
    this->field_215D = 0;
    this->field_21F8 = nullptr;
    this->field_21F4 = nullptr;
    this->field_21F0 = nullptr;
    this->field_21EC = nullptr;
    this->field_21E8 = nullptr;
    this->field_1F80 = 0xffffffff;
    this->field_1C67 = 0;
    this->field_1F47 = 0;
    this->field_1F7C = nullptr;
    memset(this->field_1F60, 0, 0x1c); /* compiler bulk-zero initialization */
    this->field_1F58 = 0;
    this->field_1F57 = 1;
    this->field_1F5D = 1;
    this->field_1F5E = 1;
    this->field_1F5F = 1;
    this->field_1F5C = 4;
    this->vtable = &st_global_0079C160;
    return this;
  }
  return nullptr;
}

// 005D9F80 CreateSID
#line 4 "decomp/ST.exe/functions/005D9F80/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA89C>0040181B

   [STObjectFactoryApplier] Central object factory for 0x0309 (ST_OBJECT_TYPE_0309).
   Evidence: registry[47] at 007CA898 stores type 0x0309 and executable pointer 0040181B; allocation
   size 7640 has no unique current class-layout match */

SIDTy * __cdecl st::fn_005D9F80(void)

{
  SIDTy *this;
  int iVar1;
  undefined4 *puVar3;
  SpriteClassTy *this_00;
  undefined4 *puVar4;

  this = (SIDTy *)st::fn_006B04D0(0x1dd8);
  if (this != nullptr) {
    st::fn_006E5FB0(this);
    this->vtable = (SIDTyVTable *)&VTable_0079C018;
    this->field_0018 = 0;
    this->field_005D = 0;
    memset(&this->field_0x1d, 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    memset(&this->field_0x3d, 0, 0x20); /* compiler bulk-zero initialization */
    DAT_0080879c = 0;
    this_00 = (SpriteClassTy *)&this->field_0x174;
    iVar1 = 0xd;
    do {
      st::fn_00715820(this_00 + -1);
      st::fn_00715820(this_00);
      st::fn_00715820(this_00 + 1);
      this_00 = (SpriteClassTy *)&this_00[3].field_0048;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    this->vtable = (SIDTyVTable *)&MMObjTyVTable;
    this->field_0065 = 2;
    this->field_009A = 0;
    memset(&this->field_0x66, 0, 0x34); /* compiler bulk-zero initialization */
    iVar1 = 0xd;
    puVar3 = (undefined4 *)&this->field_0xbc;
    do {
      puVar4 = puVar3;
      memset(puVar4, 0, 0x27); /* compiler bulk-zero initialization */
      puVar4 = (undefined4 *)((byte *)puVar4 + 0x24);
      iVar1 = iVar1 + -1;
      puVar3 = (undefined4 *)((int)puVar3 + 0x1fb);
    } while (iVar1 != 0);
    st::fn_00715820((SpriteClassTy *)&this->field_1A60);
    st::fn_00715820((SpriteClassTy *)&this->field_1B01);
    st::fn_00715820((SpriteClassTy *)&this->field_1B92);
    st::fn_00715820((SpriteClassTy *)&this->field_1C23);
    this->vtable = &st_global_0079C1AC;
    this->field_1A5F = 0;
    this->field_1AF1[0] = 0;
    this->field_1AF1[1] = 0;
    this->field_1AF9[0] = 0;
    this->field_1AF9[1] = 0;
    this->field_1CB8 = nullptr;
    this->field_1CC4 = (HANDLE)0x0;
    this->field_1CCC = nullptr;
    this->field_1CD0 = nullptr;
    this->field_1CC8 = nullptr;
    this->field_1CC0 = nullptr;
    this->field_1CBC = nullptr;
    this->field_1CB4 = 0xffffffff;
    return this;
  }
  return nullptr;
}

// 005DA130 FUN_005da130
#line 4 "decomp/ST.exe/functions/005DA130/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005DB4F0 -> 005DA130 @ 005DB713 */

void __cdecl st::fn_005DA130(ushort *param_1,undefined *param_2,BYTE param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  LOGFONTA *pLVar6;
  char *pcVar7;
  CHAR *pCVar8;
  LOGFONTA local_78;
  byte local_3c [56];

  pLVar6 = &local_78;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    pLVar6->lfHeight = 0;
    pLVar6 = (LOGFONTA *)&pLVar6->lfWidth;
  }
  local_78.lfCharSet = param_3;
  uVar3 = 0xffffffff;
  pcVar5 = "Verdana";
  do {
    pcVar7 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  local_78.lfHeight = -0x10;
  local_78.lfWidth = 0;
  local_78.lfEscapement = 0;
  local_78.lfOrientation = 0;
  local_78.lfWeight = 400;
  local_78.lfItalic = '\0';
  local_78.lfUnderline = '\0';
  local_78.lfStrikeOut = '\0';
  local_78.lfOutPrecision = '\x03';
  local_78.lfClipPrecision = '\x02';
  local_78.lfQuality = '\x01';
  local_78.lfPitchAndFamily = '\"';
  local_3c[0x20] = 0;
  pcVar5 = pcVar7 + -uVar3;
  pCVar8 = local_78.lfFaceName;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pCVar8 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pCVar8 = pCVar8 + 4;
  }
  local_3c[0x25] = 0xfa;
  local_3c[0x28] = 0xfa;
  local_3c[0x29] = 0xfa;
  local_3c[0x2b] = 0xfb;
  local_3c[0x2c] = 0xfb;
  local_3c[0x2e] = 6;
  local_3c[0x2f] = 6;
  local_3c[0x21] = 0x13;
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pCVar8 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pCVar8 = pCVar8 + 1;
  }
  local_3c[0x22] = 2;
  local_3c[0x23] = 2;
  local_3c[0x24] = 0x14;
  local_3c[0x26] = 0x16;
  local_3c[0x27] = 0x15;
  local_3c[0x2a] = 0x10;
  local_3c[0x2d] = 0x33;
  local_3c[0x30] = 0xd;
  local_3c[0x31] = 0xfe;
  local_3c[0x32] = 0xfe;
  local_3c[0x33] = 0xe;
  local_3c[0x34] = 0xfe;
  local_3c[0x35] = 0xfe;
  local_3c[0] = 0x27;
  local_3c[1] = 0x28;
  local_3c[2] = 0x29;
  local_3c[3] = 0x2c;
  local_3c[4] = 0x2d;
  local_3c[5] = 0x2e;
  local_3c[6] = 0x41;
  local_3c[7] = 0x42;
  local_3c[8] = 0x43;
  local_3c[9] = 0x44;
  local_3c[10] = 0x45;
  local_3c[0xb] = 0x46;
  local_3c[0xc] = 0x47;
  local_3c[0xd] = 0x48;
  local_3c[0xe] = 0x49;
  local_3c[0xf] = 0x4a;
  local_3c[0x10] = 0x4b;
  local_3c[0x11] = 0x4c;
  local_3c[0x12] = 0x4d;
  local_3c[0x13] = 0x4e;
  local_3c[0x14] = 0x4f;
  local_3c[0x15] = 0x50;
  local_3c[0x16] = 0x51;
  local_3c[0x17] = 0x52;
  local_3c[0x18] = 0x53;
  local_3c[0x19] = 0x54;
  local_3c[0x1a] = 0x55;
  local_3c[0x1b] = 0x56;
  local_3c[0x1c] = 0x57;
  local_3c[0x1d] = 0x58;
  local_3c[0x1e] = 0x59;
  local_3c[0x1f] = 0x5a;
  st::fn_0070D1F0
            (0x19d,&local_78,nullptr,local_3c,(int)param_1,local_3c + 0x20,7,3,1,1,0x100011c,
             param_2);
  return;
}

// 005DA310 FUN_005da310
#line 4 "decomp/ST.exe/functions/005DA310/decomp.c"
void __cdecl st::fn_005DA310(int param_1,undefined *param_2,BYTE param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  LOGFONTA *pLVar6;
  char *pcVar7;
  CHAR *pCVar8;
  LOGFONTA local_a4;
  byte local_68 [88];
  byte local_10 [12];

  pLVar6 = &local_a4;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    pLVar6->lfHeight = 0;
    pLVar6 = (LOGFONTA *)&pLVar6->lfWidth;
  }
  local_a4.lfCharSet = param_3;
  uVar3 = 0xffffffff;
  pcVar5 = "Verdana";
  do {
    pcVar7 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  local_a4.lfHeight = -0xc;
  local_a4.lfWidth = 0;
  local_a4.lfEscapement = 0;
  local_a4.lfOrientation = 0;
  local_a4.lfWeight = 400;
  local_a4.lfItalic = '\0';
  local_a4.lfUnderline = '\0';
  local_a4.lfStrikeOut = '\0';
  local_a4.lfOutPrecision = '\x03';
  local_a4.lfClipPrecision = '\x02';
  local_a4.lfQuality = '\x01';
  local_a4.lfPitchAndFamily = '\"';
  local_10[0] = 0;
  pcVar5 = pcVar7 + -uVar3;
  pCVar8 = local_a4.lfFaceName;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pCVar8 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pCVar8 = pCVar8 + 4;
  }
  local_10[1] = 0x14;
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pCVar8 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pCVar8 = pCVar8 + 1;
  }
  local_10[2] = 0x16;
  local_10[3] = 0xc;
  local_10[4] = 0xe;
  local_10[5] = 0xd;
  local_10[6] = 0xfe;
  local_10[7] = 0xf;
  local_10[8] = 0xfe;
  local_68[0] = 0x20;
  local_68[1] = 0x21;
  local_68[2] = 0x22;
  local_68[3] = 0x23;
  local_68[4] = 0x25;
  local_68[5] = 0x26;
  local_68[6] = 0x27;
  local_68[7] = 0x28;
  local_68[8] = 0x29;
  local_68[9] = 0x2c;
  local_68[10] = 0x2d;
  local_68[0xb] = 0x2e;
  local_68[0xc] = 0x2f;
  local_68[0xd] = 0x30;
  local_68[0xe] = 0x31;
  local_68[0xf] = 0x32;
  local_68[0x10] = 0x33;
  local_68[0x11] = 0x34;
  local_68[0x12] = 0x35;
  local_68[0x13] = 0x36;
  local_68[0x14] = 0x37;
  local_68[0x15] = 0x38;
  local_68[0x16] = 0x39;
  local_68[0x17] = 0x3a;
  local_68[0x18] = 0x3d;
  local_68[0x19] = 0x3e;
  local_68[0x1a] = 0x3f;
  local_68[0x1b] = 0x41;
  local_68[0x1c] = 0x42;
  local_68[0x1d] = 0x43;
  local_68[0x1e] = 0x44;
  local_68[0x1f] = 0x45;
  local_68[0x20] = 0xd;
  local_68[0x42] = 0xd;
  local_68[0x21] = 10;
  local_68[0x43] = 10;
  local_68[0x22] = 0x46;
  local_68[0x23] = 0x47;
  local_68[0x24] = 0x48;
  local_68[0x25] = 0x49;
  local_68[0x26] = 0x4a;
  local_68[0x27] = 0x4b;
  local_68[0x28] = 0x4c;
  local_68[0x29] = 0x4d;
  local_68[0x2a] = 0x4e;
  local_68[0x2b] = 0x4f;
  local_68[0x2c] = 0x50;
  local_68[0x2d] = 0x51;
  local_68[0x2e] = 0x52;
  local_68[0x2f] = 0x53;
  local_68[0x30] = 0x54;
  local_68[0x31] = 0x55;
  local_68[0x32] = 0x56;
  local_68[0x33] = 0x57;
  local_68[0x34] = 0x58;
  local_68[0x35] = 0x59;
  local_68[0x36] = 0x5a;
  local_68[0x37] = 0x5c;
  local_68[0x38] = 0x5f;
  local_68[0x39] = 0x61;
  local_68[0x3a] = 0x62;
  local_68[0x3b] = 99;
  local_68[0x3c] = 100;
  local_68[0x3d] = 0x65;
  local_68[0x3e] = 0x66;
  local_68[0x3f] = 0x67;
  local_68[0x40] = 0x68;
  local_68[0x41] = 0x69;
  local_68[0x44] = 0x6a;
  local_68[0x45] = 0x6b;
  local_68[0x46] = 0x6c;
  local_68[0x47] = 0x6d;
  local_68[0x48] = 0x6e;
  local_68[0x49] = 0x6f;
  local_68[0x4a] = 0x70;
  local_68[0x4b] = 0x71;
  local_68[0x4c] = 0x72;
  local_68[0x4d] = 0x73;
  local_68[0x4e] = 0x74;
  local_68[0x4f] = 0x75;
  local_68[0x50] = 0x76;
  local_68[0x51] = 0x77;
  local_68[0x52] = 0x78;
  local_68[0x53] = 0x79;
  local_68[0x54] = 0x7a;
  local_68[0x55] = 0x7c;
  local_68[0x56] = 0x7e;
  st::fn_0070D1F0
            (0x19d,&local_a4,nullptr,local_68,param_1,local_10,4,2,1,0,0x20011c,param_2);
  return;
}

// 005DA7A0 FUN_005da7a0
#line 4 "decomp/ST.exe/functions/005DA7A0/decomp.c"
undefined4 st::fn_005DA7A0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar4;
  bool bVar5;
  int iVar3;
  int *piVar4;
  char *pcVar6;
  InternalExceptionFrame local_4c;
  StartSystemTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar3 == 0) {
    puVar1 = &local_8->field_068A;
    if (local_8->field_068A == 0) {
      st::fn_006B62D0(puVar1);
      piVar2 = (int *)*puVar1;
      bVar5 = true;
      if (*piVar2 <= piVar2[1]) {
        piVar4 = st::fn_006BFB50(piVar2,*piVar2 * 0x14 + 0x1c);
        if (piVar4 == nullptr) {
          bVar5 = false;
        }
        else {
          *puVar1 = piVar4;
          *piVar4 = *piVar4 + 1;
        }
      }
      if (bVar5) {
        pcVar6 = st::fn_006B0140(0x254b,g_hINSTANCE_00807618);
        pcVar6 = st::fn_006C8170(pcVar6);
        if (pcVar6 != nullptr) {
          iVar4 = *puVar1;
          st::fn_0072DA70
                    ((undefined4 *)(iVar4 + 0x1c),(AnonPointee_TLOBaseTy_0607 *)(iVar4 + 8),
                     *(int *)(iVar4 + 4) * 0x14);
          iVar4 = *puVar1;
          *(undefined4 *)(iVar4 + 0xc) = DAT_007cd700;
          *(undefined4 *)(iVar4 + 0x10) = DAT_007cd704;
          *(undefined4 *)(iVar4 + 0x14) = DAT_007cd708;
          *(undefined4 *)(iVar4 + 0x18) = DAT_007cd70c;
          *(char **)(*puVar1 + 8) = pcVar6;
          *(int *)(*puVar1 + 4) = *(int *)(*puVar1 + 4) + 1;
        }
      }
    }
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  st::fn_004055F6(local_8);
  return 0xfffffffa;
}

// 005DA980 FUN_005da980
#line 4 "decomp/ST.exe/functions/005DA980/decomp.c"
undefined4 st::fn_005DA980(int param_1)

{
  int iVar1;
  InternalExceptionFrame local_4c;
  int local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar1 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar1 == 0) {
    st::fn_004034F4();
    st::fn_006B6150((uint)DAT_00807362);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_006B6350
              ((int *)&g_int_00811764,(char *)(*(int *)(local_8 + 0x68a) + 0xc + param_1 * 0x14),
               (int *)&DAT_007cd6f0);
    st::fn_006B6500(g_int_00811764,DAT_0080733c);
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  st::fn_004034F4();
  return 0xfffffffa;
}

// 005DAA60 FUN_005daa60
#line 1 "decomp/ST.exe/functions/005DAA60/decomp.c"

void st::fn_005DAA60(void)

{
  if (g_int_00811764 != nullptr) {
    st::fn_006B7740(g_int_00811764);
  }
  g_int_00811764 = nullptr;
  return;
}

// 005DAA90 FUN_005daa90
#line 4 "decomp/ST.exe/functions/005DAA90/decomp.c"
undefined4 st::fn_005DAA90(void)

{
  int iVar1;
  InternalExceptionFrame local_4c;
  StartSystemTy *local_8;

  if (g_int_00811764 != nullptr) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    iVar1 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    if (iVar1 == 0) {
      st::fn_00402B30(local_8);
      st::fn_006B65F0(g_int_00811764,&local_8->field_068E);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    g_currentExceptionFrame = local_4c.previous;
    st::fn_00402B30(local_8);
  }
  return 0xfffffffa;
}

// 005DAB70 FUN_005dab70
#line 4 "decomp/ST.exe/functions/005DAB70/decomp.c"
undefined4 st::fn_005DAB70(int param_1,undefined4 param_2)

{
  int iVar1;
  InternalExceptionFrame local_4c;
  StartSystemTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar1 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar1 == 0) {
    if (g_int_00811764 != nullptr) {
      st::fn_006B76D0(g_int_00811764);
      if (DAT_0080877e == '\0') {
        if (local_8->field_068E != 0) {
          st::fn_006B68E0
                    (g_int_00811764,(undefined4 *)(local_8->field_068E + 0xc + param_1 * 0x14));
        }
      }
      else {
        st::fn_006B6750(g_int_00811764,0,param_2,0x20);
      }
      DAT_0080877f = g_int_00811764[0xe];
      st::fn_0040330A(local_8);
    }
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  return 0xfffffffa;
}

// 005DAC60 FUN_005dac60
#line 1 "decomp/ST.exe/functions/005DAC60/decomp.c"

/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=6, used=0), and
   decompilation contains no value return */

void st::fn_005DAC60(void)

{
  if (g_int_00811764 != nullptr) {
    st::fn_006B76D0(g_int_00811764);
  }
  return;
}

// 005DB010 FUN_005db010
#line 1 "decomp/ST.exe/functions/005DB010/decomp.c"

/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void st::fn_005DB010(void)

{
  return;
}

// 005DB030 FUN_005db030
#line 4 "decomp/ST.exe/functions/005DB030/decomp.c"
undefined4 __cdecl st::fn_005DB030(byte *param_1,undefined4 param_2,char param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  cMf32 *this;
  ushort *puVar3;
  uint uVar4;
  byte *pbVar6;
  byte *pbVar7;
  int local_1e18;
  int local_1e14;
  int local_1e10;
  byte local_47c [260];
  byte local_378 [260];
  byte local_274 [260];
  byte local_170 [260];
  InternalExceptionFrame *local_6c;
  int local_68 [9];
  int iStackY_44;
  undefined1 uVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;

  st::fn_0072DA40();
  uVar12 = 0;
  if (param_3 != '\0') {
    return 0;
  }
  st::fn_0072E730(param_1,local_378,local_274,local_47c,(byte *)0x8f000405);
  st::fn_0072F110
            ((char *)local_170,(char *)local_378,(char *)local_274,(char *)local_47c,nullptr);
  local_6c = g_currentExceptionFrame;
  iStackY_44 = 0x5db0d9;
  g_currentExceptionFrame = (InternalExceptionFrame *)&local_6c;
  iVar3 = st::fn_0072D7F0(local_68,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_6c;
    return 0;
  }
  uVar8 = 0;
  this = (cMf32 *)st::fn_006F0EC0(0x345,local_170,0,0,0);
  piVar10 = (int *)&stack0xffffffe4;
  iVar11 = 0;
  uVar9 = 0x5db113;
  puVar3 = st::fn_006F1CE0(this,0,PTR_s_DESCRIPTOR_0079c1d8,piVar10,0);
  if (puVar3 == nullptr) goto cf_common_exit_005DB1E1;
  if ((char)*piVar10 == '\x05') {
    iVar11 = 0;
    uVar9 = 0x5db13b;
    puVar3 = st::fn_006F1CE0(this,0x80,PTR_s_SAVE_PLAYER_0079c1c8,(int *)&stack0xffffffe0,0);
    if (puVar3 == nullptr) goto cf_common_exit_005DB1E1;
  }
  bVar2 = false;
  if ((local_1e18 != 0) && (local_1e10 == STField<int>(piVar10,1))) {
    switch((char)*piVar10) {
    case '\x02':
      if (local_1e14 != iVar11) goto joined_r0x005db18e;
cf_common_exit_005DB1AB:
      bVar2 = true;
      break;
    case '\x03':
joined_r0x005db18e:
      if (local_1e14 == -0x70fffdfb) goto cf_common_exit_005DB1AB;
      break;
    case '\x04':
      if (local_1e14 == -0x70fff7fb) goto cf_common_exit_005DB1AB;
      break;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case '\x05':
      if (STField<int>(piVar10,5) == CONCAT31((int3)uVar9,uVar8)) goto cf_common_exit_005DB1AB;
    }
  }
  if (bVar2) {
    uVar4 = 0xffffffff;
    uVar12 = 0xffffff90;
    pbVar6 = local_170;
    do {
      pbVar7 = pbVar6;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pbVar7 = pbVar6 + 1;
      bVar1 = *pbVar6;
      pbVar6 = pbVar7;
    } while (bVar1 != 0);
    uVar4 = ~uVar4;
    pbVar6 = pbVar7 + -uVar4;
    pbVar7 = &DAT_0080ed16;
    memmove(pbVar7, pbVar6, uVar4); /* compiler REP MOVS byte copy */
  }
cf_common_exit_005DB1E1:
  st::fn_006F1170(this);
  g_currentExceptionFrame = local_6c;
  return uVar12;
}

// 005DDB40 FUN_005ddb40
#line 4 "decomp/ST.exe/functions/005DDB40/decomp.c"
undefined4 __fastcall st::fn_005DDB40(int param_1)

{
  char cVar1;
  StartSystemTy *pSVar2;
  bool bVar3;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  int iVar4;
  uint uVar5;
  uint uVar6;
  DArrayTy *pDVar7;
  char *pcVar8;
  char *pcVar9;
  char local_460 [64];
  char local_420 [1044];
  char *local_c;
  StartSystemTy *local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(*(int *)(param_1 + 0x686) + 8) < 1) {
    pcVar8 = nullptr;
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    pcVar8 = (char *)**(undefined4 **)(*(int *)(param_1 + 0x686) + 0x14);
  }
  local_8 = (StartSystemTy *)param_1;
  bVar3 = st::fn_0040224D(pcVar8);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  if (CONCAT31(extraout_var,bVar3) == 0) {
    return 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  pDVar7 = *(DArrayTy **)(param_1 + 0x696);
  pcVar8 = local_460;
  for (iVar4 = 0x114; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar8[0] = '\0';
    pcVar8[1] = '\0';
    pcVar8[2] = '\0';
    pcVar8[3] = '\0';
    pcVar8 = pcVar8 + 4;
  }
  *pcVar8 = '\0';
  iVar4 = 0;
  if (0 < (int)pDVar7->elementSize) {
    do {
      uVar5 = 0xffffffff;
      local_c = local_460;
      pcVar8 = &DAT_008016a0;
      do {
        pcVar9 = pcVar8;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar9 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar8 = pcVar9 + -uVar5;
      pcVar9 = local_c;
      memmove(pcVar9, pcVar8, uVar5); /* compiler REP MOVS byte copy */
      uVar6 = 0;
      if (iVar4 < (int)pDVar7->elementSize) {
        pcVar8 = *(char **)(pDVar7->growCapacity + iVar4 * 4);
      }
      else {
        pcVar8 = nullptr;
      }
      uVar5 = 0xffffffff;
      do {
        pcVar9 = pcVar8;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar9 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar8 = pcVar9 + -uVar5;
      pcVar9 = local_420;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar5 = uVar5 & 3; pSVar2 = local_8, uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      st::fn_00402BBC(local_8,(int)local_460);
      pDVar7 = pSVar2->field_0696;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)pDVar7->elementSize);
  }
  return 1;
}

// 005DE5B0 FUN_005de5b0
#line 4 "decomp/ST.exe/functions/005DE5B0/decomp.c"
void __cdecl st::fn_005DE5B0(UINT param_1,int param_2)

{
  char *pcVar1;
  UINT uType;
  CHAR local_108 [260];

  if (param_2 < 0) {
    pcVar1 = st::fn_006B0140(param_1,g_hINSTANCE_00807618);
    st::external_00000080(local_108,"%s",pcVar1);
  }
  else {
    pcVar1 = st::fn_006B0140(param_1,g_hINSTANCE_00807618);
    st::external_00000080(local_108,"%s\n%d",pcVar1,param_2);
  }
  uType = 0x10;
  pcVar1 = st::fn_006B0140(0x2648,g_hINSTANCE_00807618);
  st::external_00000081(HWND_00856d78,local_108,pcVar1,uType);
  return;
}

// 005DEFE0 FUN_005defe0
#line 4 "decomp/ST.exe/functions/005DEFE0/decomp.c"
/* [STReturnSemanticsApplier] forwarded_call_return.
   Evidence: every reachable RET receives full EAX from a trusted concrete callee with return type
   /WinDef.h/HDC; no intervening CALL or EAX/AX/AL/AH definition exists; machine CFG audit: used=4,
   ignored=0, unknown=0 */

HDC __cdecl st::fn_005DEFE0(int param_1,undefined *param_2,BYTE param_3)

{
  char cVar1;
  HDC pHVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  LOGFONTA *pLVar7;
  char *pcVar8;
  CHAR *pCVar9;
  LOGFONTA local_98;
  byte local_5c [76];
  byte local_10 [12];

  pLVar7 = &local_98;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    pLVar7->lfHeight = 0;
    pLVar7 = (LOGFONTA *)&pLVar7->lfWidth;
  }
  local_98.lfCharSet = param_3;
  uVar4 = 0xffffffff;
  pcVar6 = "Verdana";
  do {
    pcVar8 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  local_98.lfHeight = -0x10;
  local_98.lfWidth = 0;
  local_98.lfEscapement = 0;
  local_98.lfOrientation = 0;
  local_98.lfWeight = 400;
  local_98.lfItalic = '\0';
  local_98.lfUnderline = '\0';
  local_98.lfStrikeOut = '\0';
  local_98.lfOutPrecision = '\x03';
  local_98.lfClipPrecision = '\x02';
  local_98.lfQuality = '\x01';
  local_98.lfPitchAndFamily = '\"';
  local_10[0] = 0;
  pcVar6 = pcVar8 + -uVar4;
  pCVar9 = local_98.lfFaceName;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pCVar9 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pCVar9 = pCVar9 + 4;
  }
  local_10[1] = 0x1b;
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pCVar9 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pCVar9 = pCVar9 + 1;
  }
  local_10[2] = 0x17;
  local_10[3] = 0x18;
  local_10[4] = 0x16;
  local_10[5] = 0x2f;
  local_10[6] = 0x2b;
  local_10[7] = 0x2c;
  local_10[8] = 0x2a;
  local_10[9] = 0xb;
  local_10[10] = 0xc;
  local_5c[0] = 0x22;
  local_5c[1] = 0x27;
  local_5c[2] = 0x28;
  local_5c[3] = 0x29;
  local_5c[4] = 0x2c;
  local_5c[5] = 0x2d;
  local_5c[6] = 0x2e;
  local_5c[7] = 0x30;
  local_5c[8] = 0x31;
  local_5c[9] = 0x32;
  local_5c[10] = 0x33;
  local_5c[0xb] = 0x34;
  local_5c[0xc] = 0x35;
  local_5c[0xd] = 0x36;
  local_5c[0xe] = 0x37;
  local_5c[0xf] = 0x38;
  local_5c[0x10] = 0x39;
  local_5c[0x11] = 0x41;
  local_5c[0x12] = 0x42;
  local_5c[0x13] = 0x43;
  local_5c[0x14] = 0x44;
  local_5c[0x15] = 0x45;
  local_5c[0x16] = 0x46;
  local_5c[0x17] = 0x47;
  local_5c[0x18] = 0x48;
  local_5c[0x19] = 0x49;
  local_5c[0x1a] = 0x4a;
  local_5c[0x1b] = 0x4b;
  local_5c[0x1c] = 0x4c;
  local_5c[0x1d] = 0x4d;
  local_5c[0x1e] = 0x4e;
  local_5c[0x1f] = 0x4f;
  local_5c[0x20] = 0xd;
  local_5c[0x42] = 0xd;
  local_5c[0x21] = 10;
  local_5c[0x43] = 10;
  local_5c[0x22] = 0x50;
  local_5c[0x23] = 0x51;
  local_5c[0x24] = 0x52;
  local_5c[0x25] = 0x53;
  local_5c[0x26] = 0x54;
  local_5c[0x27] = 0x55;
  local_5c[0x28] = 0x56;
  local_5c[0x29] = 0x57;
  local_5c[0x2a] = 0x58;
  local_5c[0x2b] = 0x59;
  local_5c[0x2c] = 0x5a;
  local_5c[0x2d] = 0x61;
  local_5c[0x2e] = 0x62;
  local_5c[0x2f] = 99;
  local_5c[0x30] = 100;
  local_5c[0x31] = 0x65;
  local_5c[0x32] = 0x66;
  local_5c[0x33] = 0x67;
  local_5c[0x34] = 0x68;
  local_5c[0x35] = 0x69;
  local_5c[0x36] = 0x6a;
  local_5c[0x37] = 0x6b;
  local_5c[0x38] = 0x6c;
  local_5c[0x39] = 0x6d;
  local_5c[0x3a] = 0x6e;
  local_5c[0x3b] = 0x6f;
  local_5c[0x3c] = 0x70;
  local_5c[0x3d] = 0x71;
  local_5c[0x3e] = 0x72;
  local_5c[0x3f] = 0x73;
  local_5c[0x40] = 0x74;
  local_5c[0x41] = 0x75;
  local_5c[0x44] = 0x76;
  local_5c[0x45] = 0x77;
  local_5c[0x46] = 0x78;
  local_5c[0x47] = 0x79;
  local_5c[0x48] = 0x7a;
  pHVar2 = st::fn_0070D1F0
                     (0x19d,&local_98,nullptr,local_5c,param_1,local_10,5,2,1,1,0x40011c,param_2
                     );
  return pHVar2;
}

// 005DF290 FUN_005df290
#line 4 "decomp/ST.exe/functions/005DF290/decomp.c"
/* [STReturnSemanticsApplier] forwarded_call_return.
   Evidence: every reachable RET receives full EAX from a trusted concrete callee with return type
   /WinDef.h/HDC; no intervening CALL or EAX/AX/AL/AH definition exists; machine CFG audit: used=4,
   ignored=0, unknown=0 */

HDC __cdecl st::fn_005DF290(int param_1,undefined *param_2,BYTE param_3)

{
  char cVar1;
  HDC pHVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  LOGFONTA *pLVar7;
  char *pcVar8;
  CHAR *pCVar9;
  LOGFONTA local_98;
  byte local_5c [76];
  byte local_10 [12];

  pLVar7 = &local_98;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    pLVar7->lfHeight = 0;
    pLVar7 = (LOGFONTA *)&pLVar7->lfWidth;
  }
  local_98.lfCharSet = param_3;
  uVar4 = 0xffffffff;
  pcVar6 = "Verdana";
  do {
    pcVar8 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  local_98.lfHeight = -0xc;
  local_98.lfWidth = 0;
  local_98.lfEscapement = 0;
  local_98.lfOrientation = 0;
  local_98.lfWeight = 400;
  local_98.lfItalic = '\0';
  local_98.lfUnderline = '\0';
  local_98.lfStrikeOut = '\0';
  local_98.lfOutPrecision = '\x03';
  local_98.lfClipPrecision = '\x02';
  local_98.lfQuality = '\x01';
  local_98.lfPitchAndFamily = '\"';
  local_10[0] = 0;
  pcVar6 = pcVar8 + -uVar4;
  pCVar9 = local_98.lfFaceName;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pCVar9 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pCVar9 = pCVar9 + 4;
  }
  local_10[1] = 0x1b;
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pCVar9 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pCVar9 = pCVar9 + 1;
  }
  local_10[2] = 0x17;
  local_10[3] = 0x18;
  local_10[4] = 0x16;
  local_10[5] = 0x2f;
  local_10[6] = 0x2b;
  local_10[7] = 0x2c;
  local_10[8] = 0x2a;
  local_10[9] = 0xb;
  local_10[10] = 0xc;
  local_5c[0] = 0x22;
  local_5c[1] = 0x27;
  local_5c[2] = 0x28;
  local_5c[3] = 0x29;
  local_5c[4] = 0x2c;
  local_5c[5] = 0x2d;
  local_5c[6] = 0x2e;
  local_5c[7] = 0x30;
  local_5c[8] = 0x31;
  local_5c[9] = 0x32;
  local_5c[10] = 0x33;
  local_5c[0xb] = 0x34;
  local_5c[0xc] = 0x35;
  local_5c[0xd] = 0x36;
  local_5c[0xe] = 0x37;
  local_5c[0xf] = 0x38;
  local_5c[0x10] = 0x39;
  local_5c[0x11] = 0x41;
  local_5c[0x12] = 0x42;
  local_5c[0x13] = 0x43;
  local_5c[0x14] = 0x44;
  local_5c[0x15] = 0x45;
  local_5c[0x16] = 0x46;
  local_5c[0x17] = 0x47;
  local_5c[0x18] = 0x48;
  local_5c[0x19] = 0x49;
  local_5c[0x1a] = 0x4a;
  local_5c[0x1b] = 0x4b;
  local_5c[0x1c] = 0x4c;
  local_5c[0x1d] = 0x4d;
  local_5c[0x1e] = 0x4e;
  local_5c[0x1f] = 0x4f;
  local_5c[0x20] = 0xd;
  local_5c[0x42] = 0xd;
  local_5c[0x21] = 10;
  local_5c[0x43] = 10;
  local_5c[0x22] = 0x50;
  local_5c[0x23] = 0x51;
  local_5c[0x24] = 0x52;
  local_5c[0x25] = 0x53;
  local_5c[0x26] = 0x54;
  local_5c[0x27] = 0x55;
  local_5c[0x28] = 0x56;
  local_5c[0x29] = 0x57;
  local_5c[0x2a] = 0x58;
  local_5c[0x2b] = 0x59;
  local_5c[0x2c] = 0x5a;
  local_5c[0x2d] = 0x61;
  local_5c[0x2e] = 0x62;
  local_5c[0x2f] = 99;
  local_5c[0x30] = 100;
  local_5c[0x31] = 0x65;
  local_5c[0x32] = 0x66;
  local_5c[0x33] = 0x67;
  local_5c[0x34] = 0x68;
  local_5c[0x35] = 0x69;
  local_5c[0x36] = 0x6a;
  local_5c[0x37] = 0x6b;
  local_5c[0x38] = 0x6c;
  local_5c[0x39] = 0x6d;
  local_5c[0x3a] = 0x6e;
  local_5c[0x3b] = 0x6f;
  local_5c[0x3c] = 0x70;
  local_5c[0x3d] = 0x71;
  local_5c[0x3e] = 0x72;
  local_5c[0x3f] = 0x73;
  local_5c[0x40] = 0x74;
  local_5c[0x41] = 0x75;
  local_5c[0x44] = 0x76;
  local_5c[0x45] = 0x77;
  local_5c[0x46] = 0x78;
  local_5c[0x47] = 0x79;
  local_5c[0x48] = 0x7a;
  pHVar2 = st::fn_0070D1F0
                     (0x19d,&local_98,nullptr,local_5c,param_1,local_10,5,2,1,0,0x40011c,param_2
                     );
  return pHVar2;
}

// 005DF930 FUN_005df930
#line 4 "decomp/ST.exe/functions/005DF930/decomp.c"
void st::fn_005DF930(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;

  puVar3 = (undefined4 *)(param_1 + param_2 * 0x9e);
  puVar4 = puVar3;
  for (uVar2 = (param_3 * 0x4f & 0x7fffffffU) >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (uVar2 = param_3 * 0x9e & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  if (param_2 < param_2 + param_3) {
    puVar3 = puVar3 + 1;
    iVar1 = (param_2 + param_3) - param_2;
    do {
      *puVar3 = 0xffffffff;
      puVar3 = (undefined4 *)((int)puVar3 + 0x9e);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

// 005DF9B0 FUN_005df9b0
#line 4 "decomp/ST.exe/functions/005DF9B0/decomp.c"
void st::fn_005DF9B0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;

  puVar3 = (undefined4 *)(param_1 + param_2 * 0x3e);
  puVar4 = puVar3;
  for (uVar2 = (param_3 * 0x1f & 0x7fffffffU) >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (uVar2 = param_3 * 0x3e & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  if (param_2 < param_3 + param_2) {
    iVar1 = (param_3 + param_2) - param_2;
    do {
      *puVar3 = 0xffffffff;
      puVar3 = (undefined4 *)((int)puVar3 + 0x3e);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

