#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/004F.cpp

// 004F0460 CreateBldObjPanel
#line 1 "decomp/ST.exe/functions/004F0460/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA8EC>004054A2

   [STObjectFactoryApplier] Central object factory for 0x012A (ST_OBJECT_TYPE_012A).
   Evidence: registry[57] at 007CA8E8 stores type 0x012A and executable pointer 004054A2; allocation
   size 662 has no unique current class-layout match */

BldObjPanelTy * __cdecl st::fn_004F0460(void)

{
  BldObjPanelTy *this;
  undefined4 *puVar2;

  this = (BldObjPanelTy *)st::fn_006B04D0(0x296);
  if (this != nullptr) {
    st::fn_006E5FB0(this);
    this->field_005C = 0;
    this->field_0060 = 0xffffffff;
    *(undefined4 *)&this->field_0x64 = 4;
    this->field_0068 = 0;
    *(undefined2 *)&this->field_0x172 = 2;
    *(undefined4 *)&this->field_0x178 = 0;
    *(undefined4 *)&this->field_0x17c = 0;
    this->field_0184 = nullptr;
    this->field_0190 = nullptr;
    this->field_0188 = nullptr;
    *(undefined4 *)&this->field_0x19d = 0;
    *(undefined4 *)&this->field_0x180 = 0;
    this->field_01A1 = 0;
    *(undefined4 *)&this->field_0x1a5 = 0;
    *(undefined4 *)&this->field_0x1a9 = 0;
    *(undefined4 *)&this->field_0x1ad = 0;
    *(undefined4 *)&this->field_0x1b1 = 0;
    puVar2 = (undefined4 *)&this->field_01B5;
    memset(puVar2, 0, 0xc3); /* compiler bulk-zero initialization */
    puVar2 = (undefined4 *)((byte *)puVar2 + 0xc0);
    this->field_0199 = 0;
    this->field_0279 = 1;
    this->field_0278 = 0;
    this->vtable = &BldObjPanelTyVTable;
    this->field_003C = 0xc;
    this->field_0044 = 0;
    *(undefined4 *)&this->field_0x40 = 0x13d;
    *(undefined4 *)&this->field_0x48 = 0x78;
    this->field_0x194 = 0;
    *(undefined4 *)&this->field_0x195 = 1;
    this->field_027A = nullptr;
    *(undefined4 *)&this[1].field_0x10 = 0;
    this->field_027E = 0;
    this[1].vtable = nullptr;
    *(undefined4 *)&this[1].field_0x4 = 0;
    this[1].field_0008 = 0;
    this[1].field_000C = 0;
    return this;
  }
  return nullptr;
}

// 004F0A60 FUN_004f0a60
#line 1 "decomp/ST.exe/functions/004F0A60/decomp.c"
void __fastcall st::fn_004F0A60(AnonShape_004F0A60_A5DE070F *param_1)

