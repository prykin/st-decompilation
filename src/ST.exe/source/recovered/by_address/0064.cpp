#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/0064.cpp

// 00640130 FUN_00640130
#line 4 "decomp/ST.exe/functions/00640130/decomp.c"
void __fastcall st::fn_00640130(AnonShape_00640130_D1AC047E *param_1)

{
  uint uVar1;

  if (param_1->field_037F != nullptr) {
    uVar1 = *param_1->field_037F;
    if (-1 < (int)uVar1) {
      st::fn_006E8BA0(param_1->field_0211,uVar1);
    }
    st::fn_006AB060(&param_1->field_037F);
  }
  return;
}

// 00640170 FUN_00640170
#line 4 "decomp/ST.exe/functions/00640170/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall st::fn_00640170(void *this,int param_1,int param_2,undefined4 param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 *puVar4;

  uVar2 = 0;
  if (STField<undefined4 *>(this,0x37f) != nullptr) {
    puVar4 = STField<undefined4 *>(this,0x37f);
    memset(puVar4, 0, 0x1b); /* compiler bulk-zero initialization */
    puVar4 = (undefined4 *)((byte *)puVar4 + 0x18);
    fVar1 = (float)param_1 * _DAT_007904f8;
    fVar1 = fVar1 * _DAT_007904f0;
    *(float *)(STField<int>(this,0x37f) + 4) = fVar1;
    *(float *)(STField<int>(this,0x37f) + 8) = (float)param_2 * _DAT_007904f8 * _DAT_007904f0;
    *(undefined4 *)(STField<int>(this,0x37f) + 0xc) = param_3;
    *(undefined4 *)(STField<int>(this,0x37f) + 0x10) = 3;
    *(undefined1 *)(STField<int>(this,0x37f) + 0x15) = 0;
    *(undefined1 *)(STField<int>(this,0x37f) + 0x14) = 0;
    *(uint *)(STField<int>(this,0x37f) + 0x17) = g_playSystem_00802A38->field_00E4;
    uVar2 = 1;
  }
  return uVar2;
}

// 00640240 FUN_00640240
#line 4 "decomp/ST.exe/functions/00640240/decomp.c"
void __fastcall st::fn_00640240(AnonShape_00640240_D1DBDD81 *param_1)

{
  uint *puVar1;

  if ((int *)param_1->field_037F != nullptr) {
    st::fn_006E8660(st::pointer_boundary_cast<ST3DSMAPContext *>(param_1->field_0211),(int *)param_1->field_037F,0,0,0,0,0,0,0);
    st::fn_006E9520
              (param_1->field_0211,*(uint *)param_1->field_037F,0,0x640320,(uint)param_1->field_037F
              );
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_006E9720
              (param_1->field_0211,*(uint *)param_1->field_037F,
               (uint)(PTR_008032b8 + (uint)*(byte *)((int)param_1->field_037F + 0x15) * 0x80));
    puVar1 = (uint *)param_1->field_037F;
    st::fn_006EA960
              (param_1->field_0211,*puVar1,(float)puVar1[1],(float)puVar1[2],49.829998);
    st::fn_006EAAA0(param_1->field_0211,*(uint *)param_1->field_037F,0);
  }
  return;
}

// 00640320 FUN_00640320
#line 4 "decomp/ST.exe/functions/00640320/decomp.c"
void st::fn_00640320(void *param_1,undefined4 param_2,int *param_3,AnonShape_00640320_15B2529E *param_4
                 )

{
  int iVar1;

  iVar1 = (STField<int>(param_1,0x380) * param_4->field_000C) / 0xc9;
  st::fn_004017CB(param_1,param_4->field_0004,param_4->field_0008,49.829998,iVar1,
                     iVar1 - param_4->field_0010,param_3);
  return;
}

// 00640390 FUN_00640390
#line 4 "decomp/ST.exe/functions/00640390/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall st::fn_00640390(void *this,int param_1)

{
  int iVar1;

  if ((-1 < (int)STField<uint>(this,0x33a)) &&
     (((g_playSystem_00802A38->field_00E4 & 1) == 0 || (param_1 != 0)))) {
    st::fn_006EA270
              (STField<ST3DSMAPContext *>(this,0x211),STField<uint>(this,0x33a),0,
               STField<uint>(this,0x33e));
    st::fn_006EA960
              (STField<void *>(this,0x211),STField<uint>(this,0x33a),
               (float)(int)STField<short>(this,0x253) * _DAT_007904f8 * _DAT_007904f0,
               (float)(int)STField<short>(this,0x255) * _DAT_007904f8 * _DAT_007904f0,
               STField<float>(this,0x332) + _DAT_007904fc);
    iVar1 = STField<int>(this,0x33e) + 1;
    STField<int>(this,0x33e) = iVar1;
    if (STField<int>(this,0x342) <= iVar1) {
      st::fn_006E8BA0
                (STField<void *>(this,0x211),STField<uint>(this,0x33a));
      STField<undefined4>(this,0x33a) = 0xffffffff;
    }
  }
  return;
}

// 006404B0 FUN_006404b0
#line 4 "decomp/ST.exe/functions/006404B0/decomp.c"
void __thiscall st::fn_006404B0(void *this,int param_1,int param_2,uint param_3)

