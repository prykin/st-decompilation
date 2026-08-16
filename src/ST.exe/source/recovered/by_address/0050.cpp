#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/0050.cpp

// 00501D00 FUN_00501d00
#line 4 "decomp/ST.exe/functions/00501D00/decomp.c"
void __thiscall
st::fn_00501D00(void *this,AnonShape_00501D00_3942B646 *param_1,
            RecoveredRecord_CPanelTy_00501D00 *param_2)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  char *pcVar4;
  short *psVar5;
  int *piVar6;
  int iVar7;
  short *psVar8;
  int *piVar9;
  bool bVar10;
  char local_5;

  cVar3 = '\0';
  local_5 = '\0';
  pcVar4 = st::pointer_boundary_cast<char *>(&param_1->field_0x9);
  iVar7 = 6;
  do {
    if (*pcVar4 != '\0') {
      cVar3 = cVar3 + '\x01';
    }
    pcVar4 = pcVar4 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar7 = 6;
  pcVar4 = st::pointer_boundary_cast<char *>(&param_2->field_0x9);
  do {
    if (*pcVar4 != '\0') {
      local_5 = local_5 + '\x01';
    }
    pcVar4 = pcVar4 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if (cVar3 != local_5) {
    if (DAT_0080874e != '\x03') {
      st::fn_0040556F(st::pointer_boundary_cast<CPanelTy *>(this));
      return;
    }
    st::fn_0040296E(st::pointer_boundary_cast<CPanelTy *>(this));
    return;
  }
  iVar7 = 3;
  bVar10 = true;
  psVar5 = (short *)&param_1->field_0x9;
  psVar8 = (short *)&param_2->field_0x9;
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    bVar10 = *psVar5 == *psVar8;
    psVar5 = psVar5 + 1;
    psVar8 = psVar8 + 1;
  } while (bVar10);
  if (bVar10) {
    if (*(int *)param_1 != *(int *)param_2) {
      STField<undefined4>(this,0x28) = 5;
      st::fn_006E6080(this,2,STField<undefined4>(this,0x2fe),(undefined4 *)((int)this + 0x18));
      bVar1 = 0;
      pcVar4 = st::pointer_boundary_cast<char *>(&param_1->field_0x9);
      do {
        if (*pcVar4 != '\0') {
          st::fn_0040313E(st::pointer_boundary_cast<CPanelTy *>(this),1,bVar1);
        }
        bVar1 = bVar1 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar1 < 6);
      st::fn_00404BA1(st::pointer_boundary_cast<CPanelTy *>(this),'\x01');
      st::fn_004040FC(g_cursorClass_00802A30);
    }
    if (param_1->field_0x8 != param_2->field_0x8) {
      st::fn_00404BA1(st::pointer_boundary_cast<CPanelTy *>(this),'\x01');
    }
  }
  else {
    STField<undefined4>(this,0x28) = 5;
    st::fn_006E6080(this,2,STField<undefined4>(this,0x2fe),(undefined4 *)((int)this + 0x18));
    bVar1 = 0;
    pcVar4 = st::pointer_boundary_cast<char *>(&param_1->field_0x9);
    do {
      if (*pcVar4 != '\0') {
        st::fn_0040313E(st::pointer_boundary_cast<CPanelTy *>(this),1,bVar1);
      }
      bVar1 = bVar1 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar1 < 6);
    st::fn_00404BA1(st::pointer_boundary_cast<CPanelTy *>(this),'\x01');
    st::fn_004040FC(g_cursorClass_00802A30);
  }
  iVar7 = 3;
  bVar10 = true;
  psVar5 = (short *)&param_1->field_0xf;
  psVar8 = (short *)&param_2->field_0xf;
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    bVar10 = *psVar5 == *psVar8;
    psVar5 = psVar5 + 1;
    psVar8 = psVar8 + 1;
  } while (bVar10);
  if ((!bVar10) || (param_1->field_0007 != param_2->field_0007)) {
    st::fn_00404F89(st::pointer_boundary_cast<CPanelTy *>(this),'\x01',(int)param_1,(int)param_2);
  }
  if (((param_1->field_0015 != param_2->field_0015) || (param_1->field_0007 != param_2->field_0007))
     && (STField<int>(this,0x9c0) != 0)) {
    STField<undefined4>(this,0x28) = 0x20;
    if (param_1->field_0007 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = (uint)(byte)param_1->field_0015;
    }
    STField<uint>(this,0x2c) = uVar2;
    st::fn_006E6080(this,2,STField<int>(this,0x9c0),(undefined4 *)((int)this + 0x18));
  }
  piVar9 = &param_1->field_0036;
  if ((param_1->field_0036 != param_2->field_0036) || (param_1->field_0007 != param_2->field_0007))
  {
    piVar6 = (int *)((int)this + 0x960);
    auto param_2_after_write = (RecoveredRecord_CPanelTy_00501D00 *)0x4; /* compiler stack-slot lifetime split */
    do {
      if (*piVar6 != 0) {
        STField<undefined4>(this,0x28) = 0x20;
        if (param_1->field_0007 == '\0') {
          uVar2 = 0;
        }
        else {
          uVar2 = (uint)(byte)*piVar9;
        }
        STField<uint>(this,0x2c) = uVar2;
        st::fn_006E6080(this,2,*piVar6,(undefined4 *)((int)this + 0x18));
      }
      piVar6 = piVar6 + 1;
      piVar9 = (int *)((int)piVar9 + 1);
      param_2_after_write = (RecoveredRecord_CPanelTy_00501D00 *)&param_2_after_write[-1].field_0x3b;
    } while (param_2_after_write != nullptr);
  }
  return;
}

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
uint __thiscall st::fn_00505070(void *this,byte param_1)

{
  uint uVar1;

  uVar1 = st::fn_00403D7D(st::pointer_boundary_cast<CPanelTy *>(this),param_1);
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

  this = (FrmPanelTy *)st::fn_006B04D0(0x1e3);
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

