#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/005B.cpp

// 005B2790 CreateChooseMap
#line 4 "decomp/ST.exe/functions/005B2790/decomp.c"
/* [STObjectFactoryApplier] Central object factory for 0x0305 (ST_OBJECT_CHOOSE_MAP).
   Evidence: registry[42] at 007CA870 stores type 0x0305 and executable pointer 00405C8B; allocation
   size 8388 uniquely matches /ChooseMapTy; calls base/helper constructor(s) SpriteClassTy; exact
   derived allocation size wins */

ChooseMapTy * __cdecl st::fn_005B2790(void)

{
  ChooseMapTy *this;
  int iVar1;
  ChooseMapTy_Record_00BC_01FB *pCVar2;
  SpriteClassTy *this_00;
  ChooseMapTy_Record_00BC_01FB *pCVar4;
  uint *puVar5;
  int local_8;

  this = (ChooseMapTy *)st::fn_006B04D0(0x20c4);
  if (this != nullptr) {
    st::fn_006E5FB0(this);
    this->vtable = (ChooseMapTyVTable *)&st_global_0079C018;
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
      this_00 = (SpriteClassTy *)&this_00[3].field_0048;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    this->vtable = (ChooseMapTyVTable *)&st_global_0079C008;
    this->field_0065 = 2;
    this->field_009A = 0;
    memset(&this->field_0x66, 0, 0x34); /* compiler bulk-zero initialization */
    iVar1 = 0;
    local_8 = 0xd;
    pCVar2 = this->array_00BC;
    do {
      pCVar4 = pCVar2;
      for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined4 *)pCVar4 = 0;
        pCVar4 = (ChooseMapTy_Record_00BC_01FB *)&pCVar4->field_0x4;
      }
      *(undefined2 *)pCVar4 = 0;
      pCVar4->field_0x2 = 0;
      local_8 = local_8 + -1;
      pCVar2 = pCVar2 + 1;
    } while (local_8 != 0);
    st::fn_00715820((SpriteClassTy *)&this->array_00BC[0xc].field_01F0);
    st::fn_00715820((SpriteClassTy *)&this->field_1B01);
    st::fn_00715820((SpriteClassTy *)&this->field_1B92);
    this->vtable = &st_global_0079C088;
    this->array_00BC[0xc].field_01E0 = 1;
    this->array_00BC[0xc].field_01EC = 0;
    puVar5 = &this->field_1C23;
    for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    this->field_1C87 = 0xffffffff;
    this->field_1C7B = nullptr;
    this->field_1C7F = nullptr;
    this->field_1C97 = nullptr;
    this->field_1C9B = nullptr;
    this->field_1C9F = nullptr;
    this->field_1C8F = (HANDLE)0x0;
    this->field_1C93 = 0;
    this->field_20C0 = nullptr;
    this->field_20BC = nullptr;
    this->field_20B8 = nullptr;
    this->array_00BC[0xc].field_01E4 = 0;
    this->array_00BC[0xc].field_01E8 = 0;
    this->field_1C83 = 0;
    this->field_1C8B = nullptr;
    return this;
  }
  return nullptr;
}

// 005B50E0 CreateMainMenu
#line 4 "decomp/ST.exe/functions/005B50E0/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA85C>0040409D

   [STObjectFactoryApplier] Central object factory for 0x0301 (ST_OBJECT_MAIN_MENU).
   Evidence: registry[39] at 007CA858 stores type 0x0301 and executable pointer 0040409D; allocation
   size 7908 uniquely matches /MainMenuTy; calls base/helper constructor(s) SpriteClassTy; exact
   derived allocation size wins */

MainMenuTy * __cdecl st::fn_005B50E0(void)