{
  short sVar1;
  int soundId;
  SoundPosition local_10;

  soundId = 0;
  if (DAT_0080874d == param_3) {
    if (STField<uint>(this,0x245) < 2) {
      if (DAT_0080874e == '\x01') {
        soundId = 0xa1;
      }
      else if (DAT_0080874e == '\x02') {
        soundId = 0xa2;
      }
      else if (DAT_0080874e == '\x03') {
        soundId = 0xa3;
      }
      else {
        soundId = 0;
      }
    }
    else if (STField<uint>(this,0x245) == 2) {
      if (DAT_0080874e == '\x01') {
        soundId = 0xa4;
      }
      else if (DAT_0080874e == '\x02') {
        soundId = 0xa5;
      }
      else if (DAT_0080874e == '\x03') {
        soundId = 0xa6;
      }
    }
    sVar1 = (short)(param_1 >> 0x1f);
    if (param_1 < 0) {
      local_10.x = (short)(((short)(param_1 / 0xc9) + sVar1) -
                          (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      local_10.x = (int)(short)(((short)(param_1 / 0xc9) + sVar1) -
                               (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
    }
    sVar1 = (short)(param_2 >> 0x1f);
    if (param_2 < 0) {
      local_10.y = (short)(((short)(param_2 / 0xc9) + sVar1) -
                          (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      local_10.y = (int)(short)(((short)(param_2 / 0xc9) + sVar1) -
                               (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
    }
    local_10.unknown = STField<int>(this,0x18);
    if (soundId != 0) {
      st::fn_00404BD8((SoundClassTy *)&g_sound,SOUND_MODE_6,nullptr,soundId,&local_10,0);
    }
  }
  return;
}

// 006405F0 FUN_006405f0
#line 4 "decomp/ST.exe/functions/006405F0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 004C4550 -> 006405F0 @ 004C48C0; zero-filled partial register load at 004C48AC |
   004C4550 -> 006405F0 @ 004C49BA; zero-filled partial register load at 004C49A7

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=00640623 MOV DX,word ptr
   [EBP + 0x18]

   [STPrototypeApplier] Propagated parameter 5.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0064064E MOV AX,word ptr
   [EBP + 0x1c]

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=00640643 MOV CX,word ptr
   [EBP + 0x20]

   [STPrototypeApplier] Propagated parameter 7.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=00640632 MOV DX,word ptr
   [EBP + 0x24]

   [STPrototypeApplier] Propagated parameter 8.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=00640664 MOV AX,word ptr
   [EBP + 0x28]

   [STPrototypeApplier] Propagated parameter 9.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=00640659 MOV CX,word ptr
   [EBP + 0x2c] */

void __cdecl
st::fn_006405F0(int param_1,undefined4 param_2,undefined4 param_3,ushort param_4,ushort param_5,
            ushort param_6,ushort param_7,ushort param_8,ushort param_9,ushort param_10)

{
  undefined4 local_38 [5];
  undefined4 local_24;
  ushort local_1c;
  ushort local_1a;
  ushort local_18;
  ushort local_16;
  ushort local_14;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  ushort local_8;
  ushort local_6;

  memset(local_38, 0, 0x34); /* compiler bulk-zero initialization */
  if (param_1 == 0xa8) {
    local_24 = 1;
  }
  else if (param_1 == 0xbe) {
    local_24 = 2;
  }
  local_1c = param_5;
  local_38[1] = param_2;
  local_10 = param_2;
  local_8 = param_4;
  local_16 = param_8;
  local_c = param_3;
  local_18 = param_7;
  local_1a = param_6;
  local_6 = param_10;
  local_38[0] = 0x78;
  local_14 = param_9;
  local_12 = 0;
  st::fn_00401BC2(g_playSystem_00802A38,0x78,0,0,st::machine_word_boundary_cast<undefined4>(local_38),0);
  return;
}

// 00643E20 FUN_00643e20
#line 4 "decomp/ST.exe/functions/00643E20/decomp.c"
undefined4 __fastcall st::fn_00643E20(AnonShape_00643E20_B7FEAA75 *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  short sVar2;
  VisibleClassTy *pVVar3;
  STGameObjC *pSVar4;
  int iVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  STGameObjC *local_c;
  int *local_8;

  pVVar3 = g_visibleClass_00802A88;
  local_8 = nullptr;
  local_c = nullptr;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  if (g_visibleClass_00802A88 != nullptr) {
    sVar2 = param_1->field_0045;
    iVar9 = STBiasedDiv16(sVar2, 200); /* exact signed 16-bit grid-index division */
    sVar2 = param_1->field_0043;
    iVar8 = STBiasedDiv16(sVar2, 0xc9); /* exact signed 16-bit grid-index division */
    sVar2 = param_1->field_0041;
    iVar5 = STBiasedDiv16(sVar2, 0xc9); /* exact signed 16-bit grid-index division */
    if ((((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
          (st::fn_00403F53
                     (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar5,iVar8,
                      &local_1c,&local_20), iVar9 < 0)) ||
         (((4 < iVar9 || (local_1c < 0)) ||
          (((int)pVVar3->field_0030 <= local_1c ||
           ((local_20 = g_centeredOffsets5[iVar9] + local_20, local_20 < 0 ||
            (pVVar3->field_0034 <= local_20)))))))) || (pVVar3->field_004C == nullptr)) ||
       (pVVar3->field_004C[local_1c + local_20 * pVVar3->field_0030] != 0)) {
      if (param_1->field_01E7 == '\x01') {
        st::fn_00402982(&param_1->field_0x1d5,0);
      }
    }
    else if (param_1->field_01E7 == '\0') {
      st::fn_00403D0F((STT3DSprC *)&param_1->field_0x1d5);
    }
  }
  if (param_1->field_023D == 1) {
    if ((byte)param_1->field_027D < 8) {
      local_c = st::fn_004028BA
                          (g_allPlayers_007FA174,param_1->field_0024,param_1->field_0262,CASE_1);
    }
    pSVar4 = local_c;
    if ((((param_1->field_027D == '\0') && (param_1->field_0259 != 10)) &&
        (local_c != nullptr)) && (local_c->field_0018 == param_1->field_025E)) {
      st::fn_006EA3E0
                (param_1->field_0211,param_1->field_01ED,local_c->field_01ED);
    }
    bVar7 = param_1->field_027D + 1;
    param_1->field_027D = bVar7;
    if (bVar7 < 8) {
      if ((pSVar4 == nullptr) || (pSVar4->field_0018 != param_1->field_025E)) {
        st::fn_006EA2F0(param_1->field_0211,param_1->field_01ED);
      }
      bVar7 = param_1->field_027D;
    }
    if (bVar7 == 8) {
      st::fn_006EA2F0(param_1->field_0211,param_1->field_01ED);
      uVar6 = st::fn_0040503D((AnonShape_0041DA30_EF7DF530 *)param_1);
      return uVar6;
    }
  }
  else {
    if (param_1->field_0270 == 0) {
      puVar1 = st::pointer_boundary_cast<undefined1 *>(&param_1->field_0x1d5);
      iVar9 = st::fn_00401064((STT3DSprC *)puVar1,'\0',(uint)(byte)param_1->field_027C);
      if (iVar9 != 0) {
        return 0xffffffff;
      }
      iVar9 = st::fn_004030BC((STT3DSprC *)puVar1,'\0');
      if (iVar9 != 0) {
        return 0xffffffff;
      }
      bVar7 = param_1->field_027C;
      iVar9 = st::fn_004022AC((STT3DSprC *)puVar1,'\x01');
      if ((int)(uint)bVar7 < iVar9) {
        iVar9 = st::fn_00401064((STT3DSprC *)puVar1,'\x01',(uint)bVar7);
        if (iVar9 != 0) {
          return 0xffffffff;
        }
        iVar9 = st::fn_004030BC((STT3DSprC *)puVar1,'\x01');
        if (iVar9 != 0) {
          return 0xffffffff;
        }
      }
      iVar9 = st::fn_004022AC((STT3DSprC *)puVar1,'\x01');
      if (iVar9 != (byte)param_1->field_027C - 1) goto cf_common_exit_0064428F;
    }
    else {
      bVar7 = param_1->field_027C;
      if (bVar7 < 0xf) {
        iVar9 = st::fn_006E62D0
                          (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)param_1->field_0274,
                           (int *)&local_8);
        if (iVar9 == -4) {
          param_1->field_027C = 0xfa;
          return 0;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar9 = (**(code **)(*local_8 + 0xe0))
                          (param_1->field_0278,&local_10,&local_14,&local_18,&local_24);
        if (iVar9 != 0) {
          return 0xffffffff;
        }
        param_1->field_0041 = (undefined2)local_10;
        param_1->field_0045 = (undefined2)local_18;
        param_1->field_0043 = (undefined2)local_14;
        if (local_24 == 0) {
          st::fn_006EA460
                    (param_1->field_0211,param_1->field_01ED,STField<int>(local_8,0x1ed));
        }
        else {
          st::fn_006EA3E0
                    (param_1->field_0211,param_1->field_01ED,STField<int>(local_8,0x1ed));
        }
        bVar7 = param_1->field_027C;
      }
      if (bVar7 == 0xf) {
        iVar9 = st::fn_006E62D0
                          (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)param_1->field_0274,
                           (int *)&local_8);
        if (iVar9 == -4) {
          param_1->field_027C = 0xfa;
          return 0;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*local_8 + 0xe4))(param_1->field_0278);
      }
      puVar1 = st::pointer_boundary_cast<undefined1 *>(&param_1->field_0x1d5);
      iVar9 = st::fn_00401064((STT3DSprC *)puVar1,'\0',(uint)(byte)param_1->field_027C);
      if (iVar9 != 0) {
        return 0xffffffff;
      }
      iVar9 = st::fn_004030BC((STT3DSprC *)puVar1,'\0');
      if (iVar9 != 0) {
        return 0xffffffff;
      }
      bVar7 = param_1->field_027C;
      iVar9 = st::fn_004022AC((STT3DSprC *)puVar1,'\x01');
      if ((int)(uint)bVar7 < iVar9) {
        iVar9 = st::fn_00401064((STT3DSprC *)puVar1,'\x01',(uint)bVar7);
        if (iVar9 != 0) {
          return 0xffffffff;
        }
        iVar9 = st::fn_004030BC((STT3DSprC *)puVar1,'\x01');
        if (iVar9 != 0) {
          return 0xffffffff;
        }
      }
      iVar9 = st::fn_004022AC((STT3DSprC *)puVar1,'\x01');
      if (iVar9 != (byte)param_1->field_027C - 1) goto cf_common_exit_0064428F;
    }
    st::fn_00404264((STT3DSprC *)&param_1->field_0x1d5,1);
  }
cf_common_exit_0064428F:
  uVar6 = st::fn_0040503D((AnonShape_0041DA30_EF7DF530 *)param_1);
  return uVar6;
}

// 006443C0 FUN_006443c0
#line 4 "decomp/ST.exe/functions/006443C0/decomp.c"
void __thiscall st::fn_006443C0(void *this,short *param_1,short *param_2,short *param_3)

{
  *param_1 = STField<short>(this,0x3a) * 2 - STField<short>(this,0x34);
  *param_2 = STField<short>(this,0x3c) * 2 - STField<short>(this,0x36);
  *param_3 = STField<short>(this,0x3e) * 2 - STField<short>(this,0x38);
  return;
}

// 006457E0 FUN_006457e0
#line 4 "decomp/ST.exe/functions/006457E0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __fastcall st::fn_006457E0(int param_1)

{
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;

  local_14 = 10;
  local_18 = 0;
  local_10 = *(undefined4 *)(param_1 + 8);
  local_1c = g_playSystem_00802A38->field_0014;
  st::fn_006E5810((SystemClassTy *)g_playSystem_00802A38,local_24);
  return;
}

// 00645830 CreateSTTorp
#line 4 "decomp/ST.exe/functions/00645830/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA79C>00402419

   [STObjectFactoryApplier] Central object factory for 0x0106 (ST_OBJECT_ST_TORP).
   Evidence: registry[15] at 007CA798 stores type 0x0106 and executable pointer 00402419; allocation
   size 649 uniquely matches /STTorpC; calls base/helper constructor(s) STGameObjC; exact derived
   allocation size wins */

STTorpC * __cdecl st::fn_00645830(void)

{
  STGameObjC *this;

  this = (STGameObjC *)st::fn_006B04D0(0x289);
  if (this != nullptr) {
    st::fn_00401933(this);
    st::fn_00401316((AnonShape_004AB810_8E5693D5 *)&this->field_0x1d5);
    *(VTable_0079D60C **)&this->field_0x1d5 = &st_global_0079D60C;
    this->vtable = (STGameObjCDispatchVTable *)&st_global_0079D4AC;
    return (STTorpC *)this;
  }
  return nullptr;
}

// 00645880 FUN_00645880
#line 4 "decomp/ST.exe/functions/00645880/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=9, used=0, unknown=0),
   and decompilation contains no value return */

void __cdecl st::fn_00645880(RecoveredRecord_STBoatC_00645880 *param_1)

{
  ushort uVar1;
  int local_EAX_69;
  int uVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  Global_sub_00645D30_param_2Enum GVar7;
  undefined4 local_c4;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  ushort local_b0;
  short local_ae;
  short local_ac;
  uint local_aa;
  ushort local_a6;
  undefined4 local_a4;
  undefined4 local_a0;
  uint local_98 [5];
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  uint local_64;
  ushort local_60;
  uint local_5c [5];
  ushort local_48;
  ushort local_46;
  ushort local_44;
  undefined2 local_42;
  ushort local_40;
  ushort local_3e;
  ushort local_3c;
  short local_3a;
  short local_38;
  ushort local_36;
  uint local_34;
  undefined1 local_30;
  uint local_2f;
  ushort local_2b;
  uint local_29;
  undefined1 local_6;

  uVar6 = param_1->field_0004;
  memset(local_5c, 0, 0x58); /* compiler bulk-zero initialization */
  iVar4 = 0;
  switch(uVar6) {
  case 0x96:
  case 0x97:
  case 0x98:
  case 0x99:
  case 0x9a:
  case 0x9b:
  case 0x9c:
  case 0x9d:
  case 0x9e:
  case 0x9f:
  case 0xa0:
  case 0xa1:
  case 0xa2:
  case 0xa3:
  case 0xa4:
  case 0xac:
  case 0xad:
  case 0xae:
  case 0xb4:
  case 0xb6:
  case 0xb7:
  case 0xb8:
  case 0xb9:
  case 0xba:
  case 0xbf:
    break;
  default:
    return;
  case 0xa9:
    local_ae = param_1->field_0016;
    local_c0 = param_1->field_0000;
    local_b0 = param_1->field_0014;
    local_a6 = param_1->field_0020;
    local_ac = param_1->field_0018;
    local_aa = param_1->field_001C;
    local_c4 = 0x82;
    local_b8 = 1;
    local_bc = 1;
    local_a4 = 5;
    local_a0 = 0x32;
    g_playSystem_00802A38->vfunc_08(0x10a,0,0,(short)&local_c4,0);
    return;
  case 0xb0:
  case 0xbb:
    memset(local_5c, 0, 0x58); /* compiler bulk-zero initialization */
    local_5c[1] = param_1->field_0000;
    local_48 = param_1->field_0008;
    local_46 = param_1->field_000A;
    local_42 = param_1->field_000E;
    local_3e = param_1->field_0012;
    local_44 = param_1->field_000C;
    local_3a = param_1->field_0016;
    local_40 = param_1->field_0010;
    local_36 = param_1->field_001A;
    local_3c = param_1->field_0014;
    local_34 = (uint)(uVar6 != 0xb0);
    local_38 = param_1->field_0018;
    local_5c[0] = 0x15e;
    local_5c[3] = 1;
    local_5c[2] = 1;
    g_playSystem_00802A38->vfunc_08(0x147,0,0,(short)local_5c,0);
    return;
  case 0xb5:
    uVar1 = param_1->field_0020;
    puVar5 = local_98;
    memset(puVar5, 0, 0x3a); /* compiler bulk-zero initialization */
    puVar5 = st::pointer_boundary_cast<uint *>((undefined4 *)((byte *)puVar5 + 0x38));
    uVar6 = param_1->field_001C;
    local_98[1] = param_1->field_0000;
    local_7c = (int)(short)param_1->field_0012;
    local_80 = (int)(short)param_1->field_0010;
    local_84 = (int)(short)param_1->field_000E;
    local_70 = (int)param_1->field_0018;
    local_74 = (int)param_1->field_0016;
    local_78 = (int)(short)param_1->field_0014;
    local_98[0] = 0x17c;
    local_98[2] = 1;
    local_98[3] = 1;
    local_68 = 300;
    local_6c = 4;
    local_64 = uVar6;
    local_60 = uVar1;
    g_playSystem_00802A38->vfunc_08(0x150,0,0,(short)local_98,0);
    return;
  }
  local_EAX_69 = st::fn_004049B7((char)param_1->field_0000);
  local_EAX_69 = (int)(byte)local_EAX_69;
  if (local_EAX_69 == 1) {
    iVar4 = st::fn_0040186B(param_1->field_0000,0x3c);
    if ((0 < iVar4) || (iVar4 = st::fn_0040186B(param_1->field_0000,0x9a), 0 < iVar4))
    goto LAB_00645950;
  }
  else {
    if (local_EAX_69 == 2) {
      iVar4 = st::fn_0040186B(param_1->field_0000,0x91);
      if (iVar4 < 1) {
        uVar6 = param_1->field_0000;
        iVar4 = 0x41;
LAB_00645914:
        iVar4 = st::fn_0040186B(uVar6,iVar4);
        if (iVar4 < 1) goto cf_common_exit_00645953;
      }
    }
    else {
      if (local_EAX_69 != 3) goto cf_common_exit_00645953;
      iVar4 = st::fn_0040186B(param_1->field_0000,0x4b);
      if (iVar4 < 1) {
        uVar6 = param_1->field_0000;
        iVar4 = 0x4c;
        goto LAB_00645914;
      }
    }
LAB_00645950:
    local_6 = 1;
  }
cf_common_exit_00645953:
  local_48 = param_1->field_0008;
  local_46 = param_1->field_000A;
  local_44 = param_1->field_000C;
  local_5c[1] = param_1->field_0000;
  local_40 = param_1->field_0010;
  local_42 = param_1->field_000E;
  local_3c = param_1->field_0014;
  local_3e = param_1->field_0012;
  local_38 = param_1->field_0018;
  local_3a = param_1->field_0016;
  local_5c[0] = 0x28;
  local_5c[3] = 1;
  local_5c[2] = 1;
  uVar2 = st::fn_004049B7((char)local_5c[1]);
  uVar2 = (int)(byte)uVar2;
  if (uVar2 == 1) {
    GVar7 = param_1->field_0004;
    uVar6 = param_1->field_0000;
  }
  else {
    if (uVar2 != 2) goto LAB_006459df;
    GVar7 = param_1->field_0004;
    uVar6 = param_1->field_0000;
  }
  uVar3 = st::fn_00401D2A(uVar6,GVar7);
  local_30 = (undefined1)uVar3;
LAB_006459df:
  local_2f = param_1->field_001C;
  local_2b = param_1->field_0020;
  local_29 = param_1->field_0022;
  local_34 = param_1->field_0004;
  local_36 = param_1->field_001A;
  g_playSystem_00802A38->vfunc_08(0x106,0,0,(short)local_5c,0);
  return;
}

// 00645D30 FUN_00645d30
#line 4 "decomp/ST.exe/functions/00645D30/decomp.c"
/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00645D30_param_2Enum. Cases:
   CASE_96=150;CASE_97=151;CASE_98=152;CASE_9A=154;CASE_9F=159;CASE_A0=160;CASE_AC=172;CASE_AD=173;CASE_B0=176;CASE_B6=182;CASE_B7=183;CASE_B8=184;CASE_B9=185;CASE_BA=186;CASE_BF=191
    */

undefined4 __cdecl st::fn_00645D30(int param_1,Global_sub_00645D30_param_2Enum param_2)

{
  int uVar1;
  undefined4 uVar2;

  uVar1 = st::fn_004049B7((char)param_1);
  uVar1 = (int)(byte)uVar1;
  switch(param_2) {
  case CASE_96:
  case CASE_97:
  case CASE_98:
    if (uVar1 == 1) {
      uVar2 = st::fn_0040186B(param_1,6);
      return uVar2;
    }
    if (uVar1 == 2) {
      uVar2 = st::fn_0040186B(param_1,0x83);
      return uVar2;
    }
    break;
  default:
    break;
  case CASE_9A:
    if (uVar1 == 2) {
      uVar2 = st::fn_0040186B(param_1,0x93);
      return uVar2;
    }
    break;
  case CASE_9F:
  case CASE_A0:
    if (uVar1 == 1) {
      uVar2 = st::fn_0040186B(param_1,0x97);
      return uVar2;
    }
    break;
  case CASE_AC:
    if (uVar1 == 2) {
      uVar2 = st::fn_0040186B(param_1,0x95);
      return uVar2;
    }
    break;
  case CASE_AD:
    if (uVar1 == 3) {
      uVar2 = st::fn_0040186B(param_1,0x7d);
      return uVar2;
    }
    break;
  case CASE_B0:
  case CASE_B6:
  case CASE_B7:
  case CASE_B9:
  case CASE_BA:
  case CASE_BF:
    if (uVar1 == 3) {
      uVar2 = st::fn_0040186B(param_1,0x7a);
      return uVar2;
    }
    break;
  case CASE_B8:
    if (uVar1 == 3) {
      uVar2 = st::fn_0040186B(param_1,0x76);
      return uVar2;
    }
  }
  return 0;
}

// 006460C0 FUN_006460c0
#line 4 "decomp/ST.exe/functions/006460C0/decomp.c"
int __cdecl st::fn_006460C0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;

  iVar1 = 0;
  iVar2 = param_1 + -0x96;
  if ((-1 < iVar2) && (iVar2 < 0x2d)) {
    piVar3 = (int *)(&DAT_007e6468 + iVar2 * 0x14);
    do {
      if (*piVar3 == 0) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar1 < 5);
    iVar1 = 5;
  }
  return iVar1;
}

// 00646110 FUN_00646110
#line 4 "decomp/ST.exe/functions/00646110/decomp.c"
undefined4 __cdecl
st::fn_00646110(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;

  uVar2 = 0;
  *param_3 = 0;
  iVar1 = param_1 + -0x96;
  *param_4 = 0;
  *param_5 = 0;
  if ((-1 < iVar1) && (iVar1 < 0x2d)) {
    uVar2 = 1;
    *param_3 = *(undefined4 *)(&DAT_007e6468 + (param_2 + iVar1 * 5) * 4);
    if (param_1 == 0x99) {
      *param_4 = DAT_007e66c0;
      *param_5 = 7;
      return uVar2;
    }
    if (param_1 == 0xb7) {
      *param_4 = DAT_007e6724;
      *param_5 = 5;
      return uVar2;
    }
    if (param_1 == 0xaa) {
      *param_4 = DAT_007e65f8;
      *param_5 = 0x19;
    }
  }
  return uVar2;
}

// 00646C60 CreateSTVolcano
#line 4 "decomp/ST.exe/functions/00646C60/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA944>004034E5

   [STObjectFactoryApplier] Central object factory for 0x0135 (ST_OBJECT_ST_VOLCANO).
   Evidence: registry[68] at 007CA940 stores type 0x0135 and executable pointer 004034E5; allocation
   size 181 uniquely matches /STVolcanoC */

STVolcanoC * __cdecl st::fn_00646C60(void)

{
  STVolcanoC *pSVar1;

  pSVar1 = (STVolcanoC *)st::fn_006B04D0(0xb5);
  if (pSVar1 != nullptr) {
    pSVar1 = st::fn_00404FB1(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

// 00646D00 FUN_00646d00
#line 4 "decomp/ST.exe/functions/00646D00/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 00646D00 returns return of sub_006E60A0 @ 00646D26 */

int __fastcall st::fn_00646D00(void *param_1)

{
  int iVar1;
  undefined4 local_24 [3];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;

  local_10 = STField<undefined4>(param_1,8);
  local_18 = 0;
  local_14 = 10;
  iVar1 = st::fn_006E60A0(param_1,local_24);
  return iVar1;
}

// 00646E00 FUN_00646e00
#line 4 "decomp/ST.exe/functions/00646E00/decomp.c"
int st::fn_00646E00(int param_1,int param_2,int param_3)

{
  short sVar1;
  VisibleClassTy *pVVar2;
  VisibleClassTy *pVVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_10;
  int local_c;
  int local_8;

  iVar4 = param_2;
  iVar5 = param_1;
  sVar1 = (short)(param_1 >> 0x1f);
  if (param_1 < 0) {
    iVar7 = (int)(short)(((short)(param_1 / 0xc9) + sVar1) -
                        (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
    local_8 = iVar7 + -1;
  }
  else {
    iVar7 = (int)(short)(((short)(param_1 / 0xc9) + sVar1) -
                        (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
    local_8 = iVar7;
  }
  sVar1 = (short)(param_2 >> 0x1f);
  if (param_2 < 0) {
    iVar6 = (int)(short)(((short)(param_2 / 0xc9) + sVar1) -
                        (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = iVar6 + -1;
  }
  else {
    iVar6 = (int)(short)(((short)(param_2 / 0xc9) + sVar1) -
                        (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = iVar6;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = STBiasedDiv16(param_3, 200); /* exact signed 16-bit grid-index division */
  if (iVar4 < 0) {
    iVar6 = iVar6 + -1;
  }
  if (iVar5 < 0) {
    iVar7 = iVar7 + -1;
  }
  if ((((iVar7 + 3 < g_sT3DSMAPContext_00807598->field_0048) ||
       (g_sT3DSMAPContext_00807598->field_0058 < iVar7 + -3)) ||
      (iVar6 + 3 < g_sT3DSMAPContext_00807598->field_0044)) ||
     (g_sT3DSMAPContext_00807598->field_0054 < iVar6 + -3)) {
    return 0;
  }
  iVar7 = st::fn_006DDBD0();
  iVar4 = local_8;
  iVar5 = param_2;
  pVVar2 = g_visibleClass_00802A88;
  if ((iVar7 != 0) && (g_visibleClass_00802A88 != nullptr)) {
    iVar6 = param_2 + -3;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = local_8 + -3;
    if (param_2 < 0) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = 0;
    }
    local_8 = iVar5 + 4;
    if (g_worldGrid.sizeY < local_8) {
      local_8 = (int)g_worldGrid.sizeY;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = iVar4 + 4;
    if (g_worldGrid.sizeX < param_3) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_3 = (int)g_worldGrid.sizeX;
    }
    if ((((((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) &&
          ((st::fn_00403F53
                      (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar4,iVar5,
                       &local_c,&local_10), pVVar3 = g_visibleClass_00802A88, -1 < param_1 &&
           ((((param_1 < 5 && (-1 < local_c)) && (local_c < (int)pVVar2->field_0030)) &&
            ((iVar5 = g_centeredOffsets5[param_1] + local_10, -1 < iVar5 &&
             (iVar5 < pVVar2->field_0034)))))))) && (pVVar2->field_004C != nullptr)) &&
        ((pVVar2->field_004C[local_c + iVar5 * pVVar2->field_0030] == 0 && (DAT_0080874d != -1))))
       && (((((g_visibleClass_00802A88->field_00F8 != 0 &&
              (((st::fn_00403F53
                           (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,param_2,
                            iVar6,&local_10,&local_c), pVVar2 = g_visibleClass_00802A88,
                -1 < local_10 && (local_10 < (int)pVVar3->field_0030)) &&
               (iVar5 = g_centeredOffsets5[param_1] + local_c, -1 < iVar5)))) &&
             (((iVar5 < pVVar3->field_0034 && (pVVar3->field_004C != nullptr)) &&
              (pVVar3->field_004C[local_10 + iVar5 * pVVar3->field_0030] == 0)))) &&
            ((((DAT_0080874d != -1 && (g_visibleClass_00802A88->field_00F8 != 0)) &&
              ((st::fn_00403F53
                          (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,param_3,iVar6
                           ,&local_10,&local_c), iVar5 = local_8, pVVar3 = g_visibleClass_00802A88,
               -1 < local_10 &&
               (((local_10 < (int)pVVar2->field_0030 &&
                 (local_c = g_centeredOffsets5[param_1] + local_c, -1 < local_c)) &&
                (local_c < pVVar2->field_0034)))))) &&
             ((pVVar2->field_004C != nullptr &&
              (pVVar2->field_004C[local_10 + local_c * pVVar2->field_0030] == 0)))))) &&
           ((DAT_0080874d != -1 &&
            (((g_visibleClass_00802A88->field_00F8 != 0 &&
              (st::fn_00403F53
                         (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,param_2,
                          local_8,&param_2,&local_10), -1 < param_2)) &&
             ((param_2 < (int)pVVar3->field_0030 &&
              ((((local_10 = g_centeredOffsets5[param_1] + local_10, -1 < local_10 &&
                 (local_10 < pVVar3->field_0034)) && (pVVar3->field_004C != nullptr)) &&
               ((pVVar3->field_004C[param_2 + local_10 * pVVar3->field_0030] == 0 &&
                (iVar5 = st::fn_00404E5D(g_visibleClass_00802A88,param_3,iVar5,param_1)
                , iVar5 != 1)))))))))))))) {
      return 0;
    }
  }
  return iVar7;
}

// 00647370 FUN_00647370
#line 4 "decomp/ST.exe/functions/00647370/decomp.c"
void __fastcall st::fn_00647370(AnonShape_00647370_C4EFCC30 *param_1)

{
  uint uVar1;

  param_1->field_0065 = param_1->field_003C;
  param_1->field_0069 = param_1->field_0040;
  param_1->field_0054 = 0;
  param_1->field_0058 = 1;
  param_1->field_006D = param_1->field_0044;
  param_1->field_0071 = 0;
  param_1->field_0075 = 10;
  uVar1 = g_playSystem_00802A38->field_00E4;
  param_1->field_0098 = 0;
  param_1->field_0094 = uVar1;
  return;
}

// 006473E0 FUN_006473e0
#line 4 "decomp/ST.exe/functions/006473E0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_006473E0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 local_44 [5];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;

  memset(local_44, 0, 0x40); /* compiler bulk-zero initialization */
  local_28 = STField<undefined4>(this,0x3c);
  local_24 = STField<undefined4>(this,0x40);
  iVar1 = STField<int>(this,0x50);
  local_44[0] = 0xd2;
  local_2c = 4;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      local_20 = STField<int>(this,0x44) + 0x96;
      goto cf_common_exit_00647445;
    }
    if (iVar1 == 2) {
      local_20 = STField<int>(this,0x44) + 0xfa;
      goto cf_common_exit_00647445;
    }
  }
  local_20 = STField<int>(this,0x44) + 0x96;
cf_common_exit_00647445:
  local_1c = param_1;
  local_30 = 0;
  g_playSystem_00802A38->vfunc_08(0x124,0,0,(short)local_44,0);
  st::fn_004036FC(this,0x4b5);
  return;
}

// 00647960 FUN_00647960
#line 4 "decomp/ST.exe/functions/00647960/decomp.c"
void __fastcall st::fn_00647960(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (-1 < (int)*(uint *)(param_1 + 0x5d)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_006EA270
              (g_sT3DSMAPContext_00807598,*(uint *)(param_1 + 0x5d),0,*(uint *)(param_1 + 0x71));
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (-1 < (int)*(uint *)(param_1 + 0x7a)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_006EA270
              (g_sT3DSMAPContext_00807598,*(uint *)(param_1 + 0x7a),0,*(uint *)(param_1 + 0x7e));
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (-1 < (int)*(uint *)(param_1 + 0x86)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_006EA270
              (g_sT3DSMAPContext_00807598,*(uint *)(param_1 + 0x86),0,*(uint *)(param_1 + 0x8a));
  }
  return;
}

// 00647A60 FUN_00647a60
#line 4 "decomp/ST.exe/functions/00647A60/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00647A60 -> 00568DD0 @ 00647A96 */

void __thiscall st::fn_00647A60(void *this,int soundId)

{
  SoundPosition local_10;

  local_10.x = STField<int>(this,0x30);
  local_10.y = STField<int>(this,0x34);
  local_10.unknown = STField<int>(this,0x18);
  st::fn_00404BD8((SoundClassTy *)&g_sound,SOUND_MODE_3,nullptr,soundId,&local_10,0);
  return;
}

// 00647B40 FUN_00647b40
#line 4 "decomp/ST.exe/functions/00647B40/decomp.c"
undefined4 st::fn_00647B40(void)

{
  return 8;
}

// 00647B60 FUN_00647b60
#line 4 "decomp/ST.exe/functions/00647B60/decomp.c"
undefined4 st::fn_00647B60(int param_1)

{
  return *(undefined4 *)(param_1 + 1);
}

// 00647B80 FUN_00647b80
#line 4 "decomp/ST.exe/functions/00647B80/decomp.c"
float10 st::fn_00647B80(int param_1)

{
  return (float10)*(float *)(param_1 + 1);
}

// 00647BA0 FUN_00647ba0
#line 4 "decomp/ST.exe/functions/00647BA0/decomp.c"
undefined4 __thiscall st::fn_00647BA0(void *this,int param_1)

{
  if ((int)*(short *)(param_1 + 1) < *(int *)(STField<int>(this,0x4e2) + 8)) {
    return *(undefined4 *)
            (*(int *)(STField<int>(this,0x4e2) + 0x14) + *(short *)(param_1 + 1) * 4);
  }
  return 0;
}

// 00647BE0 FUN_00647be0
#line 4 "decomp/ST.exe/functions/00647BE0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 00647BE0 returns return of Library::DKW::TBL::FUN_006b5aa0 @ 00647BF4 */

int __thiscall st::fn_00647BE0(void *this,char *param_1)

{
  int iVar1;

  iVar1 = st::fn_006B5AA0(STField<DArrayTy *>(this,0x4e2),param_1);
  return iVar1;
}

// 00647C10 FUN_00647c10
#line 4 "decomp/ST.exe/functions/00647C10/decomp.c"
int __thiscall st::fn_00647C10(void *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;

  if (param_1 < 0) {
    iVar1 = STField<int>(this,0x88);
  }
  else {
    iVar1 = STField<int>(this,0x88);
  }
  uVar2 = iVar1 * 0x41c64e6d + 0x3039;
  STField<uint>(this,0x88) = uVar2;
  return (uVar2 >> 0x10) % ((param_2 - param_1) + 1U) + param_1;
}

// 00647C80 FUN_00647c80
#line 4 "decomp/ST.exe/functions/00647C80/decomp.c"
undefined4 __fastcall st::fn_00647C80(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return *(undefined4 *)(param_1 + 0xd6);
}

// 00647CA0 FUN_00647ca0
#line 4 "decomp/ST.exe/functions/00647CA0/decomp.c"
undefined4 __thiscall st::fn_00647CA0(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < 0x100)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    return *(undefined4 *)((int)this + param_1 * 4 + 0xde);
  }
  return 1;
}

// 00647CE0 FUN_00647ce0
#line 4 "decomp/ST.exe/functions/00647CE0/decomp.c"
void __thiscall st::fn_00647CE0(void *this,int param_1,undefined4 param_2)

{
  if ((-1 < param_1) && (param_1 < 0x100)) {
    *(undefined4 *)((int)this + param_1 * 4 + 0xde) = param_2;
  }
  return;
}

// 00647D10 FUN_00647d10
#line 4 "decomp/ST.exe/functions/00647D10/decomp.c"
undefined4 __thiscall st::fn_00647D10(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < 0x21)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    return *(undefined4 *)((int)this + param_1 * 4 + 0x52f);
  }
  return 1;
}

// 00647D50 FUN_00647d50
#line 4 "decomp/ST.exe/functions/00647D50/decomp.c"
undefined4 __thiscall st::fn_00647D50(void *this,int param_1)

{
  if (((-1 < param_1) && (param_1 < 4)) && (param_1 < *(int *)(STField<int>(this,0x5b3) + 8))) {
    return *(undefined4 *)(*(int *)(STField<int>(this,0x5b3) + 0x14) + param_1 * 4);
  }
  return 0;
}

// 00647D90 FUN_00647d90
#line 4 "decomp/ST.exe/functions/00647D90/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 00647D90 returns return of FUN_006e6000 @ 00647DA8 */

int __thiscall st::fn_00647D90(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;

  iVar1 = st::fn_006E6000((void *)((int)this + -0x1c),param_1,param_2,param_3);
  return iVar1;
}

// 00647ED0 FUN_00647ed0
#line 4 "decomp/ST.exe/functions/00647ED0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00647DC0 -> 00647ED0 @ 00647E49 */

void __fastcall st::fn_00647ED0(AiBossClassTy *param_1)

{
  st::fn_00402E14((AiEventClassTy *)&param_1->vtable_at_1c);
  return;
}

// 006483D0 CreateAiBoss
#line 4 "decomp/ST.exe/functions/006483D0/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA9CC>004052F4

   [STObjectFactoryApplier] Central object factory for 0x0403 (ST_OBJECT_AI_BOSS).
   Evidence: registry[85] at 007CA9C8 stores type 0x0403 and executable pointer 004052F4; allocation
   size 1628 uniquely matches /AiBossClassTy */

AiBossClassTy * __cdecl st::fn_006483D0(void)

{
  AiBossClassTy *pAVar1;

  pAVar1 = (AiBossClassTy *)st::fn_006B04D0(0x65c);
  if (pAVar1 != nullptr) {
    pAVar1 = st::fn_00405C54(pAVar1);
    return pAVar1;
  }
  return nullptr;
}

// 006484F0 FUN_006484f0
#line 4 "decomp/ST.exe/functions/006484F0/decomp.c"
void __cdecl st::fn_006484F0(int *param_1)

{
  int iVar1;

  iVar1 = *param_1;
  if (iVar1 != 0) {
    if ((*(char *)(iVar1 + 5) == '\x02') && (*(int *)(iVar1 + 0x4e) != 0)) {
      st::fn_00401537((int *)(iVar1 + 0x4e));
    }
    st::fn_006AB060(param_1);
  }
  return;
}

// 00648A30 FUN_00648a30
#line 4 "decomp/ST.exe/functions/00648A30/decomp.c"
undefined4 __cdecl st::fn_00648A30(int param_1,char *param_2)

{
  char cVar1;
  AiPlrClassTy *pAVar2;
  uint uVar3;
  char *pcVar5;
  char *pcVar6;

  if ((((g_allPlayers_007FA174 == nullptr) || (param_1 < 0)) || (7 < param_1)) ||
     (pAVar2 = st::fn_00401DC5((char)param_1), pAVar2 == nullptr)) {
    return 0;
  }
  if (param_2 != nullptr) {
    uVar3 = 0xffffffff;
    pcVar5 = st::pointer_boundary_cast<char *>(&pAVar2->field_0x5ee);
    do {
      pcVar6 = pcVar5;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar5 = pcVar6 + -uVar3;
    memmove(param_2, pcVar5, uVar3); /* compiler REP MOVS byte copy */
  }
  return 1;
}

// 00648DD0 FUN_00648dd0
#line 4 "decomp/ST.exe/functions/00648DD0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STReturnSemanticsApplier] repair_unsafe_eax_rollback.
   Evidence: restore the earlier evidence-backed void type after an unsafe automated rollback;
   post-CALL EAX reads alone do not prove a source-level return value; machine CFG audit: used=1,
   ignored=2, unknown=0 */

void __cdecl st::fn_00648DD0(uint param_1)

{
  AiPlrClassTy *this;
  int iVar1;
  STMessage *pSVar2;
  STMessage local_24;

  if ((((g_allPlayers_007FA174 != nullptr) &&
       (g_playSystem_00802A38 != nullptr)) && (param_1 < 8)) &&
     (g_bulkInitializedRecords_008087C7[param_1].field_0022 < 8)) {
    this = st::fn_00401DC5((char)param_1);
    if (this != nullptr) {
      pSVar2 = &local_24;
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        pSVar2->unknown_00 = 0;
        pSVar2 = (STMessage *)&pSVar2->unknown_04;
      }
      local_24.id = MESS_AIPLRCLASSTY_5D97;
      this->GetMessage(&local_24);
      st::fn_0040432C(g_playSystem_00802A38,this->field_0008);
    }
  }
  return;
}

// 00649FF0 FUN_00649ff0
#line 4 "decomp/ST.exe/functions/00649FF0/decomp.c"
undefined4 * __cdecl
st::fn_00649FF0(uint *param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  char cVar1;
  uint *puVar2;
  int *piVar3;
  HINSTANCE module;
  char *pcVar4_mg0;
  DArrayTy *array;
  int iVar6;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar11;
  char *pcVar12;
  bool bVar13;
  char local_22c [532];
  uint local_18;
  Global_sub_0068CDA0_param_2Enum local_14;
  DArrayTy *local_10;
  uint local_c;
  DArrayTy *local_8;

  module = g_hINSTANCE_00807618;
  local_14 = 0;
  memset(&DAT_008117c0, 0, 0x104); /* compiler bulk-zero initialization */
  iVar5 = 0;
  memset(&stack0xfffffcd0, 0, 0x318); /* compiler bulk-zero initialization */
  local_8 = nullptr;
  local_c = DAT_00807dd5 >> 0x10 & 0xff;
  local_18 = DAT_00807dd5 & 0xffff;
  uVar8 = DAT_00807dd5 >> 0x18;
  pcVar4_mg0 = st::fn_006B0140(100,module);
  uVar6 = 0xffffffff;
  do {
    pcVar9 = pcVar4_mg0;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar9 = pcVar4_mg0 + 1;
    cVar1 = *pcVar4_mg0;
    pcVar4_mg0 = pcVar9;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar9 = pcVar9 + -uVar6;
  pcVar12 = (char *)&DAT_008117c0;
  memmove(pcVar12, pcVar9, uVar6); /* compiler REP MOVS byte copy */
  uVar7 = 0;
  uVar6 = 0xffffffff;
  pcVar9 = &CHAR_00h_00807680;
  do {
    pcVar12 = pcVar9;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar12 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar12;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar9 = pcVar12 + -uVar6;
  pcVar12 = local_22c;
  memmove(pcVar12, pcVar9, uVar6); /* compiler REP MOVS byte copy */
  uVar7 = 0;
  uVar6 = 0xffffffff;
  pcVar9 = st::pointer_boundary_cast<char *>(PTR_DAT_0079d65c);
  do {
    pcVar12 = pcVar9;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar12 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar12;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar5 = -1;
  pcVar9 = local_22c;
  do {
    pcVar11 = pcVar9;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar11 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar11;
  } while (cVar1 != '\0');
  pcVar9 = pcVar12 + -uVar6;
  pcVar12 = pcVar11 + -1;
  memmove(pcVar12, pcVar9, uVar6); /* compiler REP MOVS byte copy */
  uVar7 = 0;
  uVar6 = 0xffffffff;
  pcVar9 = &CHAR_00h_00807680;
  do {
    pcVar12 = pcVar9;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar12 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar12;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar9 = pcVar12 + -uVar6;
  pcVar12 = st::pointer_boundary_cast<char *>(&stack0xfffffcd0);
  memmove(pcVar12, pcVar9, uVar6); /* compiler REP MOVS byte copy */
  st::fn_006B78C0(st::pointer_boundary_cast<char *>(&stack0xfffffcd0),st::pointer_boundary_cast<char *>(&stack0xfffffcd0));
  array = (DArrayTy *)
          st::fn_00404403((LPCSTR)param_1,(AnonShape_00683C70_22193481 *)&stack0xfffffcd0,
                             st::pointer_boundary_cast<undefined4 *>(&local_14),param_4,nullptr);
  if (array != nullptr) {
    if (local_14 != CASE_A) {
      local_8 = array;
      st::fn_004012B7((int *)&local_8,local_14);
      return nullptr;
    }
    local_8 = nullptr;
    uVar6 = array->count;
    local_10 = array;
    if (uVar6 != 0) {
      while (uVar6 = uVar6 - 1, -1 < (int)uVar6) {
        if (uVar6 < array->count) {
          pcVar9 = DArrayAt<char>(array, uVar6);
        }
        else {
          pcVar9 = nullptr;
        }
        if (((*pcVar9 != '\0') &&
            (iVar6 = st::fn_0072E620((char *)&DAT_008117c0,pcVar9), iVar6 != 0)) ||
           (uVar8 != *(uint *)(pcVar9 + 0x104))) {
          st::fn_006B0C70(array,uVar6);
        }
      }
      uVar6 = array->count;
      if (uVar6 != 0) {
        uVar8 = 0xffffffff;
        uVar7 = 0;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (uint *)0xffffffff;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)0xffffffff;
        if (0 < (int)uVar6) {
          bVar13 = uVar6 != 0;
          do {
            if (((bVar13) &&
                (pvVar4 = DArrayAt<void>(array, uVar7),
                pvVar4 != nullptr)) &&
               ((STField<int>(pvVar4,0x108) < 0 &&
                ((puVar2 = STField<uint *>(pvVar4,0x110), (int)local_c <= (int)puVar2 &&
                 (piVar3 = STField<int *>(pvVar4,0x10c), (int)piVar3 <= (int)local_c)))))) {
              if ((int)param_4 < (int)piVar3) {
                uVar8 = uVar7;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_4 = piVar3;
              }
              if ((int)param_1 < (int)puVar2) {
                uVar8 = uVar7;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = puVar2;
              }
            }
            uVar6 = array->count;
            uVar7 = uVar7 + 1;
            bVar13 = uVar7 < uVar6;
          } while ((int)uVar7 < (int)uVar6);
          if (((-1 < (int)uVar8) && (uVar8 < uVar6)) &&
             (pvVar4 = DArrayAt<void>(array, uVar8),
             pvVar4 != nullptr)) {
            uVar6 = 0xffffffff;
            pcVar9 = (char *)((int)pvVar4 + 0x114);
            do {
              pcVar12 = pcVar9;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar12 = pcVar9 + 1;
              cVar1 = *pcVar9;
              pcVar9 = pcVar12;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            pcVar9 = pcVar12 + -uVar6;
            pcVar12 = (char *)&DAT_008117c0;
            memmove(pcVar12, pcVar9, uVar6); /* compiler REP MOVS byte copy */
            uVar6 = 0;
            if (param_2 != nullptr) {
              *param_2 = STField<undefined4>(pvVar4,0x218);
            }
            if (param_3 != nullptr) {
              *param_3 = 1;
            }
            goto LAB_0064a336;
          }
        }
        uVar8 = 0xffffffff;
        uVar7 = 0;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (uint *)0xffffffff;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = (int *)0xffffffff;
        if (0 < (int)uVar6) {
          bVar13 = uVar6 != 0;
          do {
            if (((bVar13) &&
                (pvVar4 = DArrayAt<void>(array, uVar7),
                pvVar4 != nullptr)) &&
               ((STField<uint>(pvVar4,0x108) == local_c &&
                ((puVar2 = STField<uint *>(pvVar4,0x110), (int)local_18 <= (int)puVar2 &&
                 (piVar3 = STField<int *>(pvVar4,0x10c), (int)piVar3 <= (int)local_18)))))) {
              if ((int)param_4 < (int)piVar3) {
                uVar8 = uVar7;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_4 = piVar3;
              }
              if ((int)param_1 < (int)puVar2) {
                uVar8 = uVar7;
                /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
                param_1 = puVar2;
              }
            }
            uVar6 = array->count;
            uVar7 = uVar7 + 1;
            bVar13 = uVar7 < uVar6;
          } while ((int)uVar7 < (int)uVar6);
          if (((-1 < (int)uVar8) && (uVar8 < uVar6)) &&
             (pvVar4 = DArrayAt<void>(array, uVar8),
             pvVar4 != nullptr)) {
            uVar6 = 0xffffffff;
            pcVar9 = (char *)((int)pvVar4 + 0x114);
            do {
              pcVar12 = pcVar9;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar12 = pcVar9 + 1;
              cVar1 = *pcVar9;
              pcVar9 = pcVar12;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            pcVar9 = pcVar12 + -uVar6;
            pcVar12 = (char *)&DAT_008117c0;
            memmove(pcVar12, pcVar9, uVar6); /* compiler REP MOVS byte copy */
            if (param_2 != nullptr) {
              *param_2 = STField<undefined4>(pvVar4,0x218);
            }
            if (param_3 != nullptr) {
              *param_3 = 2;
            }
LAB_0064a336:
            if (local_10 != nullptr) {
              st::fn_006AE110(local_10);
            }
            return &DAT_008117c0;
          }
        }
        if (array == nullptr) {
          return nullptr;
        }
      }
    }
    st::fn_006AE110(array);
  }
  return nullptr;
}

// 0064A450 FUN_0064a450
#line 1 "decomp/ST.exe/functions/0064A450/decomp.c"

DWORD st::fn_0064A450(void)

{
  DWORD DVar1;
  DWORD local_118 [65];
  _SYSTEMTIME local_14;

  if ((HANDLE_008118f8 == (HANDLE)0x0) && (DAT_0080734a != '\0')) {
    st::external_00000080((LPSTR)local_118,st::mutable_c_string("%sAIScript.dbg"),&CHAR_00h_00807680);
    HANDLE_008118f8 =
         st::external_00000055((LPCSTR)local_118,0x40000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
    if (HANDLE_008118f8 == (HANDLE)0xffffffff) {
      HANDLE_008118f8 = (HANDLE)0x0;
      DVar1 = st::external_00000028();
      return DVar1;
    }
    st::external_00000020(st::pointer_boundary_cast<LPSYSTEMTIME>(&local_14));
    st::external_00000080((LPSTR)local_118,st::mutable_c_string("\r\n=========== Start in [%02d/%02d/%02d, %02d:%02d:%02d] ========"),local_14.wMonth,
              local_14.wDay,local_14.wYear,local_14.wHour,local_14.wMinute,local_14.wSecond);
    st::fn_00403B89(local_118);
  }
  return 0;
}

// 0064A580 FUN_0064a580
#line 1 "decomp/ST.exe/functions/0064A580/decomp.c"

/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_0064A580(void)

{
  if (HANDLE_008118f8 != (HANDLE)0x0) {
    st::external_00000027(HANDLE_008118f8);
  }
  HANDLE_008118f8 = (HANDLE)0x0;
  return;
}

// 0064A5B0 FUN_0064a5b0
#line 4 "decomp/ST.exe/functions/0064A5B0/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 0064A5B0 -> EXTERNAL:00000059 @ 0064A60A */

void __cdecl st::fn_0064A5B0(LPDWORD lpNumberOfBytesWritten)

{
  char cVar1;
  DWORD DVar2;
  uint uVar3;
  LPDWORD pDVar4;
  char *pcVar5;

  if ((HANDLE_008118f8 != (HANDLE)0x0) && (DAT_0080734a != '\0')) {
    uVar3 = 0xffffffff;
    pDVar4 = lpNumberOfBytesWritten;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      DVar2 = *pDVar4;
      pDVar4 = (LPDWORD)((int)pDVar4 + 1);
    } while ((char)DVar2 != '\0');
    st::external_00000059(HANDLE_008118f8,st::pointer_boundary_cast<LPCVOID>(lpNumberOfBytesWritten),~uVar3 - 1,(LPDWORD)&lpNumberOfBytesWritten,
              (LPOVERLAPPED)0x0);
    uVar3 = 0xffffffff;
    pcVar5 = &CHAR_0Dh_007d2a00;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    st::external_00000059(HANDLE_008118f8,st::pointer_boundary_cast<LPCVOID>(&CHAR_0Dh_007d2a00),~uVar3 - 1,(LPDWORD)&lpNumberOfBytesWritten,
              (LPOVERLAPPED)0x0);
  }
  return;
}

// 0064A7C0 FUN_0064a7c0
#line 4 "decomp/ST.exe/functions/0064A7C0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return */

void __cdecl st::fn_0064A7C0(undefined4 *param_1)

{
  if (param_1 != nullptr) {
    if (param_1[2] != 0) {
      st::fn_006AB060(param_1 + 2);
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

// 0064A800 FUN_0064a800
#line 4 "decomp/ST.exe/functions/0064A800/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=6, used=0), and
   decompilation contains no value return

   [STReturnSemanticsApplier] repair_unsafe_eax_rollback.
   Evidence: restore the earlier evidence-backed void type after an unsafe automated rollback;
   post-CALL EAX reads alone do not prove a source-level return value; machine CFG audit: used=7,
   ignored=7, unknown=0 */

void __cdecl st::fn_0064A800(undefined4 *param_1)

{
  if ((undefined4 *)*param_1 != nullptr) {
    st::fn_00402FA4((undefined4 *)*param_1);
    st::fn_006AB060(param_1);
  }
  return;
}

// 0064A910 FUN_0064a910
#line 4 "decomp/ST.exe/functions/0064A910/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0064A910 returns used as parameter 0 of FUN_0064a970 @ 00672042 | 0064A910 returns used
   as parameter 1 of SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::FUN_0066acc0 @
   0067201F

   [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 00672440 -> 0064A910 @ 006724CA;
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::FUN_00672440 parameter param_1 |
   00683C70 -> 0064A910 @ 00689967; data at 00848A14 */

char * __cdecl st::fn_0064A910(AnonShape_00683780_11EA4E23 *param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < param_1->field_0004)) {
    return (char *)(param_1->field_0008 + param_2 * 5);
  }
  return nullptr;
}

// 0064A940 FUN_0064a940
#line 4 "decomp/ST.exe/functions/0064A940/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 00671F10 -> 0064A940 @ 00672079; return of FUN_0064a630 | 006823E0 -> 0064A940 @
   006824E7; data at 00848A14 | 006823E0 -> 0064A940 @ 00682550; data at 00848A14 | 006823E0 ->
   0064A940 @ 0068258D; data at 00848A14 */

undefined4 __cdecl st::fn_0064A940(AnonShape_00683780_11EA4E23 *param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 <= param_1->field_0004)) {
    param_1->field_0004 = param_2;
    return 1;
  }
  return 0;
}

// 0064CC90 FUN_0064cc90
#line 4 "decomp/ST.exe/functions/0064CC90/decomp.c"
undefined4 * __fastcall st::fn_0064CC90(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;

  *(undefined1 *)(param_1 + 1) = 0;
  param_1[0x21] = 0;
  *param_1 = st::machine_word_boundary_cast<undefined4>(&st_global_0079D67C);
  if (param_1 == nullptr) {
    puVar2 = nullptr;
  }
  else {
    puVar2 = param_1 + 0x23;
  }
  memset(puVar2, 0, 0x49f); /* compiler bulk-zero initialization */
  puVar2 = (undefined4 *)((byte *)puVar2 + 0x49c);
  iVar1 = 0;
  st::fn_00403148((undefined4 *)&DAT_007d3f78);
  STField<undefined4>(param_1,0x5b3) = 0;
  memset((void *)((int)param_1 + 0x52f), 0, 0x84); /* compiler bulk-zero initialization */
  return param_1;
}

// 0064CD10 FUN_0064cd10
#line 4 "decomp/ST.exe/functions/0064CD10/decomp.c"
undefined4 st::fn_0064CD10(void)

{
  return 0;
}

// 0064CD30 FUN_0064cd30
#line 4 "decomp/ST.exe/functions/0064CD30/decomp.c"
void __fastcall st::fn_0064CD30(int param_1)

{
  AnonShape_0065D030_CB0F82F0 *pAVar1;

  if (param_1 == 0) {
    pAVar1 = nullptr;
  }
  else {
    pAVar1 = (AnonShape_0065D030_CB0F82F0 *)(param_1 + 0x8c);
  }
  st::fn_00402F8B(pAVar1);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(DArrayTy **)(param_1 + 0x5b3) != nullptr) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_006B5570(*(DArrayTy **)(param_1 + 0x5b3));
    *(undefined4 *)(param_1 + 0x5b3) = 0;
  }
  return;
}

// 0064D0E0 FUN_0064d0e0
#line 4 "decomp/ST.exe/functions/0064D0E0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00652810 -> 0064D0E0 @ 00652AA7 | 00652810 -> 0064D0E0 @ 00652F0A | 00652810 ->
   0064D0E0 @ 00652F75 | 00652810 -> 0064D0E0 @ 00652FBD | 00652810 -> 0064D0E0 @ 006530E0 |
   00652810 -> 0064D0E0 @ 00653127 | 00652810 -> 0064D0E0 @ 006531CA | 00652810 -> 0064D0E0 @
   00653205 | 00652810 -> 0064D0E0 @ 00653322 | 00652810 -> 0064D0E0 @ 00653C53 | 00652810 ->
   0064D0E0 @ 00653D41 | 00652810 -> 0064D0E0 @ 00653D74 | 00652810 -> 0064D0E0 @ 00655334 |
   00652810 -> 0064D0E0 @ 00655CBA | 00652810 -> 0064D0E0 @ 00655E14 | 00652810 -> 0064D0E0 @
   00655F5D | 00652810 -> 0064D0E0 @ 0065627E | 00652810 -> 0064D0E0 @ 006566A6 | 00652810 ->
   0064D0E0 @ 006568D2 | 00652810 -> 0064D0E0 @ 00656977 | 00652810 -> 0064D0E0 @ 00656B2D |
   00652810 -> 0064D0E0 @ 00656C21 | 00652810 -> 0064D0E0 @ 00656D15 | 00652810 -> 0064D0E0 @
   00656DDE | 00652810 -> 0064D0E0 @ 00656EAE | 00652810 -> 0064D0E0 @ 00656EEF | 00652810 ->
   0064D0E0 @ 00656F22 | 00652810 -> 0064D0E0 @ 00657127 | 00652810 -> 0064D0E0 @ 006571F8 |
   00652810 -> 0064D0E0 @ 006572CF | 00652810 -> 0064D0E0 @ 00657518 | 00652810 -> 0064D0E0 @
   00657644 | 00652810 -> 0064D0E0 @ 00659A60

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=79, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_0064D0E0(void *this,int param_1,char *param_2,undefined4 param_3,int param_4)

{
  char *pcVar1;
  char *text;
  int iVar2;
  DWORD local_404 [256];

  if (DAT_0080734a != '\0') {
    if (param_1 < 0x12d) {
      if (param_1 < -300) {
        param_1 = -300;
      }
    }
    else {
      param_1 = 300;
    }
    pcVar1 = st::fn_006B0140(0x1d4c - param_1,g_hINSTANCE_00807618);
    text = st::fn_006B0140(0x1b5f,g_hINSTANCE_00807618);
    st::external_00000080((LPSTR)local_404,text,param_1,pcVar1,param_2);
    if (g_popUp_008016D8 != nullptr) {
      st::fn_004014D8(g_popUp_008016D8,(char *)local_404,8);
    }
    st::fn_00403B89(local_404);
    if (param_4 < 0) {
      iVar2 = (int)this + 0x92;
      pcVar1 = st::fn_006B0140(0x1b60,g_hINSTANCE_00807618);
      st::external_00000080((LPSTR)local_404,pcVar1,iVar2,param_3);
    }
    else {
      iVar2 = (int)this + 0x92;
      pcVar1 = st::fn_006B0140(0x1b61,g_hINSTANCE_00807618);
      st::external_00000080((LPSTR)local_404,pcVar1,iVar2,param_3,param_4);
    }
    if (g_popUp_008016D8 != nullptr) {
      st::fn_004014D8(g_popUp_008016D8,(char *)local_404,8);
    }
    st::fn_00403B89(local_404);
    st::fn_00403B89((LPDWORD)&CHAR_0Dh_007d2a00);
  }
  return;
}

// 0064DAC0 FUN_0064dac0
#line 4 "decomp/ST.exe/functions/0064DAC0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0064DAC0 returns zeroed full register at 0064DAE9 @ 0064DAEC */

uint __cdecl st::fn_0064DAC0(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 *param_4)

{
  st::fn_0040387D(g_allPlayers_007FA174,(char)param_1,param_2,CASE_5,*param_4);
  DAT_008118fc = DAT_008118fc + 1;
  return 0;
}

// 0064DD30 FUN_0064dd30
#line 4 "decomp/ST.exe/functions/0064DD30/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0064DD30 returns zeroed full register at 0064DD59 @ 0064DD5C */

uint __cdecl st::fn_0064DD30(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 *param_4)

{
  st::fn_0040387D(g_allPlayers_007FA174,(char)param_1,param_2,CASE_2,*param_4);
  DAT_008118fc = DAT_008118fc + 1;
  return 0;
}

// 0064DD70 FUN_0064dd70
#line 4 "decomp/ST.exe/functions/0064DD70/decomp.c"
undefined4 __cdecl
st::fn_0064DD70(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*param_3 + 0x140))(param_4);
  return 0xffffffff;
}

// 0064DF30 FUN_0064df30
#line 4 "decomp/ST.exe/functions/0064DF30/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0064DF30 returns zeroed full register at 0064DF59 @ 0064DF5C */

uint __cdecl st::fn_0064DF30(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 *param_4)

{
  st::fn_0040387D(g_allPlayers_007FA174,(char)param_1,param_2,CASE_6,*param_4);
  DAT_008118fc = DAT_008118fc + 1;
  return 0;
}

// 0064DF70 FUN_0064df70
#line 4 "decomp/ST.exe/functions/0064DF70/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0064DF70 returns zeroed full register at 0064DF7F @ 0064DF82 */

uint __cdecl st::fn_0064DF70(undefined4 param_1,undefined4 param_2,void *param_3,char *param_4)

{
  st::fn_00403DC8(param_3,param_4);
  return 0;
}

// 0064E1F0 FUN_0064e1f0
#line 4 "decomp/ST.exe/functions/0064E1F0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0064E1F0 returns zeroed full register at 0064E219 @ 0064E21C */

uint __cdecl st::fn_0064E1F0(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 *param_4)

{
  st::fn_0040387D(g_allPlayers_007FA174,(char)param_1,param_2,CASE_3,*param_4);
  DAT_008118fc = DAT_008118fc + 1;
  return 0;
}

// 0064E230 FUN_0064e230
#line 4 "decomp/ST.exe/functions/0064E230/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0064E230 returns zeroed full register at 0064E23F @ 0064E242 */

uint __cdecl st::fn_0064E230(undefined4 param_1,undefined4 param_2,void *param_3,undefined4 param_4)

{
  st::fn_0040592A(param_3,param_4);
  return 0;
}

// 0064E260 FUN_0064e260
#line 4 "decomp/ST.exe/functions/0064E260/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0064E260 parameter used as this of STResourceC::sub_00580D30 @ 0064E274

   [STPrototypeApplier] Propagated return.
   Evidence: 0064E260 returns zeroed full register at 0064E279 @ 0064E27C */

uint __cdecl st::fn_0064E260(undefined4 param_1,undefined4 param_2,STResourceC *param_3,int *param_4)

{
  st::fn_00403A30(param_3,(uint)(*param_4 == 5));
  return 0;
}

// 0064E290 FUN_0064e290
#line 4 "decomp/ST.exe/functions/0064E290/decomp.c"
undefined4 __cdecl st::fn_0064E290(undefined4 param_1,undefined4 param_2,void *param_3,uint param_4)

{
  uint uVar1;
  short sVar2;

  uVar1 = param_4 >> 0x10;
  sVar2 = (short)param_4;
  if (sVar2 < 0) {
    st::fn_0040529F(param_3,uVar1);
  }
  if (sVar2 == 0) {
    st::fn_0040492B(st::pointer_boundary_cast<STResourceC *>(param_3),uVar1,1);
    return 0;
  }
  if (0 < sVar2) {
    st::fn_0040115E(param_3,uVar1);
  }
  return 0;
}

// 0064E510 FUN_0064e510
#line 4 "decomp/ST.exe/functions/0064E510/decomp.c"
int __thiscall st::fn_0064E510(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;

  iVar1 = STField<int>(this,0x4ee);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(iVar1 + 0xc);
    uVar4 = 0;
    if (0 < (int)uVar2) {
      bVar5 = uVar2 != 0;
      do {
        if (((bVar5) && (iVar3 = *(int *)(iVar1 + 8) * uVar4 + *(int *)(iVar1 + 0x1c), iVar3 != 0))
           && (*(int *)(iVar3 + 1) == param_1)) {
          return iVar3;
        }
        uVar4 = uVar4 + 1;
        bVar5 = uVar4 < uVar2;
      } while ((int)uVar4 < (int)uVar2);
    }
  }
  return 0;
}

// 0064E580 FUN_0064e580
#line 4 "decomp/ST.exe/functions/0064E580/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0064E580 returns zero-filled partial register load at 0064E592 @ 0064E597 */

byte __thiscall st::fn_0064E580(void *this,int param_1)

{
  byte *pbVar1;

  pbVar1 = (byte *)st::fn_004048E0(this,param_1);
  if (pbVar1 != nullptr) {
    return *pbVar1;
  }
  return 1;
}

// 0064E5C0 FUN_0064e5c0
#line 4 "decomp/ST.exe/functions/0064E5C0/decomp.c"
/* [STAbiConsistencyApplier] stack_parameter_width: parameter=/short Evidence: entry-use
   width=/short; unmasked_dword_reads=0; evidence=0064E618 MOVSX EAX,word ptr [EBP + 0xc]

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 0064E5F0 CMP CX,DX classifies dword parameter loaded at 0064E5D5 */

void __cdecl
st::fn_0064E5C0(undefined1 param_1,short param_2,short param_3,undefined4 param_4,int param_5)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined2 in_stack_0000000a;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined2 in_stack_0000000e;
  undefined4 local_c;
  undefined4 local_8;

  local_c = _param_2;
  local_8 = _param_3;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  _param_3 = param_4;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  _param_2 = param_5;
  if ((short)param_4 < 1) {
    local_c = 0;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    _param_3 = STPiece<0,4>(g_worldGrid);
  }
  if ((short)param_5 < 1) {
    local_8 = 0;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    in_stack_0000000a = (undefined2)((uint)param_5 >> 0x10);
    /* ST_PSEUDO[unresolved_register_input,stack_slot_reuse,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable; expected named packed member, bit extract/compose, or unaligned load */
    _param_2 = CONCAT22(in_stack_0000000a,g_worldGrid.sizeY);
  }
  st::fn_00401906((short *)&local_c,(short *)&local_8,&param_3,&param_2);
  st::fn_004010C8(param_1,(int)(short)local_c,(int)(short)local_8,(int)param_3,(int)param_2);
  return;
}

// 0064E680 FUN_0064e680
#line 4 "decomp/ST.exe/functions/0064E680/decomp.c"
undefined4 __cdecl st::fn_0064E680(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return 1;
}

// 0064E6C0 FUN_0064e6c0
#line 4 "decomp/ST.exe/functions/0064E6C0/decomp.c"
undefined4 __cdecl st::fn_0064E6C0(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 1);
  return 1;
}

// 0064E700 FUN_0064e700
#line 4 "decomp/ST.exe/functions/0064E700/decomp.c"
undefined4 __cdecl st::fn_0064E700(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return 1;
}

// 0064E740 FUN_0064e740
#line 4 "decomp/ST.exe/functions/0064E740/decomp.c"
undefined4 __cdecl st::fn_0064E740(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 1);
  return 1;
}

// 0064E780 FUN_0064e780
#line 4 "decomp/ST.exe/functions/0064E780/decomp.c"
undefined4 __cdecl st::fn_0064E780(short *param_1)

{
  if (*param_1 < 1) {
    param_1[4] = 0;
    param_1[5] = 0;
  }
  else if ((char)param_1[0x68] != '\b') {
    return 0;
  }
  return 1;
}

// 0064E7C0 FUN_0064e7c0
#line 4 "decomp/ST.exe/functions/0064E7C0/decomp.c"
undefined4 __cdecl st::fn_0064E7C0(short *param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + iVar1 + 0xd0) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  if (*param_1 < 4) {
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_1 + 8);
  }
  else if (STField<char>(param_1,0xd3) != '\b') {
    return 0;
  }
  if (*(int *)(param_1 + 10) < *(int *)(param_1 + 8)) {
    *(int *)(param_1 + 10) = *(int *)(param_1 + 8);
  }
  return 1;
}

// 0064E830 FUN_0064e830
#line 4 "decomp/ST.exe/functions/0064E830/decomp.c"
undefined4 __cdecl st::fn_0064E830(short *param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + iVar1 + 0xd0) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  if (*param_1 < 4) {
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_1 + 8);
  }
  else if (STField<char>(param_1,0xd3) != '\b') {
    return 0;
  }
  if (*param_1 < 5) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  else if ((char)param_1[0x6a] != '\b') {
    return 0;
  }
  if (*(int *)(param_1 + 10) < *(int *)(param_1 + 8)) {
    *(int *)(param_1 + 10) = *(int *)(param_1 + 8);
  }
  return 1;
}

// 0064E8C0 FUN_0064e8c0
#line 4 "decomp/ST.exe/functions/0064E8C0/decomp.c"
undefined4 __cdecl st::fn_0064E8C0(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((-1 < *(int *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x10) < 0x100)) {
    return 1;
  }
  return 0;
}

// 0064E910 FUN_0064e910
#line 4 "decomp/ST.exe/functions/0064E910/decomp.c"
undefined4 __cdecl st::fn_0064E910(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  if ((-1 < *(int *)(param_1 + 8)) && (*(int *)(param_1 + 8) < 0x100)) {
    return 1;
  }
  return 0;
}

// 0064E960 FUN_0064e960
#line 4 "decomp/ST.exe/functions/0064E960/decomp.c"
undefined4 __cdecl st::fn_0064E960(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  if ((-1 < *(int *)(param_1 + 8)) && (*(int *)(param_1 + 8) < 0x21)) {
    return 1;
  }
  return 0;
}

// 0064E9A0 FUN_0064e9a0
#line 4 "decomp/ST.exe/functions/0064E9A0/decomp.c"
undefined4 __cdecl st::fn_0064E9A0(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 1);
  iVar1 = 1;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\n') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  if ((-1 < *(int *)(param_1 + 8)) && (*(int *)(param_1 + 8) < 4)) {
    return 1;
  }
  return 0;
}

// 0064EA10 FUN_0064ea10
#line 4 "decomp/ST.exe/functions/0064EA10/decomp.c"
undefined4 __cdecl st::fn_0064EA10(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  if ((-1 < *(int *)(param_1 + 8)) && (*(int *)(param_1 + 8) < 0x100)) {
    return 1;
  }
  return 0;
}

// 0064EA60 FUN_0064ea60
#line 4 "decomp/ST.exe/functions/0064EA60/decomp.c"
undefined4 __cdecl st::fn_0064EA60(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  if ((-1 < *(int *)(param_1 + 8)) && (*(int *)(param_1 + 8) < 0x21)) {
    return 1;
  }
  return 0;
}

// 0064EAA0 FUN_0064eaa0
#line 4 "decomp/ST.exe/functions/0064EAA0/decomp.c"
undefined4 __cdecl st::fn_0064EAA0(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 1);
  iVar1 = 1;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\n') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  iVar1 = 2;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  if ((-1 < *(int *)(param_1 + 8)) && (*(int *)(param_1 + 8) < 4)) {
    return 1;
  }
  return 0;
}

// 0064EB20 FUN_0064eb20
#line 4 "decomp/ST.exe/functions/0064EB20/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 0065339F
   -> TEST TEST EAX,EAX */

int __cdecl st::fn_0064EB20(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return (uint)(-1 < *(int *)(param_1 + 0x10));
}

// 0064EB60 FUN_0064eb60
#line 4 "decomp/ST.exe/functions/0064EB60/decomp.c"
undefined4 __cdecl st::fn_0064EB60(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return 1;
}

// 0064EBA0 FUN_0064eba0
#line 4 "decomp/ST.exe/functions/0064EBA0/decomp.c"
undefined4 __cdecl st::fn_0064EBA0(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return 1;
}

// 0064EBE0 FUN_0064ebe0
#line 4 "decomp/ST.exe/functions/0064EBE0/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 0065352E
   -> TEST TEST EAX,EAX */

int __cdecl st::fn_0064EBE0(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  iVar1 = 2;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\n') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return (uint)(*(int *)(param_1 + 0x10) != 0);
}

// 0064EC30 FUN_0064ec30
#line 4 "decomp/ST.exe/functions/0064EC30/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 006535D7
   -> TEST TEST EAX,EAX */

int __cdecl st::fn_0064EC30(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  iVar1 = 4;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\n') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return (uint)(*(int *)(param_1 + 0x18) != 0);
}

// 0064EC80 FUN_0064ec80
#line 4 "decomp/ST.exe/functions/0064EC80/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 006536B8
   -> TEST TEST EAX,EAX */

int __cdecl st::fn_0064EC80(AnonShape_0064EC80_53C284F2 *param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    if ((&param_1[7].field_0xc)[iVar1] != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  if (param_1->field_0014 < 0) {
    return 0;
  }
  return (uint)(param_1->field_0014 <= param_1->field_0018);
}

// 0064ECD0 FUN_0064ecd0
#line 4 "decomp/ST.exe/functions/0064ECD0/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 00653753
   -> TEST TEST EAX,EAX */

int __cdecl st::fn_0064ECD0(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  iVar1 = 3;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\n') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return (uint)(*(int *)(param_1 + 0x14) != 0);
}

// 0064ED20 FUN_0064ed20
#line 4 "decomp/ST.exe/functions/0064ED20/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 006537E4
   -> TEST TEST EAX,EAX */

int __cdecl st::fn_0064ED20(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  iVar1 = 2;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\n') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return (uint)(*(int *)(param_1 + 0x10) != 0);
}

// 0064ED70 FUN_0064ed70
#line 4 "decomp/ST.exe/functions/0064ED70/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 0065388B
   -> TEST TEST EAX,EAX */

int __cdecl st::fn_0064ED70(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  iVar1 = 2;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\n') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return (uint)(*(int *)(param_1 + 0x10) != 0);
}

// 0064EDC0 FUN_0064edc0
#line 4 "decomp/ST.exe/functions/0064EDC0/decomp.c"
undefined4 __cdecl st::fn_0064EDC0(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 7);
  return 1;
}

// 0064EE00 FUN_0064ee00
#line 4 "decomp/ST.exe/functions/0064EE00/decomp.c"
undefined4 __cdecl st::fn_0064EE00(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return 1;
}

// 0064EE40 FUN_0064ee40
#line 4 "decomp/ST.exe/functions/0064EE40/decomp.c"
undefined4 __cdecl st::fn_0064EE40(short *param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + iVar1 + 0xd0) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  if (*param_1 < 5) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  else if ((char)param_1[0x6a] != '\b') {
    return 0;
  }
  return 1;
}