{
  undefined4 *puVar1;
  int iVar2;

  if (param_1->field_0292 != 0) {
    st::fn_006E56B0(param_1->field_000C,param_1->field_0292);
  }
  param_1->field_0292 = 0;
  if (param_1->field_027A != 0) {
    st::fn_006F20E0(g_cMf32_00806790,(uint *)&param_1->field_027A);
  }
  puVar1 = (undefined4 *)&param_1->field_0x27e;
  iVar2 = 5;
  do {
    if ((DArrayTy *)*puVar1 != nullptr) {
      st::fn_006AE110((DArrayTy *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  g_prodPanel_00801684 = nullptr;
  return;
}

// 004F0AF0 FUN_004f0af0
#line 1 "decomp/ST.exe/functions/004F0AF0/decomp.c"
void __thiscall st::fn_004F0AF0(void *this,int param_1)

{
  short sVar1;

  if (param_1 != STField<int>(this,0x5c)) {
    st::fn_00402B3A(this,param_1);
    sVar1 = (short)STField<undefined4>(this,0x174);
    STField<undefined4>(this,0x28) = 0x24;
    if (param_1 != 0) {
      sVar1 = -sVar1;
    }
    STField<short>(this,0x2e) = sVar1;
    if (STField<int>(this,0x292) != 0) {
      st::fn_006E6080(this,2,STField<int>(this,0x292),(undefined4 *)((int)this + 0x18));
    }
  }
  return;
}

// 004F1890 FUN_004f1890
#line 1 "decomp/ST.exe/functions/004F1890/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_004F1890(void *this,byte param_1)

{
  int iVar1;
  byte *pbVar2;

  if (DAT_0080874e == '\x03') {
    iVar1 = (-(uint)(param_1 != 0) & 0xfffffffd) + 5;
  }
  else {
    iVar1 = (param_1 != 0) + 2;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  pbVar2 = st::fn_0070B650(*(short **)((int)this + (uint)param_1 * 4 + 0x2e2),
                        (uint)*(byte *)(param_1 + 0x2ea + (int)this));
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  st::fn_00403229(*(RecoveredSourceFamily_dibcopy **)((int)this + (-(uint)(param_1 != 0) & 8) * 4 + 0x180),
         iVar1,(DAT_0080874e == '\x03') + 6,'\x06',pbVar2);
  return;
}

// 004F19D0 FUN_004f19d0
#line 1 "decomp/ST.exe/functions/004F19D0/decomp.c"
/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004F19D0_param_2Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5 */

undefined4
st::fn_004F19D0(char param_1,Global_sub_004F19D0_param_2Enum param_2,undefined4 *param_3,
            undefined4 *param_4)

{
  if (g_nWidth_00806730 == 0x400) {
    if (CASE_1 < param_2) {
      return 0;
    }
    if (param_2 == CASE_1) {
      *param_3 = 0x12;
      *param_4 = 0x5b;
      return 1;
    }
    *param_3 = 0x12;
    *param_4 = 10;
    return 1;
  }
  if (g_nWidth_00806730 != 0x500) {
    return 0;
  }
  if (param_1 == '\0') {
    switch(param_2) {
    case CASE_1:
      *param_3 = 0xa2;
      *param_4 = 0x5a;
      return 1;
    case CASE_2:
      *param_3 = 0x53;
      *param_4 = 9;
      return 1;
    case CASE_3:
      *param_3 = 0x53;
      *param_4 = 0x5a;
      return 1;
    case CASE_4:
      *param_3 = 4;
      *param_4 = 9;
      return 1;
    case CASE_5:
      *param_3 = 4;
      *param_4 = 0x5a;
      return 1;
    default:
      *param_3 = 0xa2;
      *param_4 = 9;
      return 1;
    }
  }
  switch(param_2) {
  case CASE_1:
    *param_3 = 3;
    *param_4 = 0x5a;
    return 1;
  case CASE_2:
    *param_3 = 0x52;
    *param_4 = 9;
    return 1;
  case CASE_3:
    *param_3 = 0x52;
    *param_4 = 0x5a;
    return 1;
  case CASE_4:
    *param_3 = 0xa1;
    *param_4 = 9;
    return 1;
  case CASE_5:
    *param_3 = 0xa1;
    *param_4 = 0x5a;
    return 1;
  default:
    *param_3 = 3;
    *param_4 = 9;
    return 1;
  }
}

// 004F1C80 FUN_004f1c80
#line 1 "decomp/ST.exe/functions/004F1C80/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_004F1C80(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;

  uVar2 = param_2;
  uVar1 = param_1;
  iVar3 = st::fn_004058F3((char)param_1,(Global_sub_004F19D0_param_2Enum)param_2,&param_1,
                             &param_2);
  if (iVar3 != 0) {
    iVar3 = (uVar2 & 0xff) + (uVar1 & 0xff) * 6;
    pbVar4 = st::fn_0070B650(*(short **)((int)this + iVar3 * 4 + 0xd0b),
                          (uint)*(byte *)(iVar3 + 0xd3b + (int)this));
    st::fn_00403229(*(RecoveredSourceFamily_dibcopy **)((int)this + (0x6a - (uVar1 & 0xff)) * 4),param_1,
           param_2,'\x06',pbVar4);
  }
  return;
}

// 004F1D20 FUN_004f1d20
#line 1 "decomp/ST.exe/functions/004F1D20/decomp.c"
void st::fn_004F1D20(undefined1 *param_1)

{
  undefined1 local_3c [7];
  undefined1 local_35;
  undefined4 local_34;

  memset((void *)local_3c, 0, 0x36); /* compiler bulk-zero initialization */
  local_3c[1] = 1;
  local_3c[0] = *param_1;
  local_3c[2] = param_1[1];
  STPiece<3,4>(local_3c) = *(undefined4 *)(param_1 + 2);
  local_35 = param_1[6];
  local_34 = *(undefined4 *)(param_1 + 7);
  st::fn_00403607(local_3c,0);
  return;
}

// 004F4640 FUN_004f4640
#line 1 "decomp/ST.exe/functions/004F4640/decomp.c"
void __cdecl st::fn_004F4640(int param_1,undefined *param_2,BYTE param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  LOGFONTA *pLVar6;
  char *pcVar7;
  CHAR *pCVar8;
  LOGFONTA local_a8;
  byte local_6c [60];
  byte local_30 [44];

  pLVar6 = &local_a8;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    pLVar6->lfHeight = 0;
    pLVar6 = (LOGFONTA *)&pLVar6->lfWidth;
  }
  local_a8.lfCharSet = param_3;
  uVar3 = 0xffffffff;
  pcVar5 = "Small Fonts";
  do {
    pcVar7 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  local_a8.lfHeight = -8;
  local_a8.lfWidth = 0;
  local_a8.lfEscapement = 0;
  local_a8.lfOrientation = 0;
  local_a8.lfWeight = 400;
  local_a8.lfItalic = '\0';
  local_a8.lfUnderline = '\0';
  local_a8.lfStrikeOut = '\0';
  local_a8.lfOutPrecision = '\x01';
  local_a8.lfClipPrecision = '\x02';
  local_a8.lfQuality = '\x01';
  local_a8.lfPitchAndFamily = '\"';
  pcVar5 = pcVar7 + -uVar3;
  pCVar8 = local_a8.lfFaceName;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pCVar8 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pCVar8 = pCVar8 + 4;
  }
  local_30[0] = 0;
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pCVar8 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pCVar8 = pCVar8 + 1;
  }
  local_30[1] = 0x6a;
  local_30[0x10] = 0x10;
  local_30[0x11] = 0x10;
  local_30[2] = 0x46;
  local_30[0x12] = 0x11;
  local_30[0x13] = 0x11;
  local_30[0x14] = 0x11;
  local_30[0x15] = 0x11;
  local_30[3] = 0x28;
  local_30[0x17] = 0x16;
  local_30[0x18] = 0x16;
  local_30[4] = 0x29;
  local_30[0x19] = 0x17;
  local_30[0x1a] = 0x17;
  local_30[0x1b] = 0x17;
  local_30[0x1c] = 0x17;
  local_30[5] = 0x43;
  local_30[0x21] = 0xaf;
  local_30[0x22] = 0xaf;
  local_30[0x23] = 0xaf;
  local_30[6] = 0x43;
  local_30[7] = 0x43;
  local_30[8] = 0xcf;
  local_30[9] = 0x57;
  local_30[10] = 0xa2;
  local_30[0xb] = 0x5b;
  local_30[0xc] = 0x5c;
  local_30[0xd] = 0x5c;
  local_30[0xe] = 0x5c;
  local_30[0xf] = 0x15;
  local_30[0x16] = 0x1b;
  local_30[0x1d] = 0xb1;
  local_30[0x1e] = 0x84;
  local_30[0x1f] = 0xae;
  local_30[0x20] = 0xc1;
  local_30[0x24] = 0x3f;
  local_6c[0x1a] = 0x3f;
  local_30[0x28] = 0x43;
  local_30[0x29] = 0x43;
  local_30[0x2a] = 0x43;
  local_6c[0x1d] = 0x43;
  local_30[0x25] = 0x46;
  local_30[0x26] = 0x28;
  local_30[0x27] = 0x29;
  local_6c[0] = 0x20;
  local_6c[1] = 0x21;
  local_6c[2] = 0x22;
  local_6c[3] = 0x23;
  local_6c[4] = 0x25;
  local_6c[5] = 0x26;
  local_6c[6] = 0x27;
  local_6c[7] = 0x28;
  local_6c[8] = 0x29;
  local_6c[9] = 0x2c;
  local_6c[10] = 0x2d;
  local_6c[0xb] = 0x2e;
  local_6c[0xc] = 0x2f;
  local_6c[0xd] = 0x30;
  local_6c[0xe] = 0x31;
  local_6c[0xf] = 0x32;
  local_6c[0x10] = 0x33;
  local_6c[0x11] = 0x34;
  local_6c[0x12] = 0x35;
  local_6c[0x13] = 0x36;
  local_6c[0x14] = 0x37;
  local_6c[0x15] = 0x38;
  local_6c[0x16] = 0x39;
  local_6c[0x17] = 0x3a;
  local_6c[0x18] = 0x3d;
  local_6c[0x19] = 0x3e;
  local_6c[0x1b] = 0x41;
  local_6c[0x1c] = 0x42;
  local_6c[0x1e] = 0x44;
  local_6c[0x1f] = 0x45;
  local_6c[0x20] = 0xd;
  local_6c[0x21] = 10;
  local_6c[0x22] = 0x46;
  local_6c[0x23] = 0x47;
  local_6c[0x24] = 0x48;
  local_6c[0x25] = 0x49;
  local_6c[0x26] = 0x4a;
  local_6c[0x27] = 0x4b;
  local_6c[0x28] = 0x4c;
  local_6c[0x29] = 0x4d;
  local_6c[0x2a] = 0x4e;
  local_6c[0x2b] = 0x4f;
  local_6c[0x2c] = 0x50;
  local_6c[0x2d] = 0x51;
  local_6c[0x2e] = 0x52;
  local_6c[0x2f] = 0x53;
  local_6c[0x30] = 0x54;
  local_6c[0x31] = 0x55;
  local_6c[0x32] = 0x56;
  local_6c[0x33] = 0x57;
  local_6c[0x34] = 0x58;
  local_6c[0x35] = 0x59;
  local_6c[0x36] = 0x5a;
  local_6c[0x37] = 0x5c;
  local_6c[0x38] = 0x7c;
  local_6c[0x39] = 0x7e;
  local_6c[0x3a] = 0x2a;
  st::fn_0070D1F0
            (0x19d,&local_a8,nullptr,local_6c,param_1,local_30,6,7,1,0,0x20022c,param_2);
  return;
}

// 004F4950 FUN_004f4950
#line 1 "decomp/ST.exe/functions/004F4950/decomp.c"
void __cdecl st::fn_004F4950(int param_1,undefined *param_2,BYTE param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  LOGFONTA *pLVar6;
  char *pcVar7;
  CHAR *pCVar8;
  LOGFONTA local_a8;
  byte local_6c [88];
  byte local_14 [16];

  pLVar6 = &local_a8;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    pLVar6->lfHeight = 0;
    pLVar6 = (LOGFONTA *)&pLVar6->lfWidth;
  }
  local_a8.lfCharSet = param_3;
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
  local_a8.lfHeight = -0xd;
  local_a8.lfWidth = 0;
  local_a8.lfEscapement = 0;
  local_a8.lfOrientation = 0;
  local_a8.lfWeight = 400;
  local_a8.lfItalic = '\0';
  local_a8.lfUnderline = '\0';
  local_a8.lfStrikeOut = '\0';
  local_a8.lfOutPrecision = '\x03';
  local_a8.lfClipPrecision = '\x02';
  local_a8.lfQuality = '\x01';
  local_a8.lfPitchAndFamily = '\"';
  pcVar5 = pcVar7 + -uVar3;
  pCVar8 = local_a8.lfFaceName;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pCVar8 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pCVar8 = pCVar8 + 4;
  }
  local_14[0] = 0;
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pCVar8 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pCVar8 = pCVar8 + 1;
  }
  local_14[2] = 0x28;
  local_14[1] = 0x75;
  local_14[3] = 0x45;
  local_14[4] = 0x44;
  local_14[5] = 0x43;
  local_14[6] = 0x2d;
  local_14[7] = 0x46;
  local_14[8] = 0x28;
  local_14[9] = 0x29;
  local_14[10] = 0x2a;
  local_14[0xb] = 0x75;
  local_14[0xc] = 0x3f;
  local_14[0xd] = 0x3e;
  local_14[0xe] = 0x3d;
  local_14[0xf] = 0x3c;
  local_6c[0] = 0x20;
  local_6c[1] = 0x21;
  local_6c[2] = 0x22;
  local_6c[3] = 0x23;
  local_6c[4] = 0x25;
  local_6c[5] = 0x26;
  local_6c[6] = 0x27;
  local_6c[7] = 0x28;
  local_6c[8] = 0x29;
  local_6c[9] = 0x2c;
  local_6c[10] = 0x2d;
  local_6c[0xb] = 0x2e;
  local_6c[0xc] = 0x2f;
  local_6c[0xd] = 0x30;
  local_6c[0xe] = 0x31;
  local_6c[0xf] = 0x32;
  local_6c[0x10] = 0x33;
  local_6c[0x11] = 0x34;
  local_6c[0x12] = 0x35;
  local_6c[0x13] = 0x36;
  local_6c[0x14] = 0x37;
  local_6c[0x15] = 0x38;
  local_6c[0x16] = 0x39;
  local_6c[0x17] = 0x3a;
  local_6c[0x18] = 0x3d;
  local_6c[0x4f] = 0x75;
  local_6c[0x21] = 10;
  local_6c[0x43] = 10;
  local_6c[0x19] = 0x3e;
  local_6c[0x1a] = 0x3f;
  local_6c[0x1b] = 0x41;
  local_6c[0x1c] = 0x42;
  local_6c[0x1d] = 0x43;
  local_6c[0x1e] = 0x44;
  local_6c[0x1f] = 0x45;
  local_6c[0x20] = 0xd;
  local_6c[0x22] = 0x46;
  local_6c[0x23] = 0x47;
  local_6c[0x24] = 0x48;
  local_6c[0x25] = 0x49;
  local_6c[0x26] = 0x4a;
  local_6c[0x27] = 0x4b;
  local_6c[0x28] = 0x4c;
  local_6c[0x29] = 0x4d;
  local_6c[0x2a] = 0x4e;
  local_6c[0x2b] = 0x4f;
  local_6c[0x2c] = 0x50;
  local_6c[0x2d] = 0x51;
  local_6c[0x2e] = 0x52;
  local_6c[0x2f] = 0x53;
  local_6c[0x30] = 0x54;
  local_6c[0x31] = 0x55;
  local_6c[0x32] = 0x56;
  local_6c[0x33] = 0x57;
  local_6c[0x34] = 0x58;
  local_6c[0x35] = 0x59;
  local_6c[0x36] = 0x5a;
  local_6c[0x37] = 0x5c;
  local_6c[0x38] = 0x5f;
  local_6c[0x39] = 0x61;
  local_6c[0x3a] = 0x62;
  local_6c[0x3b] = 99;
  local_6c[0x3c] = 100;
  local_6c[0x3d] = 0x65;
  local_6c[0x3e] = 0x66;
  local_6c[0x3f] = 0x67;
  local_6c[0x40] = 0x68;
  local_6c[0x41] = 0x69;
  local_6c[0x42] = 0xd;
  local_6c[0x44] = 0x6a;
  local_6c[0x45] = 0x6b;
  local_6c[0x46] = 0x6c;
  local_6c[0x47] = 0x6d;
  local_6c[0x48] = 0x6e;
  local_6c[0x49] = 0x6f;
  local_6c[0x4a] = 0x70;
  local_6c[0x4b] = 0x71;
  local_6c[0x4c] = 0x72;
  local_6c[0x4d] = 0x73;
  local_6c[0x4e] = 0x74;
  local_6c[0x50] = 0x76;
  local_6c[0x51] = 0x77;
  local_6c[0x52] = 0x78;
  local_6c[0x53] = 0x79;
  local_6c[0x54] = 0x7a;
  local_6c[0x55] = 0x7c;
  local_6c[0x56] = 0x7e;
  st::fn_0070D1F0
            (0x19d,&local_a8,nullptr,local_6c,param_1,local_14,3,5,1,0,0x100081c,param_2);
  return;
}

