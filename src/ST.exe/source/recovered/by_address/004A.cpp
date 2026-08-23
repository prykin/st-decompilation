#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/004A.cpp

// 004A0EE0 FUN_004a0ee0
#line 4 "decomp/ST.exe/functions/004A0EE0/decomp.c"
void __thiscall st::fn_004A0EE0(void *this,ushort param_1)

{
  DArrayTy *array;
  uint index;
  undefined4 local_1c;
  ushort local_18;

  st::fn_00404FF2(this,(uint)param_1);
  if (((STField<int>(this,0x1e6) == 6) &&
      (array = STField<DArrayTy *>(this,0x22e), array != nullptr)) &&
     (index = 0, 0 < (int)array->count)) {
    do {
      st::fn_006ACC70(array,index,&local_1c);
      if (local_18 == param_1) {
        local_18 = 0xffff;
        local_1c = 0;
        st::fn_006AE140(STField<DArrayTy *>(this,0x22e),index,&local_1c);
      }
      array = STField<DArrayTy *>(this,0x22e);
      index = index + 1;
    } while ((int)index < (int)array->count);
  }
  st::fn_00405051(this,param_1);
  return;
}

// 004A8220 FUN_004a8220
#line 4 "decomp/ST.exe/functions/004A8220/decomp.c"
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: raw retained-width parameter lifetime: width=2, reads=2, sites=004A8272 MOV AX,word ptr
   [EBP + 0x10] | 004A82DE MOV AX,word ptr [EBP + 0x10] */