// 0064EE90 FUN_0064ee90
#line 4 "decomp/ST.exe/functions/0064EE90/decomp.c"
undefined4 __cdecl st::fn_0064EE90(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return 1;
}

// 0064EED0 FUN_0064eed0
#line 4 "decomp/ST.exe/functions/0064EED0/decomp.c"
undefined4 __cdecl st::fn_0064EED0(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return 1;
}

// 0064EF10 FUN_0064ef10
#line 4 "decomp/ST.exe/functions/0064EF10/decomp.c"
undefined4 __cdecl st::fn_0064EF10(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((-1 < *(int *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x10) < 3)) {
    return 1;
  }
  return 0;
}

// 0064EF50 FUN_0064ef50
#line 4 "decomp/ST.exe/functions/0064EF50/decomp.c"
undefined4 __cdecl st::fn_0064EF50(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  return 1;
}

// 0064EF90 FUN_0064ef90
#line 4 "decomp/ST.exe/functions/0064EF90/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (2), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 00654266
   -> TEST TEST EAX,EAX | 00652810 @ 00654434 -> TEST TEST EAX,EAX */

int __cdecl st::fn_0064EF90(AnonShape_0064EF90_4909407D *param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    if (*(char *)((int)&param_1[8].field_0010 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  iVar1 = 3;
  do {
    if (*(char *)((int)&param_1[8].field_0010 + iVar1) != '\n') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  if ((-1 < param_1->field_0010) && (param_1->field_0010 < 0x100)) {
    return (uint)(param_1->field_0014 != 0);
  }
  return 0;
}

// 0064F000 FUN_0064f000
#line 4 "decomp/ST.exe/functions/0064F000/decomp.c"
undefined4 __cdecl st::fn_0064F000(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return 1;
}

// 0064F040 FUN_0064f040
#line 4 "decomp/ST.exe/functions/0064F040/decomp.c"
undefined4 __cdecl st::fn_0064F040(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return 1;
}

// 0064F080 FUN_0064f080
#line 4 "decomp/ST.exe/functions/0064F080/decomp.c"
undefined4 __cdecl st::fn_0064F080(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return 1;
}

// 0064F0C0 FUN_0064f0c0
#line 4 "decomp/ST.exe/functions/0064F0C0/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 00653F20
   -> TEST TEST EAX,EAX */

int __cdecl st::fn_0064F0C0(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  iVar1 = 2;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\n') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return (uint)(*(int *)(param_1 + 0x10) != 0);
}

// 0064F110 FUN_0064f110
#line 4 "decomp/ST.exe/functions/0064F110/decomp.c"
undefined4 __cdecl st::fn_0064F110(short *param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + iVar1 + 0xd0) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  if (*param_1 < 4) {
    param_1[10] = -1;
    param_1[0xb] = -1;
  }
  else if (STField<char>(param_1,0xd3) != '\b') {
    return 0;
  }
  return 1;
}

// 0064F160 FUN_0064f160
#line 4 "decomp/ST.exe/functions/0064F160/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 00654066
   -> TEST TEST EAX,EAX */

int __cdecl st::fn_0064F160(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  iVar1 = 3;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\n') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return (uint)(*(int *)(param_1 + 0x14) != 0);
}

// 0064F1B0 FUN_0064f1b0
#line 4 "decomp/ST.exe/functions/0064F1B0/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 00654108
   -> TEST TEST EAX,EAX */

int __cdecl st::fn_0064F1B0(RecoveredRecord_AiEventClassTy_0064F1B0 *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    if ((&param_1->field_0xd0)[iVar2] != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  iVar2 = 3;
  do {
    if ((&param_1->field_0xd0)[iVar2] != '\n') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  sVar1 = *(short *)param_1;
  if (sVar1 < 5) {
    *(undefined4 *)&param_1->field_0x18 = 0;
  }
  else if (param_1->field_0xd4 != '\b') {
    return 0;
  }
  if (sVar1 < 6) {
    *(undefined4 *)&param_1->field_0x1c = 1;
  }
  else if (param_1->field_00D5 != '\b') {
    return 0;
  }
  if (sVar1 < 7) {
    *(undefined4 *)&param_1->field_0x20 = 2;
  }
  else if (param_1->field_0xd6 != '\b') {
    return 0;
  }
  if (sVar1 < 8) {
    *(undefined4 *)&param_1->field_0x24 = 0;
  }
  else if (param_1->field_00D7 != '\b') {
    return 0;
  }
  if (sVar1 < 9) {
    *(undefined4 *)&param_1->field_0x28 = 0;
  }
  else if (param_1->field_0xd8 != '\b') {
    return 0;
  }
  if (sVar1 < 10) {
    *(undefined4 *)&param_1->field_0x2c = 0x280;
  }
  else if (param_1->field_00D9 != '\b') {
    return 0;
  }
  if (sVar1 < 0xb) {
    *(undefined4 *)&param_1->field_0x30 = 0x1e0;
  }
  else if (param_1->field_0xda != '\b') {
    return 0;
  }
  if (0xb < sVar1) {
    if (param_1->field_00DB == '\b') {
      return (uint)(*(int *)&param_1->field_0x14 != 0);
    }
    return 0;
  }
  *(undefined4 *)&param_1->field_0x34 = 0;
  return (uint)(*(int *)&param_1->field_0x14 != 0);
}

// 0064F320 FUN_0064f320
#line 4 "decomp/ST.exe/functions/0064F320/decomp.c"
undefined4 __cdecl st::fn_0064F320(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return 1;
}

// 0064F360 FUN_0064f360
#line 4 "decomp/ST.exe/functions/0064F360/decomp.c"
undefined4 __cdecl st::fn_0064F360(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((-1 < *(int *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x10) < 8)) {
    return 1;
  }
  return 0;
}

// 0064F3B0 FUN_0064f3b0
#line 4 "decomp/ST.exe/functions/0064F3B0/decomp.c"
undefined4 __cdecl st::fn_0064F3B0(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return 1;
}

// 0064F3F0 FUN_0064f3f0
#line 4 "decomp/ST.exe/functions/0064F3F0/decomp.c"
undefined4 __cdecl st::fn_0064F3F0(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 1);
  return 1;
}

// 0064F430 FUN_0064f430
#line 4 "decomp/ST.exe/functions/0064F430/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 0065488A
   -> TEST TEST EAX,EAX */

int __cdecl st::fn_0064F430(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return (uint)(*(int *)(param_1 + 0x10) < 3);
}

// 0064F470 FUN_0064f470
#line 4 "decomp/ST.exe/functions/0064F470/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 0065490E
   -> TEST TEST EAX,EAX */

int __cdecl st::fn_0064F470(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (2 < *(int *)(param_1 + 0x10)) {
    return 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return (uint)(*(int *)(param_1 + 0x14) < 3);
}

// 0064F4C0 FUN_0064f4c0
#line 4 "decomp/ST.exe/functions/0064F4C0/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 006549A5
   -> TEST TEST EAX,EAX */

int __cdecl st::fn_0064F4C0(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 1);
  return (uint)(*(int *)(param_1 + 8) < 3);
}

// 0064F500 FUN_0064f500
#line 4 "decomp/ST.exe/functions/0064F500/decomp.c"
undefined4 __cdecl st::fn_0064F500(RecoveredRecord_AiEventClassTy_0064F500 *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    if ((&param_1->field_0xd0)[iVar2] != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  if (*(int *)&param_1->field_0x10 < 3) {
    sVar1 = *(short *)param_1;
    if (sVar1 < 4) {
      *(undefined4 *)&param_1->field_0x14 = 0xffffffff;
    }
    else if (param_1->field_00D3 != '\b') {
      return 0;
    }
    if (sVar1 < 5) {
      *(undefined4 *)&param_1->field_0x18 = 0xffffffff;
    }
    else if (param_1->field_0xd4 != '\b') {
      return 0;
    }
    if (sVar1 < 6) {
      *(undefined4 *)&param_1->field_0x1c = 0xffffffff;
    }
    else if (param_1->field_00D5 != '\b') {
      return 0;
    }
    return 1;
  }
  return 0;
}

// 0064F5A0 FUN_0064f5a0
#line 4 "decomp/ST.exe/functions/0064F5A0/decomp.c"
undefined4 __cdecl st::fn_0064F5A0(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  return 1;
}

// 0064F5E0 FUN_0064f5e0
#line 4 "decomp/ST.exe/functions/0064F5E0/decomp.c"
undefined4 __cdecl st::fn_0064F5E0(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return 1;
}

// 0064F620 FUN_0064f620
#line 4 "decomp/ST.exe/functions/0064F620/decomp.c"
undefined4 __cdecl st::fn_0064F620(short *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + iVar2 + 0xd0) != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 1);
  sVar1 = *param_1;
  if (sVar1 < 2) {
    param_1[6] = 0;
    param_1[7] = 0;
  }
  else if (STField<char>(param_1,0xd1) != '\b') {
    return 0;
  }
  if (sVar1 < 3) {
    param_1[8] = 0;
    param_1[9] = 0;
  }
  else if ((char)param_1[0x69] != '\b') {
    return 0;
  }
  if (sVar1 < 4) {
    param_1[10] = -1;
    param_1[0xb] = -1;
  }
  else if (STField<char>(param_1,0xd3) != '\b') {
    return 0;
  }
  if (4 < sVar1) {
    if ((char)param_1[0x6a] != '\b') {
      return 0;
    }
    return 1;
  }
  param_1[0xc] = -1;
  param_1[0xd] = -1;
  return 1;
}

// 0064F6E0 FUN_0064f6e0
#line 4 "decomp/ST.exe/functions/0064F6E0/decomp.c"
undefined4 st::fn_0064F6E0(void)

{
  return 1;
}

// 0064F700 FUN_0064f700
#line 4 "decomp/ST.exe/functions/0064F700/decomp.c"
undefined4 __cdecl st::fn_0064F700(short *param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + iVar1 + 0xd0) != '\n') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 1);
  iVar1 = 1;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + iVar1 + 0xd0) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  if (*param_1 < 5) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  else if ((char)param_1[0x6a] != '\b') {
    return 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((-1 < *(int *)(param_1 + 0xc)) && (*(int *)(param_1 + 0xc) < 3)) {
    return 1;
  }
  return 0;
}