{
  MainMenuTy *this;
  int iVar1;
  undefined4 *puVar3;
  SpriteClassTy *this_00;
  undefined4 *puVar4;

  this = (MainMenuTy *)st::fn_006B04D0(0x1ee4);
  if (this != nullptr) {
    st::fn_006E5FB0(this);
    this->vtable = (MainMenuTyVTable *)&st_global_0079C018;
    this->field_0018 = 0;
    this->field_005D = 0;
    memset(&this->field_0x1d, 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    memset(&this->field_0x3d, 0, 0x20); /* compiler bulk-zero initialization */
    DAT_0080879c = 0;
    this_00 = &this->field_00BB[0].field_00B9;
    iVar1 = 0xd;
    do {
      st::fn_00715820(this_00 + -1);
      st::fn_00715820(this_00);
      st::fn_00715820(this_00 + 1);
      this_00 = (SpriteClassTy *)&this_00[3].field_0048;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    this->vtable = (MainMenuTyVTable *)&st_global_0079C008;
    this->field_0065 = 2;
    this->field_009A = 0;
    memset(this->field_0066, 0, 0x34); /* compiler bulk-zero initialization */
    iVar1 = 0xd;
    puVar3 = &this->field_00BB[0].field_0001;
    do {
      puVar4 = puVar3;
      memset(puVar4, 0, 0x27); /* compiler bulk-zero initialization */
      puVar4 = (undefined4 *)((byte *)puVar4 + 0x24);
      iVar1 = iVar1 + -1;
      puVar3 = (undefined4 *)((int)puVar3 + 0x1fb);
    } while (iVar1 != 0);
    this->vtable = &st_global_0079C098;
    memset(&this->field_1A7F, 0, 0x28); /* compiler bulk-zero initialization */
    iVar1 = 0;
    memset(this->field_1AA7, 0, 0x28); /* compiler bulk-zero initialization */
    iVar1 = 0;
    this->field_1ACF = 0;
    this->field_1EE3 = 0;
    this->field_1EDF = 1;
    memset(&this->field_00BB[0xc].field_0x1e0, 0, 0x20); /* compiler bulk-zero initialization */
    return this;
  }
  return nullptr;
}

// 005B6350 FUN_005b6350
#line 4 "decomp/ST.exe/functions/005B6350/decomp.c"
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 005B0BA0 -> 005B6350 @ 005B1838 | 005C8A40 -> 005B6350 @ 005C9D64

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00593040 -> 005B6350 @ 005934EB; zeroed full register at 005934CA | 005B0BA0 ->
   005B6350 @ 005B1AA1; zeroed full register at 005B1A67 | 005E84D0 -> 005B6350 @ 005E8DC7;
   zero-filled partial register load at 005E8DB9

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=30, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_005B6350(void *this,undefined4 param_1,uint param_2,uint param_3)

{
  STField<undefined1>(this,0x1a5a) = 0xc;
  STField<undefined4>(this,0x188d) = STField<undefined4>(this,8);
  *(undefined4 *)((uint)STField<byte>(this,0x1a5a) * 0x1fb + 0xcd + (int)this) = 2;
  *(undefined4 *)((uint)STField<byte>(this,0x1a5a) * 0x1fb + 0xd1 + (int)this) = param_1;
  *(uint *)((uint)STField<byte>(this,0x1a5a) * 0x1fb + 0xd5 + (int)this) = param_2;
  *(uint *)((uint)STField<byte>(this,0x1a5a) * 0x1fb + 0xd9 + (int)this) = param_3;
  return;
}

// 005B6450 FUN_005b6450
#line 4 "decomp/ST.exe/functions/005B6450/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00593040 -> 005B6450 @ 0059308C | 005A4350 -> 005B6450 @ 005A43A8 | 005B0BA0 ->
   005B6450 @ 005B0BEF | 005B4BB0 -> 005B6450 @ 005B4C07 | 005B9330 -> 005B6450 @ 005B937A |
   005BC5E0 -> 005B6450 @ 005BC638 | 005C8A40 -> 005B6450 @ 005C8A98 | 005D9470 -> 005B6450 @
   005D94BB | 005EA680 -> 005B6450 @ 005EA6CF

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=9, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_005B6450(void *this,STMessage *param_1)

{
  if (param_1->id == MESS_ID_CREATE) {
    STField<StartSystemTy *>(this,0x1a5b) = g_startSystem_0081176C;
  }
  return;
}

// 005B66E0 FUN_005b66e0
#line 4 "decomp/ST.exe/functions/005B66E0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005DFA30 -> 005B66E0 @ 005E0239

   [STPrototypeApplier] Propagated return.
   Evidence: 005B66E0 returns return of sub_006E60A0 @ 005B6719 */

int __fastcall st::fn_005B66E0(MTaskTy *param_1)

{
  int iVar1;

  memset(&param_1->field_0x1d, 0, 0x20); /* compiler bulk-zero initialization */
  param_1->field_0025 = param_1->field_000C->field_0014;
  param_1->field_0029 = 0;
  param_1->field_002D = 10;
  param_1->field_0031 = param_1->field_0008;
  iVar1 = st::fn_006E60A0(param_1,(undefined4 *)&param_1->field_0x1d);
  return iVar1;
}

// 005B6730 FUN_005b6730
#line 4 "decomp/ST.exe/functions/005B6730/decomp.c"
void __thiscall st::fn_005B6730(void *this,uint param_1,char param_2,int param_3)

{
  if ((STField<int>(this,0x18) != 0) && (param_1 == 3)) {
    STField<undefined4>(this,0x18) = 0;
    return;
  }
  if (param_1 == 4) {
    STField<undefined4>(this,0x18) = 1;
  }
  if ((STPiece<1,1>(DAT_00807300) & 8) != 0) {
    st::fn_00402FD1(&g_sound,param_1,param_2,param_3,nullptr);
  }
  return;
}

// 005B8F90 FUN_005b8f90
#line 4 "decomp/ST.exe/functions/005B8F90/decomp.c"
void __thiscall st::fn_005B8F90(void *this,uint param_1)

{
  uint uVar1;
  byte bVar2;

  uVar1 = param_1;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((param_1 != 0) && (param_1 = 0, STField<char>(this,0x9a) != '\0')) {
    do {
      if (*(char *)(param_1 + uVar1) != '\0') {
        *(undefined4 *)(param_1 * 0x1fb + 0xbc + (int)this) = 0;
      }
      bVar2 = (char)param_1 + 1;
      param_1 = (uint)bVar2;
    } while (bVar2 < STField<byte>(this,0x9a));
  }
  return;
}

// 005B95B0 CreateMMsg
#line 4 "decomp/ST.exe/functions/005B95B0/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA88C>00402AA9

   [STObjectFactoryApplier] Central object factory for 0x0303 (ST_OBJECT_TYPE_0303).
   Evidence: registry[45] at 007CA888 stores type 0x0303 and executable pointer 00402AA9; allocation
   size 7850 has no unique current class-layout match */

MMsgTy * __cdecl st::fn_005B95B0(void)

{
  MMsgTy *this;
  int iVar1;
  int iVar2;
  MMsgTy_Record_00BC_01FB *pMVar3;
  SpriteClassTy *this_00;
  MMsgTy_Record_00BC_01FB *pMVar5;

  this = (MMsgTy *)st::fn_006B04D0(0x1eaa);
  if (this != nullptr) {
    st::fn_006E5FB0(this);
    this->vtable = (MMsgTyVTable *)&st_global_0079C018;
    this->field_0018 = 0;
    this->field_005D = 0;
    memset(&this->field_0x1d, 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    memset(&this->field_0x3d, 0, 0x20); /* compiler bulk-zero initialization */
    DAT_0080879c = 0;
    this_00 = &this->array_00BC[0].field_00B8;
    iVar1 = 0xd;
    do {
      st::fn_00715820(this_00 + -1);
      st::fn_00715820(this_00);
      st::fn_00715820(this_00 + 1);
      this_00 = (SpriteClassTy *)&this_00[3].field_0048;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    this->vtable = (MMsgTyVTable *)&st_global_0079C008;
    this->field_0065 = 2;
    this->field_009A = 0;
    memset(this->field_0066, 0, 0x34); /* compiler bulk-zero initialization */
    iVar1 = 0xd;
    pMVar3 = this->array_00BC;
    do {
      pMVar5 = pMVar3;
      for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
        pMVar5->field_0000 = 0;
        pMVar5 = (MMsgTy_Record_00BC_01FB *)&pMVar5->field_0x4;
      }
      *(undefined2 *)&pMVar5->field_0000 = 0;
      iVar1 = iVar1 + -1;
      *(undefined1 *)((int)&pMVar5->field_0000 + 2) = 0;
      pMVar3 = pMVar3 + 1;
    } while (iVar1 != 0);
    st::fn_00715820((SpriteClassTy *)&this->field_0x1cf7);
    st::fn_00715820((SpriteClassTy *)&this->field_1D88);
    st::fn_00715820((SpriteClassTy *)&this->field_0x1e19);
    this->vtable = &st_global_0079C0A8;
    this->array_00BC[0xc].field_01DF = 0;
    this->field_1CAA = 0;
    this->field_1CA9 = 0;
    this->field_1CAB = 0;
    memset(&this->field_0x1c82, 0, 0x1a); /* compiler bulk-zero initialization */
    this->field_1C9C = 0x1010101;
    this->field_1CA0 = 0x1010101;
    this->field_1CA4 = 0x1010101;
    this->field_1CA8 = 1;
    return this;
  }
  return nullptr;
}

// 005BBA40 FUN_005bba40
#line 4 "decomp/ST.exe/functions/005BBA40/decomp.c"
void __fastcall st::fn_005BBA40(AnonShape_005BB9F0_E38C41BB *param_1)

{
  param_1->field_1A65 = 0;
  param_1->field_0029 = 2;
  param_1->field_002D = 0x20;
  if (param_1->field_1A73 != 0) {
    param_1->field_0025 = param_1->field_1A73;
    param_1->field_0031 = 0;
    /* ST_CALLSITE[005BBA71]: CALL dword ptr [EDX + 0x18] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*param_1->field_000C + 0x18))(&param_1->field_0x1d);
  }
  return;
}

// 005BD2E0 CreatePrivider
#line 4 "decomp/ST.exe/functions/005BD2E0/decomp.c"
/* [STObjectFactoryApplier] Central object factory for 0x030A (ST_OBJECT_PRIVIDER).
   Evidence: registry[48] at 007CA8A0 stores type 0x030A and executable pointer 004051A0; allocation
   size 7326 uniquely matches /PrividerTy; calls base/helper constructor(s) SpriteClassTy; exact
   derived allocation size wins */

PrividerTy * __cdecl st::fn_005BD2E0(void)

{
  PrividerTy *this;
  int iVar1;
  PrividerTy_Record_00BC_01FB *pPVar2;
  SpriteClassTy *this_00;
  PrividerTy_Record_00BC_01FB *pPVar4;
  uint *puVar5;
  int local_8;

  this = (PrividerTy *)st::fn_006B04D0(0x1c9e);
  if (this != nullptr) {
    st::fn_006E5FB0(this);
    this->vtable = (PrividerTyVTable *)&st_global_0079C018;
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
      this_00 = (SpriteClassTy *)&this_00[3].field_0048;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    this->vtable = (PrividerTyVTable *)&st_global_0079C008;
    this->field_0065 = 2;
    this->field_009A = 0;
    memset(&this->field_0x66, 0, 0x34); /* compiler bulk-zero initialization */
    iVar1 = 0;
    local_8 = 0xd;
    pPVar2 = this->array_00BC;
    do {
      pPVar4 = pPVar2;
      for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined4 *)pPVar4 = 0;
        pPVar4 = (PrividerTy_Record_00BC_01FB *)&pPVar4->field_0x4;
      }
      *(undefined2 *)pPVar4 = 0;
      pPVar4->field_0x2 = 0;
      local_8 = local_8 + -1;
      pPVar2 = pPVar2 + 1;
    } while (local_8 != 0);
    st::fn_00715820((SpriteClassTy *)&this->array_00BC[0xc].field_01F7);
    st::fn_00715820((SpriteClassTy *)&this->field_1B08);
    st::fn_00715820((SpriteClassTy *)&this->field_1B99);
    this->vtable = &st_global_0079C0C4;
    this->array_00BC[0xc].field_01E5 = 1;
    this->array_00BC[0xc].field_01F3 = 0;
    this->array_00BC[0xc].field_01E1 = 0;
    this->array_00BC[0xc].field_01F1 = 0;
    this->array_00BC[0xc].field_01E9 = 0;
    this->array_00BC[0xc].field_01ED = 0;
    this->array_00BC[0xc].field_01F2 = 0;
    puVar5 = this->field_1C2A;
    for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    this->field_1C8A = 0xffffffff;
    this->field_1C82 = nullptr;
    this->field_1C86 = 0;
    this->field_1C8E = nullptr;
    this->field_1C92 = nullptr;
    this->field_1C9A = nullptr;
    this->field_1C96 = nullptr;
    return this;
  }
  return nullptr;
}

