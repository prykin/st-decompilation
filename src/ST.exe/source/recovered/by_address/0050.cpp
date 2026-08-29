#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/0050.cpp

// 00502330 FUN_00502330
#line 1 "decomp/ST.exe/functions/00502330/decomp.c"

void st::fn_00502330(void)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  CPanelTy *in_ECX;

  if (DAT_0080874e == '\x03') {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    st::fn_00401389(in_ECX);
    return;
  }
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  st::fn_00401019(in_ECX);
  return;
}

// 00505070 FUN_00505070
#line 4 "decomp/ST.exe/functions/00505070/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00505070 -> 005050B0 @ 0050507A */

uint __thiscall st::fn_00505070(void *this,CPanelTy_sub_005050B0_param_1Enum param_1)

{
  uint uVar1;

  /* ST_CALLSITE[0050507A]: CALL 0x00403d7d; direct=00403D7D CPanelTy::sub_005050B0 */
  uVar1 = st::fn_00403D7D(static_cast<CPanelTy *>(this),param_1);
  if (-1 < (int)uVar1) {
    uVar1 = (uint)*(byte *)((int)this + (uVar1 * 3 + 0x609) * 2);
  }
  return uVar1;
}

// 005097B0 FUN_005097b0
#line 1 "decomp/ST.exe/functions/005097B0/decomp.c"

void st::fn_005097B0(void)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  CPanelTy *in_ECX;

  if (DAT_0080874e == '\x03') {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    st::fn_00405E16(in_ECX);
    return;
  }
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  st::fn_00405123(in_ECX);
  return;
}

// 0050FC70 CreateFrmPanel
#line 4 "decomp/ST.exe/functions/0050FC70/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA91C>0040579A

   [STObjectFactoryApplier] Central object factory for 0x0155 (ST_OBJECT_FRM_PANEL).
   Evidence: registry[63] at 007CA918 stores type 0x0155 and executable pointer 0040579A; allocation
   size 483 uniquely matches /FrmPanelTy */

FrmPanelTy * __cdecl st::fn_0050FC70(void)

{
  FrmPanelTy *this;


  this = STPointerBoundaryCast<FrmPanelTy *>(st::fn_006B04D0(0x1e3));
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
    this->field_0189 = 0;
    this->vtable = &st_global_0079AC1C;
    this->field_003C = 0xc;
    this->field_0044 = 0;
    this->field_0040 = 0x128;
    this->field_0048 = 0x8c;
    this->field_0180 = 1;
    this->field_0184 = 0;
    memset(this->field_01B3, 0, 0x20); /* compiler bulk-zero initialization */
    this->field_01D3[0] = 0;
    this->field_01D3[1] = 0;
    this->field_01D3[2] = 0;
    this->field_01D3[3] = 0;
    this->field_01AB = 0;
    this->field_01AF = 0;
    return this;
  }
  return nullptr;
}