// 0064F780 FUN_0064f780
#line 4 "decomp/ST.exe/functions/0064F780/decomp.c"
undefined4 __cdecl st::fn_0064F780(RecoveredRecord_AiEventClassTy_0064F780 *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    if ((&param_1->field_0xd0)[iVar2] != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  sVar1 = *(short *)param_1;
  if (sVar1 < 4) {
    *(undefined4 *)&param_1->field_0x14 = 0xffffffff;
  }
  else if (param_1->field_00D3 != '\b') {
    return 0;
  }
  if (sVar1 < 5) {
    *(undefined4 *)&param_1->field_0x18 = 0xffffffff;
  }
  else if (param_1->field_0xd4 != '\b') {
    return 0;
  }
  if (sVar1 < 6) {
    *(undefined4 *)&param_1->field_0x1c = 0xffffffff;
  }
  else if (param_1->field_00D5 != '\b') {
    return 0;
  }
  if (sVar1 < 7) {
    *(undefined4 *)&param_1->field_0x20 = 0xffffffff;
  }
  else if (param_1->field_0xd6 != '\b') {
    return 0;
  }
  if (sVar1 < 8) {
    *(undefined4 *)&param_1->field_0x24 = 0;
  }
  else if (param_1->field_00D7 != '\n') {
    return 0;
  }
  if (sVar1 < 9) {
    *(undefined4 *)&param_1->field_0x28 = 0xffffffff;
  }
  else if (param_1->field_0xd8 != '\b') {
    return 0;
  }
  if (sVar1 < 10) {
    *(undefined4 *)&param_1->field_0x2c = 100;
  }
  else if (param_1->field_00D9 != '\b') {
    return 0;
  }
  if (sVar1 < 0xb) {
    *(undefined4 *)&param_1->field_0x30 = 1;
  }
  else if (param_1->field_0xda != '\b') {
    return 0;
  }
  if (sVar1 < 0xc) {
    *(undefined4 *)&param_1->field_0x34 = 0;
  }
  else if (param_1->field_00DB != '\b') {
    return 0;
  }
  if (0xc < sVar1) {
    if (*(char *)(param_1 + 1) != '\b') {
      return 0;
    }
    return 1;
  }
  *(undefined4 *)&param_1->field_0x38 = 0;
  return 1;
}

// 0064F900 FUN_0064f900
#line 4 "decomp/ST.exe/functions/0064F900/decomp.c"
undefined4 __cdecl st::fn_0064F900(short *param_1)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + iVar1 + 0xd0) != '\b') goto LAB_0064f931;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  uVar2 = 1;
  if (*param_1 < 3) {
    param_1[8] = 1;
    param_1[9] = 0;
    return uVar2;
  }
  if ((char)param_1[0x69] != '\b') {
LAB_0064f931:
    uVar2 = 0;
  }
  return uVar2;
}