void __thiscall st::fn_004A8220(void *this,char param_1,short param_2,ushort param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 local_8;

  local_8 = st::machine_word_boundary_cast<undefined4>(this);
  if (((STField<int>(this,0xef) != 0) &&
      (iVar1 = *(int *)(STField<int>(this,0xef) + 0xc), iVar1 != 0)) && (uVar2 = 0, 0 < iVar1)) {
    do {
      st::fn_006ACC70(STField<DArrayTy *>(this,0xef),uVar2,&local_8);
      if ((STPiece<2,2>(local_8) == param_2) && ((char)local_8 == param_1)) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_8 = st::machine_word_boundary_cast<undefined4>((void *)CONCAT22(param_3,(undefined2)local_8));
        st::fn_006AE140(STField<DArrayTy *>(this,0xef),uVar2,&local_8);
        break;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < iVar1);
  }
  if (((STField<int>(this,0x1e6) == 2) && (STField<int>(this,0x20e) != 0)) &&
     ((iVar1 = *(int *)(STField<int>(this,0x20e) + 0xc), iVar1 != 0 && (uVar2 = 0, 0 < iVar1))))
  {
    while( true ) {
      st::fn_006ACC70(STField<DArrayTy *>(this,0x20e),uVar2,&local_8);
      if ((STPiece<2,2>(local_8) == param_2) && ((char)local_8 == param_1)) break;
      uVar2 = uVar2 + 1;
      if (iVar1 <= (int)uVar2) {
        return;
      }
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_8 = st::machine_word_boundary_cast<undefined4>((void *)CONCAT22(param_3,(undefined2)local_8));
    st::fn_006AE140(STField<DArrayTy *>(this,0x20e),uVar2,&local_8);
  }
  return;
}

// 004A8890 CreateSTGroupBoat
#line 4 "decomp/ST.exe/functions/004A8890/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA7FC>0040111D

   [STObjectFactoryApplier] Central object factory for 0x10FF (ST_OBJECT_TYPE_10FF).
   Evidence: registry[27] at 007CA7F8 stores type 0x10FF and executable pointer 0040111D; allocation
   size 786 has no unique current class-layout match */

STGroupBoatC * __cdecl st::fn_004A8890(void)

{
  STGroupBoatC *pSVar1;

  pSVar1 = (STGroupBoatC *)st::fn_006B04D0(0x312);
  if (pSVar1 != nullptr) {
    pSVar1 = st::fn_00403A8A(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

// 004A88F0 CreateOpticClass
#line 4 "decomp/ST.exe/functions/004A88F0/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA774>00401C5D

   [STObjectFactoryApplier] Central object factory for 0x0100 (ST_OBJECT_TYPE_0100).
   Evidence: registry[10] at 007CA770 stores type 0x0100 and executable pointer 00401C5D; allocation
   size 32 has no unique current class-layout match */

OpticClassC * __cdecl st::fn_004A88F0(void)

{
  OpticClassC *this;

  this = (OpticClassC *)st::fn_006B04D0(0x20);
  if (this != nullptr) {
    /* ST_CALLSITE[004A88FD]: CALL 0x00401da7; direct=00401DA7 OpticClassC::OpticClassC */
    g_opticClass_007FB2A0 = st::fn_00401DA7(this);
    return g_opticClass_007FB2A0;
  }
  g_opticClass_007FB2A0 = nullptr;
  return nullptr;
}

// 004A8E00 FUN_004a8e00
#line 1 "decomp/ST.exe/functions/004A8E00/decomp.c"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=11, used=0), and
   decompilation contains no value return */

void st::fn_004A8E00(int param_1,int param_2,int param_3)

{
  int iVar1;

  switch(DAT_008073fc) {
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  case 0:
    param_1 = param_1 - param_3;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = param_2 - param_3;
    break;
  case 1:
    param_1 = param_1 + param_3;
    param_2 = param_2 - param_3;
    break;
  case 2:
    iVar1 = param_3;
    goto LAB_004a8e4a;
  case 3:
    iVar1 = -param_3;
LAB_004a8e4a:
    param_1 = param_1 + iVar1;
    param_2 = param_2 + param_3;
  }
  if (param_1 < 0) {
    param_1 = 0;
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (*PTR_00806750 + -1 < param_1) {
    param_1 = *PTR_00806750 + -1;
  }
  if (PTR_00806750[1] + -1 < param_2) {
    param_2 = st::machine_word_boundary_cast<int>(PTR_00806750[1] + -1);
  }
  DAT_008073d8 = param_1;
  DAT_008073dc = param_2;
  DAT_008073d0 = (float)param_1 * _DAT_007904f8 + _DAT_007904f4;
  _DAT_008073d4 = (float)param_2 * _DAT_007904f8 + _DAT_007904f4;
  return;
}

// 004A8F20 FUN_004a8f20
#line 4 "decomp/ST.exe/functions/004A8F20/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_004A8F20(int param_1)

{
  longlong lVar1;

  if (param_1 == 1) {
    st::fn_006DD610
              (g_sT3DSMAPContext_00807598,DAT_008073fc,(double)DAT_008073d0,(double)_DAT_008073d4);
    DAT_008073d0 = (float)g_sT3DSMAPContext_00807598->field_0098;
    _DAT_008073d4 = (float)g_sT3DSMAPContext_00807598->field_00A0;
    lVar1 = st::fn_0072E288();
    DAT_008073d8 = (undefined4)lVar1;
    lVar1 = st::fn_0072E288();
    DAT_008073dc = (undefined4)lVar1;
  }
  return;
}

// 004A9990 FUN_004a9990
#line 4 "decomp/ST.exe/functions/004A9990/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_004A9990(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float local_10;
  float local_c;
  float local_8;

  _DAT_00807428 = _DAT_00807438 * DAT_00807420;
  _DAT_0080742c = DAT_00807424 * _DAT_00807438;
  _DAT_0080744d = st_image_0080743D * _DAT_00807438;
  _DAT_00807451 = _DAT_00807441 * _DAT_00807438;
  _DAT_00807455 = _DAT_00807445 * _DAT_00807438;
  _DAT_00807459 = _DAT_00807449 * _DAT_00807438;
  dVar1 = (double)(_DAT_0080742c * _DAT_00790784 + _DAT_00807459);
  dVar2 = (double)(_DAT_0080742c * _DAT_00790780 - _DAT_00807455);
  dVar3 = (double)(_DAT_00807428 * _DAT_00790784 - _DAT_00807451);
  dVar4 = (double)(_DAT_0080744d - _DAT_00807428 * _DAT_00790784);
  st::fn_006DD6E0
            (g_sT3DSMAPContext_00807598,SUB84(dVar4,0),(int)((ulonglong)dVar4 >> 0x20),
             SUB84(dVar3,0),(int)((ulonglong)dVar3 >> 0x20),SUB84(dVar2,0),
             (int)((ulonglong)dVar2 >> 0x20),SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
  st::fn_006DD530(g_sT3DSMAPContext_00807598,&local_10,&local_c,&local_8);
  st::fn_006DD790
            (g_sT3DSMAPContext_00807598,
             ((local_8 - _DAT_0079077c) * (float)_DAT_00790770 - _DAT_0080742c * _DAT_00790784) -
             _DAT_0080742c * _DAT_0079070c);
  st::fn_006DD800
            (g_sT3DSMAPContext_00807598,
             _DAT_0080742c * _DAT_00790784 + local_8 * (float)_DAT_00790770 + (float)_DAT_00790760);
  DAT_0080674c = 2;
  DAT_0080745d = 0;
  return;
}

// 004A9B60 FUN_004a9b60
#line 1 "decomp/ST.exe/functions/004A9B60/decomp.c"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return */

void st::fn_004A9B60(int param_1,int param_2,int param_3,int param_4)

{
  float st_unresolved_unique0x10000069{};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar1 = param_1 - DAT_00807400;
  iVar2 = iVar1 - DAT_00807408;
  DAT_00807418 = param_3;
  iVar3 = param_2 - DAT_00807404;
  iVar4 = iVar3 - DAT_0080740c;
  DAT_00807410 = param_1;
  DAT_00807414 = param_2;
  DAT_0080741c = param_4;
  st::fn_006DD660(g_sT3DSMAPContext_00807598,iVar1,iVar3,param_3,param_4);
  st_unresolved_unique0x10000069 = ((float)iVar1 * DAT_00807420) / (float)DAT_00807408;
  _DAT_00807441 = ((float)(iVar2 + param_3) * DAT_00807420) / (float)DAT_00807408;
  _DAT_00807445 = ((float)(iVar4 + param_4) * DAT_00807424) / (float)DAT_0080740c;
  _DAT_00807449 = ((float)iVar3 * DAT_00807424) / (float)DAT_0080740c;
  st::fn_00404DC7();
  return;
}

// 004A9C80 FUN_004a9c80
#line 4 "decomp/ST.exe/functions/004A9C80/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_004A9C80(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined1 local_24 [12];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;

  if (param_1 == 0) {
    uVar2 = DAT_0080743c & 0xff;
    if (uVar2 == 0) {
      return;
    }
    if (uVar2 == 1) {
      _DAT_00807438 = 0x3f800000;
    }
    else if (uVar2 == 2) {
      _DAT_00807438 = 0x3fc00000;
      cVar1 = (char)DAT_0080743c + -1;
      goto LAB_004a9cfb;
    }
    cVar1 = (char)DAT_0080743c + -1;
  }
  else {
    uVar2 = DAT_0080743c & 0xff;
    if (uVar2 == 0) {
      _DAT_00807438 = 0x3fc00000;
    }
    else if (uVar2 == 1) {
      _DAT_00807438 = 0x40200000;
    }
    else if (uVar2 == 2) {
      return;
    }
    cVar1 = (char)DAT_0080743c + '\x01';
  }
LAB_004a9cfb:
  DAT_0080743c = STReplaceLowByte((uint32_t)(DAT_0080743c), (uint8_t)(cVar1));
  st::fn_00404DC7();
  local_18 = 0xf;
  local_14 = 0x109;
  local_10 = 0;
  /* ST_CALLSITE[004A9D26]: CALL dword ptr [EAX + 0x18] */
  (*g_playSystem_00802A38->vtable->SendMessage)
            ((SystemWithNamedObjClassTy *)g_playSystem_00802A38,(int)local_24);
  return;
}

// 004A9D60 FUN_004a9d60
#line 4 "decomp/ST.exe/functions/004A9D60/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 st::fn_004A9D60(float param_1)

{
  uint uVar1;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_00;
  float10 fVar2;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  float10 extraout_ST1;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  float10 extraout_ST1_00;
  longlong lVar3;
  float local_8;

  local_8 = DAT_008073d0;
  switch(DAT_008073fc) {
  case 0:
    local_8 = DAT_008073d0 - param_1;
    break;
  case 1:
    local_8 = DAT_008073d0 - param_1;
    break;
  case 2:
    local_8 = DAT_008073d0 + param_1;
    break;
  case 3:
    local_8 = DAT_008073d0 + param_1;
  }
  if (local_8 < _DAT_0079034c) {
    local_8 = 0.0;
  }
  if ((float)(int)*PTR_00806750 * _DAT_007904f8 < local_8) {
    local_8 = (float)(int)*PTR_00806750 * _DAT_007904f8;
  }
  lVar3 = st::fn_0072E288();
  uVar1 = (int)(uint)lVar3 >> 0x1f;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  fVar2 = extraout_ST1;
  /* ST_PSEUDO[return_width_artifact,call_clobber_piece]: candidate call-output artifact: verify return width, clobbers, or x87 state; candidate volatile-register merge after CALL: split the partial-register lifetime */
  if (((float10)(int)(((uint)lVar3 ^ uVar1) - uVar1) < extraout_ST0) &&
     (lVar3 = st::fn_0072E288(), uVar1 = (int)(uint)lVar3 >> 0x1f, fVar2 = extraout_ST1_00,
     (float10)(int)(((uint)lVar3 ^ uVar1) - uVar1) < extraout_ST0_00)) {
    return 0;
  }
  _DAT_008073d4 = (float)fVar2;
  DAT_008073d0 = local_8;
  lVar3 = st::fn_0072E288();
  DAT_008073d8 = (undefined4)lVar3;
  lVar3 = st::fn_0072E288();
  DAT_008073dc = (undefined4)lVar3;
  DAT_0080674c = 2;
  st::fn_00405547(0);
  return 1;
}

// 004A9FB0 FUN_004a9fb0
#line 4 "decomp/ST.exe/functions/004A9FB0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 st::fn_004A9FB0(float param_1)

{
  uint uVar1;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_00;
  float10 fVar2;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  float10 extraout_ST1;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  float10 extraout_ST1_00;
  longlong lVar3;
  float local_8;

  local_8 = DAT_008073d0;
  switch(DAT_008073fc) {
  case 0:
    local_8 = DAT_008073d0 + param_1;
    break;
  case 1:
    local_8 = DAT_008073d0 + param_1;
    break;
  case 2:
    local_8 = DAT_008073d0 - param_1;
    break;
  case 3:
    local_8 = DAT_008073d0 - param_1;
  }
  if (local_8 < _DAT_0079034c) {
    local_8 = 0.0;
  }
  if ((float)(int)*PTR_00806750 * _DAT_007904f8 < local_8) {
    local_8 = (float)(int)*PTR_00806750 * _DAT_007904f8;
  }
  lVar3 = st::fn_0072E288();
  uVar1 = (int)(uint)lVar3 >> 0x1f;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  fVar2 = extraout_ST1;
  /* ST_PSEUDO[return_width_artifact,call_clobber_piece]: candidate call-output artifact: verify return width, clobbers, or x87 state; candidate volatile-register merge after CALL: split the partial-register lifetime */
  if (((float10)(int)(((uint)lVar3 ^ uVar1) - uVar1) < extraout_ST0) &&
     (lVar3 = st::fn_0072E288(), uVar1 = (int)(uint)lVar3 >> 0x1f, fVar2 = extraout_ST1_00,
     (float10)(int)(((uint)lVar3 ^ uVar1) - uVar1) < extraout_ST0_00)) {
    return 0;
  }
  _DAT_008073d4 = (float)fVar2;
  DAT_008073d0 = local_8;
  lVar3 = st::fn_0072E288();
  DAT_008073d8 = (undefined4)lVar3;
  lVar3 = st::fn_0072E288();
  DAT_008073dc = (undefined4)lVar3;
  DAT_0080674c = 2;
  st::fn_00405547(0);
  return 1;
}

// 004AA200 FUN_004aa200
#line 4 "decomp/ST.exe/functions/004AA200/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 st::fn_004AA200(float param_1)

{
  uint uVar1;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_00;
  float10 fVar2;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  float10 extraout_ST1;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  float10 extraout_ST1_00;
  longlong lVar3;
  float local_8;

  local_8 = DAT_008073d0;
  switch(DAT_008073fc) {
  case 0:
    local_8 = DAT_008073d0 - param_1;
    break;
  case 1:
    local_8 = DAT_008073d0 + param_1;
    break;
  case 2:
    local_8 = DAT_008073d0 + param_1;
    break;
  case 3:
    local_8 = DAT_008073d0 - param_1;
  }
  if (local_8 < _DAT_0079034c) {
    local_8 = 0.0;
  }
  if ((float)(int)*PTR_00806750 * _DAT_007904f8 < local_8) {
    local_8 = (float)(int)*PTR_00806750 * _DAT_007904f8;
  }
  lVar3 = st::fn_0072E288();
  uVar1 = (int)(uint)lVar3 >> 0x1f;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  fVar2 = extraout_ST1;
  /* ST_PSEUDO[return_width_artifact,call_clobber_piece]: candidate call-output artifact: verify return width, clobbers, or x87 state; candidate volatile-register merge after CALL: split the partial-register lifetime */
  if (((float10)(int)(((uint)lVar3 ^ uVar1) - uVar1) < extraout_ST0) &&
     (lVar3 = st::fn_0072E288(), uVar1 = (int)(uint)lVar3 >> 0x1f, fVar2 = extraout_ST1_00,
     (float10)(int)(((uint)lVar3 ^ uVar1) - uVar1) < extraout_ST0_00)) {
    return 0;
  }
  _DAT_008073d4 = (float)fVar2;
  DAT_008073d0 = local_8;
  lVar3 = st::fn_0072E288();
  DAT_008073d8 = (undefined4)lVar3;
  lVar3 = st::fn_0072E288();
  DAT_008073dc = (undefined4)lVar3;
  DAT_0080674c = 2;
  st::fn_00405547(0);
  return 1;
}

// 004AA450 FUN_004aa450
#line 4 "decomp/ST.exe/functions/004AA450/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 st::fn_004AA450(float param_1)

{
  uint uVar1;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_00;
  float10 fVar2;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  float10 extraout_ST1;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  float10 extraout_ST1_00;
  longlong lVar3;
  float local_8;

  local_8 = DAT_008073d0;
  switch(DAT_008073fc) {
  case 0:
    local_8 = DAT_008073d0 + param_1;
    break;
  case 1:
    local_8 = DAT_008073d0 - param_1;
    break;
  case 2:
    local_8 = DAT_008073d0 - param_1;
    break;
  case 3:
    local_8 = DAT_008073d0 + param_1;
  }
  if (local_8 < _DAT_0079034c) {
    local_8 = 0.0;
  }
  if ((float)(int)*PTR_00806750 * _DAT_007904f8 < local_8) {
    local_8 = (float)(int)*PTR_00806750 * _DAT_007904f8;
  }
  lVar3 = st::fn_0072E288();
  uVar1 = (int)(uint)lVar3 >> 0x1f;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  fVar2 = extraout_ST1;
  /* ST_PSEUDO[return_width_artifact,call_clobber_piece]: candidate call-output artifact: verify return width, clobbers, or x87 state; candidate volatile-register merge after CALL: split the partial-register lifetime */
  if (((float10)(int)(((uint)lVar3 ^ uVar1) - uVar1) < extraout_ST0) &&
     (lVar3 = st::fn_0072E288(), uVar1 = (int)(uint)lVar3 >> 0x1f, fVar2 = extraout_ST1_00,
     (float10)(int)(((uint)lVar3 ^ uVar1) - uVar1) < extraout_ST0_00)) {
    return 0;
  }
  _DAT_008073d4 = (float)fVar2;
  DAT_008073d0 = local_8;
  lVar3 = st::fn_0072E288();
  DAT_008073d8 = (undefined4)lVar3;
  lVar3 = st::fn_0072E288();
  DAT_008073dc = (undefined4)lVar3;
  DAT_0080674c = 2;
  st::fn_00405547(0);
  return 1;
}

// 004AA6A0 FUN_004aa6a0
#line 4 "decomp/ST.exe/functions/004AA6A0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 st::fn_004AA6A0(float param_1)

{
  uint uVar1;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_00;
  float10 fVar2;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  float10 extraout_ST1;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  float10 extraout_ST1_00;
  longlong lVar3;
  float local_8;

  local_8 = DAT_008073d0;
  switch(DAT_008073fc) {
  case 0:
    local_8 = DAT_008073d0 - param_1;
    break;
  case 1:
    break;
  case 2:
    local_8 = DAT_008073d0 + param_1;
    break;
  case 3:
  }
  if (local_8 < _DAT_0079034c) {
    local_8 = 0.0;
  }
  if ((float)(int)*PTR_00806750 * _DAT_007904f8 < local_8) {
    local_8 = (float)(int)*PTR_00806750 * _DAT_007904f8;
  }
  lVar3 = st::fn_0072E288();
  uVar1 = (int)(uint)lVar3 >> 0x1f;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  fVar2 = extraout_ST1;
  /* ST_PSEUDO[return_width_artifact,call_clobber_piece]: candidate call-output artifact: verify return width, clobbers, or x87 state; candidate volatile-register merge after CALL: split the partial-register lifetime */
  if (((float10)(int)(((uint)lVar3 ^ uVar1) - uVar1) < extraout_ST0) &&
     (lVar3 = st::fn_0072E288(), uVar1 = (int)(uint)lVar3 >> 0x1f, fVar2 = extraout_ST1_00,
     (float10)(int)(((uint)lVar3 ^ uVar1) - uVar1) < extraout_ST0_00)) {
    return 0;
  }
  _DAT_008073d4 = (float)fVar2;
  DAT_008073d0 = local_8;
  lVar3 = st::fn_0072E288();
  DAT_008073d8 = (undefined4)lVar3;
  lVar3 = st::fn_0072E288();
  DAT_008073dc = (undefined4)lVar3;
  DAT_0080674c = 2;
  st::fn_00405547(0);
  return 1;
}

// 004AA8D0 FUN_004aa8d0
#line 4 "decomp/ST.exe/functions/004AA8D0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 st::fn_004AA8D0(float param_1)

{
  uint uVar1;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_00;
  float10 fVar2;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  float10 extraout_ST1;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  float10 extraout_ST1_00;
  longlong lVar3;
  float local_8;

  local_8 = DAT_008073d0;
  switch(DAT_008073fc) {
  case 0:
    break;
  case 1:
    local_8 = DAT_008073d0 - param_1;
    break;
  case 2:
    break;
  case 3:
    local_8 = DAT_008073d0 + param_1;
  }
  if (local_8 < _DAT_0079034c) {
    local_8 = 0.0;
  }
  if ((float)(int)*PTR_00806750 * _DAT_007904f8 < local_8) {
    local_8 = (float)(int)*PTR_00806750 * _DAT_007904f8;
  }
  lVar3 = st::fn_0072E288();
  uVar1 = (int)(uint)lVar3 >> 0x1f;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  fVar2 = extraout_ST1;
  /* ST_PSEUDO[return_width_artifact,call_clobber_piece]: candidate call-output artifact: verify return width, clobbers, or x87 state; candidate volatile-register merge after CALL: split the partial-register lifetime */
  if (((float10)(int)(((uint)lVar3 ^ uVar1) - uVar1) < extraout_ST0) &&
     (lVar3 = st::fn_0072E288(), uVar1 = (int)(uint)lVar3 >> 0x1f, fVar2 = extraout_ST1_00,
     (float10)(int)(((uint)lVar3 ^ uVar1) - uVar1) < extraout_ST0_00)) {
    return 0;
  }
  _DAT_008073d4 = (float)fVar2;
  DAT_008073d0 = local_8;
  lVar3 = st::fn_0072E288();
  DAT_008073d8 = (undefined4)lVar3;
  lVar3 = st::fn_0072E288();
  DAT_008073dc = (undefined4)lVar3;
  DAT_0080674c = 2;
  st::fn_00405547(0);
  return 1;
}

// 004AAB00 FUN_004aab00
#line 4 "decomp/ST.exe/functions/004AAB00/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 st::fn_004AAB00(float param_1)

{
  uint uVar1;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_00;
  float10 fVar2;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  float10 extraout_ST1;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  float10 extraout_ST1_00;
  longlong lVar3;
  float local_8;

  local_8 = DAT_008073d0;
  switch(DAT_008073fc) {
  case 0:
    break;
  case 1:
    local_8 = DAT_008073d0 + param_1;
    break;
  case 2:
    break;
  case 3:
    local_8 = DAT_008073d0 - param_1;
  }
  if (local_8 < _DAT_0079034c) {
    local_8 = 0.0;
  }
  if ((float)(int)*PTR_00806750 * _DAT_007904f8 < local_8) {
    local_8 = (float)(int)*PTR_00806750 * _DAT_007904f8;
  }
  lVar3 = st::fn_0072E288();
  uVar1 = (int)(uint)lVar3 >> 0x1f;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  fVar2 = extraout_ST1;
  /* ST_PSEUDO[return_width_artifact,call_clobber_piece]: candidate call-output artifact: verify return width, clobbers, or x87 state; candidate volatile-register merge after CALL: split the partial-register lifetime */
  if (((float10)(int)(((uint)lVar3 ^ uVar1) - uVar1) < extraout_ST0) &&
     (lVar3 = st::fn_0072E288(), uVar1 = (int)(uint)lVar3 >> 0x1f, fVar2 = extraout_ST1_00,
     (float10)(int)(((uint)lVar3 ^ uVar1) - uVar1) < extraout_ST0_00)) {
    return 0;
  }
  _DAT_008073d4 = (float)fVar2;
  DAT_008073d0 = local_8;
  lVar3 = st::fn_0072E288();
  DAT_008073d8 = (undefined4)lVar3;
  lVar3 = st::fn_0072E288();
  DAT_008073dc = (undefined4)lVar3;
  DAT_0080674c = 2;
  st::fn_00405547(0);
  return 1;
}

// 004AAD30 FUN_004aad30
#line 4 "decomp/ST.exe/functions/004AAD30/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 st::fn_004AAD30(float param_1)

{
  uint uVar1;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_00;
  float10 fVar2;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  float10 extraout_ST1;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  float10 extraout_ST1_00;
  longlong lVar3;
  float local_8;

  local_8 = DAT_008073d0;
  switch(DAT_008073fc) {
  case 0:
    local_8 = DAT_008073d0 + param_1;
    break;
  case 1:
    break;
  case 2:
    local_8 = DAT_008073d0 - param_1;
    break;
  case 3:
  }
  if (local_8 < _DAT_0079034c) {
    local_8 = 0.0;
  }
  if ((float)(int)*PTR_00806750 * _DAT_007904f8 < local_8) {
    local_8 = (float)(int)*PTR_00806750 * _DAT_007904f8;
  }
  lVar3 = st::fn_0072E288();
  uVar1 = (int)(uint)lVar3 >> 0x1f;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  fVar2 = extraout_ST1;
  /* ST_PSEUDO[return_width_artifact,call_clobber_piece]: candidate call-output artifact: verify return width, clobbers, or x87 state; candidate volatile-register merge after CALL: split the partial-register lifetime */
  if (((float10)(int)(((uint)lVar3 ^ uVar1) - uVar1) < extraout_ST0) &&
     (lVar3 = st::fn_0072E288(), uVar1 = (int)(uint)lVar3 >> 0x1f, fVar2 = extraout_ST1_00,
     (float10)(int)(((uint)lVar3 ^ uVar1) - uVar1) < extraout_ST0_00)) {
    return 0;
  }
  _DAT_008073d4 = (float)fVar2;
  DAT_008073d0 = local_8;
  lVar3 = st::fn_0072E288();
  DAT_008073d8 = (undefined4)lVar3;
  lVar3 = st::fn_0072E288();
  DAT_008073dc = (undefined4)lVar3;
  DAT_0080674c = 2;
  st::fn_00405547(0);
  return 1;
}

// 004AAF60 FUN_004aaf60
#line 1 "decomp/ST.exe/functions/004AAF60/decomp.c"

void st::fn_004AAF60(int param_1)

{
  uint uVar1;
  int iVar2;

  if (param_1 == 0) {
    uVar1 = DAT_0080743c & 0xff;
    if (uVar1 == 0) {
      return;
    }
    if (uVar1 != 1) {
      if (uVar1 != 2) goto LAB_004aafa0;
      st::fn_00403C47(0);
    }
    st::fn_00403C47(0);
  }
  else if (param_1 != 1) {
    if (param_1 != 2) {
      return;
    }
    goto cf_common_exit_004AAFC2;
  }
LAB_004aafa0:
  uVar1 = DAT_0080743c & 0xff;
  if (uVar1 == 0) {
    iVar2 = 1;
  }
  else {
    if (uVar1 == 1) {
      return;
    }
    if (uVar1 != 2) goto cf_common_exit_004AAFC2;
    iVar2 = 0;
  }
  st::fn_00403C47(iVar2);
cf_common_exit_004AAFC2:
  if ((DAT_0080743c & 0xff) == 0) {
    st::fn_00403C47(1);
    st::fn_00403C47(1);
  }
  else if ((DAT_0080743c & 0xff) == 1) {
    st::fn_00403C47(1);
    return;
  }
  return;
}

// 004AB030 FUN_004ab030
#line 4 "decomp/ST.exe/functions/004AB030/decomp.c"
undefined1 st::fn_004AB030(void)

{
  return (undefined1)DAT_0080743c;
}

// 004AB050 FUN_004ab050
#line 1 "decomp/ST.exe/functions/004AB050/decomp.c"

/* [STPrototypeApplier] Propagated return.
   Evidence: 004AB050 returns stored into /VisibleClassTy+0x10c @ 0055787D */

int st::fn_004AB050(void)

{
  return DAT_008073fc;
}

// 004AB270 FUN_004ab270
#line 4 "decomp/ST.exe/functions/004AB270/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_004AB270(int param_1)

{
  if ((-1 < param_1) && (param_1 < 10)) {
    *(undefined4 *)(&DAT_00807465 + param_1 * 0x19) = DAT_008073d0;
    *(undefined4 *)(&DAT_00807469 + param_1 * 0x19) = _DAT_008073d4;
    *(undefined4 *)(&DAT_0080746d + param_1 * 0x19) = DAT_008073d8;
    *(undefined4 *)(&DAT_00807471 + param_1 * 0x19) = DAT_008073dc;
    *(undefined4 *)(&DAT_00807475 + param_1 * 0x19) = DAT_008073fc;
    (&DAT_00807479)[param_1 * 0x19] = (undefined1)DAT_0080743c;
    *(undefined4 *)(&DAT_0080747a + param_1 * 0x19) = 1;
  }
  return;
}

// 004AB300 FUN_004ab300
#line 4 "decomp/ST.exe/functions/004AB300/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_004AB300(int param_1)

{
  int iVar1;

  if (param_1 < 0) {
    return;
  }
  if (9 < param_1) {
    return;
  }
  if (*(int *)(&DAT_0080747a + param_1 * 0x19) == 0) {
    return;
  }
  /* ST_CALLSITE[004AB333]: CALL 0x00403058; direct=00403058 CursorClassTy::sub_0054B540 */
  st::fn_00403058(g_cursorClass_00802A30);
  DAT_008073d0 = *(undefined4 *)(&DAT_00807465 + param_1 * 0x19);
  _DAT_008073d4 = *(undefined4 *)(&DAT_00807469 + param_1 * 0x19);
  DAT_008073d8 = *(int *)(&DAT_0080746d + param_1 * 0x19);
  DAT_008073dc = *(int *)(&DAT_00807471 + param_1 * 0x19);
  DAT_008073fc = *(int *)(&DAT_00807475 + param_1 * 0x19);
  st::fn_00405547(1);
  switch((DAT_0080743c & 0xff) - (uint)(byte)(&DAT_00807479)[param_1 * 0x19]) {
  case 0:
    st::fn_00404DC7();
    goto switchD_004ab3a0_default;
  case 2:
    st::fn_00403C47(0);
  case 1:
    iVar1 = 0;
    break;
  case 0xfffffffe:
    st::fn_00403C47(1);
  case 0xffffffff:
    iVar1 = 1;
    break;
  default:
    goto switchD_004ab3a0_default;
  }
  st::fn_00403C47(iVar1);
switchD_004ab3a0_default:
  st::fn_004036D4(&g_sound,DAT_008073d8,DAT_008073dc,DAT_008073fc,DAT_0080743c & 0xff);
  return;
}

// 004AB470 FUN_004ab470
#line 1 "decomp/ST.exe/functions/004AB470/decomp.c"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004AB530 -> 004AB470 @ 004AB5FF; FUN_004ab530 parameter param_2 */

void st::fn_004AB470(uint *param_1,int param_2)

{
  DAT_008073d8 = st::machine_word_boundary_cast<undefined4>(param_1);
  DAT_008073dc = param_2;
  DAT_008073d0 = (float)(int)param_1 * _DAT_007904f8 + _DAT_007904f4;
  _DAT_008073d4 = (float)param_2 * _DAT_007904f8 + _DAT_007904f4;
  st::fn_00405547(1);
  DAT_0080674c = 2;
  DAT_0080745d = 0;
  st::fn_004036D4(&g_sound,(int)DAT_008073d8,DAT_008073dc,DAT_008073fc,DAT_0080743c & 0xff);
  DAT_008073e0 = 0;
  return;
}

// 004AB530 FUN_004ab530
#line 1 "decomp/ST.exe/functions/004AB530/decomp.c"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004AB530 -> 004AB470 @ 004AB5FF | 004FAD60 -> 004AB530 @ 004FAE21;
   CPanelTy::sub_004FAD60 parameter param_1 */

void st::fn_004AB530(int param_1,uint *param_2,int param_3)

{
  float fVar1;
  float fVar2;

  if (param_1 == 1) {
    DAT_008073e0 = 1;
    _DAT_008073ec = _DAT_008073d4;
    DAT_00807461 = 0;
    _DAT_008073e8 = DAT_008073d0;
    _DAT_008073f0 = (float)(int)param_2 * _DAT_007904f8 + _DAT_007904f4;
    _DAT_008073f4 = (float)param_3 * _DAT_007904f8 + _DAT_007904f4;
    fVar1 = _DAT_008073f4 - _DAT_008073d4;
    fVar2 = _DAT_008073f0 - DAT_008073d0;
    _DAT_008073f8 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
    fVar1 = _DAT_0079034c;
    do {
      DAT_00807461 = DAT_00807461 + 1;
      fVar1 = (float)DAT_00807461 * *(float *)(&DAT_007ac584 + (uint)DAT_0080733a * 4) *
              _DAT_0079078c + fVar1;
    } while (fVar1 < _DAT_008073f8);
    _DAT_008073e4 = DAT_00807461;
    return;
  }
  st::fn_00402720(param_2,param_3);
  return;
}

// 004AB650 FUN_004ab650
#line 4 "decomp/ST.exe/functions/004AB650/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_004AB650(void)

{
  float fVar1;
  longlong lVar2;
  float local_8;

  fVar1 = ((float)DAT_00807461 * *(float *)(&DAT_007ac584 + (uint)DAT_0080733a * 4) * _DAT_0079078c)
          / _DAT_008073f8;
  local_8 = (_DAT_008073f0 - _DAT_008073e8) * fVar1 + DAT_008073d0;
  _DAT_008073d4 = (_DAT_008073f4 - _DAT_008073ec) * fVar1 + _DAT_008073d4;
  if (local_8 < _DAT_0079034c) {
    local_8 = 0.0;
  }
  if ((float)(int)*PTR_00806750 * _DAT_007904f8 < local_8) {
    local_8 = (float)(int)*PTR_00806750 * _DAT_007904f8;
  }
  if (_DAT_008073d4 < _DAT_0079034c) {
    _DAT_008073d4 = _DAT_0079034c;
  }
  if ((float)(int)PTR_00806750[1] * _DAT_007904f8 < _DAT_008073d4) {
    _DAT_008073d4 = (float)(int)PTR_00806750[1] * _DAT_007904f8;
  }
  DAT_008073d0 = local_8;
  lVar2 = st::fn_0072E288();
  DAT_008073d8 = (int)lVar2;
  lVar2 = st::fn_0072E288();
  DAT_008073dc = (int)lVar2;
  DAT_0080674c = 2;
  st::fn_00405547(0);
  st::fn_004036D4(&g_sound,DAT_008073d8,DAT_008073dc,DAT_008073fc,DAT_0080743c & 0xff);
  DAT_00807461 = DAT_00807461 + -1;
  if (DAT_00807461 == 0) {
    DAT_008073e0 = 0;
  }
  return;
}

// 004ABCE0 FUN_004abce0
#line 4 "decomp/ST.exe/functions/004ABCE0/decomp.c"
undefined4 __thiscall st::fn_004ABCE0(void *this,byte param_1,int param_2,int param_3,char param_4)

{
  ushort *puVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;

  if (STField<int>(this,0x18) != -1) {
    if ((-1 < (char)param_1) && ((int)(char)param_1 <= STField<int>(this,0x14) + -1)) {
      iVar7 = (char)param_1 * 0x24;
      iVar6 = iVar7 + STField<int>(this,0x20);
      piVar4 = *(int **)(iVar7 + STField<int>(this,0x20));
      if (piVar4 != nullptr) {
        if ((((-1 < param_2) && (iVar5 = *piVar4 + -1, param_2 <= iVar5)) && (-1 < param_3)) &&
           (param_3 <= iVar5)) {
          if (param_4 == '\0') {
            puVar1 = (ushort *)(iVar6 + 0xe);
            *puVar1 = *puVar1 & 0xfdff;
          }
          else {
            pbVar2 = (byte *)(iVar6 + 0xf);
            *pbVar2 = *pbVar2 | 2;
          }
          /* ST_CALLSITE[004ABD62]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
          st::fn_00404264(st::pointer_boundary_cast<STT3DSprC *>(this),param_1);
          iVar6 = iVar7 + STField<int>(this,0x20);
          if ((*(byte *)(iVar7 + 0xe + STField<int>(this,0x20)) & 2) == 0) {
            *(int *)(iVar6 + 0x10) = param_2;
            *(int *)(iVar7 + 0x14 + STField<int>(this,0x20)) = param_3;
          }
          else {
            *(int *)(iVar6 + 0x10) = param_3;
            *(int *)(iVar7 + 0x14 + STField<int>(this,0x20)) = param_2;
          }
          puVar3 = (undefined4 *)(iVar7 + STField<int>(this,0x20));
          iVar6 = *(int *)(iVar7 + 0x18 + STField<int>(this,0x20));
          if ((-1 < iVar6) && (piVar4 = (int *)*puVar3, iVar6 < *piVar4)) {
            *(undefined4 *)(puVar3[1] + iVar6 * 4) = *(undefined4 *)((int)piVar4 + iVar6 * 4 + 0x31);
          }
          iVar6 = STField<int>(this,0x20) + iVar7;
          *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(iVar6 + 0x10);
          if (param_1 == STField<byte>(this,0x13)) {
            STField<undefined4>(this,0x30) =
                 *(undefined4 *)(iVar7 + 0x18 + STField<int>(this,0x20));
          }
          return 0;
        }
      }
    }
  }
  return 0xffffffff;
}

// 004AC5A0 FUN_004ac5a0
#line 4 "decomp/ST.exe/functions/004AC5A0/decomp.c"
undefined4 __thiscall st::fn_004AC5A0(void *this,char param_1,undefined4 param_2)

{
  ushort *puVar1;
  int iVar2;

  if (((STField<int>(this,0x18) != -1) && (-1 < param_1)) &&
     ((int)param_1 <= STField<int>(this,0x14) + -1)) {
    iVar2 = param_1 * 0x24;
    puVar1 = (ushort *)(iVar2 + 0xe + STField<int>(this,0x20));
    *puVar1 = *puVar1 & 0xfffe;
    *(undefined4 *)(iVar2 + 0x1c + STField<int>(this,0x20)) = param_2;
    return 0;
  }
  return 0xffffffff;
}

// 004AC610 FUN_004ac610
#line 4 "decomp/ST.exe/functions/004AC610/decomp.c"
undefined4 __thiscall st::fn_004AC610(void *this,char param_1)

{
  byte *pbVar1;

  if (((STField<int>(this,0x18) != -1) && (-1 < param_1)) &&
     ((int)param_1 <= STField<int>(this,0x14) + -1)) {
    pbVar1 = (byte *)(STField<int>(this,0x20) + 0xe + param_1 * 0x24);
    *pbVar1 = *pbVar1 | 1;
    return 0;
  }
  return 0xffffffff;
}

// 004AC660 FUN_004ac660
#line 4 "decomp/ST.exe/functions/004AC660/decomp.c"
int __thiscall st::fn_004AC660(void *this,char param_1)

{
  char *pcVar1;
  char cVar2;

  if (((STField<int>(this,0x18) != -1) && (-1 < param_1)) &&
     ((int)param_1 <= STField<int>(this,0x14) + -1)) {
    pcVar1 = (char *)(STField<int>(this,0x20) + 0xd + param_1 * 0x24);
    cVar2 = *pcVar1;
    *pcVar1 = '\0';
    return (int)cVar2;
  }
  return -1;
}

// 004AC6B0 FUN_004ac6b0
#line 4 "decomp/ST.exe/functions/004AC6B0/decomp.c"
int __thiscall st::fn_004AC6B0(void *this,char param_1)

{
  char *pcVar1;
  char cVar2;

  if (((STField<int>(this,0x18) != -1) && (-1 < param_1)) &&
     ((int)param_1 <= STField<int>(this,0x14) + -1)) {
    pcVar1 = (char *)(STField<int>(this,0x20) + 0xd + param_1 * 0x24);
    cVar2 = *pcVar1;
    *pcVar1 = '\x01';
    return (int)cVar2;
  }
  return -1;
}

// 004AC700 FUN_004ac700
#line 4 "decomp/ST.exe/functions/004AC700/decomp.c"
int __thiscall st::fn_004AC700(void *this,char param_1)

{
  char *pcVar1;
  char cVar2;

  if (((STField<int>(this,0x18) != -1) && (-1 < param_1)) &&
     ((int)param_1 <= STField<int>(this,0x14) + -1)) {
    pcVar1 = (char *)(STField<int>(this,0x20) + 0xd + param_1 * 0x24);
    cVar2 = *pcVar1;
    *pcVar1 = '\x02';
    return (int)cVar2;
  }
  return -1;
}

// 004AC750 FUN_004ac750
#line 4 "decomp/ST.exe/functions/004AC750/decomp.c"
uint __thiscall st::fn_004AC750(void *this,char param_1)

{
  ushort uVar1;
  int iVar2;

  if (((STField<int>(this,0x18) != -1) && (-1 < param_1)) &&
     (iVar2 = (int)param_1, iVar2 <= STField<int>(this,0x14) + -1)) {
    uVar1 = *(ushort *)(STField<int>(this,0x20) + 0xe + iVar2 * 0x24);
    *(ushort *)(STField<int>(this,0x20) + 0xe + iVar2 * 0x24) = uVar1 & 0xfffd;
    return uVar1 >> 1 & 1;
  }
  return 0xffffffff;
}

// 004AC7C0 FUN_004ac7c0
#line 4 "decomp/ST.exe/functions/004AC7C0/decomp.c"
uint __thiscall st::fn_004AC7C0(void *this,char param_1)

{
  ushort uVar1;
  int iVar2;

  if (((STField<int>(this,0x18) != -1) && (-1 < param_1)) &&
     (iVar2 = (int)param_1, iVar2 <= STField<int>(this,0x14) + -1)) {
    uVar1 = *(ushort *)(STField<int>(this,0x20) + 0xe + iVar2 * 0x24);
    *(ushort *)(STField<int>(this,0x20) + 0xe + iVar2 * 0x24) = uVar1 | 2;
    return uVar1 >> 1 & 1;
  }
  return 0xffffffff;
}

// 004AC830 FUN_004ac830
#line 4 "decomp/ST.exe/functions/004AC830/decomp.c"
uint __thiscall st::fn_004AC830(void *this,char param_1)

{
  ushort uVar1;
  int iVar2;

  if (((STField<int>(this,0x18) != -1) && (-1 < param_1)) &&
     (iVar2 = (int)param_1, iVar2 <= STField<int>(this,0x14) + -1)) {
    uVar1 = *(ushort *)(STField<int>(this,0x20) + 0xe + iVar2 * 0x24);
    *(ushort *)(STField<int>(this,0x20) + 0xe + iVar2 * 0x24) = uVar1 | 4;
    return (uVar1 & 4) >> 2;
  }
  return 0xffffffff;
}

// 004AC8A0 FUN_004ac8a0
#line 4 "decomp/ST.exe/functions/004AC8A0/decomp.c"
uint __thiscall st::fn_004AC8A0(void *this,char param_1)

{
  ushort uVar1;
  int iVar2;

  if (((STField<int>(this,0x18) != -1) && (-1 < param_1)) &&
     (iVar2 = (int)param_1, iVar2 <= STField<int>(this,0x14) + -1)) {
    uVar1 = *(ushort *)(STField<int>(this,0x20) + 0xe + iVar2 * 0x24);
    *(ushort *)(STField<int>(this,0x20) + 0xe + iVar2 * 0x24) = uVar1 & 0xfffb;
    return (uVar1 & 4) >> 2;
  }
  return 0xffffffff;
}

// 004AC910 FUN_004ac910
#line 4 "decomp/ST.exe/functions/004AC910/decomp.c"
undefined4 __thiscall st::fn_004AC910(void *this,char param_1)

{
  if (((STField<int>(this,0x18) != -1) && (-1 < param_1)) &&
     ((int)param_1 <= STField<int>(this,0x14) + -1)) {
    return *(undefined4 *)(STField<int>(this,0x20) + 0x18 + param_1 * 0x24);
  }
  return 0xffffffff;
}

// 004AC950 FUN_004ac950
#line 4 "decomp/ST.exe/functions/004AC950/decomp.c"
int __thiscall st::fn_004AC950(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar2 = STField<int>(this,0x20);
  iVar3 = *(int *)(iVar2 + 0x10 + param_1 * 0x24);
  iVar4 = *(int *)(iVar2 + 0x14 + param_1 * 0x24);
  iVar1 = iVar2 + param_1 * 0x24;
  iVar5 = *(int *)(iVar1 + 0x18);
  iVar2 = **(int **)(iVar2 + param_1 * 0x24);
  if (iVar3 != iVar4) {
    if (iVar5 == iVar4) {
      return iVar3;
    }
    if ((((byte *)iVar1)[0xf] & 2) == 0) {
      if (iVar3 < iVar4) {
        return iVar5 + 1;
      }
      iVar5 = iVar5 + -1;
    }
    else if (iVar3 < iVar4) {
      iVar5 = iVar5 + -1;
      if (iVar5 < 0) {
        return iVar2 + -1;
      }
    }
    else {
      iVar5 = iVar5 + 1;
      if (iVar5 == iVar2) {
        return 0;
      }
    }
  }
  return iVar5;
}

// 004AC9E0 FUN_004ac9e0
#line 4 "decomp/ST.exe/functions/004AC9E0/decomp.c"
undefined4 __thiscall st::fn_004AC9E0(void *this,int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar4;
  int local_EAX_370;
  int iVar3;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint local_28;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = (undefined *)&DAT_00790798;
  puStack_10 = (undefined1 *)&st_image_0072D964;
  local_14 = ExceptionList;
  local_8 = 0;
  if (STField<int>(this,0x18) == -1) {
    return 0xffffffff;
  }
  local_20 = 1;
  local_28 = 0;
  ExceptionList = &local_14;
cf_continue_loop_004ACA23:
  do {
    if (STField<int>(this,0x14) <= (int)local_28) {
      ExceptionList = local_14;
      return 0;
    }
    if ((STField<uint>(this,0x1c) & local_20) != 0) {
      iVar6 = local_28 * 0x24;
      iVar4 = STField<int>(this,0x20) + iVar6;
      if ((((byte *)iVar4)[0xe] & 1) == 0) {
        uVar7 = param_1 - *(int *)(iVar4 + 0x1c);
        *(int *)(iVar4 + 0x1c) = param_1;
        bVar2 = false;
        iVar4 = STField<int>(this,0x20) + iVar6;
        piVar5 = (int *)(*(int *)(iVar4 + 4) + *(int *)(iVar4 + 0x18) * 4);
        iVar8 = *piVar5;
        iVar1 = *(int *)(iVar4 + 0x20);
        if (uVar7 < (uint)(iVar8 + iVar1)) {
          if (iVar8 < (int)uVar7) {
            *(uint *)(iVar4 + 0x20) = (iVar1 - uVar7) + iVar8;
            iVar6 = iVar6 + STField<int>(this,0x20);
            *(undefined4 *)(*(int *)(iVar6 + 4) + *(int *)(iVar6 + 0x18) * 4) = 0;
            local_28 = local_28 + 1;
            local_20 = local_20 << 1;
          }
          else {
            *piVar5 = iVar8 - uVar7;
            local_28 = local_28 + 1;
            local_20 = local_20 << 1;
          }
          goto cf_continue_loop_004ACA23;
        }
        if (iVar1 != 0) {
          *(undefined4 *)(iVar4 + 0x20) = 0;
          st::fn_006E9CB0
                    (STField<ST3DSMAPContext *>(this,0x3c),STField<uint *>(this,0x18),local_28);
        }
        piVar5 = (int *)(STField<int>(this,0x20) + iVar6);
        *(undefined4 *)(piVar5[1] + piVar5[6] * 4) = *(undefined4 *)(piVar5[6] * 4 + 0x31 + *piVar5);
        iVar4 = STField<int>(this,0x20) + iVar6;
        if (*(int *)(iVar4 + 0x18) == *(int *)(iVar4 + 0x14)) {
          if (((char *)iVar4)[0xd] == '\x02') {
            /* ST_CALLSITE[004ACB1D]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
            st::fn_00404264(st::pointer_boundary_cast<STT3DSprC *>(this),(byte)local_28);
            local_28 = local_28 + 1;
            local_20 = local_20 << 1;
            goto cf_continue_loop_004ACA23;
          }
          if (((char *)iVar4)[0xd] == '\x01') goto LAB_004acbdc;
        }
        iVar8 = uVar7 - iVar8;
        if ((iVar8 == 0) || ((((byte *)iVar4)[0xe] & 4) == 0)) {
          iVar3 = st::fn_00404B65(this,local_28);
          *(int *)(STField<int>(this,0x20) + 0x18 + iVar6) = iVar3;
          if (local_28 == (int)STField<char>(this,0x13)) {
            STField<undefined4>(this,0x30) =
                 *(undefined4 *)(STField<int>(this,0x20) + 0x18 + iVar6);
          }
        }
        else {
          do {
            if (iVar8 < 0) goto LAB_004acb87;
            local_EAX_370 = st::fn_00404B65(this,local_28);
            *(int *)(STField<int>(this,0x20) + 0x18 + iVar6) = local_EAX_370;
            piVar5 = (int *)(STField<int>(this,0x20) + iVar6);
            iVar8 = iVar8 - *(int *)(*piVar5 + 0x31 + piVar5[6] * 4);
          } while ((piVar5[6] != piVar5[5]) ||
                  ((STField<char>(piVar5,0xd) != '\x02' &&
                   (STField<char>(piVar5,0xd) != '\x01'))));
          bVar2 = true;
LAB_004acb87:
          if (!bVar2) {
            iVar4 = STField<int>(this,0x20) + iVar6;
            *(int *)(*(int *)(iVar4 + 4) + *(int *)(iVar4 + 0x18) * 4) = -iVar8;
          }
        }
        st::fn_006EA270
                  (STField<ST3DSMAPContext *>(this,0x3c),STField<uint>(this,0x18),local_28,
                   *(uint *)(STField<int>(this,0x20) + 0x18 + iVar6));
      }
    }
LAB_004acbdc:
    local_28 = local_28 + 1;
    local_20 = local_20 << 1;
  } while( true );
}

// 004ACCD0 FUN_004accd0
#line 4 "decomp/ST.exe/functions/004ACCD0/decomp.c"
undefined4 __thiscall st::fn_004ACCD0(void *this,char param_1)

{
  if ((-1 < param_1) && ((int)param_1 <= STField<int>(this,0x14) + -1)) {
    return *(undefined4 *)(STField<int>(this,0x20) + param_1 * 0x24);
  }
  return 0;
}

// 004ACD60 FUN_004acd60
#line 4 "decomp/ST.exe/functions/004ACD60/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_004ACD60(void *this,char param_1,undefined4 param_2)

{
  *(undefined4 *)(STField<int>(this,0x20) + 0x20 + param_1 * 0x24) = param_2;
  return;
}

// 004ACD90 FUN_004acd90
#line 4 "decomp/ST.exe/functions/004ACD90/decomp.c"
void __thiscall st::fn_004ACD90(void *this,char param_1,int param_2)

{
  int *piVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = (int *)(*(int *)(STField<int>(this,0x20) + param_1 * 0x24 + 4) +
                  *(int *)(STField<int>(this,0x20) + 0x18 + param_1 * 0x24) * 4);
  *piVar1 = *piVar1 + param_2;
  return;
}

// 004ACDD0 FUN_004acdd0
#line 4 "decomp/ST.exe/functions/004ACDD0/decomp.c"
undefined4 __thiscall st::fn_004ACDD0(void *this,char param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(STField<int>(this,0x20) + 4 + param_1 * 0x24) + param_2 * 4);
}

// 004ACE00 FUN_004ace00
#line 4 "decomp/ST.exe/functions/004ACE00/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STReturnSemanticsApplier] repair_unsafe_eax_rollback.
   Evidence: restore the earlier evidence-backed void type after an unsafe automated rollback;
   post-CALL EAX reads alone do not prove a source-level return value; machine CFG audit: used=1,
   ignored=4, unknown=0 */

void __thiscall st::fn_004ACE00(void *this,char param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(*(int *)(STField<int>(this,0x20) + 4 + param_1 * 0x24) + param_2 * 4) = param_3
  ;
  return;
}

// 004ACEB0 FUN_004aceb0
#line 4 "decomp/ST.exe/functions/004ACEB0/decomp.c"
int __thiscall st::fn_004ACEB0(void *this,char param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;

  iVar3 = (int)param_1;
  st::fn_006E9490(STField<void *>(this,0x3c),STField<uint *>(this,0x18),iVar3,0);
  iVar2 = STField<int>(this,0x20);
  pbVar1 = (byte *)(iVar2 + 0xe + iVar3 * 0x24);
  *pbVar1 = *pbVar1 | 0x20;
  return iVar2 + 0xe + iVar3 * 0x24;
}

// 004AD0E0 FUN_004ad0e0
#line 4 "decomp/ST.exe/functions/004AD0E0/decomp.c"
void __thiscall st::fn_004AD0E0(void *this,byte param_1)

{
  ushort *puVar1;

  if (((-1 < (char)param_1) && ((char)param_1 < ' ')) &&
     ((1 << (param_1 & 0x1f) & STField<uint>(this,0x1c)) != 0)) {
    puVar1 = (ushort *)(STField<int>(this,0x20) + 0xe + (char)param_1 * 0x24);
    *puVar1 = *puVar1 & 0xfff7;
    st::fn_006E9DD0(STField<void *>(this,0x3c),STField<uint *>(this,0x18),(int)(char)param_1);
  }
  return;
}

// 004AD150 FUN_004ad150
#line 4 "decomp/ST.exe/functions/004AD150/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_004AD150(void *this,char param_1)

{
  byte *pbVar1;

  if (-1 < STField<int>(this,0xc)) {
    pbVar1 = (byte *)(STField<int>(this,0x20) + 0xf + param_1 * 0x24);
    *pbVar1 = *pbVar1 | 1;
    st::fn_006E93C0(STField<void *>(this,0x3c),STField<uint>(this,0x18),(int)param_1,
                 STField<uint>(this,0xc));
  }
  return;
}

// 004AD1A0 FUN_004ad1a0
#line 4 "decomp/ST.exe/functions/004AD1A0/decomp.c"
void __thiscall st::fn_004AD1A0(void *this,char param_1)

{
  ushort *puVar1;

  if (-1 < STField<int>(this,0xc)) {
    puVar1 = (ushort *)(STField<int>(this,0x20) + 0xe + param_1 * 0x24);
    *puVar1 = *puVar1 & 0xfeff;
    st::fn_006E93C0(STField<void *>(this,0x3c),STField<uint>(this,0x18),(int)param_1,0xffffffff);
  }
  return;
}

// 004AD310 FUN_004ad310
#line 4 "decomp/ST.exe/functions/004AD310/decomp.c"
void __fastcall st::fn_004AD310(STT3DSprC *param_1)

{
  int iVar1;

  iVar1 = 0;
  if (0 < param_1->field_0014) {
    do {
      /* ST_CALLSITE[004AD320]: CALL 0x0040498a; direct=0040498A STT3DSprC::UnLoadSequence */
      st::fn_0040498A(param_1,(byte)iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1->field_0014);
  }
  st::fn_006E8BA0(param_1->field_003C,param_1->field_0018);
  if (param_1->field_0020 != nullptr) {
    st::fn_006AB060(&param_1->field_0020);
  }
  return;
}

// 004AD360 FUN_004ad360
#line 4 "decomp/ST.exe/functions/004AD360/decomp.c"
void __thiscall st::fn_004AD360(void *this,undefined4 param_1)

{
  STField<undefined4>(this,0x3c) = param_1;
  return;
}

// 004AD380 FUN_004ad380
#line 4 "decomp/ST.exe/functions/004AD380/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_004AD380(void *this,uint param_1,uint param_2)

{
  STField<uint>(this,4) = param_1;
  STField<uint>(this,8) = param_2;
  st::fn_006E9830
            (STField<void *>(this,0x3c),STField<uint>(this,0x18),param_1,param_2);
  return;
}

// 004AD400 FUN_004ad400
#line 4 "decomp/ST.exe/functions/004AD400/decomp.c"
void __thiscall st::fn_004AD400(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_1 = STField<undefined4>(this,0x24);
  *param_2 = STField<undefined4>(this,0x28);
  *param_3 = STField<undefined4>(this,0x2c);
  return;
}

// 004AD430 FUN_004ad430
#line 4 "decomp/ST.exe/functions/004AD430/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004C6210 -> 004AD430 @ 004C6372; /TLOBldMark+0x2c | 004C6440 -> 004AD430 @ 004C68AF;
   /TLOBldMark+0x2c | 004CC900 -> 004AD430 @ 004CC938; /TLOBaseTy+0x603 */

void __fastcall st::fn_004AD430(STT3DSprC *param_1)

{
  st::fn_006EAB60(param_1->field_003C,param_1->field_0018);
  param_1->field_0012 = 1;
  return;
}

// 004AD460 FUN_004ad460
#line 4 "decomp/ST.exe/functions/004AD460/decomp.c"
void __thiscall st::fn_004AD460(void *this,int param_1)

{
  int iVar1;

  iVar1 = st::fn_006EAAA0
                    (STField<void *>(this,0x3c),STField<uint>(this,0x18),param_1);
  if (iVar1 == 1) {
    STField<undefined1>(this,0x12) = 0;
  }
  return;
}

// 004AD4A0 FUN_004ad4a0
#line 4 "decomp/ST.exe/functions/004AD4A0/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 2.
   Evidence: 0041E530 -> 004AD4A0 @ 0041EE4E */

int __thiscall st::fn_004AD4A0(void *this,int *param_1,char *text)

{
  ushort *puVar1;

  puVar1 = st::fn_00709AF0
                     (param_1,CASE_16,text,0xffffffff,0,1,0,nullptr);
  STField<ushort *>(this,0x38) = puVar1;
  return (puVar1 != nullptr) - 1;
}

// 004AD4F0 FUN_004ad4f0
#line 4 "decomp/ST.exe/functions/004AD4F0/decomp.c"
void __fastcall st::fn_004AD4F0(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x38) != 0) {
    ((undefined1 *)param_1)[0x10] = 1;
  }
  return;
}

// 004AD510 FUN_004ad510
#line 4 "decomp/ST.exe/functions/004AD510/decomp.c"
/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void __fastcall st::fn_004AD510(int param_1)

{
  ((undefined1 *)param_1)[0x10] = 0;
  return;
}

// 004AD550 FUN_004ad550
#line 4 "decomp/ST.exe/functions/004AD550/decomp.c"
void __fastcall st::fn_004AD550(uint param_1)

{
  int iVar1;

  ((undefined1 *)param_1)[0x11] = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (((((char *)param_1)[0x10] == '\0') &&
      (iVar1 = *(int *)(*(int *)(param_1 + 0x20) + ((char *)param_1)[0x13] * 0x24), iVar1 != 0))
     && (*(int *)(iVar1 + 0x29) != 0)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_006E9520
              (*(void **)(param_1 + 0x3c),*(uint *)(param_1 + 0x18),*(uint *)(param_1 + 0x34),
               0x404999,param_1);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((((char *)param_1)[0x10] == '\x01') && (*(int *)(param_1 + 0x38) != 0)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_006E9520
              (*(void **)(param_1 + 0x3c),*(uint *)(param_1 + 0x18),*(uint *)(param_1 + 0x34),
               0x405b64,param_1);
  }
  return;
}

// 004AD5E0 FUN_004ad5e0
#line 4 "decomp/ST.exe/functions/004AD5E0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004C6210 -> 004AD5E0 @ 004C62EC; /TLOBldMark+0x2c */

void __fastcall st::fn_004AD5E0(STT3DSprC *param_1)

{
  param_1->field_0011 = 1;
  st::fn_006E9520(param_1->field_003C,param_1->field_0018,0,0,0);
  return;
}

// 004AD610 FUN_004ad610
#line 4 "decomp/ST.exe/functions/004AD610/decomp.c"
undefined1 __fastcall st::fn_004AD610(int param_1)

{
  return ((undefined1 *)param_1)[0x11];
}

// 004AD630 FUN_004ad630
#line 4 "decomp/ST.exe/functions/004AD630/decomp.c"
void __thiscall st::fn_004AD630(void *this,undefined4 param_1)

{
  STField<undefined4>(this,0x34) = param_1;
  return;
}

// 004AD650 FUN_004ad650
#line 4 "decomp/ST.exe/functions/004AD650/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 004AD650 returns stored into /STMineSetC+0x2ba @ 006231BB

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004C6210 -> 004AD650 @ 004C62A0; /TLOBldMark+0x2c | 004CC900 -> 004AD650 @ 004CC943;
   /TLOBaseTy+0x603 */

int __fastcall st::fn_004AD650(STT3DSprC *param_1)

{
  return param_1->field_0018;
}

// 004AD670 FUN_004ad670
#line 4 "decomp/ST.exe/functions/004AD670/decomp.c"
int __thiscall st::fn_004AD670(void *this,char param_1)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar2 = (int)param_1;
  STField<int>(this,0xc) = iVar2;
  if (iVar2 == -1) {
    iVar2 = STField<int>(this,0x14);
    iVar3 = 0;
    if (0 < iVar2) {
      iVar4 = 0;
      do {
        iVar2 = STField<int>(this,0x20);
        puVar1 = (ushort *)(iVar2 + 0xe + iVar4);
        *puVar1 = *puVar1 & 0xfeff;
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0xe + iVar4;
        iVar4 = iVar4 + 0x24;
      } while (iVar3 < STField<int>(this,0x14));
    }
  }
  return iVar2;
}

// 004AD6C0 FUN_004ad6c0
#line 4 "decomp/ST.exe/functions/004AD6C0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 004AD6C0 parameter used as this of
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00424E10::FUN_00424e10 @ 004AD70E */

int st::fn_004AD6C0(AnonReceiver_004248D0 *param_1,undefined4 param_2,int *param_3,int param_4)

{
  int iVar2;
  int iVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar2 = *(int *)(*(int *)(*(int *)(param_4 + 0x20) + ((char *)param_4)[0x13] * 0x24) + 0x29);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + *(int *)(param_4 + 0x30) * 4), iVar2 != 0)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar1 = st::fn_00403E1D
                      (param_1,iVar2,*(float *)(param_4 + 0x24) - _DAT_007907a8,
                       *(float *)(param_4 + 0x28) - _DAT_007907a8,*(float *)(param_4 + 0x2c),0x20,
                       0x20,param_3);
    return iVar1;
  }
  return -4;
}

// 004AD740 FUN_004ad740
#line 4 "decomp/ST.exe/functions/004AD740/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 004AD740 parameter used as this of
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00424E10::FUN_00424e10 @ 004AD773

   [STPrototypeApplier] Propagated return.
   Evidence: 004AD740 returns return of
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::FUN_00424e10 @ 004AD779 */

int st::fn_004AD740(AnonReceiver_004248D0 *param_1,undefined4 param_2,int *param_3,
                AnonShape_004AD740_AC521149 *param_4)

{
  int iVar1;

  iVar1 = st::fn_00403E1D
                    (param_1,param_4->field_0038,param_4->field_0024 - _DAT_007907a8,
                     param_4->field_0028 - _DAT_007907a8,param_4->field_002C,0x20,0x20,param_3);
  return iVar1;
}

// 004AE080 FUN_004ae080
#line 4 "decomp/ST.exe/functions/004AE080/decomp.c"
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 004AE080 -> 00709670 @ 004AE096 */

void __thiscall st::fn_004AE080(void *this,int param_1,int param_2,byte param_3)

{
  st::fn_00709670(STField<void *>(this,0x3c),STField<uint>(this,0x18),param_1,param_2,param_3);
  return;
}

// 004AE0B0 FUN_004ae0b0
#line 4 "decomp/ST.exe/functions/004AE0B0/decomp.c"
/* [STSwitchEnumApplier] Switch target param_4 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004AE0B0_param_4Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_38=56;CASE_39=57;CASE_4F=79;CASE_5E=94;CASE_61=97
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/short Evidence: entry-use
   width=/short; unmasked_dword_reads=0; evidence=004AE619 MOVSX EAX,word ptr [EBP + 0x8] */

undefined4 __cdecl
st::fn_004AE0B0(short param_1,int param_2,int param_3,Global_sub_004AE0B0_param_4Enum param_4,
            int param_5,undefined4 *param_6,int *param_7,int *param_8,int param_9,int *param_10)

{
  int _param_1 = static_cast<int>(param_1);

  STWorldObject *pSVar1;
  int *piVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  dword dVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  DArrayTy *pDVar12;
  uint uVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  short in_stack_00000006;
  undefined4 local_24;
  undefined4 local_20;
  int local_18;
  STFishC *local_10;
  int local_c;
  short local_8;
  short local_6;

  iVar11 = 1;
  local_24 = 0;
  iVar17 = 1;
  local_18 = 0;
  local_c = 0;
  if (*(int *)(&DAT_00791d68 + param_4 * 4) == 0) {
    iVar17 = 1;
    iVar11 = 1;
  }
  else if (*(int *)(&DAT_00791d68 + param_4 * 4) == 1) {
    iVar17 = 2;
    iVar11 = 2;
  }
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  if (((((in_stack_00000006 < 0) || (iVar11 = iVar11 + _param_1, g_worldGrid.sizeX < iVar11)) ||
       (param_2 < 0)) || ((iVar17 = iVar17 + param_2, g_worldGrid.sizeY < iVar17 || (param_3 < 0))))
     || ((int)g_worldGrid.sizeZ < param_3 + 1)) {
cf_break_loop_004AE25B:
    local_20 = 0;
    goto LAB_004aecb2;
  }
  local_20 = 1;
  for (iVar18 = _param_1; iVar7 = param_2, iVar18 < iVar11; iVar18 = iVar18 + 1) {
    for (; iVar7 < iVar17; iVar7 = iVar7 + 1) {
      iVar6 = param_3;
      if (param_3 < param_3 + 1) {
        do {
          sVar14 = (short)iVar18;
          if (sVar14 < 0) goto cf_break_loop_004AE25B;
          sVar4 = (short)iVar7;
          sVar15 = (short)iVar6;
          if ((((sVar14 < g_worldGrid.sizeX) && (-1 < sVar4)) &&
              ((sVar4 < g_worldGrid.sizeY &&
               (((-1 < sVar15 && (sVar15 < g_worldGrid.sizeZ)) &&
                (STGridAt3D(g_worldGrid, sVar14, sVar4, sVar15).objects[0] != nullptr)))))) ||
             (((sVar14 < 0 || (g_worldGrid.sizeX <= sVar14)) ||
              ((sVar4 < 0 ||
               (((g_worldGrid.sizeY <= sVar4 || (sVar15 < 0)) ||
                ((g_worldGrid.sizeZ <= sVar15 ||
                 (STGridAt3D(g_pathingGrid, sVar14, sVar4, sVar15) != 0))))))))))
          goto cf_break_loop_004AE25B;
          iVar6 = iVar6 + 1;
        } while (iVar6 < param_3 + 1);
      }
    }
  }
  local_18 = 1;
  sVar14 = (short)param_3;
  iVar18 = _param_1;
  if (0 < param_3) {
    for (; iVar18 < iVar11; iVar18 = iVar18 + 1) {
      if (param_2 < iVar17) {
        sVar15 = sVar14 + -1;
        iVar7 = param_2;
        do {
          sVar4 = (short)iVar18;
          if ((-1 < sVar4) &&
             ((((((sVar5 = (short)iVar7, sVar4 < g_worldGrid.sizeX && (-1 < sVar5)) &&
                 (sVar5 < g_worldGrid.sizeY)) && ((-1 < sVar15 && (sVar15 < g_worldGrid.sizeZ)))) &&
               (STGridAt3D(g_worldGrid, sVar4, sVar5, sVar15).objects[0] != nullptr)) ||
              (((-1 < sVar4 && (sVar4 < g_worldGrid.sizeX)) &&
               ((-1 < sVar5 &&
                ((((sVar5 < g_worldGrid.sizeY && (-1 < sVar15)) && (sVar15 < g_worldGrid.sizeZ)) &&
                 (STGridAt3D(g_pathingGrid, sVar4, sVar5, sVar15) != -1)))))))))) {
            local_18 = 0;
            goto LAB_004ae37e;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar17);
      }
    }
  }
LAB_004ae37e:
  if (((param_9 == 0) ||
      /* ST_CALLSITE[004AE38F]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      (bVar3 = st::fn_004049B7((char)param_5), sVar15 = g_worldGrid.sizeX, bVar3 == 3)) &&
     ((sVar15 = g_worldGrid.sizeX, local_18 != 0 && (local_18 = 0, param_3 < 4)))) {
    local_18 = 1;
    for (local_c = _param_1; local_c < iVar11; local_c = local_c + 1) {
      if (param_2 < iVar17) {
        iVar18 = param_2;
        do {
          iVar7 = st::fn_00404D3B((short)local_c,(short)iVar18,sVar14 + 1);
          sVar15 = g_worldGrid.sizeX;
          if (iVar7 == 0) {
            local_18 = 0;
            goto LAB_004ae41c;
          }
          iVar18 = iVar18 + 1;
        } while (iVar18 < iVar17);
      }
    }
  }
LAB_004ae41c:
  if (param_4 - CASE_38 < 0x2a) {
                    /* WARNING: Switch is manually overridden */
    switch(((undefined1 *)param_4)[0x4aecb0]) {
    case 0:
      local_c = 0;
      local_10 = (STFishC *)st::fn_00405E48(_param_1,param_2,param_3);
      if (local_10 != nullptr) {
        /* ST_CALLSITE[004AE467]: CALL dword ptr [EDX + 0x2c] */
        dVar8 = local_10->slot_2C();
                    /* WARNING: Switch is manually overridden */
        switch((&BYTE_004aecec)[param_4]) {
        case 0:
          if (dVar8 == 0xdc) {
            local_c = 1;
          }
          break;
        case 1:
          if (dVar8 == 0xdd) {
            local_c = 1;
          }
          break;
        case 2:
          if (dVar8 == 0xde) {
            local_c = 1;
          }
        }
      }
      goto switchD_004ae472_caseD_3;
    }
  }
  local_c = 1;
  for (iVar18 = _param_1; iVar7 = param_2, iVar18 < iVar11; iVar18 = iVar18 + 1) {
    for (; iVar7 < iVar17; iVar7 = iVar7 + 1) {
      iVar6 = param_3;
      if (param_3 < param_3 + 1) {
        do {
          sVar4 = (short)iVar18;
          if (((sVar4 < 0) || (sVar15 <= sVar4)) ||
             ((sVar5 = (short)iVar7, sVar5 < 0 ||
              (((g_worldGrid.sizeY <= sVar5 || (sVar16 = (short)iVar6, sVar16 < 0)) ||
               (g_worldGrid.sizeZ <= sVar16)))))) {
            local_10 = nullptr;
          }
          else {
            local_10 = (STFishC *)
                       g_worldGrid.cells
                       [(int)sVar5 * (int)sVar15 + (int)sVar16 * (int)g_worldGrid.planeStride +
                        (int)sVar4].objects[1];
          }
          if (((local_10 != nullptr) && (*(int *)&local_10->field_0x20 != 0xbe)) ||
             (puVar9 = st::fn_00405E48(iVar18,iVar7,iVar6), puVar9 != nullptr))
          goto cf_break_loop_004AEC96;
          iVar6 = iVar6 + 1;
          local_10 = nullptr;
          sVar15 = g_worldGrid.sizeX;
        } while (iVar6 < param_3 + 1);
      }
    }
  }
  if (((int)param_4 < 0x54) || (0x5a < (int)param_4)) {
    if (param_4 == 100) {
      pDVar12 = g_packedRecords_A62x8[param_5].field1968_0x9d6;
      if ((pDVar12 != nullptr) && (uVar19 = 0, 0 < (int)pDVar12->count)) {
        do {
          st::fn_006ACC70(pDVar12,uVar19,&local_10);
          /* ST_CALLSITE[004AE92E]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
          st::fn_004018C5(local_10,(short *)((int)&param_9 + 2),&local_6,&local_8);
          if ((((STPiece<2,2>(param_9) != _param_1) || ((local_6 != param_2 || (local_8 != param_3)))) &&
              (uVar10 = STPiece<2,2>(param_9) - _param_1, uVar13 = (int)uVar10 >> 0x1f,
              (int)((uVar10 ^ uVar13) - uVar13) < 0x10)) &&
             (uVar10 = local_6 - param_2 >> 0x1f,
             (int)((local_6 - param_2 ^ uVar10) - uVar10) < 0x10)) goto cf_break_loop_004AEC96;
          pDVar12 = g_packedRecords_A62x8[param_5].field1968_0x9d6;
          uVar19 = uVar19 + 1;
        } while ((int)uVar19 < (int)pDVar12->count);
      }
    }
    else if (param_4 == 0x4d) {
      pDVar12 = g_packedRecords_A62x8[param_5].field1971_0x9e2;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_10 = (int *)&g_packedRecords_A62x8[param_5].field1971_0x9e2;
      if (pDVar12 != nullptr) {
        iVar11 = DAT_00795118 / 0xc9;
        uVar19 = 0;
        if (0 < (int)pDVar12->count) {
          do {
            st::fn_006ACC70(pDVar12,uVar19,&local_10);
            /* ST_CALLSITE[004AE9F4]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
            st::fn_004018C5(local_10,(short *)((int)&param_9 + 2),&local_6,&local_8);
            if ((((STPiece<2,2>(param_9) != _param_1) || (local_6 != param_2)) || (local_8 != param_3)) &&
               ((uVar10 = STPiece<2,2>(param_9) - _param_1, uVar13 = (int)uVar10 >> 0x1f,
                (int)((uVar10 ^ uVar13) - uVar13) <= iVar11 &&
                (uVar10 = local_6 - param_2 >> 0x1f,
                (int)((local_6 - param_2 ^ uVar10) - uVar10) <= iVar11))))
            goto cf_break_loop_004AEC96;
            uVar19 = uVar19 + 1;
            pDVar12 = (DArrayTy *)*param_10;
          } while ((int)uVar19 < (int)pDVar12->count);
        }
      }
    }
    else if (param_4 == 0x43) {
      pDVar12 = g_packedRecords_A62x8[param_5].field1974_0x9ee;
      param_10 = (int *)&g_packedRecords_A62x8[param_5].field1974_0x9ee;
      if (pDVar12 != nullptr) {
        iVar11 = DAT_007950f0 / 0xc9;
        uVar19 = 0;
        if (0 < (int)pDVar12->count) {
          do {
            st::fn_006ACC70(pDVar12,uVar19,&local_10);
            /* ST_CALLSITE[004AEABB]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
            st::fn_004018C5(local_10,(short *)((int)&param_9 + 2),&local_6,&local_8);
            if ((((STPiece<2,2>(param_9) != _param_1) || (local_6 != param_2)) || (local_8 != param_3)) &&
               ((uVar10 = STPiece<2,2>(param_9) - _param_1, uVar13 = (int)uVar10 >> 0x1f,
                (int)((uVar10 ^ uVar13) - uVar13) <= iVar11 &&
                (uVar10 = local_6 - param_2 >> 0x1f,
                (int)((local_6 - param_2 ^ uVar10) - uVar10) <= iVar11))))
            goto cf_break_loop_004AEC96;
            uVar19 = uVar19 + 1;
            pDVar12 = (DArrayTy *)*param_10;
          } while ((int)uVar19 < (int)pDVar12->count);
        }
      }
    }
    else if (param_4 == 0x73) {
      pDVar12 = g_packedRecords_A62x8[param_5].field1975_0x9f2;
      param_10 = (int *)&g_packedRecords_A62x8[param_5].field1975_0x9f2;
      if (pDVar12 != nullptr) {
        iVar11 = DAT_007951b0 / 0xc9;
        uVar19 = 0;
        if (0 < (int)pDVar12->count) {
          do {
            st::fn_006ACC70(pDVar12,uVar19,&local_10);
            /* ST_CALLSITE[004AEB82]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
            st::fn_004018C5(local_10,(short *)((int)&param_9 + 2),&local_6,&local_8);
            if ((((STPiece<2,2>(param_9) != _param_1) || (local_6 != param_2)) || (local_8 != param_3)) &&
               ((uVar10 = STPiece<2,2>(param_9) - _param_1, uVar13 = (int)uVar10 >> 0x1f,
                (int)((uVar10 ^ uVar13) - uVar13) <= iVar11 &&
                (uVar10 = local_6 - param_2 >> 0x1f,
                (int)((local_6 - param_2 ^ uVar10) - uVar10) <= iVar11))))
            goto cf_break_loop_004AEC96;
            uVar19 = uVar19 + 1;
            pDVar12 = (DArrayTy *)*param_10;
          } while ((int)uVar19 < (int)pDVar12->count);
        }
      }
    }
    else if (param_4 == 0x65) {
      pDVar12 = g_packedRecords_A62x8[param_5].field1972_0x9e6;
      param_10 = (int *)&g_packedRecords_A62x8[param_5].field1972_0x9e6;
      if (pDVar12 != nullptr) {
        iVar11 = DAT_00795178 / 0xc9;
        uVar19 = 0;
        if (0 < (int)pDVar12->count) {
          do {
            st::fn_006ACC70(pDVar12,uVar19,&local_10);
            /* ST_CALLSITE[004AEC45]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
            st::fn_004018C5(local_10,(short *)((int)&param_9 + 2),&local_6,&local_8);
            if ((((STPiece<2,2>(param_9) != _param_1) || (local_6 != param_2)) || (local_8 != param_3)) &&
               ((uVar10 = STPiece<2,2>(param_9) - _param_1, uVar13 = (int)uVar10 >> 0x1f,
                (int)((uVar10 ^ uVar13) - uVar13) <= iVar11 &&
                (uVar10 = local_6 - param_2 >> 0x1f,
                (int)((local_6 - param_2 ^ uVar10) - uVar10) <= iVar11))))
            goto cf_break_loop_004AEC96;
            uVar19 = uVar19 + 1;
            pDVar12 = (DArrayTy *)*param_10;
          } while ((int)uVar19 < (int)pDVar12->count);
        }
      }
    }
  }
  else {
    local_c = 0;
    if (((((param_2 + -1 < 0) || (param_1 < 0)) || (sVar15 <= param_1)) ||
        (((sVar4 = (short)(param_2 + -1), sVar4 < 0 || (g_worldGrid.sizeY <= sVar4)) ||
         ((sVar14 < 0 ||
          ((g_worldGrid.sizeZ <= sVar14 ||
           (pSVar1 = g_worldGrid.cells
                     [(int)sVar14 * (int)g_worldGrid.planeStride + (int)sVar15 * (int)sVar4 +
                      (int)param_1].objects[0], pSVar1 == nullptr)))))))) ||
       /* ST_CALLSITE[004AE631]: CALL dword ptr [EDX + 0x2c] */
       (((iVar11 = pSVar1->GetObjectTypeId(), iVar11 != 0x53 ||
         ((param_10 != nullptr && (*(int **)&pSVar1->field_0x18 != param_10)))) &&
        /* ST_CALLSITE[004AE649]: CALL dword ptr [EDX + 0x2c] */
        (((iVar11 = pSVar1->GetObjectTypeId(), sVar15 = g_worldGrid.sizeX,
          iVar11 < 0x54 ||
          /* ST_CALLSITE[004AE655]: CALL dword ptr [EAX + 0x2c] */
          (iVar11 = pSVar1->GetObjectTypeId(), sVar15 = g_worldGrid.sizeX,
          0x5a < iVar11)) ||
         ((param_10 != nullptr && (*(int **)&pSVar1[0x29].field_0xf != param_10)))))))) {
      sVar4 = (short)param_2;
      if (((_param_1 + -1 < 0) ||
          ((((sVar5 = (short)(_param_1 + -1), sVar5 < 0 || (sVar15 <= sVar5)) || (sVar4 < 0)) ||
           (((g_worldGrid.sizeY <= sVar4 || (sVar14 < 0)) ||
            ((g_worldGrid.sizeZ <= sVar14 ||
             (pSVar1 = g_worldGrid.cells
                       [(int)sVar14 * (int)g_worldGrid.planeStride + (int)sVar4 * (int)sVar15 +
                        (int)sVar5].objects[0], pSVar1 == nullptr)))))))) ||
         /* ST_CALLSITE[004AE6F9]: CALL dword ptr [EDX + 0x2c] */
         (((iVar11 = pSVar1->GetObjectTypeId(), piVar2 = param_10, iVar11 != 0x53
           || ((param_10 != nullptr && (*(int **)&pSVar1->field_0x18 != param_10)))) &&
          /* ST_CALLSITE[004AE711]: CALL dword ptr [EAX + 0x2c] */
          (((iVar11 = pSVar1->GetObjectTypeId(), sVar15 = g_worldGrid.sizeX,
            iVar11 < 0x54 ||
            /* ST_CALLSITE[004AE71D]: CALL dword ptr [EDX + 0x2c] */
            (iVar11 = pSVar1->GetObjectTypeId(), sVar15 = g_worldGrid.sizeX,
            0x5a < iVar11)) ||
           ((piVar2 != nullptr && (*(int **)&pSVar1[0x29].field_0xf != piVar2)))))))) {
        if (((_param_1 + 1 < (int)sVar15) &&
            ((((((sVar5 = (short)(_param_1 + 1), -1 < sVar5 && (sVar5 < sVar15)) && (-1 < sVar4)) &&
               ((sVar4 < g_worldGrid.sizeY && (-1 < sVar14)))) && (sVar14 < g_worldGrid.sizeZ)) &&
             (pSVar1 = g_worldGrid.cells
                       [(int)sVar14 * (int)g_worldGrid.planeStride + (int)sVar4 * (int)sVar15 +
                        (int)sVar5].objects[0], pSVar1 != nullptr)))) &&
           /* ST_CALLSITE[004AE7B6]: CALL dword ptr [EDX + 0x2c] */
           (((iVar11 = pSVar1->GetObjectTypeId(), piVar2 = param_10, iVar11 == 0x53
             && ((param_10 == nullptr || (*(int **)&pSVar1->field_0x18 == param_10)))) ||
            /* ST_CALLSITE[004AE7CE]: CALL dword ptr [EAX + 0x2c] */
            ((iVar11 = pSVar1->GetObjectTypeId(), sVar15 = g_worldGrid.sizeX,
             0x53 < iVar11 &&
             /* ST_CALLSITE[004AE7DA]: CALL dword ptr [EDX + 0x2c] */
             ((iVar11 = pSVar1->GetObjectTypeId(), sVar15 = g_worldGrid.sizeX,
              iVar11 < 0x5b &&
              ((piVar2 == nullptr || (*(int **)&pSVar1[0x29].field_0xf == piVar2)))))))))) {
          local_c = 1;
        }
        else if (((param_2 + 1 < (int)g_worldGrid.sizeY) &&
                 (((-1 < param_1 && (param_1 < sVar15)) &&
                  (sVar4 = (short)(param_2 + 1), -1 < sVar4)))) &&
                ((((sVar4 < g_worldGrid.sizeY && (-1 < sVar14)) &&
                  ((sVar14 < g_worldGrid.sizeZ &&
                   (pSVar1 = g_worldGrid.cells
                             [(int)sVar14 * (int)g_worldGrid.planeStride + (int)sVar15 * (int)sVar4
                              + (int)param_1].objects[0], pSVar1 != nullptr)))) &&
                 /* ST_CALLSITE[004AE88A]: CALL dword ptr [EDX + 0x2c] */
                 (((iVar11 = pSVar1->GetObjectTypeId(), piVar2 = param_10,
                   iVar11 == 0x53 &&
                   ((param_10 == nullptr || (*(int **)&pSVar1->field_0x18 == param_10)))) ||
                  /* ST_CALLSITE[004AE8A2]: CALL dword ptr [EAX + 0x2c] */
                  (((iVar11 = pSVar1->GetObjectTypeId(), 0x53 < iVar11 &&
                    /* ST_CALLSITE[004AE8B2]: CALL dword ptr [EDX + 0x2c] */
                    (iVar11 = pSVar1->GetObjectTypeId(), iVar11 < 0x5b)) &&
                   ((piVar2 == nullptr || (*(int **)&pSVar1[0x29].field_0xf == piVar2)))))))))) {
          local_c = 1;
        }
      }
      else {
        local_c = 1;
      }
    }
    else {
      local_c = 1;
    }
  }
switchD_004ae472_caseD_3:
  if ((local_18 != 0) && (local_c != 0)) {
    local_24 = 1;
  }
LAB_004aecb2:
  if (param_6 != nullptr) {
    *param_6 = local_20;
  }
  if (param_7 != nullptr) {
    *param_7 = local_18;
  }
  if (param_8 != nullptr) {
    *param_8 = local_c;
  }
  return local_24;
cf_break_loop_004AEC96:
  local_c = 0;
  goto switchD_004ae472_caseD_3;
}

// 004AF080 FUN_004af080
#line 4 "decomp/ST.exe/functions/004AF080/decomp.c"
undefined4 __cdecl
st::fn_004AF080(uint param_1,int param_2,int *param_3,int *param_4,int *param_5,int param_6,int param_7
            ,undefined4 param_8,int param_9)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  short sVar6;
  short sVar7;
  short *psVar8;
  int iVar10;
  int iVar11;
  int iVar9;
  int iVar12;
  dword dVar13;
  int local_EAX_2874;
  char *pcVar14;
  DArrayTy *pDVar15;
  int iVar16;
  short sVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  short sVar22;
  int iVar23;
  bool bVar24;
  undefined4 local_50;
  int local_40;
  char *local_3c;
  char *local_30;
  int local_2c;
  int local_28;
  int local_1c;
  int local_18;
  int local_14;
  STFishC *local_10;
  short local_a;
  short local_8;
  short local_6;

  local_50 = 0;
  bVar4 = false;
  bVar5 = false;
  local_40 = -1;
  sVar6 = g_worldGrid.sizeY;
  if (g_worldGrid.sizeY <= g_worldGrid.sizeX) {
    sVar6 = g_worldGrid.sizeX;
  }
  local_28 = 1;
  local_2c = 1;
  if (*(int *)(&DAT_00791d68 + param_2 * 4) == 1) {
    local_28 = 2;
    local_2c = 2;
  }
  psVar8 = st::pointer_boundary_cast<short *>(st::fn_006AAC70(g_worldGrid.planeStride * 5));
  local_14 = 0;
  do {
    iVar10 = g_worldGrid.planeStride * local_14;
    local_1c = 0;
    if (0 < g_worldGrid.sizeY) {
      do {
        iVar11 = (int)g_worldGrid.sizeX;
        iVar23 = 0;
        iVar20 = iVar11 * local_1c;
        if (0 < iVar11) {
          do {
            local_10 = (STFishC *)
                       g_worldGrid.cells
                       [iVar11 * local_1c + iVar23 + g_worldGrid.planeStride * local_14].objects[0];
            if (local_10 == nullptr) {
              sVar22 = (short)iVar23;
              if ((((sVar22 < 0) || (g_worldGrid.sizeX <= sVar22)) ||
                  (sVar7 = (short)local_1c, sVar7 < 0)) ||
                 (((g_worldGrid.sizeY <= sVar7 || (sVar17 = (short)local_14, sVar17 < 0)) ||
                  (g_worldGrid.sizeZ <= sVar17)))) {
LAB_004af1d5:
                *(undefined1 *)(iVar23 + iVar20 + iVar10 + (int)psVar8) = 3;
              }
              else if (STGridAt3D(g_pathingGrid, sVar22, sVar7, sVar17) == 0) {
                *(undefined1 *)(iVar23 + iVar20 + iVar10 + (int)psVar8) = 0;
              }
              else {
                if (STGridAt3D(g_pathingGrid, sVar22, sVar7, sVar17) == -1) goto LAB_004af1d5;
                *(undefined1 *)(iVar23 + iVar20 + iVar10 + (int)psVar8) = 1;
              }
            }
            else {
              if (((uint)local_10->field_0024 < 8) &&
                 ((g_playSystem_00802A38 == nullptr ||
                  (g_bulkInitializedRecords_008087C7[local_10->field_0024].field_0022 < 8)))) {
                bVar2 = *(byte *)&local_10->field_0024;
                if (g_app_00806728->field_146F == '\0') {
                  if (bVar2 == (byte)param_1) {
LAB_004af2f0:
                    iVar11 = 0;
                  }
                  else {
                    uVar21 = (uint)bVar2;
                    uVar18 = param_1 & 0xff;
                    cVar3 = (&g_app_00806728->field_0x142f)[uVar18 + uVar21 * 8];
                    if ((cVar3 == '\0') &&
                       ((&g_app_00806728->field_0x142f)[uVar21 + uVar18 * 8] == '\0')) {
                      iVar11 = -2;
                    }
                    else if ((cVar3 == '\x01') &&
                            ((&g_app_00806728->field_0x142f)[uVar21 + uVar18 * 8] == '\0')) {
                      iVar11 = -1;
                    }
                    else if ((cVar3 == '\0') &&
                            ((&g_app_00806728->field_0x142f)[uVar21 + uVar18 * 8] == '\x01')) {
                      iVar11 = 1;
                    }
                    else {
                      if ((cVar3 != '\x01') ||
                         ((&g_app_00806728->field_0x142f)[uVar21 + uVar18 * 8] != '\x01'))
                      goto LAB_004af2f0;
                      iVar11 = 2;
                    }
                  }
                  bVar24 = iVar11 < 0;
                }
                else {
                  bVar24 = (&g_app_00806728->field_0x11ca)[(param_1 & 0xff) * 0x51] !=
                           (&g_app_00806728->field_0x11ca)[(uint)bVar2 * 0x51];
                }
                if (bVar24) {
                  *(undefined1 *)(iVar23 + iVar20 + iVar10 + (int)psVar8) = 4;
                  goto LAB_004af325;
                }
              }
              *(undefined1 *)(iVar23 + iVar20 + iVar10 + (int)psVar8) = 5;
            }
LAB_004af325:
            iVar23 = iVar23 + 1;
            iVar11 = (int)g_worldGrid.sizeX;
          } while (iVar23 < iVar11);
        }
        local_1c = local_1c + 1;
      } while (local_1c < g_worldGrid.sizeY);
    }
    local_14 = local_14 + 1;
  } while (local_14 < 4);
  if (g_array_007FA150 != nullptr) {
    g_array_007FA150->iteratorIndex = 0;
    iVar9 = st::fn_006B1190(g_array_007FA150,(byte *)&local_10);
    while (-1 < iVar9) {
      if (local_10 != nullptr) {
        /* ST_CALLSITE[004AF38D]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
        st::fn_004018C5(local_10,&local_6,&local_8,&local_a);
        *(undefined1 *)
         ((int)psVar8 +
         (int)local_6 +
         (int)local_a * (int)g_worldGrid.planeStride + (int)local_8 * (int)g_worldGrid.sizeX) = 2;
      }
      iVar9 = st::fn_006B1190(g_array_007FA150,(byte *)&local_10);
    }
  }
  local_14 = 0;
  do {
    local_1c = 0;
    if (0 < g_worldGrid.sizeY) {
      do {
        local_18 = 0;
        if (0 < g_worldGrid.sizeX) {
          do {
            iVar10 = local_14;
            if (local_14 < local_14 + 1) {
              do {
                if (g_worldGrid.sizeZ <= iVar10) goto cf_common_join_004AFC34;
                if (local_1c < local_28 + local_1c) {
                  iVar20 = g_worldGrid.sizeX * local_1c;
                  iVar11 = local_1c;
                  do {
                    if (g_worldGrid.sizeY <= iVar11) goto cf_common_join_004AFC34;
                    for (iVar23 = local_18; iVar23 < local_2c + local_18; iVar23 = iVar23 + 1) {
                      if ((g_worldGrid.sizeX <= iVar23) ||
                         (*(char *)(iVar20 + iVar23 + g_worldGrid.planeStride * iVar10 + (int)psVar8
                                   ) != '\0')) goto cf_common_join_004AFC34;
                    }
                    iVar20 = iVar20 + g_worldGrid.sizeX;
                    iVar11 = iVar11 + 1;
                  } while (iVar11 < local_28 + local_1c);
                }
                iVar10 = iVar10 + 1;
              } while (iVar10 < local_14 + 1);
            }
            if (0 < local_14) {
              if (local_1c < local_1c + local_28) {
                iVar11 = (int)g_worldGrid.sizeX;
                local_30 = (char *)(local_18 +
                                    iVar11 * local_1c +
                                    (local_14 + -1) * (int)g_worldGrid.planeStride + (int)psVar8);
                iVar10 = local_1c;
                do {
                  if (iVar10 < g_worldGrid.sizeY) {
                    pcVar14 = local_30;
                    for (iVar20 = local_18; iVar20 < local_2c + local_18; iVar20 = iVar20 + 1) {
                      if ((iVar20 < iVar11) && (*pcVar14 != '\x03')) goto cf_common_join_004AFC34;
                      pcVar14 = pcVar14 + 1;
                    }
                  }
                  iVar10 = iVar10 + 1;
                  local_30 = local_30 + iVar11;
                } while (iVar10 < local_1c + local_28);
              }
            }
            if (local_14 < 4) {
              if (local_1c < local_28 + local_1c) {
                iVar11 = (int)g_worldGrid.sizeX;
                local_3c = (char *)(iVar11 * local_1c +
                                    (int)g_worldGrid.planeStride * (local_14 + 1) + local_18 +
                                   (int)psVar8);
                iVar10 = local_1c;
                do {
                  if (iVar10 < g_worldGrid.sizeY) {
                    pcVar14 = local_3c;
                    for (iVar20 = local_18; iVar20 < local_18 + local_2c; iVar20 = iVar20 + 1) {
                      if ((iVar20 < iVar11) &&
                         (((cVar3 = *pcVar14, cVar3 == '\x01' || (cVar3 == '\x03')) ||
                          (cVar3 == '\x02')))) goto cf_common_join_004AFC34;
                      pcVar14 = pcVar14 + 1;
                    }
                  }
                  iVar10 = iVar10 + 1;
                  local_3c = local_3c + iVar11;
                } while (iVar10 < local_28 + local_1c);
              }
            }
            if (param_2 != 100) {
              if (param_2 == 0x4d) {
                pDVar15 = g_packedRecords_A62x8[param_1].field1971_0x9e2;
                if (pDVar15 != nullptr) {
                  iVar10 = DAT_00795118 / 0xc9;
                  uVar21 = 0;
                  if (0 < (int)pDVar15->count) {
                    do {
                      st::fn_006ACC70(pDVar15,uVar21,&local_10);
                      /* ST_CALLSITE[004AF6E9]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
                      st::fn_004018C5(local_10,&local_6,&local_8,&local_a);
                      uVar18 = local_6 - local_18 >> 0x1f;
                      if (((int)((local_6 - local_18 ^ uVar18) - uVar18) <= iVar10) &&
                         (uVar18 = local_8 - local_1c >> 0x1f,
                         (int)((local_8 - local_1c ^ uVar18) - uVar18) <= iVar10))
                      goto cf_common_join_004AFC34;
                      uVar21 = uVar21 + 1;
                      pDVar15 = g_packedRecords_A62x8[param_1].field1971_0x9e2;
                    } while ((int)uVar21 < (int)pDVar15->count);
                  }
                }
                goto cf_common_join_004AFA95;
              }
              if (param_2 == 0x43) {
                pDVar15 = g_packedRecords_A62x8[param_1].field1974_0x9ee;
                if (pDVar15 != nullptr) {
                  iVar10 = DAT_007950f0 / 0xc9;
                  uVar21 = 0;
                  if (0 < (int)pDVar15->count) {
                    do {
                      st::fn_006ACC70(pDVar15,uVar21,&local_10);
                      /* ST_CALLSITE[004AF78E]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
                      st::fn_004018C5(local_10,&local_6,&local_8,&local_a);
                      uVar18 = local_6 - local_18 >> 0x1f;
                      if (((int)((local_6 - local_18 ^ uVar18) - uVar18) <= iVar10) &&
                         (uVar18 = local_8 - local_1c >> 0x1f,
                         (int)((local_8 - local_1c ^ uVar18) - uVar18) <= iVar10))
                      goto cf_common_join_004AFC34;
                      uVar21 = uVar21 + 1;
                      pDVar15 = g_packedRecords_A62x8[param_1].field1974_0x9ee;
                    } while ((int)uVar21 < (int)pDVar15->count);
                  }
                }
                goto cf_common_join_004AFA95;
              }
              if (param_2 == 0x73) {
                pDVar15 = g_packedRecords_A62x8[param_1].field1975_0x9f2;
                if (pDVar15 != nullptr) {
                  iVar10 = DAT_007951b0 / 0xc9;
                  uVar21 = 0;
                  if (0 < (int)pDVar15->count) {
                    do {
                      st::fn_006ACC70(pDVar15,uVar21,&local_10);
                      /* ST_CALLSITE[004AF833]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
                      st::fn_004018C5(local_10,&local_6,&local_8,&local_a);
                      uVar18 = local_6 - local_18 >> 0x1f;
                      if (((int)((local_6 - local_18 ^ uVar18) - uVar18) <= iVar10) &&
                         (uVar18 = local_8 - local_1c >> 0x1f,
                         (int)((local_8 - local_1c ^ uVar18) - uVar18) <= iVar10))
                      goto cf_common_join_004AFC34;
                      uVar21 = uVar21 + 1;
                      pDVar15 = g_packedRecords_A62x8[param_1].field1975_0x9f2;
                    } while ((int)uVar21 < (int)pDVar15->count);
                  }
                }
                goto cf_common_join_004AFA95;
              }
              if (param_2 == 0x65) {
                pDVar15 = g_packedRecords_A62x8[param_1].field1972_0x9e6;
                if (pDVar15 != nullptr) {
                  iVar10 = DAT_00795178 / 0xc9;
                  uVar21 = 0;
                  if (0 < (int)pDVar15->count) {
                    do {
                      st::fn_006ACC70(pDVar15,uVar21,&local_10);
                      /* ST_CALLSITE[004AF8D8]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
                      st::fn_004018C5(local_10,&local_6,&local_8,&local_a);
                      uVar18 = local_6 - local_18 >> 0x1f;
                      if (((int)((local_6 - local_18 ^ uVar18) - uVar18) <= iVar10) &&
                         (uVar18 = local_8 - local_1c >> 0x1f,
                         (int)((local_8 - local_1c ^ uVar18) - uVar18) <= iVar10))
                      goto cf_common_join_004AFC34;
                      uVar21 = uVar21 + 1;
                      pDVar15 = g_packedRecords_A62x8[param_1].field1972_0x9e6;
                    } while ((int)uVar21 < (int)pDVar15->count);
                  }
                }
                goto cf_common_join_004AFA95;
              }
              if (((param_2 < 0x54) || (0x5a < param_2)) || (param_9 == 0)) {
                if (((param_2 == 0x3a) && (g_array_007FA16C != nullptr)) &&
                   (uVar21 = 0, 0 < (int)g_array_007FA16C->count)) {
                  do {
                    st::fn_006ACC70(g_array_007FA16C,uVar21,&local_10);
                    /* ST_CALLSITE[004AFB68]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
                    st::fn_004018C5(local_10,&local_6,&local_8,&local_a);
                    uVar18 = local_6 - local_18 >> 0x1f;
                    if (((int)((local_6 - local_18 ^ uVar18) - uVar18) < 0xe) &&
                       (uVar18 = local_8 - local_1c >> 0x1f,
                       (int)((local_8 - local_1c ^ uVar18) - uVar18) < 0xe))
                    goto cf_common_join_004AFC34;
                    uVar21 = uVar21 + 1;
                  } while ((int)uVar21 < (int)g_array_007FA16C->count);
                }
                goto cf_common_join_004AFA95;
              }
              iVar20 = (int)g_worldGrid.planeStride;
              iVar10 = local_1c + -1;
              iVar23 = local_1c + local_28;
              bVar4 = false;
              iVar11 = iVar10;
              if (iVar10 < iVar23 + 1) {
                do {
                  if ((-1 < iVar11) && (iVar11 < g_worldGrid.sizeY)) {
                    iVar1 = local_18 + -1;
                    iVar16 = local_18 + local_2c;
                    if (iVar1 < iVar16 + 1) {
                      iVar12 = iVar20 * local_14 + iVar1 + g_worldGrid.sizeX * iVar11;
                      iVar19 = iVar12 * 8;
                      local_3c = (char *)(iVar12 + (int)psVar8);
                      iVar12 = iVar1;
                      do {
                        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                        if (((((-1 < iVar12) && (iVar12 < g_worldGrid.sizeX)) &&
                             ((iVar11 != iVar10 ||
                              ((iVar12 != iVar1 && ((iVar11 != iVar10 || (iVar12 != iVar16))))))))
                            && ((iVar11 != iVar23 ||
                                ((iVar12 != iVar16 && ((iVar11 != iVar23 || (iVar12 != iVar1))))))))
                           && (((*local_3c == '\x05' &&
                                (local_10 = *(STFishC **)
                                             ((int)(g_worldGrid.cells)->objects + iVar19),
                                local_10 != nullptr)) &&
                               /* ST_CALLSITE[004AFA05]: CALL dword ptr [EDX + 0x2c] */
                               (((dVar13 = local_10->slot_2C(), dVar13 == 0x53 &&
                                 (local_10->field_0018 == *(int *)(param_9 + 0x18))) ||
                                /* ST_CALLSITE[004AFA1D]: CALL dword ptr [EAX + 0x2c] */
                                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                                ((dVar13 = local_10->slot_2C(),
                                 0x53 < (int)dVar13 &&
                                 /* ST_CALLSITE[004AFA2A]: CALL dword ptr [EDX + 0x2c] */
                                 ((dVar13 = local_10->slot_2C(),
                                  (int)dVar13 < 0x5b &&
                                  (*(int *)&local_10[2].field_0xfd == *(int *)(param_9 + 0x18)))))))
                               )))) {
                          /* ST_CALLSITE[004AFA73]: CALL dword ptr [EDX + 0x2c] */
                          dVar13 = local_10->slot_2C();
                          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                          if ((dVar13 == 0x53) && (local_10->field_0018 == *(int *)(param_9 + 0x18))
                             ) {
                            bVar4 = true;
                          }
                          goto cf_common_join_004AFA95;
                        }
                        iVar12 = iVar12 + 1;
                        iVar19 = iVar19 + 8;
                        local_3c = local_3c + 1;
                      } while (iVar12 < iVar16 + 1);
                    }
                  }
                  iVar11 = iVar11 + 1;
                } while (iVar11 < iVar23 + 1);
              }
              goto cf_common_join_004AFC34;
            }
            pDVar15 = g_packedRecords_A62x8[param_1].field1968_0x9d6;
            if ((pDVar15 != nullptr) && (uVar21 = 0, 0 < (int)pDVar15->count)) {
              do {
                st::fn_006ACC70(pDVar15,uVar21,&local_10);
                /* ST_CALLSITE[004AF645]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
                st::fn_004018C5(local_10,&local_6,&local_8,&local_a);
                uVar18 = local_6 - local_18 >> 0x1f;
                if (((int)((local_6 - local_18 ^ uVar18) - uVar18) < 0x10) &&
                   (uVar18 = local_8 - local_1c >> 0x1f,
                   (int)((local_8 - local_1c ^ uVar18) - uVar18) < 0x10))
                goto cf_common_join_004AFC34;
                pDVar15 = g_packedRecords_A62x8[param_1].field1968_0x9d6;
                uVar21 = uVar21 + 1;
              } while ((int)uVar21 < (int)pDVar15->count);
            }
cf_common_join_004AFA95:
            iVar10 = local_1c + -1;
            bVar24 = true;
            if (iVar10 < local_1c + 1 + local_28) {
              do {
                if ((-1 < iVar10) && (iVar10 < g_worldGrid.sizeY)) {
                  iVar11 = local_18 + -1;
                  iVar20 = local_18 + 1 + local_2c;
                  if (iVar11 < iVar20) {
                    pcVar14 = (char *)(iVar10 * g_worldGrid.sizeX + iVar11 +
                                       g_worldGrid.planeStride * local_14 + (int)psVar8);
                    do {
                      if (((-1 < iVar11) && (iVar11 < g_worldGrid.sizeX)) &&
                         ((*pcVar14 == '\x05' || (*pcVar14 == '\x02')))) {
                        bVar24 = false;
                        goto LAB_004afbad;
                      }
                      iVar11 = iVar11 + 1;
                      pcVar14 = pcVar14 + 1;
                    } while (iVar11 < iVar20);
                  }
                }
                iVar10 = iVar10 + 1;
              } while (iVar10 < local_1c + 1 + local_28);
            }
LAB_004afbad:
            local_EAX_2874 = st::fn_006ACED8(local_18,local_1c,param_6,param_7);
            if ((local_40 < 0) || ((((0x53 < param_2 && (param_2 < 0x5b)) && (bVar4)) && (!bVar5))))
            {
LAB_004afc0f:
              *param_3 = local_18;
              *param_4 = local_1c;
              *param_5 = local_14;
              local_50 = 1;
              local_40 = local_EAX_2874;
              bVar5 = bVar4;
            }
            else if (bVar24) {
              if (local_EAX_2874 < local_40) goto LAB_004afc0f;
            }
            else if (local_EAX_2874 / ((int)sVar6 / 3) < local_40 / ((int)sVar6 / 3))
            goto LAB_004afc0f;
cf_common_join_004AFC34:
            local_18 = local_18 + 1;
          } while (local_18 < g_worldGrid.sizeX);
        }
        local_1c = local_1c + 1;
      } while (local_1c < g_worldGrid.sizeY);
    }
    local_14 = local_14 + 1;
    if (3 < local_14) {
      st::fn_006A5E90(psVar8);
      return local_50;
    }
  } while( true );
}

// 004AFFA0 FUN_004affa0
#line 4 "decomp/ST.exe/functions/004AFFA0/decomp.c"
/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004AFFA0_param_2Enum. Cases:
   CASE_38=56;CASE_39=57;CASE_4F=79;CASE_5E=94;CASE_61=97 */

undefined4 __cdecl
st::fn_004AFFA0(undefined4 param_1,Global_sub_004AFFA0_param_2Enum param_2,int *param_3,int *param_4,
            int *param_5,int param_6,int param_7)

{
  int local_EAX_44;
  dword dVar1;
  int iVar2;
  int iVar1;
  int local_EAX_441;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_18;
  int local_14;
  STFishC *local_10;
  short local_a;
  short local_8;
  short local_6;

  uVar4 = 0;
  local_14 = -1;
  local_18 = 0;
  if (g_array_007FA150 != nullptr) {
    g_array_007FA150->iteratorIndex = 0;
    local_EAX_44 = st::fn_006B1190(g_array_007FA150,(byte *)&local_10);
    if (-1 < local_EAX_44) {
      do {
        if (local_10 == nullptr) goto switchD_004afffd_caseD_3a;
        switch(param_2) {
        case CASE_38:
          /* ST_CALLSITE[004B0006]: CALL dword ptr [EAX + 0x2c] */
          dVar1 = local_10->slot_2C();
          if (dVar1 != 0xdc) break;
          goto LAB_004b004a;
        case CASE_39:
        case CASE_5E:
          /* ST_CALLSITE[004B0018]: CALL dword ptr [EDX + 0x2c] */
          dVar1 = local_10->slot_2C();
          if (dVar1 == 0xdd) goto LAB_004b004a;
          break;
        case CASE_4F:
          /* ST_CALLSITE[004B002A]: CALL dword ptr [EAX + 0x2c] */
          dVar1 = local_10->slot_2C();
          goto joined_r0x004b0044;
        case CASE_61:
          /* ST_CALLSITE[004B003C]: CALL dword ptr [EDX + 0x2c] */
          dVar1 = local_10->slot_2C();
joined_r0x004b0044:
          if (dVar1 == 0xde) {
LAB_004b004a:
            /* ST_CALLSITE[004B0059]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
            st::fn_004018C5(local_10,&local_6,&local_8,&local_a);
            iVar2 = (int)local_8;
            iVar3 = (int)local_6;
            uVar4 = local_18;
            if ((((((STGridAt3D(g_worldGrid, iVar3, iVar2, local_a).objects[0] ==
                     nullptr) && (-1 < local_6)) && (local_6 < g_worldGrid.sizeX)) &&
                 ((-1 < local_8 && (local_8 < g_worldGrid.sizeY)))) &&
                ((-1 < local_a &&
                 ((local_a < g_worldGrid.sizeZ &&
                  (STGridAt3D(g_pathingGrid, iVar3, iVar2, local_a) == 0)))))) &&
               ((local_a < 4 &&
                ((iVar1 = st::fn_006ACED8(iVar3,iVar2,param_6,param_7), local_14 < 0 ||
                 (iVar1 < local_14)))))) {
              *param_3 = (int)local_6;
              *param_4 = (int)local_8;
              *param_5 = (int)local_a;
              local_18 = 1;
              uVar4 = 1;
              local_14 = iVar1;
            }
          }
        }
switchD_004afffd_caseD_3a:
        local_EAX_441 = st::fn_006B1190(g_array_007FA150,(byte *)&local_10);
        if (local_EAX_441 < 0) {
          return uVar4;
        }
      } while( true );
    }
  }
  return 0;
}

