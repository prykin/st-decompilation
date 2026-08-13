#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/0053.cpp

// 005335E0 FUN_005335e0
#line 4 "decomp/ST.exe/functions/005335E0/decomp.c"
void st::fn_005335E0(void)

{
  char cVar1;
  int iVar2;
  uint *puVar2;
  DWORD DVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  InternalExceptionFrame local_54;
  uint local_10;
  uint *local_c;
  undefined4 *local_8;
  char *pcVar7_mg2;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar2 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  if (DAT_00808783 == '\x03') {
    uVar4 = 0xffffffff;
    local_c = nullptr;
    pcVar7 = (char *)((int)local_8 + 0x1f5);
    pcVar9 = pcVar7;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    local_10 = ~uVar4 + 0xd;
    puVar2 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(local_10));
    local_c = puVar2;
    if (puVar2 != nullptr) {
      *(undefined1 *)puVar2 = 2;
      STField<uint>(puVar2,1) = ~uVar4;
      STField<undefined4>(puVar2,5) = DAT_008087be;
      DVar3 = st::external_000000DA();
      STField<DWORD>(puVar2,9) = DVar3;
      uVar4 = 0xffffffff;
      do {
        pcVar9 = pcVar7;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar9 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar7 = pcVar9 + -uVar4;
      pcVar9 = (char *)((int)puVar2 + 0xd);
      memmove(pcVar9, pcVar7, uVar4); /* compiler REP MOVS byte copy */
      uVar5 = 0;
      st::fn_00403C33((undefined4 *)0x32,local_c,1,local_10);
      st::fn_006AB060(&local_c);
    }
  }
  else {
    uVar4 = 0xffffffff;
    pcVar7 = &CHAR_00h_00807680;
    do {
      pcVar9 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar9 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar7 = pcVar9 + -uVar4;
    pcVar9 = &CHAR_00h_0080f022;
    memmove(pcVar9, pcVar7, uVar4); /* compiler REP MOVS byte copy */
    uVar5 = 0;
    uVar4 = 0xffffffff;
    pcVar7_mg2 = st_global_0079ACEC;
    do {
      pcVar7 = pcVar7_mg2;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = pcVar7_mg2 + 1;
      cVar1 = *pcVar7_mg2;
      pcVar7_mg2 = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar6 = -1;
    pcVar9 = &CHAR_00h_0080f022;
    do {
      pcVar8 = pcVar9;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar8 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar8;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + -uVar4;
    pcVar9 = pcVar8 + -1;
    memmove(pcVar9, pcVar7, uVar4); /* compiler REP MOVS byte copy */
    uVar5 = 0;
    uVar4 = 0xffffffff;
    pcVar7 = &CHAR_00h_00807ddd;
    do {
      pcVar9 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar9 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar6 = -1;
    pcVar7 = &CHAR_00h_0080f022;
    do {
      pcVar8 = pcVar7;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    pcVar7 = pcVar9 + -uVar4;
    pcVar9 = pcVar8 + -1;
    memmove(pcVar9, pcVar7, uVar4); /* compiler REP MOVS byte copy */
    uVar5 = 0;
    st::fn_006B8280(&CHAR_00h_0080f022,&CHAR_00h_0080f022);
    uVar4 = 0xffffffff;
    pcVar7 = st::pointer_boundary_cast<char *>(PTR_DAT_0079ad00);
    do {
      pcVar9 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar9 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar6 = -1;
    pcVar7 = &CHAR_00h_0080f022;
    do {
      pcVar8 = pcVar7;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    pcVar7 = pcVar9 + -uVar4;
    pcVar9 = pcVar8 + -1;
    memmove(pcVar9, pcVar7, uVar4); /* compiler REP MOVS byte copy */
    uVar5 = 0;
    uVar4 = 0xffffffff;
    pcVar7 = (char *)((int)local_8 + 0x1f5);
    do {
      pcVar9 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar9 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar6 = -1;
    pcVar7 = &CHAR_00h_0080f022;
    do {
      pcVar8 = pcVar7;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    pcVar7 = pcVar9 + -uVar4;
    pcVar9 = pcVar8 + -1;
    memmove(pcVar9, pcVar7, uVar4); /* compiler REP MOVS byte copy */
    DAT_00808794 = 1;
  }
  local_8[10] = 0xc001;
  local_8[0xd] = 0;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)*local_8)(local_8 + 6);
  g_currentExceptionFrame = local_54.previous;
  return;
}

// 00533B80 FUN_00533b80
#line 4 "decomp/ST.exe/functions/00533B80/decomp.c"
void __fastcall st::fn_00533B80(RecoveredRecord_STPlaySystemC_00533B80 *param_1)

{
  uint uVar1;
  char *resourceString;
  UINT resourceId;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_24 [4];
  undefined4 local_14;

  if ((DAT_008067a0 != '\0') && (param_1->field_0172 != 2)) {
    if ((param_1->field_01A4 == '\x05') && (param_1->field_01AB == '\x04')) {
      st::fn_006B55F0
                ((RecoveredSourceFamily_dibcopy *)param_1->field_0068,0,0x1d,0x13,
                 param_1->field_0184,0,0x1d,0x13,0xee,0x6a);
      st::fn_00710A90(param_1->field_0180,param_1->field_0068,0,0x1d,0x13,0xee,0x6a);
      if (DAT_008067a0 == '\0') {
        resourceId = 0x3e84;
      }
      else {
        resourceId = 0x3e96 - (g_playSystem_00802A38->field_00E4 - g_playSystem_00802A38->field_0034
                              < 6000);
      }
      param_1->field_01A5 = resourceId;
      if (DAT_0080874e == '\x03') {
        uVar1 = 5;
      }
      else {
        uVar1 = -(uint)(DAT_0080874e != '\x01') & 7;
      }
      iVar5 = -1;
      iVar4 = -1;
      iVar3 = -1;
      iVar2 = -2;
      resourceString = st::fn_006B0140(resourceId,g_hINSTANCE_00807618);
      st::fn_00711B70(param_1->field_0180,resourceString,iVar2,iVar3,uVar1,iVar4,iVar5);
      st::fn_006B3640
                ((int *)g_ddxContext_008075A8,param_1->field_0060,0xffffffff,param_1->field_003C,
                 param_1->field_0044);
      return;
    }
    if (param_1->field_01A4 == '\x01') {
      local_14 = 5;
      if (param_1->field_01C1 != 0) {
        st::fn_006E6080(param_1,2,param_1->field_01C1,local_24);
      }
    }
  }
  return;
}

// 005391E0 CreatePausePanel
#line 4 "decomp/ST.exe/functions/005391E0/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA854>004021CB

   [STObjectFactoryApplier] Central object factory for 0x0123 (ST_OBJECT_PAUSE_PANEL).
   Evidence: registry[38] at 007CA850 stores type 0x0123 and executable pointer 004021CB; allocation
   size 392 uniquely matches /PausePanelTy */

PausePanelTy * __cdecl st::fn_005391E0(void)

{
  PausePanelTy *this;

  this = (PausePanelTy *)st::fn_006B04D0(0x188);
  if (this != nullptr) {
    st::fn_006E5FB0(this);
    this->field_005C = 0;
    this->field_003C = 0;
    this->field_0068 = 0;
    this->field_0178 = 0;
    this->field_017C = nullptr;
    this->field_0180 = nullptr;
    this->field_0184 = 0;
    this->field_0060 = 0xffffffff;
    this->field_0064 = 4;
    this->field_0172 = CASE_2;
    this->vtable = &st_global_0079AD2C;
    this->field_0044 = 0x9c;
    this->field_0040 = 0x174;
    this->field_0048 = 0xa0;
    return this;
  }
  return nullptr;
}

// 00539AA0 CreatePlayPanel
#line 4 "decomp/ST.exe/functions/00539AA0/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA90C>004018B1

   [STObjectFactoryApplier] Central object factory for 0x0154 (ST_OBJECT_TYPE_0154).
   Evidence: registry[61] at 007CA908 stores type 0x0154 and executable pointer 004018B1; allocation
   size 481 has no unique current class-layout match */

PlayPanelTy * __cdecl st::fn_00539AA0(void)

{
  PlayPanelTy *this;

  this = (PlayPanelTy *)st::fn_006B04D0(0x1e1);
  if (this != nullptr) {
    st::fn_006E5FB0(this);
    this->field_005C = 0;
    this->field_0044 = 0;
    this->field_003C = 0;
    this->field_0060 = 0xffffffff;
    this->field_0064 = 4;
    this->field_0068 = nullptr;
    this->field_0172 = CASE_2;
    this->field_0178 = 0;
    this->vtable = &st_global_0079AD48;
    this->field_0040 = 0x1d0;
    this->field_0048 = 0xdc;
    this->field_0180 = 0;
    this->field_01CD = nullptr;
    this->field_01DD = nullptr;
    this->field_01D9 = nullptr;
    this->field_01D5 = nullptr;
    this->field_01D1 = nullptr;
    this->field_01C1 = 0;
    this->field_01C5 = 0;
    this->field_017C = 0;
    memset(&this->field_0181, 0, 0x40); /* compiler bulk-zero initialization */
    this->field_01C9 = 0;
    return this;
  }
  return nullptr;
}

// 0053BFF0 CreateResearchPanel
#line 4 "decomp/ST.exe/functions/0053BFF0/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA8D4>00401596

   [STObjectFactoryApplier] Central object factory for 0x0127 (ST_OBJECT_RESEARCH_PANEL).
   Evidence: registry[54] at 007CA8D0 stores type 0x0127 and executable pointer 00401596; allocation
   size 646 uniquely matches /ResearchPanelTy */

ResearchPanelTy * __cdecl st::fn_0053BFF0(void)

{
  ResearchPanelTy *this;
  undefined4 *puVar2;

  this = (ResearchPanelTy *)st::fn_006B04D0(0x286);
  if (this != nullptr) {
    st::fn_006E5FB0(this);
    this->field_005C = 0;
    this->field_0060 = 0xffffffff;
    this->field_0064 = 4;
    this->field_0068 = 0;
    this->field_0172 = 2;
    this->field_0178 = 0;
    this->field_017C = 0;
    this->field_0184 = nullptr;
    this->field_0190 = nullptr;
    this->field_0188 = nullptr;
    this->field_019D = 0;
    this->field_0180 = 0;
    this->field_01A1 = 0;
    this->field_01A5 = 0;
    this->field_01A9 = 0;
    this->field_01AD = 0;
    this->field_01B1 = 0;
    puVar2 = (undefined4 *)&this->field_01B5;
    memset(puVar2, 0, 0xc3); /* compiler bulk-zero initialization */
    puVar2 = (undefined4 *)((byte *)puVar2 + 0xc0);
    this->field_0199 = 0;
    this->field_0279 = 1;
    this->field_0278 = 0;
    this->vtable = &st_global_0079AD64;
    this->field_003C = 0x1c7;
    this->field_0044 = 0;
    this->field_0040 = 0x13d;
    this->field_0048 = 100;
    this->field_0194 = 0;
    this->field_0195 = 0;
    this->field_0282 = 0;
    this->field_027E = 0;
    this->field_027A = 0;
    return this;
  }
  return nullptr;
}

// 0053CE10 CreateSAMPanel
#line 4 "decomp/ST.exe/functions/0053CE10/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CAA0C>00405D44

   [STObjectFactoryApplier] Central object factory for 0x0159 (ST_OBJECT_SAM_PANEL).
   Evidence: registry[93] at 007CAA08 stores type 0x0159 and executable pointer 00405D44; allocation
   size 465 uniquely matches /SAMPanelTy */

SAMPanelTy * __cdecl st::fn_0053CE10(void)

{
  SAMPanelTy *this;

  this = (SAMPanelTy *)st::fn_006B04D0(0x1d1);
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
    this->vtable = &st_global_0079AD8C;
    this->field_003C = 0xc;
    this->field_0044 = 0;
    this->field_0040 = 0x128;
    this->field_0048 = 0x8c;
    this->field_0180 = 1;
    this->field_0184 = 0;
    this->field_01AB = 0;
    this->field_01AF = 0;
    memset(&this->field_01B5, 0, 0x1c); /* compiler bulk-zero initialization */
    this->field_01B1 = nullptr;
    return this;
  }
  return nullptr;
}

// 0053F510 FUN_0053f510
#line 4 "decomp/ST.exe/functions/0053F510/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_0053F510(void *this,uint param_1,uint param_2)

{
  if (param_1 < 5) {
    STField<undefined4>(this,0x199) = 0;
  }
  if (param_1 - 5 < STField<uint>(this,0x199)) {
    STField<uint>(this,0x199) = ~-(uint)(param_1 < 5) & param_1 - 5;
  }
  if (param_1 < 5) {
    STField<undefined4>(this,0x2c) = 0;
    STField<undefined4>(this,0x28) = 0x20;
    st::fn_006E6080(this,2,STField<undefined4>(this,0x19d),(undefined4 *)((int)this + 0x18));
    return;
  }
  if (param_2 < 5) {
    STField<undefined4>(this,0x28) = 0x20;
    STField<undefined4>(this,0x2c) = 1;
    st::fn_006E6080(this,2,STField<undefined4>(this,0x19d),(undefined4 *)((int)this + 0x18));
  }
  if (param_2 != param_1) {
    STField<uint>(this,0x2c) = param_1 - 4;
    STField<undefined4>(this,0x28) = 0x28;
    st::fn_006E6080(this,2,STField<undefined4>(this,0x19d),(undefined4 *)((int)this + 0x18));
    STField<undefined4>(this,0x28) = 0x22;
    STField<undefined4>(this,0x2c) = STField<undefined4>(this,0x199);
    st::fn_006E6080(this,2,STField<undefined4>(this,0x19d),(undefined4 *)((int)this + 0x18));
    return;
  }
  STField<undefined4>(this,0x28) = 5;
  st::fn_006E6080(this,2,STField<undefined4>(this,0x19d),(undefined4 *)((int)this + 0x18));
  return;
}