// 0064F950 FUN_0064f950
#line 4 "decomp/ST.exe/functions/0064F950/decomp.c"
undefined4 __cdecl st::fn_0064F950(RecoveredRecord_AiEventClassTy_0064F950 *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    if ((&param_1->field_0xd0)[iVar2] != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  sVar1 = *(short *)param_1;
  if (sVar1 < 3) {
    *(undefined4 *)&param_1->field_0x10 = 0x3fffffff;
  }
  else if (param_1->field_0xd2 != '\b') {
    return 0;
  }
  if (sVar1 < 4) {
    *(undefined4 *)&param_1->field_0x14 = 0;
  }
  else if (param_1->field_00D3 != '\b') {
    return 0;
  }
  if (sVar1 < 5) {
    *(undefined4 *)&param_1->field_0x18 = 0xffffffff;
  }
  else if (param_1->field_0xd4 != '\b') {
    return 0;
  }
  if (sVar1 < 6) {
    *(undefined4 *)&param_1->field_0x1c = 0;
  }
  else if (param_1->field_00D5 != '\n') {
    return 0;
  }
  if (sVar1 < 7) {
    *(undefined4 *)&param_1->field_0x20 = 0;
  }
  else if (param_1->field_0xd6 != '\b') {
    return 0;
  }
  if (sVar1 < 8) {
    *(undefined4 *)&param_1->field_0x24 = 0;
  }
  else if (param_1->field_00D7 != '\b') {
    return 0;
  }
  if (sVar1 < 9) {
    *(undefined4 *)&param_1->field_0x28 = 0;
  }
  else if (param_1->field_0xd8 != '\b') {
    return 0;
  }
  if (sVar1 < 10) {
    *(undefined4 *)&param_1->field_0x2c = 0xffffffff;
  }
  else if (param_1->field_00D9 != '\b') {
    return 0;
  }
  if (sVar1 < 0xb) {
    *(undefined4 *)&param_1->field_0x30 = 0xffffffff;
  }
  else if (param_1->field_0xda != '\b') {
    return 0;
  }
  if (sVar1 < 0xc) {
    *(undefined4 *)&param_1->field_0x34 = 0xffffffff;
  }
  else if (param_1->field_00DB != '\b') {
    return 0;
  }
  if (sVar1 < 0xd) {
    *(undefined4 *)&param_1->field_0x38 = 1;
  }
  else if (*(char *)(param_1 + 1) != '\b') {
    return 0;
  }
  return 1;
}

// 0064FB00 FUN_0064fb00
#line 4 "decomp/ST.exe/functions/0064FB00/decomp.c"
undefined4 __cdecl st::fn_0064FB00(short *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + iVar2 + 0xd0) != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 7);
  sVar1 = *param_1;
  if (sVar1 < 8) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  else if (STField<char>(param_1,0xd7) != '\n') {
    return 0;
  }
  if (8 < sVar1) {
    if ((char)param_1[0x6c] != '\b') {
      return 0;
    }
    return 1;
  }
  param_1[0x14] = 1;
  param_1[0x15] = 0;
  return 1;
}