// 004F4C70 FUN_004f4c70
#line 1 "decomp/ST.exe/functions/004F4C70/decomp.c"
void __cdecl st::fn_004F4C70(int param_1,undefined *param_2,BYTE param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  LOGFONTA *pLVar6;
  char *pcVar7;
  CHAR *pCVar8;
  LOGFONTA local_a0;
  byte local_64 [88];
  byte local_c [8];

  pLVar6 = &local_a0;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    pLVar6->lfHeight = 0;
    pLVar6 = (LOGFONTA *)&pLVar6->lfWidth;
  }
  local_a0.lfCharSet = param_3;
  uVar3 = 0xffffffff;
  pcVar5 = "System";
  do {
    pcVar7 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  local_a0.lfHeight = -0xd;
  local_a0.lfWidth = 0;
  local_a0.lfEscapement = 0;
  local_a0.lfOrientation = 0;
  local_a0.lfWeight = 700;
  local_a0.lfItalic = '\0';
  local_a0.lfUnderline = '\0';
  local_a0.lfStrikeOut = '\0';
  local_a0.lfOutPrecision = '\x01';
  local_a0.lfClipPrecision = '\x02';
  local_a0.lfQuality = '\x01';
  local_a0.lfPitchAndFamily = '\"';
  local_c[0] = 0xff;
  pcVar5 = pcVar7 + -uVar3;
  pCVar8 = local_a0.lfFaceName;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pCVar8 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pCVar8 = pCVar8 + 4;
  }
  local_c[1] = 0;
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pCVar8 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pCVar8 = pCVar8 + 1;
  }
  local_c[2] = 0xac;
  local_c[3] = 0xad;
  local_c[4] = 0xae;
  local_64[0] = 0x20;
  local_64[1] = 0x21;
  local_64[2] = 0x22;
  local_64[3] = 0x23;
  local_64[4] = 0x25;
  local_64[5] = 0x26;
  local_64[6] = 0x27;
  local_64[7] = 0x28;
  local_64[8] = 0x29;
  local_64[9] = 0x2c;
  local_64[10] = 0x2d;
  local_64[0xb] = 0x2e;
  local_64[0xc] = 0x2f;
  local_64[0xd] = 0x30;
  local_64[0xe] = 0x31;
  local_64[0xf] = 0x32;
  local_64[0x10] = 0x33;
  local_64[0x11] = 0x34;
  local_64[0x12] = 0x35;
  local_64[0x13] = 0x36;
  local_64[0x14] = 0x37;
  local_64[0x15] = 0x38;
  local_64[0x16] = 0x39;
  local_64[0x17] = 0x3a;
  local_64[0x18] = 0x3d;
  local_64[0x19] = 0x3e;
  local_64[0x1a] = 0x3f;
  local_64[0x1b] = 0x41;
  local_64[0x1c] = 0x42;
  local_64[0x1d] = 0x43;
  local_64[0x1e] = 0x44;
  local_64[0x1f] = 0x45;
  local_64[0x20] = 0xd;
  local_64[0x21] = 10;
  local_64[0x22] = 0x46;
  local_64[0x23] = 0x47;
  local_64[0x24] = 0x48;
  local_64[0x42] = 0xd;
  local_64[0x43] = 10;
  local_64[0x25] = 0x49;
  local_64[0x26] = 0x4a;
  local_64[0x27] = 0x4b;
  local_64[0x28] = 0x4c;
  local_64[0x29] = 0x4d;
  local_64[0x2a] = 0x4e;
  local_64[0x2b] = 0x4f;
  local_64[0x2c] = 0x50;
  local_64[0x2d] = 0x51;
  local_64[0x2e] = 0x52;
  local_64[0x2f] = 0x53;
  local_64[0x30] = 0x54;
  local_64[0x31] = 0x55;
  local_64[0x32] = 0x56;
  local_64[0x33] = 0x57;
  local_64[0x34] = 0x58;
  local_64[0x35] = 0x59;
  local_64[0x36] = 0x5a;
  local_64[0x37] = 0x5c;
  local_64[0x38] = 0x5f;
  local_64[0x39] = 0x61;
  local_64[0x3a] = 0x62;
  local_64[0x3b] = 99;
  local_64[0x3c] = 100;
  local_64[0x3d] = 0x65;
  local_64[0x3e] = 0x66;
  local_64[0x3f] = 0x67;
  local_64[0x40] = 0x68;
  local_64[0x41] = 0x69;
  local_64[0x44] = 0x6a;
  local_64[0x45] = 0x6b;
  local_64[0x46] = 0x6c;
  local_64[0x47] = 0x6d;
  local_64[0x48] = 0x6e;
  local_64[0x49] = 0x6f;
  local_64[0x4a] = 0x70;
  local_64[0x4b] = 0x71;
  local_64[0x4c] = 0x72;
  local_64[0x4d] = 0x73;
  local_64[0x4e] = 0x74;
  local_64[0x4f] = 0x75;
  local_64[0x50] = 0x76;
  local_64[0x51] = 0x77;
  local_64[0x52] = 0x78;
  local_64[0x53] = 0x79;
  local_64[0x54] = 0x7a;
  local_64[0x55] = 0x7c;
  local_64[0x56] = 0x7e;
  st::fn_0070D1F0
            (0x19d,&local_a0,nullptr,local_64,param_1,local_c,1,4,1,1,0x20081c,param_2);
  return;
}

