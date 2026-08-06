#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/0051.cpp

// 00510C50 CreateHelpPanel
#line 1 "decomp/ST.exe/functions/00510C50/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA914>004014D3

   [STObjectFactoryApplier] Central object factory for 0x0156 (ST_OBJECT_HELP_PANEL).
   Evidence: registry[62] at 007CA910 stores type 0x0156 and executable pointer 004014D3; allocation
   size 596 uniquely matches /HelpPanelTy */

HelpPanelTy * __cdecl st::fn_00510C50(void)

{
  AnonShape_00510C80_2C2DC38C *pAVar1;
  HelpPanelTy *pHVar2;

  pAVar1 = (AnonShape_00510C80_2C2DC38C *)st::fn_006B04D0(0x254);
  if (pAVar1 != nullptr) {
    pHVar2 = (HelpPanelTy *)st::fn_00403035(pAVar1);
    return pHVar2;
  }
  return nullptr;
}

// 00510C80 FUN_00510c80
#line 1 "decomp/ST.exe/functions/00510C80/decomp.c"
/* [STReturnSemanticsApplier] typed_pointer_return.
   Evidence: all 1 value-return path(s) forward Listing variable param_1 with evidence-backed
   structure /SubmarineTitans/Recovered/PointerShapes/AnonShape_00510C80_2C2DC38C (current recovered
   extent=592) */

AnonShape_00510C80_2C2DC38C * __fastcall st::fn_00510C80(AnonShape_00510C80_2C2DC38C *param_1)

{
  undefined4 uVar1;
  int iVar2;

  st::fn_006E5FB0(param_1);
  param_1->field_005C = 0;
  param_1->field_0044 = 0;
  param_1->field_003C = 0;
  param_1->field_0060 = 0xffffffff;
  param_1->field_0064 = 3;
  param_1->field_0068 = 0;
  param_1->field_0172 = 2;
  param_1->field_0178 = 0;
  *(VTable_0079AC48 **)param_1 = &VTable_0079AC48;
  param_1->field_0040 = 500;
  param_1->field_0048 = 400;
  param_1->field_01A0 = 0;
  param_1->field_01A2 = 0;
  param_1->field_01A1 = 0;
  param_1->field_01A7 = 0;
  param_1->field_01A3 = 0;
  param_1->field_01DC = 0;
  param_1->field_01E8 = 0;
  param_1->field_01E4 = 0;
  param_1->field_01E0 = 0;
  param_1->field_0218 = 0;
  param_1->field_01EC = 0;
  memset(&param_1->field_0x1f0, 0, 0x28); /* compiler bulk-zero initialization */
  iVar2 = 0;
  param_1->field_017C = 0;
  memset(&param_1->field_0x180, 0, 0x1c); /* compiler bulk-zero initialization */
  param_1->field_019C = 0;
  param_1->field_01CB = 0;
  param_1->field_01BB = 0;
  param_1->field_01B3 = 0;
  uVar1 = *(undefined4 *)structHelp_exref;
  param_1->field_01CF = 0xffffffff;
  param_1->field_01C7 = uVar1;
  param_1->field_01BF = 0;
  param_1->field_01B7 = 0;
  param_1->field_01D7 = 0;
  param_1->field_01DB = 0;
  param_1->field_024C = 0;
  param_1->field_021C = 0;
  param_1->field_0238 = 0;
  param_1->field_0248 = 0;
  param_1->field_022C = 0;
  param_1->field_0228 = 0;
  param_1->field_0234 = 0;
  param_1->field_0230 = 0;
  param_1->field_0220 = 0;
  param_1->field_0224 = 0;
  param_1->field_0244 = 0;
  param_1->field_0240 = 0;
  param_1->field_023C = 0;
  param_1->field_01D3 = 0;
  return param_1;
}

// 005121F0 FUN_005121f0
#line 1 "decomp/ST.exe/functions/005121F0/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_005121F0_param_1Enum. Cases:
   CASE_F2=242;CASE_F3=243;CASE_F4=244;CASE_F5=245;CASE_F6=246;CASE_F7=247;CASE_F8=248;CASE_F9=249;CASE_FA=250;CASE_FB=251
    */

undefined4 __thiscall st::fn_005121F0(void *this,Global_sub_005121F0_param_1Enum param_1,int param_2)

{
  Global_sub_005121F0_param_1Enum GVar1;
  Global_sub_005121F0_param_1Enum *pGVar2;
  uint uVar3;

  uVar3 = 0;
  if (*(uint *)sizeHelp_exref != 0) {
    pGVar2 = (Global_sub_005121F0_param_1Enum *)(STField<int>(this,0x1c7) + 9);
    do {
      switch(*(byte *)((int)pGVar2 + -1)) {
      case 1:
      case 2:
      case 3:
      case 4:
      case 0xb:
        if (*pGVar2 == param_1) {
          if (*(byte *)((int)pGVar2 + -1) == 3) {
            return 1;
          }
          if (pGVar2[1] == param_2) {
            return 1;
          }
        }
        break;
      case 0xc:
        switch(param_1) {
        case CASE_F2:
        case CASE_F3:
        case CASE_F4:
        case CASE_F5:
          GVar1 = *pGVar2;
          if ((((GVar1 == CASE_F2) || (GVar1 == CASE_F3)) || (GVar1 == CASE_F4)) ||
             (GVar1 == CASE_F5)) {
            return 1;
          }
          break;
        case CASE_F6:
        case CASE_F7:
          if (*pGVar2 == CASE_F6) {
            return 1;
          }
          if (*pGVar2 == CASE_F7) {
            return 1;
          }
          break;
        case CASE_F8:
        case CASE_F9:
          if (*pGVar2 == CASE_F8) {
            return 1;
          }
          if (*pGVar2 == CASE_F9) {
            return 1;
          }
          break;
        case CASE_FA:
        case CASE_FB:
          if (*pGVar2 == CASE_FA) {
            return 1;
          }
          if (*pGVar2 == CASE_FB) {
            return 1;
          }
          break;
        default:
          if (*pGVar2 == param_1) {
            return 1;
          }
        }
      }
      uVar3 = uVar3 + 1;
      pGVar2 = (Global_sub_005121F0_param_1Enum *)((int)pGVar2 + 0x11);
    } while (uVar3 < *(uint *)sizeHelp_exref);
  }
  return 0;
}