// 0064FB80 FUN_0064fb80
#line 4 "decomp/ST.exe/functions/0064FB80/decomp.c"
undefined4 __cdecl st::fn_0064FB80(RecoveredRecord_AiEventClassTy_0064FB80 *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    if ((&param_1->field_0xd0)[iVar2] != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  sVar1 = *(short *)param_1;
  if (sVar1 < 3) {
    *(undefined4 *)&param_1->field_0x10 = 0;
  }
  else if (param_1->field_0xd2 != '\b') {
    return 0;
  }
  if (sVar1 < 4) {
    *(undefined4 *)&param_1->field_0x14 = 0;
  }
  else if (param_1->field_00D3 != '\n') {
    return 0;
  }
  if (sVar1 < 5) {
    *(undefined4 *)&param_1->field_0x18 = 0xffffffff;
  }
  else if (param_1->field_0xd4 != '\b') {
    return 0;
  }
  if (sVar1 < 6) {
    *(undefined4 *)&param_1->field_0x1c = 0xffffffff;
  }
  else if (param_1->field_00D5 != '\b') {
    return 0;
  }
  if (sVar1 < 7) {
    *(undefined4 *)&param_1->field_0x20 = 0xffffffff;
  }
  else if (param_1->field_0xd6 != '\b') {
    return 0;
  }
  if (sVar1 < 8) {
    *(undefined4 *)&param_1->field_0x24 = 0xffffffff;
  }
  else if (param_1->field_00D7 != '\b') {
    return 0;
  }
  if (sVar1 < 9) {
    *(undefined4 *)&param_1->field_0x28 = 0xffffffff;
  }
  else if (param_1->field_0xd8 != '\b') {
    return 0;
  }
  if (sVar1 < 10) {
    *(undefined4 *)&param_1->field_0x2c = 0xffffffff;
  }
  else if (param_1->field_00D9 != '\b') {
    return 0;
  }
  if (sVar1 < 0xb) {
    *(undefined4 *)&param_1->field_0x30 = 1;
  }
  else if (*(char *)(param_1 + 1) != '\b') {
    return 0;
  }
  return 1;
}

// 0064FCE0 FUN_0064fce0
#line 4 "decomp/ST.exe/functions/0064FCE0/decomp.c"
undefined4 __cdecl st::fn_0064FCE0(short *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + iVar2 + 0xd0) != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  sVar1 = *param_1;
  if (sVar1 < 6) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  else if (STField<char>(param_1,0xd5) != '\n') {
    return 0;
  }
  if (sVar1 < 7) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  else if ((char)param_1[0x6b] != '\n') {
    return 0;
  }
  if (sVar1 < 8) {
    param_1[0x12] = 1;
    param_1[0x13] = 0;
  }
  else if (STField<char>(param_1,0xd7) != '\b') {
    return 0;
  }
  return 1;
}