// 004F4F60 FUN_004f4f60
#line 1 "decomp/ST.exe/functions/004F4F60/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA81C>004054B6

   [STObjectFactoryApplier] Central object factory for 0x0120 (ST_OBJECT_TYPE_0120).
   Evidence: registry[31] at 007CA818 stores type 0x0120 and executable pointer 004054B6; allocation
   size 3566 has no unique current class-layout match */

void * __cdecl st::fn_004F4F60(void)

{
  AnonShape_004F4F90_2D6E0DDA *pAVar1;

  pAVar1 = (AnonShape_004F4F90_2D6E0DDA *)st::fn_006B04D0(0xdee);
  if (pAVar1 != nullptr) {
    pAVar1 = st::fn_00402AA4(pAVar1);
    return pAVar1;
  }
  return nullptr;
}

// 004F4F90 FUN_004f4f90
#line 1 "decomp/ST.exe/functions/004F4F90/decomp.c"
/* [STReturnSemanticsApplier] typed_pointer_return.
   Evidence: all 1 value-return path(s) forward Listing variable param_1 with evidence-backed
   structure /SubmarineTitans/Recovered/PointerShapes/AnonShape_004F4F90_2D6E0DDA (current recovered
   extent=3528) */

AnonShape_004F4F90_2D6E0DDA * __fastcall st::fn_004F4F90(AnonShape_004F4F90_2D6E0DDA *param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;

  st::fn_006E5FB0(param_1);
  *(VTable_0079AC18 **)param_1 = &VTable_0079AC18;
  *(undefined4 *)&param_1->field_0x134 = 0;
  *(undefined4 *)&param_1->field_0x138 = 0;
  *(undefined4 *)&param_1->field_0x130 = 0;
  *(undefined4 *)&param_1->field_0x140 = 0;
  *(undefined4 *)&param_1->field_0x13c = 0;
  *(undefined4 *)&param_1->field_0x12c = 1;
  puVar1 = &param_1->field_0x94;
  memset(&param_1->field_0x3c, 0, 0x2c); /* compiler bulk-zero initialization */
  iVar3 = 0;
  memset((void *)puVar1, 0, 0x2c); /* compiler bulk-zero initialization */
  iVar3 = 0;
  memset(&param_1->field_0x68, 0, 0x2c); /* compiler bulk-zero initialization */
  iVar3 = 0;
  memset(&param_1->field_0xc0, 0, 0x2c); /* compiler bulk-zero initialization */
  if (DAT_0080874e == '\x03') {
    *(undefined4 *)&param_1->field_0x68 = 0x53;
    *(undefined4 *)puVar1 = DAT_00806734;
    *(undefined4 *)&param_1->field_0xc0 = 0x43;
    *(undefined4 *)&param_1->field_0x6c = 0x53;
    *(int *)&param_1->field_0098 = *(int *)puVar1 + *(int *)&param_1->field_0xc0;
    *(undefined4 *)&param_1->field_0xc4 = 0x58;
    *(undefined4 *)&param_1->field_0x74 = 0xd2;
    *(undefined4 *)&param_1->field_0xa0 = DAT_00806734;
    *(undefined4 *)&param_1->field_0xcc = 0x9b;
    *(undefined4 *)&param_1->field_0x78 = 0x97;
    *(undefined4 *)&param_1->field_0xa4 = DAT_00806734;
    *(undefined4 *)&param_1->field_0xd0 = 0x9b;
    *(undefined4 *)&param_1->field_0x7c = 0xe9;
    *(undefined4 *)&param_1->field_0xa8 = DAT_00806734;
    *(undefined4 *)&param_1->field_0xd4 = 0x9b;
    uVar4 = 0x53;
  }
  else {
    *(undefined4 *)&param_1->field_0x68 = 0x51;
    *(undefined4 *)puVar1 = DAT_00806734;
    *(undefined4 *)&param_1->field_0xc0 = 0x43;
    *(undefined4 *)&param_1->field_0x6c = 0x51;
    *(int *)&param_1->field_0098 = *(int *)puVar1 + *(int *)&param_1->field_0xc0;
    *(undefined4 *)&param_1->field_0xc4 = 0x58;
    *(undefined4 *)&param_1->field_0x70 = 0x1a;
    *(undefined4 *)&param_1->field_0x9c = DAT_00806734;
    *(undefined4 *)&param_1->field_0xc8 = 0x9b;
    *(undefined4 *)&param_1->field_0x74 = 0xbb;
    *(undefined4 *)&param_1->field_0xa0 = DAT_00806734;
    *(undefined4 *)&param_1->field_0xcc = 0x9b;
    *(undefined4 *)&param_1->field_0x78 = 0x95;
    *(undefined4 *)&param_1->field_0xa4 = DAT_00806734;
    *(undefined4 *)&param_1->field_0xd0 = 0x9b;
    *(undefined4 *)&param_1->field_0x7c = 0xd2;
    *(undefined4 *)&param_1->field_0xa8 = DAT_00806734;
    *(undefined4 *)&param_1->field_0xd4 = 0x9b;
    *(undefined4 *)&param_1->field_0x80 = 0x1a;
    *(undefined4 *)&param_1->field_0xac = DAT_00806734;
    *(undefined4 *)&param_1->field_0xd8 = 0x9b;
    uVar4 = 0x51;
  }
  *(undefined4 *)&param_1->field_0x84 = uVar4;
  *(int *)&param_1->field_0xb0 = *(int *)puVar1 + *(int *)&param_1->field_0xc0;
  *(undefined4 *)&param_1->field_0xdc = 0x58;
  *(undefined4 *)&param_1->field_0x88 = uVar4;
  *(undefined4 *)&param_1->field_0xb4 = DAT_00806734;
  *(undefined4 *)&param_1->field_0xe0 = 0x43;
  *(undefined4 *)&param_1->field_0xb8 = DAT_00806734;
  *(undefined4 *)&param_1->field_0xe4 = 0x9b;
  *(undefined4 *)&param_1->field_0xbc = DAT_00806734;
  *(undefined4 *)&param_1->field_0xe8 = 0x9b;
  *(undefined4 *)&param_1->field_0xf0 = 0x1e;
  *(undefined4 *)&param_1->field_0x104 = 0x22b;
  puVar2 = (undefined4 *)&param_1->field_0x180;
  iVar3 = 0xb;
  do {
    puVar2[-0xe] = 0xffffffff;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)&param_1->field_0x17c = 0xffffffff;
  *(undefined4 *)&param_1->field_0x178 = 0xffffffff;
  *(undefined4 *)&param_1->field_0x174 = 0xffffffff;
  *(undefined4 *)&param_1->field_0x1b4 = 0;
  *(undefined4 *)&param_1->field_0x1b0 = 0;
  *(undefined4 *)&param_1->field_0x1ac = 0;
  *(undefined4 *)&param_1->field_0x1c8 = 0;
  *(undefined4 *)&param_1->field_0x1c4 = 0;
  *(undefined4 *)&param_1->field_0x1c0 = 0;
  *(undefined4 *)&param_1->field_0x1bc = 0;
  *(undefined4 *)&param_1->field_0x1b8 = 0;
  param_1->field_0213 = (int)&param_1->field_0x1e1;
  *(undefined4 *)&param_1->field_0x1d4 = 0;
  *(undefined4 *)&param_1->field_0x1d0 = 0;
  *(undefined4 *)&param_1->field_0x1cc = 0;
  param_1->field_023F = 1;
  param_1->field_024B = 0;
  param_1->field_024F = 0;
  param_1->field_0257 = 0;
  param_1->field_0253 = 0;
  *(undefined4 *)&param_1->field_0x1d8 = 0;
  param_1->field_025B = 0;
  param_1->field_025F = 0;
  param_1->field_0x260 = 2;
  param_1->field_0261 = 0;
  param_1->field_0265 = 0;
  param_1->field_0285 = 1;
  param_1->field_028A = 0;
  param_1->field_0286 = 0;
  param_1->field_02CE = 0;
  param_1->field_02DE = 0;
  param_1->field_02DA = 0;
  param_1->field_02D6 = 0;
  param_1->field_02D2 = 0;
  *(undefined4 *)&param_1->field_0x9cc = 0;
  *(undefined4 *)&param_1->field_0x9c8 = 0;
  param_1->field_02CA = 0;
  param_1->field_02C6 = 0;
  param_1->field_02C2 = 0;
  param_1->field_02BA = 0;
  param_1->field_02B6 = 0;
  param_1->field_02B2 = 0;
  param_1->field_02A2 = 0;
  param_1->field_029E = 0;
  param_1->field_029A = 0;
  param_1->field_0296 = 0;
  param_1->field_0292 = 0;
  param_1->field_028E = 0;
  param_1->field_02E2 = 0;
  param_1->field_02E6 = 0;
  iVar3 = 0;
  param_1->field_0B4B = 0;
  param_1->field_0B4F = 0;
  param_1->field_0B53 = 0;
  param_1->field_0B57 = 0;
  param_1->field_0B5B = 0;
  param_1->field_0B5F = 0;
  puVar2 = (undefined4 *)&param_1->field_0x2fe;
  do {
    STField<undefined4>(puVar2,10) = 0;
    *puVar2 = 0;
    (&param_1->field_0x306)[iVar3] = 1;
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar3 < 2);
  *(undefined4 *)&param_1->field_0x310 = 0;
  *(undefined4 *)&param_1->field_0x314 = 0;
  *(undefined4 *)&param_1->field_0x318 = 0;
  memset(&param_1->field_0x31c, 0, 0x460); /* compiler bulk-zero initialization */
  iVar3 = 0;
  *(undefined4 *)&param_1->field_0x77c = 0;
  *(undefined2 *)&param_1->field_0x2a8 = 0xffff;
  *(undefined4 *)&param_1->field_0x958 = 0;
  *(undefined4 *)&param_1->field_0x954 = 0;
  *(undefined4 *)&param_1->field_0x95c = 0;
  memset(&param_1->field_0xb63, 0, 0x36); /* compiler bulk-zero initialization */
  iVar3 = 0;
  memset(&param_1->field_0x974, 0, 0x20); /* compiler bulk-zero initialization */
  iVar3 = 0;
  memset(&param_1->field_0xb99, 0, 0x5c); /* compiler bulk-zero initialization */
  iVar3 = 0;
  *(undefined4 *)&param_1->field_0x960 = 0;
  *(undefined4 *)&param_1->field_0x964 = 0;
  *(undefined4 *)&param_1->field_0x968 = 0;
  *(undefined4 *)&param_1->field_0x96c = 0;
  *(undefined4 *)&param_1->field_0x970 = 0;
  *(undefined4 *)&param_1->field_0x994 = 0;
  *(undefined4 *)&param_1->field_0x99c = 0;
  *(undefined4 *)&param_1->field_0x998 = 0;
  *(uint *)&param_1->field_0x9a0 = g_playSystem_00802A38->field_00E4 / 0x19;
  memset(&param_1->field_0x9a4, 0, 0x1c); /* compiler bulk-zero initialization */
  iVar3 = 0;
  *(undefined4 *)&param_1->field_0x9c0 = 0;
  *(undefined4 *)&param_1->field_0x9c4 = 0;
  param_1->field_0DB3 = 0;
  param_1->field_0DB7 = 0;
  param_1->field_0DBB = 0;
  param_1->field_0DBF = 0;
  param_1->field_0DC3 = 0;
  param_1->field_0227 = 0;
  param_1->field_022B = 0;
  param_1->field_022F = 0;
  param_1->field_0233 = 0;
  param_1->field_023B = 0xffffffff;
  param_1->field_0237 = 0xffffffff;
  memset(&param_1->field_0x9d9, 0, 0x3c); /* compiler bulk-zero initialization */
  iVar3 = 0;
  memset(&param_1->field_0xbf5, 0, 0x5c); /* compiler bulk-zero initialization */
  iVar3 = 0;
  *(undefined4 *)&param_1->field_0x9d0 = 0;
  param_1->field_0x9d4 = 1;
  memset(&param_1->field_0xa15, 0, 0x18); /* compiler bulk-zero initialization */
  iVar3 = 0;
  param_1->field_0B1B = 0;
  param_1->field_09D5 = 0;
  param_1->field_0B17 = 0;
  memset(&param_1->field_0xb1f, 0, 0x18); /* compiler bulk-zero initialization */
  iVar3 = 0;
  param_1->field_0B37 = 0;
  param_1->field_0B3B = 0;
  param_1->field_0B3F = 0;
  param_1->field_0B47 = 0;
  param_1->field_0B43 = 0;
  memset(&param_1->field_0xc51, 0, 0x36); /* compiler bulk-zero initialization */
  iVar3 = 0;
  memset(&param_1->field_0xc87, 0, 0x84); /* compiler bulk-zero initialization */
  iVar3 = 0;
  memset(&param_1->field_0xd0b, 0, 0x30); /* compiler bulk-zero initialization */
  return param_1;
}

