#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/0059.cpp

// 00590130 FUN_00590130
#line 4 "decomp/ST.exe/functions/00590130/decomp.c"
void __thiscall st::fn_00590130(void *this,undefined4 param_1)

{
  STField<undefined4>(this,0x25f) = param_1;
  return;
}

// 00590150 FUN_00590150
#line 4 "decomp/ST.exe/functions/00590150/decomp.c"
undefined4 st::fn_00590150(void)

{
  return 0xe6;
}

// 00590AD0 CreateMAdv
#line 4 "decomp/ST.exe/functions/00590AD0/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA894>0040423C

   [STObjectFactoryApplier] Central object factory for 0x0308 (ST_OBJECT_M_ADV).
   Evidence: registry[46] at 007CA890 stores type 0x0308 and executable pointer 0040423C; allocation
   size 98 uniquely matches /MAdvTy */

MAdvTy * __cdecl st::fn_00590AD0(void)

{
  MAdvTy *this;
  int iVar1;

  this = (MAdvTy *)st::fn_006B04D0(0x62);
  if (this != nullptr) {
    st::fn_006E5FB0(this);
    this->vtable = &st_global_0079BFE4;
    memset(&this->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    memset(&this->field_0x38, 0, 0x20); /* compiler bulk-zero initialization */
    this->field_005E = nullptr;
    this->field_005D = 0;
    this->field_005C = 2;
    return this;
  }
  return nullptr;
}

// 005926A0 FUN_005926a0
#line 1 "decomp/ST.exe/functions/005926A0/decomp.c"

/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_005926A0(int *param_1)

{
  st::fn_006B5F80((int *)g_ddxContext_008075A8,*param_1,param_1[1],param_1[2],param_1[3]);
  st::fn_006C4AC0(param_1);
  return;
}

// 00593860 CreateCampaign
#line 4 "decomp/ST.exe/functions/00593860/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA86C>00404EB7

   [STObjectFactoryApplier] Central object factory for 0x0307 (ST_OBJECT_CAMPAIGN).
   Evidence: registry[41] at 007CA868 stores type 0x0307 and executable pointer 00404EB7; allocation
   size 8192 uniquely matches /CampaignTy; calls base/helper constructor(s) SpriteClassTy; exact
   derived allocation size wins */

CampaignTy * __cdecl st::fn_00593860(void)

{
  CampaignTy *this;
  int iVar1;
  undefined4 *puVar3;
  SpriteClassTy *this_00;
  undefined4 *puVar5;

  this = (CampaignTy *)st::fn_006B04D0(0x2000);
  if (this != nullptr) {
    st::fn_006E5FB0(this);
    this->vtable = (CampaignTyVTable *)&st_global_0079C018;
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
    this->vtable = (CampaignTyVTable *)&st_global_0079C008;
    this->field_0065 = 2;
    this->field_009A = 0;
    memset(this->field_0066, 0, 0x34); /* compiler bulk-zero initialization */
    iVar1 = 0xd;
    puVar3 = (undefined4 *)&this->field_0xbc;
    do {
      puVar5 = puVar3;
      memset(puVar5, 0, 0x27); /* compiler bulk-zero initialization */
      puVar5 = (undefined4 *)((byte *)puVar5 + 0x24);
      iVar1 = iVar1 + -1;
      puVar3 = (undefined4 *)((int)puVar3 + 0x1fb);
    } while (iVar1 != 0);
    this->vtable = &st_global_0079BFF8;
    memset(&this->field_1A5F, 0, 0xb4); /* compiler bulk-zero initialization */
    iVar1 = 0;
    memset(&this->field_1B13, 0, 0xb4); /* compiler bulk-zero initialization */
    this->field_1BC7 = 0;
    this->field_1BCB = 0;
    this->field_1BCF = 0;
    this->field_1BD3 = 0;
    this->field_1BD7[0] = 0;
    this->field_1BD7[1] = 0;
    this->field_1BD7[2] = 0;
    this->field_1BD7[3] = 0;
    this->field_1BE7 = 0;
    this->field_1FF8 = 1;
    this->field_1FFC = 0;
    return this;
  }
  return nullptr;
}

// 005947D0 CreateVisible
#line 4 "decomp/ST.exe/functions/005947D0/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA9D4>00402621

   [STObjectFactoryApplier] Central object factory for 0x100EF (ST_OBJECT_TYPE_100EF).
   Evidence: registry[86] at 007CA9D0 stores type 0x100EF and executable pointer 00402621;
   allocation size 280 has no unique current class-layout match */

Visible * __cdecl st::fn_005947D0(void)

{
  Visible *this;

  this = (Visible *)st::fn_006B04D0(0x118);
  if (this != nullptr) {
    st::fn_006E5FB0(this);
    this->vtable = &st_global_0079C01C;
    memset(&this->field_0x88, 0, 0x80); /* compiler bulk-zero initialization */
    this->field_010C = 0;
    this->field_0114 = 0;
    this->field_0110 = nullptr;
    this->field_0108 = 0xffffffff;
    this->field_0084 = 1;
    return this;
  }
  return nullptr;
}

// 00594850 FUN_00594850
#line 4 "decomp/ST.exe/functions/00594850/decomp.c"
void __cdecl st::fn_00594850(int param_1,undefined *param_2,BYTE param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  LOGFONTA *pLVar6;
  char *pcVar7;
  CHAR *pCVar8;
  LOGFONTA local_b0;
  byte local_74 [88];
  byte local_1c [24];

  pLVar6 = &local_b0;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    pLVar6->lfHeight = 0;
    pLVar6 = (LOGFONTA *)&pLVar6->lfWidth;
  }
  local_b0.lfCharSet = param_3;
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
  local_b0.lfHeight = -0xc;
  local_b0.lfWidth = 0;
  local_b0.lfEscapement = 0;
  local_b0.lfOrientation = 0;
  local_b0.lfWeight = 400;
  local_b0.lfItalic = '\0';
  local_b0.lfUnderline = '\0';
  local_b0.lfStrikeOut = '\0';
  local_b0.lfOutPrecision = '\x03';
  local_b0.lfClipPrecision = '\x02';
  local_b0.lfQuality = '\x01';
  local_b0.lfPitchAndFamily = '\"';
  local_1c[0] = 0;
  pcVar5 = pcVar7 + -uVar3;
  pCVar8 = local_b0.lfFaceName;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pCVar8 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pCVar8 = pCVar8 + 4;
  }
  local_1c[1] = 0xd;
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pCVar8 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pCVar8 = pCVar8 + 1;
  }
  local_1c[2] = 0xf;
  local_1c[3] = 2;
  local_1c[4] = 0xfa;
  local_1c[5] = 3;
  local_1c[6] = 0xfb;
  local_1c[7] = 1;
  local_1c[8] = 0xf9;
  local_1c[9] = 5;
  local_1c[10] = 0xfd;
  local_1c[0xb] = 6;
  local_1c[0xc] = 0xfe;
  local_1c[0xd] = 0x7c;
  local_1c[0xe] = 0x79;
  local_1c[0xf] = 0x73;
  local_1c[0x10] = 0x76;
  local_1c[0x11] = 0xf8;
  local_1c[0x12] = 0xf6;
  local_1c[0x13] = 0x1a;
  local_1c[0x14] = 0xf7;
  local_74[0] = 0x20;
  local_74[1] = 0x21;
  local_74[2] = 0x22;
  local_74[3] = 0x23;
  local_74[4] = 0x25;
  local_74[5] = 0x26;
  local_74[6] = 0x27;
  local_74[7] = 0x28;
  local_74[8] = 0x29;
  local_74[9] = 0x2c;
  local_74[10] = 0x2d;
  local_74[0xb] = 0x2e;
  local_74[0xc] = 0x2f;
  local_74[0xd] = 0x30;
  local_74[0xe] = 0x31;
  local_74[0xf] = 0x32;
  local_74[0x10] = 0x33;
  local_74[0x11] = 0x34;
  local_74[0x12] = 0x35;
  local_74[0x13] = 0x36;
  local_74[0x14] = 0x37;
  local_74[0x15] = 0x38;
  local_74[0x20] = 0xd;
  local_74[0x42] = 0xd;
  local_74[0x21] = 10;
  local_74[0x43] = 10;
  local_74[0x16] = 0x39;
  local_74[0x17] = 0x3a;
  local_74[0x18] = 0x3d;
  local_74[0x19] = 0x3e;
  local_74[0x1a] = 0x3f;
  local_74[0x1b] = 0x41;
  local_74[0x1c] = 0x42;
  local_74[0x1d] = 0x43;
  local_74[0x1e] = 0x44;
  local_74[0x1f] = 0x45;
  local_74[0x22] = 0x46;
  local_74[0x23] = 0x47;
  local_74[0x24] = 0x48;
  local_74[0x25] = 0x49;
  local_74[0x26] = 0x4a;
  local_74[0x27] = 0x4b;
  local_74[0x28] = 0x4c;
  local_74[0x29] = 0x4d;
  local_74[0x2a] = 0x4e;
  local_74[0x2b] = 0x4f;
  local_74[0x2c] = 0x50;
  local_74[0x2d] = 0x51;
  local_74[0x2e] = 0x52;
  local_74[0x2f] = 0x53;
  local_74[0x30] = 0x54;
  local_74[0x31] = 0x55;
  local_74[0x32] = 0x56;
  local_74[0x33] = 0x57;
  local_74[0x34] = 0x58;
  local_74[0x35] = 0x59;
  local_74[0x36] = 0x5a;
  local_74[0x37] = 0x5c;
  local_74[0x38] = 0x5f;
  local_74[0x39] = 0x61;
  local_74[0x3a] = 0x62;
  local_74[0x3b] = 99;
  local_74[0x3c] = 100;
  local_74[0x3d] = 0x65;
  local_74[0x3e] = 0x66;
  local_74[0x3f] = 0x67;
  local_74[0x40] = 0x68;
  local_74[0x41] = 0x69;
  local_74[0x44] = 0x6a;
  local_74[0x45] = 0x6b;
  local_74[0x46] = 0x6c;
  local_74[0x47] = 0x6d;
  local_74[0x48] = 0x6e;
  local_74[0x49] = 0x6f;
  local_74[0x4a] = 0x70;
  local_74[0x4b] = 0x71;
  local_74[0x4c] = 0x72;
  local_74[0x4d] = 0x73;
  local_74[0x4e] = 0x74;
  local_74[0x4f] = 0x75;
  local_74[0x50] = 0x76;
  local_74[0x51] = 0x77;
  local_74[0x52] = 0x78;
  local_74[0x53] = 0x79;
  local_74[0x54] = 0x7a;
  local_74[0x55] = 0x7c;
  local_74[0x56] = 0x7e;
  st::fn_0070D1F0
            (0x19d,&local_b0,nullptr,local_74,param_1,local_1c,10,2,1,0,0x20001c,param_2);
  return;
}