// 0064FD80 FUN_0064fd80
#line 4 "decomp/ST.exe/functions/0064FD80/decomp.c"
undefined4 __cdecl st::fn_0064FD80(RecoveredRecord_AiEventClassTy_0064FD80 *param_1)

{
  short sVar1;

  sVar1 = *(short *)param_1;
  if (sVar1 < 1) {
    *(undefined4 *)&param_1->field_0x8 = 0;
  }
  else if (param_1->field_0xd0 != '\b') {
    return 0;
  }
  if (sVar1 < 2) {
    *(undefined4 *)&param_1->field_0xc = 0;
  }
  else if (param_1->field_00D1 != '\n') {
    return 0;
  }
  if (sVar1 < 3) {
    *(undefined4 *)&param_1->field_0x10 = 0;
  }
  else if (param_1->field_0xd2 != '\b') {
    return 0;
  }
  if (sVar1 < 4) {
    *(undefined4 *)&param_1->field_0x14 = 0;
  }
  else if (param_1->field_00D3 != '\b') {
    return 0;
  }
  if (sVar1 < 5) {
    *(undefined4 *)&param_1->field_0x18 = 0;
  }
  else if (param_1->field_0xd4 != '\b') {
    return 0;
  }
  if (sVar1 < 6) {
    *(undefined4 *)&param_1->field_0x1c = 0xffffffff;
  }
  else if (param_1->field_00D5 != '\b') {
    return 0;
  }
  if (sVar1 < 7) {
    *(undefined4 *)&param_1->field_0x20 = 0xffffffff;
  }
  else if (param_1->field_0xd6 != '\b') {
    return 0;
  }
  if (sVar1 < 8) {
    *(undefined4 *)&param_1->field_0x24 = 0xffffffff;
  }
  else if (param_1->field_00D7 != '\b') {
    return 0;
  }
  if (sVar1 < 9) {
    *(undefined4 *)&param_1->field_0x28 = 1;
  }
  else if (*(char *)(param_1 + 1) != '\b') {
    return 0;
  }
  return 1;
}