// 004F91A0 FUN_004f91a0
#line 1 "decomp/ST.exe/functions/004F91A0/decomp.c"
void __thiscall st::fn_004F91A0(void *this,byte param_1,undefined1 *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;

  if (param_1 < 8) {
    if (param_2 != nullptr) {
      *param_2 = g_bulkInitializedRecords_008087C7[param_1].field_0030;
    }
    if (param_3 != nullptr) {
      uVar1 = (uint)param_1;
      if (g_bulkInitializedRecords_008087C7[uVar1].field_0030 != 0) {
        uVar2 = STField<int>(this,0x9a0) -
                *(int *)&g_bulkInitializedRecords_008087C7[uVar1].field_0x35;
        if (*(uint *)&g_bulkInitializedRecords_008087C7[uVar1].field_0x31 <= uVar2) {
          *param_3 = 0;
          return;
        }
        *param_3 = *(uint *)&g_bulkInitializedRecords_008087C7[uVar1].field_0x31 - uVar2;
        return;
      }
      *param_3 = *(int *)&g_bulkInitializedRecords_008087C7[uVar1].field_0x31 +
                 STField<int>(this,0x9a0);
    }
  }
  return;
}

// 004F9260 FUN_004f9260
#line 1 "decomp/ST.exe/functions/004F9260/decomp.c"

void st::fn_004F9260(char param_1)

{
  if (param_1 == '\0') {
    DAT_0080c4d3 = 4;
  }
  else if (g_bulkInitializedRecords_008087C7[DAT_0080874d].field_0030 != 0) {
    DAT_0080c4d3 = 3;
    return;
  }
  return;
}

// 004FAE70 FUN_004fae70
#line 1 "decomp/ST.exe/functions/004FAE70/decomp.c"
/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void __fastcall st::fn_004FAE70(int param_1)

{
  *(undefined4 *)(param_1 + 0x13c) = 0;
  return;
}