// 0051F860 CreateHelpString
#line 1 "decomp/ST.exe/functions/0051F860/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA84C>004043AE

   [STObjectFactoryApplier] Central object factory for 0x014B (ST_OBJECT_HELP_STRING).
   Evidence: registry[37] at 007CA848 stores type 0x014B and executable pointer 004043AE; allocation
   size 306 uniquely matches /HelpStringTy */

HelpStringTy * __cdecl st::fn_0051F860(void)

{
  HelpStringTy *this;

  this = (HelpStringTy *)st::fn_006B04D0(0x132);
  if (this != nullptr) {
    st::fn_006E5FB0(this);
    this->vtable = &HelpStringTyVTable;
    this->field_011D = 0;
    this->field_011C = 0;
    this->field_0126 = 0;
    this->field_0122 = 0;
    this->field_011E = nullptr;
    this->field_012A = nullptr;
    this->field_012E = 0;
    memset(&this->field_0018, 0, 0x104); /* compiler bulk-zero initialization */
    return this;
  }
  return nullptr;
}

// 0051FAC0 FUN_0051fac0
#line 1 "decomp/ST.exe/functions/0051FAC0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_0051FAC0(void *this,char *param_1,byte param_2,char param_3,undefined4 param_4)

{
  char cVar1;
  DWORD DVar2;
  uint uVar3;
  char *pcVar6;
  char *pcVar7;

  if (STField<byte>(this,0x11c) <= param_2) {
    if (param_1 != nullptr) {
      uVar3 = 0xffffffff;
      do {
        pcVar6 = param_1;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar6 = param_1 + 1;
        cVar1 = *param_1;
        param_1 = pcVar6;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar6 = pcVar6 + -uVar3;
      pcVar7 = (char *)((int)this + 0x18);
      memmove(pcVar7, pcVar6, uVar3); /* compiler REP MOVS byte copy */
      STField<byte>(this,0x11c) = param_2;
      STField<byte>(this,0x11d) = param_3 - 1U;
      if (1 < (byte)(param_3 - 1U)) {
        STField<undefined1>(this,0x11d) = 0;
      }
      STField<undefined4>(this,0x126) = param_4;
      DVar2 = st::fn_006E51B0(STField<STAppC *>(this,0x10));
      STField<DWORD>(this,0x122) = DVar2;
      STField<undefined4>(this,0x12e) = 1;
      st::fn_004015FA(this);
      return;
    }
    memset((void *)((int)this + 0x18), 0, 0x104); /* compiler bulk-zero initialization */
    STField<undefined4>(this,0x12e) = 0;
    st::fn_004015FA(this);
  }
  return;
}

// 0051FE40 CreateInfocPanel
#line 1 "decomp/ST.exe/functions/0051FE40/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA834>00403FCB

   [STObjectFactoryApplier] Central object factory for 0x0148 (ST_OBJECT_INFOC_PANEL).
   Evidence: registry[34] at 007CA830 stores type 0x0148 and executable pointer 00403FCB; allocation
   size 985 uniquely matches /InfocPanelTy */

InfocPanelTy * __cdecl st::fn_0051FE40(void)

{
  InfocPanelTy *this;
  int iVar1;

  this = (InfocPanelTy *)st::fn_006B04D0(0x3d9);
  if (this != nullptr) {
    st::fn_006E5FB0(this);
    this->field_005C = 0;
    this->field_0060 = 0xffffffff;
    this->field_0064 = 4;
    this->field_0068 = 0;
    this->field_0172 = 2;
    this->field_0178 = 0;
    this->field_017C = 0;
    this->field_0185 = 0;
    this->field_0189 = nullptr;
    this->vtable = &InfocPanelTyVTable;
    this->field_003C = 0x1c7;
    this->field_0044 = 0;
    this->field_0040 = 0x13d;
    this->field_0048 = 0xa1;
    this->field_0180 = 0;
    this->field_0184 = 0;
    this->field_03D0 = 0;
    this->field_03D4 = 0xff;
    memset(&this->field_01AB, 0, 0x129); /* compiler bulk-zero initialization */
    iVar1 = 0;
    memset(&this->field_02D4, 0, 0xf0); /* compiler bulk-zero initialization */
    this->field_03CC = nullptr;
    this->field_03C8 = nullptr;
    this->field_03C4 = nullptr;
    this->field_03D5 = nullptr;
    return this;
  }
  return nullptr;
}