// 0064FEB0 FUN_0064feb0
#line 4 "decomp/ST.exe/functions/0064FEB0/decomp.c"
undefined4 __cdecl st::fn_0064FEB0(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)(param_1 + 0xd0 + iVar1) != '\n') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return 1;
}

// 0064FEF0 FUN_0064fef0
#line 4 "decomp/ST.exe/functions/0064FEF0/decomp.c"
undefined4 __cdecl st::fn_0064FEF0(short *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(char *)((int)param_1 + iVar2 + 0xd0) != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  sVar1 = *param_1;
  if (sVar1 < 5) {
    param_1[0xc] = 10000;
    param_1[0xd] = 0;
  }
  else if ((char)param_1[0x6a] != '\b') {
    return 0;
  }
  if (5 < sVar1) {
    if (STField<char>(param_1,0xd5) != '\b') {
      return 0;
    }
    return 1;
  }
  param_1[0xe] = 1;
  param_1[0xf] = 0;
  return 1;
}

// 0064FF70 FUN_0064ff70
#line 4 "decomp/ST.exe/functions/0064FF70/decomp.c"
undefined4 __cdecl st::fn_0064FF70(RecoveredRecord_AiEventClassTy_0064FF70 *param_1)

{
  short sVar1;

  sVar1 = *(short *)param_1;
  if (sVar1 < 1) {
    *(undefined4 *)&param_1->field_0x8 = 0;
  }
  else if (param_1->field_0xd0 != '\b') {
    return 0;
  }
  if (sVar1 < 2) {
    *(undefined4 *)&param_1->field_0xc = 0;
  }
  else if (param_1->field_00D1 != '\b') {
    return 0;
  }
  if (sVar1 < 3) {
    *(undefined4 *)&param_1->field_0x10 = 0;
  }
  else if (param_1->field_0xd2 != '\b') {
    return 0;
  }
  if (sVar1 < 4) {
    *(undefined4 *)&param_1->field_0x14 = 0;
  }
  else if (param_1->field_00D3 != '\b') {
    return 0;
  }
  if (sVar1 < 5) {
    *(undefined4 *)&param_1->field_0x18 = 0xffffffff;
  }
  else if (param_1->field_0xd4 != '\b') {
    return 0;
  }
  if (sVar1 < 6) {
    *(undefined4 *)&param_1->field_0x1c = 0xffffffff;
  }
  else if (param_1->field_00D5 != '\b') {
    return 0;
  }
  if (sVar1 < 7) {
    *(undefined4 *)&param_1->field_0x20 = 0xffffffff;
  }
  else if (param_1->field_0xd6 != '\b') {
    return 0;
  }
  if (sVar1 < 8) {
    *(undefined4 *)&param_1->field_0x24 = 1;
    return 1;
  }
  if (param_1->field_00D7 != '\b') {
    return 0;
  }
  return 1;
}

