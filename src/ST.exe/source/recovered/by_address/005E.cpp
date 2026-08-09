#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/005E.cpp

// 005E5720 CreateMTask
#line 4 "decomp/ST.exe/functions/005E5720/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA864>004036B6

   [STObjectFactoryApplier] Central object factory for 0x0302 (ST_OBJECT_M_TASK).
   Evidence: registry[40] at 007CA860 stores type 0x0302 and executable pointer 004036B6; allocation
   size 1751 uniquely matches /MTaskTy; calls base/helper constructor(s) SpriteClassTy; exact
   derived allocation size wins */

MTaskTy * __cdecl st::fn_005E5720(void)

{
  MTaskTy *this;
  uint *puVar1;
  int iVar2;

  this = (MTaskTy *)st::fn_006B04D0(0x6d7);
  if (this != nullptr) {
    st::fn_006E5FB0(this);
    this->field_0000 = &VTable_0079C018;
    this->field_0018 = 0;
    this->field_005D = nullptr;
    memset(&this->field_0x1d, 0, 0x20); /* compiler bulk-zero initialization */
    iVar2 = 0;
    memset(&this->field_0x3d, 0, 0x20); /* compiler bulk-zero initialization */
    DAT_0080879c = 0;
    st::fn_00715820((SpriteClassTy *)&this->field_02D1);
    st::fn_00715820((SpriteClassTy *)&this->field_0362);
    st::fn_00715820((SpriteClassTy *)&this->field_03F3);
    st::fn_00715820((SpriteClassTy *)&this->field_048C);
    st::fn_00715820((SpriteClassTy *)&this->field_051D);
    st::fn_00715820((SpriteClassTy *)&this->field_05AE);
    this->field_0000 = &UNK_0079c238;
    this->field_006D = 2;
    this->field_0069 = 0;
    this->field_006E = 0;
    this->field_006F = 0;
    this->field_0085 = 0;
    this->field_0080 = 0;
    this->field_0081 = nullptr;
    this->field_008D = nullptr;
    this->field_0089 = nullptr;
    this->field_0291[0] = 0;
    this->field_0291[1] = 0;
    this->field_0291[2] = 0;
    this->field_0291[3] = 0;
    this->field_0291[4] = 0;
    this->field_02B9 = 0;
    puVar1 = this->field_02BD;
    iVar2 = 5;
    do {
      puVar1[-6] = 0xffffffff;
      *puVar1 = 0xffffffff;
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    this->field_02CD = 0;
    this->field_0484 = 0xffffffff;
    this->field_0488 = 0;
    this->field_063F = 0xffffffff;
    this->field_0643 = nullptr;
    memset(&this->field_0653, 0, 0x84); /* compiler bulk-zero initialization */
    this->field_0070 = nullptr;
    this->field_0078 = nullptr;
    this->field_0074 = nullptr;
    this->field_007C = 0;
    this->field_064F = nullptr;
    this->field_064B = nullptr;
    this->field_0647 = nullptr;
    return this;
  }
  return nullptr;
}

// 005E6570 CreateMTest
#line 4 "decomp/ST.exe/functions/005E6570/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA8AC>004045D4

   [STObjectFactoryApplier] Central object factory for 0x030C (ST_OBJECT_TYPE_030C).
   Evidence: registry[49] at 007CA8A8 stores type 0x030C and executable pointer 004045D4; allocation
   size 180 has no unique current class-layout match */

MTestTy * __cdecl st::fn_005E6570(void)

{
  MTestTy *this;
  int iVar1;

  this = (MTestTy *)st::fn_006B04D0(0xb4);
  if (this != nullptr) {
    st::fn_006E5FB0(this);
    this->field_0018 = 0;
    this->field_005D = nullptr;
    memset(&this->field_0x1d, 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    memset(&this->field_0x3d, 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    DAT_0080879c = 0;
    this->vtable = &st_global_0079C23C;
    memset(&this->field_0x61, 0, 0x20); /* compiler bulk-zero initialization */
    iVar1 = 0;
    memset(&this->field_0x81, 0, 0x20); /* compiler bulk-zero initialization */
    this->field_00A5 = 2;
    this->field_00AF = 300;
    this->field_00AB = 300;
    this->field_00A6 = 0;
    this->field_00A7 = 0xffffffff;
    this->field_00B3 = 0;
    return this;
  }
  return nullptr;
}

// 005EAD30 CreateWait
#line 4 "decomp/ST.exe/functions/005EAD30/decomp.c"
/* [STObjectFactoryApplier] Central object factory for 0x030D (ST_OBJECT_WAIT).
   Evidence: registry[50] at 007CA8B0 stores type 0x030D and executable pointer 00405268; allocation
   size 6916 uniquely matches /WaitTy; calls base/helper constructor(s) SpriteClassTy; exact derived
   allocation size wins */

WaitTy * __cdecl st::fn_005EAD30(void)

{
  WaitTy *this;
  int iVar1;
  undefined4 *puVar2;
  SpriteClassTy *this_00;
  undefined4 *puVar3;
  uint *puVar4;
  int local_8;

  this = (WaitTy *)st::fn_006B04D0(0x1b04);
  if (this != nullptr) {
    st::fn_006E5FB0(this);
    this->vtable = (WaitTyVTable *)&st_global_0079C018;
    this->field_0018 = 0;
    this->field_005D = nullptr;
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
    this->vtable = (WaitTyVTable *)&st_global_0079C008;
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
    this->field_1A60 = 1;
    this->field_1A64 = 1;
    this->field_1A68 = 1;
    this->vtable = &st_global_0079C24C;
    this->field_1A74 = 0;
    this->field_1A6C = 0;
    this->field_1A70 = 0;
    this->field_1A75 = 0;
    this->field_1A87 = 0;
    this->field_1A8B = 0;
    this->field_1A8F = 0xffffffff;
    this->field_1A93 = 0;
    this->field_1A76 = 0;
    this->field_1A77 = 0;
    this->field_1A7B = 0;
    this->field_1A83 = nullptr;
    puVar4 = this->field_1A94;
    for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
    this->field_1AF0 = nullptr;
    this->field_1AF4 = 0;
    this->field_1AEC = nullptr;
    this->field_1B00 = nullptr;
    this->field_1AFC = nullptr;
    this->field_1AF8 = nullptr;
    return this;
  }
  return nullptr;
}

// 005EBC70 CreateSTArtiafact
#line 4 "decomp/ST.exe/functions/005EBC70/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA9E4>0040228E

   [STObjectFactoryApplier] Central object factory for 0x014F (ST_OBJECT_ST_ARTIAFACT).
   Evidence: registry[88] at 007CA9E0 stores type 0x014F and executable pointer 0040228E; allocation
   size 1143 uniquely matches /STArtiafactC; calls base/helper constructor(s) STSprGameObjC; exact
   derived allocation size wins */

STArtiafactC * __cdecl st::fn_005EBC70(void)

{
  STArtiafactC *this;

  this = (STArtiafactC *)st::fn_006B04D0(0x477);
  if (this != nullptr) {
    st::fn_00401807((STSprGameObjC *)this);
    this->vtable = &st_global_0079C260;
    this->vtable_at_1d5 = &st_global_0079C25C;
    return this;
  }
  return nullptr;
}

// 005EBD00 FUN_005ebd00
#line 4 "decomp/ST.exe/functions/005EBD00/decomp.c"
bool __thiscall st::fn_005EBD00(void *this,int param_1)

{
  int iVar1;

  iVar1 = STField<int>(this,0x23e) - param_1;
  STField<int>(this,0x23e) = iVar1;
  if (iVar1 < 1) {
    STField<undefined4>(this,0x23e) = 0;
  }
  return STField<int>(this,0x23e) == 0;
}

// 005EBD80 FUN_005ebd80
#line 4 "decomp/ST.exe/functions/005EBD80/decomp.c"
undefined4 __fastcall st::fn_005EBD80(AnonShape_005EBD80_1A4ED01F *param_1)

{
  short sVar1;
  short sVar2;
  STWorldObject *this;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  short sVar8;

  sVar8 = param_1->field_034A;
  bVar4 = false;
  bVar3 = false;
  if (sVar8 < 0) {
    sVar8 = ((sVar8 / 0xc9 + (sVar8 >> 0xf)) - (short)((longlong)(int)sVar8 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar8 = (sVar8 / 0xc9 + (sVar8 >> 0xf)) - (short)((longlong)(int)sVar8 * 0x28c1979 >> 0x3f);
  }
  param_1->field_0242 = sVar8;
  sVar8 = param_1->field_034C;
  if (sVar8 < 0) {
    sVar8 = ((sVar8 / 0xc9 + (sVar8 >> 0xf)) - (short)((longlong)(int)sVar8 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar8 = (sVar8 / 0xc9 + (sVar8 >> 0xf)) - (short)((longlong)(int)sVar8 * 0x28c1979 >> 0x3f);
  }
  param_1->field_0244 = sVar8;
  sVar8 = param_1->field_034E;
  if (sVar8 < 0) {
    sVar8 = ((sVar8 / 200 + (sVar8 >> 0xf)) - (short)((longlong)(int)sVar8 * 0x51eb851f >> 0x3f)) +
            -1;
  }
  else {
    sVar8 = (sVar8 / 200 + (sVar8 >> 0xf)) - (short)((longlong)(int)sVar8 * 0x51eb851f >> 0x3f);
  }
  param_1->field_0246 = sVar8;
  param_1->field_0231 = 0xfd;
  if ((((short)(param_1->field_046B * 0xc9 + 100) != param_1->field_034A) ||
      ((short)(param_1->field_046F * 0xc9 + 100) != param_1->field_034C)) ||
     ((short)(param_1->field_0473 * 200 + 100) != param_1->field_034E)) {
    param_1->field_0242 = param_1->field_046B;
    param_1->field_0244 = param_1->field_046F;
    param_1->field_0246 = param_1->field_0473;
    bVar4 = true;
  }
  sVar8 = param_1->field_0242;
  sVar1 = param_1->field_0244;
  sVar2 = param_1->field_0246;
  if ((((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) ||
        ((sVar1 < 0 || ((g_worldGrid.sizeY <= sVar1 || (sVar2 < 0)))))) ||
       (g_worldGrid.sizeZ <= sVar2)) ||
      (STGridAt3D(g_worldGrid, sVar8, sVar1, sVar2).objects[0] == nullptr)) &&
     (iVar5 = st::fn_00401325
                        (sVar8,sVar1,sVar2,0,(RecoveredRecord_DumpClassC_00495EC0 *)param_1),
     iVar5 == 0)) {
    param_1->field_0252 = param_1->field_0252 + '\x01';
    bVar3 = true;
  }
  else {
    sVar8 = param_1->field_0242;
    sVar1 = param_1->field_0246;
    sVar2 = param_1->field_0244;
    if (sVar8 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeX <= sVar8) {
      return 0;
    }
    if (sVar2 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeY <= sVar2) {
      return 0;
    }
    if (sVar1 < 0) {
      return 0;
    }
    if (g_worldGrid.sizeZ <= sVar1) {
      return 0;
    }
    this = STGridAt3D(g_worldGrid, sVar8, sVar2, sVar1).objects[0];
    if (this == nullptr) {
      return 0;
    }
    iVar5 = this->GetObjectTypeId();
    if (((iVar5 != 0x1b) && (iVar5 != 7)) && (iVar5 != 0x13)) {
      return 0;
    }
    iVar5 = (*this->vtable[5].slots_00_28[9])(0xfe);
    if (iVar5 == 0) {
      return 0;
    }
    (*this->vtable[5].slots_00_28[10])(param_1->field_0018);
    param_1->field_02A3 = this[1].vtable;
    param_1->field_02AB = *(undefined2 *)&this[1].field_0xe;
    param_1->field_02A7 = *(undefined4 *)&this->field_0x18;
    param_1->field_024E = 1;
    param_1->field_024F = 1;
    param_1->field_023A = 4;
    if (param_1->field_0211 != nullptr) {
      st::fn_006EA460
                (param_1->field_0211,param_1->field_01ED,*(int *)&this[0xd].field_0x19);
    }
    bVar4 = false;
  }
  param_1->field_0251 = (char)param_1->field_0350;
  param_1->field_0236 = 0;
  iVar5 = (int)((ulonglong)((longlong)param_1->field_0350 * -0x77777777) >> 0x20) +
          param_1->field_0350;
  param_1->field_0277 = (int)param_1->field_034A;
  param_1->field_02BE = (int)param_1->field_034A;
  param_1->field_027B = (int)param_1->field_034C;
  param_1->field_027F = (int)param_1->field_034E;
  param_1->field_02BA = (iVar5 >> 3) - (iVar5 >> 0x1f);
  param_1->field_02C2 = (int)param_1->field_034C;
  param_1->field_02C6 = (int)param_1->field_034E;
  uVar6 = st::fn_00402F22(param_1->field_033E);
  param_1->field_02B1 = uVar6;
  param_1->field_0235 = param_1->field_0332;
  param_1->field_023E = 2000;
  if (bVar3) {
    if (bVar4) {
      iVar5 = st::fn_00403FC6(param_1,(int)(short)(param_1->field_0242 * 0xc9 + 100),
                                 (int)(short)(param_1->field_0244 * 0xc9 + 100),
                                 (int)(short)(param_1->field_0246 * 200 + 100),param_1->field_0350,
                                 '\x01',0x1e);
      if (iVar5 != 0) {
        param_1->field_023A = 2;
      }
    }
    else {
      uVar7 = param_1->field_001C * 0x41c64e6d + 0x3039;
      param_1->field_001C = uVar7;
      st::fn_00403FC6(param_1,param_1->field_0277,param_1->field_027B,param_1->field_027F + -0x1e
                         ,param_1->field_0350,'\0',0x1e - (uVar7 >> 0x10) % 0xb);
      param_1->field_023A = 1;
    }
  }
  param_1->field_02D6 = 0xffffffff;
  param_1->field_02D2 = 0xffffffff;
  param_1->field_02E0 = g_playSystem_00802A38->field_00E4;
  return 1;
}

// 005EC4A0 FUN_005ec4a0
#line 4 "decomp/ST.exe/functions/005EC4A0/decomp.c"
int __thiscall st::fn_005EC4A0(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  byte *puVar3;
  byte *puVar4;

  puVar3 = (byte *)(param_1);
  puVar4 = (byte *)((int)this + 0x326);
  memmove(puVar4, puVar3, 0x151); /* compiler REP MOVS byte copy */
  iVar2 = 0;
  puVar3 = (byte *)((int)param_1 + 0x151);
  puVar4 = (byte *)((int)this + 0x231);
  memmove(puVar4, puVar3, 0xf5); /* compiler REP MOVS byte copy */
  iVar1 = st::fn_00402559(this,(int *)((int)param_1 + 0x246));
  return iVar1 + 0x246;
}

// 005EC510 FUN_005ec510
#line 4 "decomp/ST.exe/functions/005EC510/decomp.c"
void __thiscall st::fn_005EC510(void *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar4;
  char *pcVar5;

  uVar2 = 0xffffffff;
  pcVar4 = (char *)((int)this + 0x358);
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  memmove(param_1, pcVar4, uVar2); /* compiler REP MOVS byte copy */
  return;
}

// 005EC550 FUN_005ec550
#line 4 "decomp/ST.exe/functions/005EC550/decomp.c"
void __thiscall st::fn_005EC550(void *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar4;
  char *pcVar5;
  char *pcVar4_mg1;
  char *pcVar4_mg0;

  uVar2 = 0xffffffff;
  pcVar4_mg0 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4_mg0;
    pcVar4_mg0 = pcVar4_mg0 + 1;
  } while (cVar1 != '\0');
  if (0xe < ~uVar2 - 1) {
    st::fn_0072E340((char *)((int)this + 0x358),param_1,0xe);
    STField<undefined1>(this,0x366) = 0;
    return;
  }
  uVar2 = 0xffffffff;
  do {
    pcVar4_mg1 = param_1;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4_mg1 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar4_mg1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4_mg1 + -uVar2;
  pcVar5 = (char *)((int)this + 0x358);
  memmove(pcVar5, pcVar4, uVar2); /* compiler REP MOVS byte copy */
  return;
}

// 005EC5E0 FUN_005ec5e0
#line 4 "decomp/ST.exe/functions/005EC5E0/decomp.c"
undefined4 st::fn_005EC5E0(int param_1)

{
  if (param_1 != 1) {
    if (param_1 == 2) {
      return 4;
    }
    if (param_1 == 3) {
      return 5;
    }
  }
  return 3;
}

// 005EC640 FUN_005ec640
#line 4 "decomp/ST.exe/functions/005EC640/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 005EC640 returns return of Library::MSVCRT::_strncpy @ 005EC667 */

char * __thiscall st::fn_005EC640(void *this,char *param_1)

{
  char *pcVar1;

  pcVar1 = st::fn_0072E340((char *)((int)this + 0x367),param_1,0x103);
  STField<undefined1>(this,0x46a) = 0;
  return pcVar1;
}

// 005EC6A0 FUN_005ec6a0
#line 4 "decomp/ST.exe/functions/005EC6A0/decomp.c"
void __fastcall st::fn_005EC6A0(AnonShape_005EC6A0_C8559927 *param_1)

{
  int iVar1;
  undefined4 local_28 [4];
  undefined4 local_18;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  int local_8;

  if (DAT_008117bc != nullptr) {
    memset(local_28, 0, 0x20); /* compiler bulk-zero initialization */
    local_12 = param_1->field_0032;
    local_10 = param_1->field_032A;
    local_18 = 0x5ddb;
    if ((AnonShape_005EFAE0_B406B78B *)param_1->field_0354 != nullptr) {
      iVar1 = st::fn_006E62D0
                        (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)param_1->field_0354,
                         &local_8);
      if (iVar1 != -4) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        local_e = *(undefined2 *)(local_8 + 0x32);
      }
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)*DAT_008117bc)(local_28);
  }
  return;
}

// 005EC740 FUN_005ec740
#line 4 "decomp/ST.exe/functions/005EC740/decomp.c"
/* [STPrototypeApplier] Propagated parameter 6.
   Evidence: 0044C130 -> 005EC740 @ 0044C3BB */

void __cdecl
st::fn_005EC740(int param_1,undefined4 param_2,int param_3,undefined4 *param_4,char *param_5,
            undefined1 *param_6,STAllPlayersC_GetTOBJImage_param_2Enum *param_7)

{
  char cVar1;
  uint uVar2;
  char *pcVar4;
  char *pcVar5;

  *param_4 = 0;
  *param_5 = '\0';
  *param_6 = 0x1d;
  *param_7 = 0;
  if ((param_3 == 0xe) || (param_3 == 0xc)) {
    if (param_1 == 1) {
      pcVar4 = "contw";
    }
    else if (param_1 == 2) {
      pcVar4 = "contb";
    }
    else {
      if (param_1 != 3) {
        return;
      }
      pcVar4 = "conts";
    }
    uVar2 = 0xffffffff;
    do {
      pcVar5 = pcVar4;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar5 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar5;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar4 = pcVar5 + -uVar2;
    memmove(param_5, pcVar4, uVar2); /* compiler REP MOVS byte copy */
    *param_4 = PTR_00806774;
  }
  return;
}

// 005EC9F0 FUN_005ec9f0
#line 4 "decomp/ST.exe/functions/005EC9F0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 st::fn_005EC9F0(int param_1)

{
  undefined1 *this;
  int local_EAX_48;
  int iVar2;
  int local_EAX_322;
  int iVar1;
  InternalExceptionFrame local_54;
  char **local_10;
  undefined4 local_c;
  AnonShape_005EC9F0_B12E6711 *local_8;

  local_c = 0;
  local_10 = &PTR_s_cont1_007cde70;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_EAX_48 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  if (local_EAX_48 != 0) {
    g_currentExceptionFrame = local_54.previous;
    return local_c;
  }
  this = &local_8->field_0x1d5;
  if (param_1 == 0) {
    st::fn_004023C4(this,DAT_007cde88,DAT_007cde8c);
    iVar2 = st::fn_00404183
                      ((STT3DSprC *)this,0xe,PTR_00806774,local_10[local_8->field_02B1],CASE_1D);
    if (iVar2 != 0) {
      return local_c;
    }
    st::fn_00405AA6(this,'\x0e');
    st::fn_00401064((STT3DSprC *)this,'\x0e',local_8->field_02CA);
    st::fn_004045D9
              ((STT3DSprC *)this,(float)local_8->field_02BE * _DAT_007904f8 * _DAT_007904f0,
               (float)local_8->field_02C2 * _DAT_007904f8 * _DAT_007904f0,
               (float)local_8->field_02C6 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    st::fn_00405240((STT3DSprC *)this,0xe,g_playSystem_00802A38->field_00E4);
    st::fn_004052FE((STT3DSprC *)this,'\x0e',local_8->field_02BA / 0xf);
    st::fn_00401AAA(local_8,0x18);
    local_8->field_02B9 = 1;
    local_EAX_322 = st::fn_004052CC((STT3DSprC *)this);
    local_8->field_02D6 = local_EAX_322;
    if (local_8->field_0235 == '\x01') {
      st::fn_00404183((STT3DSprC *)this,0xb,PTR_00806774,"forcef0",CASE_1D);
      st::fn_004059F2(this,'\x0e');
      st::fn_00402BDF(this,'\v');
      st::fn_004022D4(this,'\v');
      st::fn_00405240((STT3DSprC *)this,0xb,g_playSystem_00802A38->field_00E4);
      g_currentExceptionFrame = local_54.previous;
      return local_c;
    }
  }
  else {
    st::fn_00404183
              ((STT3DSprC *)this,8,PTR_00806774,
               "expl_bt0" + (uint)local_8->field_02DF * 0x32,CASE_1D);
    st::fn_00404183
              ((STT3DSprC *)this,9,PTR_00806764,
               "expl_bbt0" + (uint)local_8->field_02DF * 0x32,CASE_1D);
    st::fn_00404183
              ((STT3DSprC *)this,10,PTR_00806774,
               "expmask3" + (uint)local_8->field_02DF * 0x32,CASE_1D);
    st::fn_004022D4(this,'\n');
    st::fn_00405240((STT3DSprC *)this,10,g_playSystem_00802A38->field_00E4);
    st::fn_004044EE((STT3DSprC *)this,PTR_008032b8,0x10);
    st::fn_00405240((STT3DSprC *)this,8,g_playSystem_00802A38->field_00E4);
    st::fn_00403233((STT3DSprC *)this,'\n');
    iVar1 = st::fn_004052CC((STT3DSprC *)this);
    local_8->field_02D6 = iVar1;
  }
  g_currentExceptionFrame = local_54.previous;
  return local_c;
}

// 005ECD70 FUN_005ecd70
#line 4 "decomp/ST.exe/functions/005ECD70/decomp.c"
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 005EBD80 -> 005ECD70 @ 005EC1F4; MOVSX at 005EC1C5 establishes signed source width 2 |
   005ECFE0 -> 005ECD70 @ 005ED0E7; MOVSX at 005ED0DF establishes signed source width 2 | 005EF4B0
   -> 005ECD70 @ 005EF569; MOVSX at 005EF54F establishes signed source width 2 | 005FC4A0 ->
   005ECD70 @ 005FC94E; MOVSX at 005FC920 establishes signed source width 2 */

undefined4 __thiscall
st::fn_005ECD70(void *this,int param_1,int param_2,int param_3,int param_4,char param_5,
            undefined4 param_6)

{
  uint uVar1;
  int iVar2;

  STField<undefined4>(this,0x25b) = STField<undefined4>(this,0x277);
  STField<undefined4>(this,0x25f) = STField<undefined4>(this,0x27b);
  STField<undefined4>(this,0x263) = STField<undefined4>(this,0x27f);
  STField<char>(this,0x25a) = param_5;
  STField<int>(this,0x267) = param_1;
  STField<int>(this,0x26b) = param_2;
  STField<int>(this,0x26f) = param_3;
  STField<undefined4>(this,0x283) = 1;
  uVar1 = g_playSystem_00802A38->field_00E4;
  STField<int>(this,0x273) = param_4;
  STField<uint>(this,0x28f) = uVar1;
  st::fn_00401096((int)this);
  if (STField<int>(this,0x2ba) != param_4) {
    iVar2 = st::fn_00402D56(STField<int>(this,0x2ba) * 0xf,param_4);
    STField<int>(this,0x28b) = iVar2;
  }
  if (param_5 == '\0') {
    if ((param_1 == STField<int>(this,0x277)) && (param_2 == STField<int>(this,0x27b))) {
      STField<undefined4>(this,0x287) = param_6;
      STField<uint>(this,0x31c) = STField<uint>(this,0x31c) | 1;
      return 1;
    }
    STField<undefined1>(this,0x25a) = 1;
  }
  STField<undefined4>(this,0x287) = param_6;
  iVar2 = st::fn_006ACF0D(STField<int>(this,0x25b),STField<int>(this,0x25f),
                       STField<int>(this,0x263),STField<int>(this,0x267),
                       STField<int>(this,0x26b),STField<int>(this,0x26f));
  if (iVar2 != 0) {
    STField<int>(this,0x297) =
         ((STField<int>(this,0x267) - STField<int>(this,0x25b)) * 10000) / iVar2;
    STField<int>(this,0x29b) =
         ((STField<int>(this,0x26b) - STField<int>(this,0x25f)) * 10000) / iVar2;
    STField<int>(this,0x29f) =
         ((STField<int>(this,0x26f) - STField<int>(this,0x263)) * 10000) / iVar2;
    iVar2 = st::fn_006ACF0D(STField<int>(this,0x267),STField<int>(this,0x26b),
                         STField<int>(this,0x26f),STField<int>(this,0x25b),
                         STField<int>(this,0x25f),STField<int>(this,0x263));
    STField<int>(this,0x293) = iVar2;
    STField<uint>(this,0x31c) = STField<uint>(this,0x31c) & 0xfffffffe;
    return 1;
  }
  return 0;
}

// 005ECFE0 FUN_005ecfe0
#line 4 "decomp/ST.exe/functions/005ECFE0/decomp.c"
undefined4 __thiscall
st::fn_005ECFE0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short sVar4;

  if ((param_1 < 0) || (4 < param_1)) {
    if ((param_2 != -1) &&
       (((param_3 != -1 && (param_4 != -1)) &&
        (iVar3 = st::fn_00403FC6(this,param_2,param_3,param_4,param_5,'\0',0x1e), iVar3 != 0))))
    {
      STField<undefined4>(this,0x23a) = 2;
      return 1;
    }
  }
  else {
    iVar3 = (int)STField<short>(this,0x246);
    if ((param_1 == iVar3) && (STField<int>(this,0x2ba) == param_5)) {
      return 0;
    }
    if (param_1 - iVar3 < 1) {
      sVar4 = -(ushort)(param_1 != iVar3);
    }
    else {
      sVar4 = 1;
    }
    sVar1 = STField<short>(this,0x244);
    sVar4 = STField<short>(this,0x246) + sVar4;
    sVar2 = STField<short>(this,0x242);
    if ((((sVar2 < 0) || (g_worldGrid.sizeX <= sVar2)) ||
        ((sVar1 < 0 ||
         ((((g_worldGrid.sizeY <= sVar1 || (sVar4 < 0)) || (g_worldGrid.sizeZ <= sVar4)) ||
          ((STGridAt3D(g_worldGrid, sVar2, sVar1, sVar4).objects[0] == nullptr ||
           (STGridAt3D(g_worldGrid, sVar2, sVar1, sVar4).objects[0] == this)))))))) &&
       (iVar3 = st::fn_00403FC6(this,(int)(short)(sVar2 * 0xc9 + 100),
                                   (int)(short)(sVar1 * 0xc9 + 100),
                                   (int)(short)((short)param_1 * 200 + 100),param_5,'\0',0x1e),
       iVar3 != 0)) {
      STField<undefined4>(this,0x23a) = 2;
      return 1;
    }
  }
  return 0xffffffff;
}

// 005ED1C0 FUN_005ed1c0
#line 4 "decomp/ST.exe/functions/005ED1C0/decomp.c"
undefined4 __thiscall st::fn_005ED1C0(void *this,int *param_1,int *param_2,int *param_3,int *param_4)

{
  short sVar1;
  STWorldObject *pSVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  int local_8;

  iVar8 = STField<int>(this,0x2ba);
  *param_4 = iVar8;
  if (STField<char>(this,0x25a) != '\0') {
    if (STField<int>(this,0x287) == 0) {
      iVar11 = STField<int>(this,0x293);
    }
    else {
      iVar11 = (g_playSystem_00802A38->field_00E4 - STField<int>(this,0x28f)) *
               STField<int>(this,0x287);
      iVar11 = (int)(iVar11 + (iVar11 >> 0x1f & 0xfU)) >> 4;
    }
    if (STField<int>(this,0x28b) != 0) {
      iVar8 = STField<int>(this,0x28b) + iVar8;
      *param_4 = iVar8;
      if (iVar8 < 0) {
        *param_4 = iVar8 + 0x18;
      }
      if (0x17 < *param_4) {
        *param_4 = *param_4 + -0x18;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if (*param_4 == STField<int>(this,0x273) / 0xf) {
        STField<undefined4>(this,0x28b) = 0;
      }
    }
    if (STField<int>(this,0x293) <= iVar11) {
      if (STField<int>(this,0x28b) != 0) {
        STField<undefined4>(this,0x287) = 0;
        return 1;
      }
      *param_1 = STField<int>(this,0x267);
      *param_2 = STField<int>(this,0x26b);
      *param_3 = STField<int>(this,0x26f);
      STField<undefined4>(this,0x283) = 0;
      return 1;
    }
    iVar8 = STField<int>(this,0x29b);
    iVar7 = STField<int>(this,0x29f);
    iVar3 = STField<int>(this,0x25f);
    iVar4 = STField<int>(this,0x263);
    *param_1 = (STField<int>(this,0x297) * iVar11) / 10000 + STField<int>(this,0x25b);
    *param_2 = (iVar8 * iVar11) / 10000 + iVar3;
    *param_3 = (iVar7 * iVar11) / 10000 + iVar4;
    goto cf_common_exit_005ED874;
  }
  iVar11 = STField<int>(this,0x263);
  if (STField<int>(this,0x26f) - iVar11 < 1) {
    local_8 = -(uint)(STField<int>(this,0x26f) != iVar11);
  }
  else {
    local_8 = 1;
  }
  if (STField<int>(this,0x287) == 0) {
    iVar11 = STField<int>(this,0x2c6);
  }
  else {
    iVar7 = (g_playSystem_00802A38->field_00E4 - STField<int>(this,0x28f)) *
            STField<int>(this,0x287) * local_8;
    iVar11 = ((int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3) + iVar11;
  }
  if (STField<int>(this,0x28b) != 0) {
    iVar8 = STField<int>(this,0x28b) + iVar8;
    *param_4 = iVar8;
    if (iVar8 < 0) {
      *param_4 = iVar8 + 0x18;
    }
    if (0x17 < *param_4) {
      *param_4 = *param_4 + -0x18;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (*param_4 == STField<int>(this,0x273) / 0xf) {
      STField<undefined4>(this,0x28b) = 0;
    }
  }
  sVar1 = (short)(iVar11 >> 0x1f);
  if (iVar11 < 0) {
    iVar8 = (short)(((short)(iVar11 / 200) + sVar1) - (short)((longlong)iVar11 * 0x51eb851f >> 0x3f)
                   ) + -1;
  }
  else {
    iVar8 = (int)(short)(((short)(iVar11 / 200) + sVar1) -
                        (short)((longlong)iVar11 * 0x51eb851f >> 0x3f));
  }
  sVar1 = STField<short>(this,0x246);
  if (iVar8 != sVar1) {
    if ((1 < STField<byte>(this,0x252)) && (STField<short>(this,600) == iVar8)) {
      iVar7 = st::fn_00404EC1(STField<short>(this,0x242),STField<short>(this,0x244),sVar1,0
                                 ,this);
      if (iVar7 == 0) {
        STField<char>(this,0x252) = STField<char>(this,0x252) + -1;
      }
      STField<short>(this,0x246) = (short)iVar8;
      STField<undefined1>(this,0x253) = 0xff;
      *param_1 = STField<int>(this,0x277);
      *param_2 = STField<int>(this,0x27b);
      *param_3 = iVar11;
      return 1;
    }
    *param_1 = STField<int>(this,0x277);
    *param_2 = STField<int>(this,0x27b);
    *param_3 = iVar11;
    STField<undefined4>(this,0x283) = 1;
    if (*param_1 != STField<int>(this,0x267)) {
      return 1;
    }
    if (*param_2 != STField<int>(this,0x26b)) {
      return 1;
    }
    if (*param_3 != STField<int>(this,0x26f)) {
      return 1;
    }
    STField<undefined4>(this,0x287) = 0;
    if (STField<int>(this,0x273) != STField<int>(this,0x2ba) * 0xf) {
      return 1;
    }
    STField<undefined4>(this,0x28b) = 0;
    STField<undefined4>(this,0x283) = 0;
    return 1;
  }
  iVar8 = (int)(short)(sVar1 * 200 + 100);
  if (1 < STField<byte>(this,0x252)) {
    *param_1 = STField<int>(this,0x277);
    *param_2 = STField<int>(this,0x27b);
    *param_3 = iVar11;
    goto cf_common_exit_005ED874;
  }
  if (local_8 == 0) {
LAB_005ed68c:
    *param_1 = STField<int>(this,0x277);
    *param_2 = STField<int>(this,0x27b);
    *param_3 = iVar11;
    STField<undefined4>(this,0x283) = 1;
    if (*param_1 != STField<int>(this,0x267)) {
      return 1;
    }
    if (*param_2 != STField<int>(this,0x26b)) {
      return 1;
    }
    if (*param_3 != STField<int>(this,0x26f)) {
      return 1;
    }
    STField<undefined4>(this,0x287) = 0;
    if (STField<int>(this,0x273) != STField<int>(this,0x2ba) * 0xf) {
      return 1;
    }
    STField<undefined4>(this,0x28b) = 0;
    STField<undefined4>(this,0x283) = 0;
    return 1;
  }
  sVar5 = (short)local_8;
  if ((iVar8 + 0x1e < iVar11) && (0 < local_8)) {
    sVar10 = STField<short>(this,0x244);
    sVar9 = sVar1 + sVar5;
    sVar6 = STField<short>(this,0x242);
    if (((-1 < sVar6) && (sVar6 < g_worldGrid.sizeX)) &&
       ((-1 < sVar10 &&
        (((sVar10 < g_worldGrid.sizeY && (-1 < sVar9)) && (sVar9 < g_worldGrid.sizeZ)))))) {
      pSVar2 = STGridAt3D(g_worldGrid, sVar6, sVar10, sVar9).objects[0];
joined_r0x005ed4b7:
      if (pSVar2 != nullptr) goto LAB_005ed643;
    }
  }
  else {
    if ((iVar8 + -0x1e <= iVar11) || (-1 < local_8)) {
      if (((0 < local_8) && (STField<int>(this,0x26f) <= iVar11)) ||
         ((local_8 < 0 && (iVar11 <= STField<int>(this,0x26f))))) {
        STField<undefined4>(this,0x287) = 0;
        *param_1 = STField<int>(this,0x277);
        *param_2 = STField<int>(this,0x27b);
        *param_3 = STField<int>(this,0x26f);
        iVar11 = STField<int>(this,0x26f);
        if (STField<int>(this,0x273) == STField<int>(this,0x2ba)) {
          STField<undefined4>(this,0x28b) = 0;
          STField<undefined4>(this,0x283) = 0;
          return 1;
        }
      }
      goto LAB_005ed68c;
    }
    sVar10 = STField<short>(this,0x244);
    sVar9 = sVar1 + sVar5;
    sVar6 = STField<short>(this,0x242);
    if ((((-1 < sVar6) && (sVar6 < g_worldGrid.sizeX)) && (-1 < sVar10)) &&
       (((sVar10 < g_worldGrid.sizeY && (-1 < sVar9)) && (sVar9 < g_worldGrid.sizeZ)))) {
      pSVar2 = STGridAt3D(g_worldGrid, sVar6, sVar10, sVar9).objects[0];
      goto joined_r0x005ed4b7;
    }
  }
  iVar8 = st::fn_00401325(sVar6,sVar10,sVar1 + sVar5,0,this);
  if (iVar8 == 0) {
    STField<char>(this,0x252) = STField<char>(this,0x252) + '\x01';
    STField<undefined2>(this,0x254) = STField<undefined2>(this,0x242);
    STField<undefined2>(this,0x256) = STField<undefined2>(this,0x244);
    STField<short>(this,600) = STField<short>(this,0x246) + sVar5;
    *param_1 = STField<int>(this,0x277);
    *param_2 = STField<int>(this,0x27b);
    *param_3 = iVar11;
cf_common_exit_005ED874:
    STField<undefined4>(this,0x283) = 1;
    return 1;
  }
LAB_005ed643:
  st::fn_00404223(this,STField<int>(this,0x273));
  *param_1 = STField<int>(this,0x277);
  *param_2 = STField<int>(this,0x27b);
  *param_3 = STField<int>(this,0x27f);
  STField<undefined4>(this,0x283) = 0xffffffff;
  return 1;
}

// 005EDA50 FUN_005eda50
#line 4 "decomp/ST.exe/functions/005EDA50/decomp.c"
undefined4 __fastcall st::fn_005EDA50(AnonShape_005EDA50_4BDBD797 *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STBoatC *this;
  int iVar4;
  dword dVar5;
  undefined4 uVar6;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  uVar6 = 0;
  local_18 = 0;
  if (0 < param_1->field_005F) {
    sVar2 = param_1->field_005D;
    sVar1 = param_1->field_005F + -1;
    sVar3 = param_1->field_005B;
    if ((((-1 < sVar3) && (sVar3 < g_worldGrid.sizeX)) && (-1 < sVar2)) &&
       (((sVar2 < g_worldGrid.sizeY && (-1 < sVar1)) &&
        ((sVar1 < g_worldGrid.sizeZ &&
         (this = (STBoatC *)
                 STGridAt3D(g_worldGrid, sVar3, sVar2, sVar1).objects[0], uVar6 = local_18, this != nullptr)))))) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      if ((param_1->field_02E9 != '\0') &&
         (iVar4 = (**(code **)(*(int *)param_1 + 0x128))(), this->field_0018 == iVar4)) {
        return 0;
      }
      dVar5 = this->slot_2C();
      if ((((dVar5 == 0x52) || (dVar5 == 0x5f)) && (iVar4 = st::fn_00405470(this), iVar4 != 0))
         && (this->field_0508 == CASE_0)) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar4 = (**(code **)(*(int *)param_1 + 0xc))();
        st::fn_004054D4(this,*(int *)&param_1->field_0x18,iVar4);
        st::fn_00404FDE(this,&local_14,&local_10,&local_c,&local_8);
        iVar4 = st::fn_00403FC6(param_1,local_14,local_10,local_c,local_8,'\x01',0x3c);
        if (iVar4 != 0) {
          uVar6 = 1;
          if (param_1->field_0211 != nullptr) {
            st::fn_006EA460
                      (param_1->field_0211,param_1->field_01ED,this->field_01ED);
            return 1;
          }
        }
      }
    }
  }
  return uVar6;
}

// 005EDC20 FUN_005edc20
#line 4 "decomp/ST.exe/functions/005EDC20/decomp.c"
undefined4 __fastcall st::fn_005EDC20(AnonShape_005EDC20_3D37DB9E *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STWorldObject *this;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;

  if (0 < param_1->field_005F) {
    sVar2 = param_1->field_005D;
    sVar1 = param_1->field_005F + -1;
    sVar3 = param_1->field_005B;
    if (((((-1 < sVar3) && (sVar3 < g_worldGrid.sizeX)) && (-1 < sVar2)) &&
        ((sVar2 < g_worldGrid.sizeY && (-1 < sVar1)))) &&
       ((sVar1 < g_worldGrid.sizeZ &&
        (this = STGridAt3D(g_worldGrid, sVar3, sVar2, sVar1).objects[0], this != nullptr)))) {
      iVar4 = this->GetObjectTypeId();
      if ((iVar4 == 0x52) || (iVar4 == 0x5f)) {
        if ((*(int *)&this[0x23].field_0x1c == *(int *)&param_1->field_0x18) &&
           ((*(int *)&this[0x22].field_0x8 == 3 &&
            (iVar4 = st::fn_004042AF((void *)((int)&this[0xd].vtable + 1),'\x0e'),
            iVar4 == *(int *)(*(int *)((int)&this[0xd].value_20 + 1) + 0x20c))))) {
          uVar12 = param_1->field_02C6;
          uVar10 = param_1->field_02C2;
          uVar8 = param_1->field_02BE;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar4 = (**(code **)(*(int *)param_1 + 0x138))();
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar6 = (**(code **)(*(int *)param_1 + 0x130))();
          st::fn_00405466(this,*(int *)&param_1->field_0x18,iVar6,iVar4,uVar8,uVar10,uVar12);
          st::fn_00401B7C(param_1,(ushort)this[1].vtable,*(undefined2 *)&this[1].field_0xe);
          return 1;
        }
        return 0;
      }
      iVar4 = this->GetObjectTypeId();
      if ((iVar4 == 99) && (*(int *)&this[0x22].field_0x8 == 2)) {
        uVar11 = 0;
        iVar9 = -100;
        iVar7 = -100;
        iVar6 = -100;
        iVar4 = 1;
        uVar5 = st::fn_004052CC((STT3DSprC *)&param_1->field_0x1d5);
        st::fn_004051A5(uVar5,iVar4,iVar6,iVar7,iVar9,uVar11);
        return 2;
      }
    }
  }
  return 0xffffffff;
}

// 005EDE30 FUN_005ede30
#line 4 "decomp/ST.exe/functions/005EDE30/decomp.c"
undefined4 __thiscall st::fn_005EDE30(void *this,undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;

  iVar2 = STField<int>(this,0x263);
  if (STField<int>(this,0x26f) - iVar2 < 1) {
    iVar5 = -(uint)(STField<int>(this,0x26f) != iVar2);
  }
  else {
    iVar5 = 1;
  }
  iVar4 = (int)(short)(STField<short>(this,0x246) * 200 + 100);
  iVar1 = (g_playSystem_00802A38->field_00E4 - STField<int>(this,0x28f)) *
          STField<int>(this,0x287) * iVar5;
  iVar2 = ((int)(iVar1 + (iVar1 >> 0x1f & 0xfU)) >> 4) + iVar2;
  if (iVar5 < 1) {
    if (iVar2 < iVar4 + -0x1e) {
      *param_1 = STField<undefined4>(this,0x277);
      *param_2 = STField<undefined4>(this,0x27b);
      *param_3 = iVar4 + -0x1d;
      uVar3 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar3;
      st::fn_00403FC6(this,STField<int>(this,0x277),STField<int>(this,0x27b),iVar4 + 0x1e,
                         STField<int>(this,0x273),'\0',0x1e - (uVar3 >> 0x10) % 0xb);
      return 1;
    }
  }
  else if (iVar4 + 0x1e < iVar2) {
    *param_1 = STField<undefined4>(this,0x277);
    *param_2 = STField<undefined4>(this,0x27b);
    *param_3 = iVar4 + 0x1d;
    uVar3 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar3;
    st::fn_00403FC6(this,STField<int>(this,0x277),STField<int>(this,0x27b),iVar4 + -0x1e,
                       STField<int>(this,0x273),'\0',0x1e - (uVar3 >> 0x10) % 0xb);
    return 1;
  }
  *param_1 = STField<undefined4>(this,0x277);
  *param_2 = STField<undefined4>(this,0x27b);
  *param_3 = iVar2;
  return 1;
}

// 005EE010 FUN_005ee010
#line 4 "decomp/ST.exe/functions/005EE010/decomp.c"
undefined4 __thiscall
st::fn_005EE010(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  STField<undefined4>(this,0x27b) = param_2;
  STField<undefined4>(this,0x277) = param_1;
  STField<undefined4>(this,0x27f) = param_3;
  if (STField<byte>(this,0x251) != param_4) {
    STField<char>(this,0x251) = (char)param_4;
    st::fn_00404903((int)this);
  }
  return STField<undefined4>(this,0x23a);
}

// 005EE080 FUN_005ee080
#line 4 "decomp/ST.exe/functions/005EE080/decomp.c"
int __thiscall
st::fn_005EE080(void *this,short param_1,short param_2,short param_3,short param_4,short param_5,
            short param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_14;
  int local_10;
  int local_c;

  if (STField<int>(this,0x236) == 0) {
    uVar4 = STField<byte>(this,0x251) + 0xc;
    if (0x18 < uVar4) {
      uVar4 = STField<byte>(this,0x251) - 0xc;
    }
    iVar8 = (int)param_1;
    iVar7 = (iVar8 - STField<int>(this,0x2be)) - DAT_007cdef4;
    iVar6 = ((int)param_2 - STField<int>(this,0x2c2)) - DAT_007cdef8;
    iVar1 = (int)*(short *)(&DAT_007cde94 + uVar4 * 4);
    iVar5 = (int)*(short *)(&DAT_007cde96 + uVar4 * 4);
    iVar3 = (iVar5 * iVar6 + iVar1 * iVar7) / 10000;
    iVar6 = (iVar1 * iVar6 - iVar5 * iVar7) / 10000;
    iVar7 = DAT_007cdefc - STField<int>(this,0x2c6);
    local_10 = (int)param_3;
    iVar2 = iVar7 + local_10;
    if ((((-1 < iVar3) && (iVar3 <= DAT_007cdef4 * 2)) && (-1 < iVar6)) &&
       (((iVar6 <= DAT_007cdef8 * 2 && (-1 < iVar2)) && (iVar2 <= DAT_007cdefc * 2)))) {
      local_14 = 3;
      iVar2 = (iVar8 - param_4) / 2 + (int)param_4;
      iVar3 = ((int)param_2 - (int)param_5) / 2 + (int)param_5;
      iVar6 = (int)param_6;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      auto _param_6 = (local_10 - param_6) / 2 + iVar6;
      local_c = (int)param_2;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      auto _param_2 = (uint)param_4;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      auto _param_5 = (int)param_5;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      auto _param_3 = iVar8;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      auto _param_4 = iVar6;
      do {
        iVar8 = (iVar2 - STField<int>(this,0x2be)) - DAT_007cdef4;
        iVar9 = (iVar3 - STField<int>(this,0x2c2)) - DAT_007cdef8;
        iVar6 = (iVar5 * iVar9 + iVar1 * iVar8) / 10000;
        iVar8 = (iVar1 * iVar9 - iVar5 * iVar8) / 10000;
        iVar9 = iVar7 + _param_6;
        if (((iVar6 < 0) || (DAT_007cdef4 * 2 < iVar6)) ||
           ((iVar8 < 0 ||
            (((DAT_007cdef8 * 2 < iVar8 || (iVar9 < 0)) || (DAT_007cdefc * 2 < iVar9)))))) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          _param_4 = _param_6;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          _param_2 = iVar2;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          _param_5 = iVar3;
        }
        else {
          local_10 = _param_6;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          _param_3 = iVar2;
          local_c = iVar3;
        }
        iVar2 = (int)(_param_3 - _param_2) / 2 + _param_2;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        _param_6 = (local_10 - _param_4) / 2 + _param_4;
        iVar3 = (local_c - _param_5) / 2 + _param_5;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
      uVar4 = 0;
      do {
        if (*(char *)((int)this + uVar4 + 0x308) == -1) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          _param_2 = uVar4 & 0xff;
          if ((char)uVar4 != -1) goto LAB_005ee2fe;
          break;
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < 5);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      _param_2 = 4;
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_005ee2fe:
      *(short *)((int)this + _param_2 * 6 + 0x2ea) = (short)iVar2;
      *(short *)((int)this + _param_2 * 6 + 0x2ec) = (short)iVar3;
      *(short *)((int)this + (_param_2 * 3 + 0x177) * 2) = param_6;
      return _param_2 + 1;
    }
  }
  return -1;
}

// 005EE3F0 FUN_005ee3f0
#line 4 "decomp/ST.exe/functions/005EE3F0/decomp.c"
/* WARNING: Removing unreachable block (ram,0x005ee599) */

undefined4 __thiscall
st::fn_005EE3F0(void *this,float param_1,short *param_2,short *param_3,short *param_4,
            undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  longlong local_EDXEAX_112;
  longlong local_EDXEAX_136;
  longlong local_EDXEAX_162;
  longlong lVar15;
  longlong lVar16;
  longlong lVar14;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  float local_10;
  uint local_c;
  float local_8;

  iVar5 = (int)param_1 + -1;
  if ((-1 < iVar5) && (iVar5 < 5)) {
    *param_2 = *(short *)((int)this + iVar5 * 6 + 0x2ea);
    *param_3 = *(short *)((int)this + iVar5 * 6 + 0x2ec);
    *param_4 = *(short *)((int)this + (iVar5 * 3 + 0x177) * 2);
    st::fn_006DD530
              (STField<ST3DSMAPContext *>(this,0x211),&param_1,&local_8,&local_10);
    local_EDXEAX_112 = st::fn_0072E288();
    uVar6 = (uint)(short)local_EDXEAX_112;
    local_EDXEAX_136 = st::fn_0072E288();
    uVar7 = (uint)(short)local_EDXEAX_136;
    local_8 = (float)((int)uVar7 >> 0x1f);
    local_c = uVar7;
    local_EDXEAX_162 = st::fn_0072E288();
    uVar8 = (uint)(short)local_EDXEAX_162;
    uVar1 = STField<uint>(this,0x27f);
    uVar2 = STField<uint>(this,0x27b);
    iVar5 = (((int)uVar1 >> 0x1f) - ((int)uVar8 >> 0x1f)) - (uint)(uVar1 < uVar8);
    uVar3 = STField<uint>(this,0x277);
    iVar13 = (((int)uVar2 >> 0x1f) - (int)local_8) - (uint)(uVar2 < uVar7);
    iVar11 = (((int)uVar3 >> 0x1f) - ((int)uVar6 >> 0x1f)) - (uint)(uVar3 < uVar6);
    uVar9 = (uint)*param_2;
    local_10 = (float)((((int)uVar9 >> 0x1f) - ((int)uVar6 >> 0x1f)) - (uint)(uVar9 < uVar6));
    uVar10 = (uint)*param_3;
    uVar14 = uVar10 - local_c;
    local_8 = (float)((((int)uVar10 >> 0x1f) - (int)local_8) - (uint)(uVar10 < local_c));
    uVar10 = (uint)*param_4;
    iVar12 = (((int)uVar10 >> 0x1f) - ((int)uVar8 >> 0x1f)) - (uint)(uVar10 < uVar8);
    lVar15 = st::fn_0072E4F0(uVar10 - uVar8,iVar12,uVar10 - uVar8,iVar12);
    lVar16 = st::fn_0072E4F0(uVar14,(int)local_8,uVar14,(int)local_8);
    lVar14 = st::fn_0072E4F0(uVar9 - uVar6,(int)local_10,uVar9 - uVar6,(int)local_10);
    lVar4 = lVar14 + lVar16 + lVar15;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = (short *)lVar4;
    lVar17 = st::fn_0072E4F0(uVar3 - uVar6,iVar11,uVar3 - uVar6,iVar11);
    lVar18 = st::fn_0072E4F0(uVar2 - uVar7,iVar13,uVar2 - uVar7,iVar13);
    lVar19 = st::fn_0072E4F0(uVar1 - uVar8,iVar5,uVar1 - uVar8,iVar5);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    if (lVar18 + lVar17 + lVar19 <= CONCAT44((int)((ulonglong)lVar4 >> 0x20),param_2)) {
      *param_5 = 1;
      return 0;
    }
    *param_5 = 0;
    return 0;
  }
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  return 0xffffffff;
}

// 005EE670 FUN_005ee670
#line 4 "decomp/ST.exe/functions/005EE670/decomp.c"
void __fastcall st::fn_005EE670(AnonShape_005EE670_EFEE702F *param_1)

{
  int iVar1;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)(*(int *)param_1 + 0x124))(2000);
  if (iVar1 != 0) {
    st::fn_00401F2D(1);
    param_1->field_030E = 0xff;
    param_1->field_030F = 0;
    param_1->field_030D = 1;
    param_1->field_023A = 5;
  }
  return;
}

// 005EE6E0 FUN_005ee6e0
#line 4 "decomp/ST.exe/functions/005EE6E0/decomp.c"
undefined4 __fastcall st::fn_005EE6E0(AnonShape_005EE6E0_AB6798ED *param_1)

{
  undefined1 *this;
  uint uVar1;
  int iVar2;
  int iVar4;
  int iVar5;
  int iVar3;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  undefined4 uVar6;
  undefined4 local_38 [2];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;

  local_8 = 0;
  switch(param_1->field_023A) {
  case 0:
    if ((uint)param_1->field_028F <= g_playSystem_00802A38->field_00E4) {
      param_1->field_028F = g_playSystem_00802A38->field_00E4;
      uVar1 = *(int *)&param_1->field_0x1c * 0x41c64e6d + 0x3039;
      *(uint *)&param_1->field_0x1c = uVar1;
      st::fn_00403FC6(param_1,param_1->field_0277,param_1->field_027B,param_1->field_027F + -0x1e
                         ,param_1->field_02BA,'\0',0x1e - (uVar1 >> 0x10) % 0xb);
      uVar1 = *(uint *)&param_1[1].field_0x4;
      param_1->field_023A = 1;
      *(uint *)&param_1[1].field_0x4 = uVar1 | 1;
      return 1;
    }
    break;
  case 1:
    iVar4 = st::fn_004055D3(param_1,&local_c,&local_10,&local_14);
    if (iVar4 != 0) {
      param_1->field_027F = local_14;
      param_1->field_0277 = local_c;
      param_1->field_027B = local_10;
      if ((((param_1->field_0317 != '\0') && ((g_playSystem_00802A38->field_00E4 & 3) == 0)) &&
          (param_1->field_0x250 == '\0')) && (param_1->field_024F == '\0')) {
        iVar4 = st::fn_004016BD((AnonShape_005EDA50_4BDBD797 *)param_1);
        if (iVar4 == 0) {
          iVar4 = st::fn_00405029((STBoatC *)param_1);
          if (iVar4 != 0) {
            param_1->field_0x250 = 1;
            param_1->field_024F = 1;
            param_1->field_023A = 3;
            param_1->field_028F = g_playSystem_00802A38->field_00E4 + 10;
          }
        }
        else {
          param_1->field_0x250 = 1;
          param_1->field_024F = 1;
          param_1->field_023A = 3;
          param_1->field_028F = g_playSystem_00802A38->field_00E4 + 10;
        }
      }
      local_8 = 1;
    }
    if ((param_1->field_023A != 1) && (param_1->field_023A != 3)) {
      param_1->field_0x250 = 0;
      return local_8;
    }
    break;
  case 2:
    if (g_playSystem_00802A38->field_00E4 < (uint)param_1->field_028F) {
      if (((g_playSystem_00802A38->field_00E4 == param_1->field_028F + 1) &&
          (param_1->field_0211 != nullptr)) && (-1 < (int)param_1->field_01ED)) {
        st::fn_006EA2F0(param_1->field_0211,param_1->field_01ED);
        return local_8;
      }
    }
    else {
      iVar4 = st::fn_00403FFD(param_1,&local_c,&local_10,&local_14,&local_18);
      if (iVar4 != 0) {
        param_1->field_0277 = local_c;
        param_1->field_027B = local_10;
        param_1->field_02BA = local_18;
        param_1->field_027F = local_14;
        if (param_1->field_0283 == 0) {
          if (param_1->field_024F != '\0') {
            st::fn_004031A7(param_1,1);
            param_1->field_023A = 7;
            return 1;
          }
          uVar1 = g_playSystem_00802A38->field_00E4;
          param_1->field_023A = 0;
          param_1->field_028F = uVar1 + 10;
        }
        return 1;
      }
    }
    break;
  case 3:
    if ((uint)param_1->field_028F <= g_playSystem_00802A38->field_00E4) {
      if (param_1->field_0x250 == '\x02') {
        iVar4 = st::fn_00401BFE((AnonShape_005EDC20_3D37DB9E *)param_1);
        if (iVar4 < 0) {
LAB_005ee9db:
          param_1->field_0x250 = 0;
          param_1->field_024F = 0;
        }
        else if (0 < iVar4) {
          if (iVar4 < 2) {
            param_1->field_023A = 6;
            param_1->field_0x250 = 3;
          }
          else {
            param_1->field_023A = 8;
            param_1->field_028F = g_playSystem_00802A38->field_00E4 + 0x15;
          }
        }
      }
      else {
        iVar4 = st::fn_00403FFD(param_1,&local_c,&local_10,&local_14,&local_18);
        if (iVar4 == 0) {
          iVar2 = st::fn_00404223(param_1,param_1->field_0273);
          if (iVar2 == 0) {
            st::fn_00404377((AnonShape_005EE670_EFEE702F *)param_1);
          }
          else {
            param_1->field_023A = 2;
          }
          goto LAB_005ee9db;
        }
        param_1->field_027B = local_10;
        param_1->field_0277 = local_c;
        param_1->field_027F = local_14;
        param_1->field_02BA = local_18;
        if (((param_1->field_0283 == 0) && (param_1->field_024F != '\0')) &&
           (param_1->field_0x250 != '\0')) {
          param_1->field_0x250 = 2;
        }
        local_8 = 1;
      }
    }
    if ((param_1->field_0x250 == '\0') && (param_1->field_023A != 6)) {
      param_1->field_0x250 = 0;
      param_1->field_024F = 0;
      return local_8;
    }
    break;
  case 4:
    local_30 = *(undefined4 *)&param_1->field_0x8;
    local_28 = 0x129;
    local_2c = 2;
    st::fn_006E5810((SystemClassTy *)g_playSystem_00802A38,local_38);
    return local_8;
  case 5:
    if (param_1->field_0315 == '\x03') {
      if (g_playSystem_00802A38->field_00E4 == *(uint *)&param_1->field_0x2e0) {
cf_common_exit_005EEDDF:
        param_1->field_023A = 6;
      }
    }
    else if (param_1->field_0315 == '\x05') {
      if (param_1->field_02D2 < 0) goto cf_common_exit_005EEDDF;
    }
    else {
      this = &param_1->field_0x1d5;
      iVar4 = st::fn_004042AF(this,'\b');
      if (iVar4 == 1) {
        st::fn_00404264((STT3DSprC *)this,0xf);
        st::fn_00404264((STT3DSprC *)this,0);
        st::fn_00404264((STT3DSprC *)this,1);
      }
      if (iVar4 == *(int *)(&DAT_007cdf52 + (uint)param_1->field_02DF * 0x32)) {
        iVar5 = st::fn_00404EC1(param_1->field_0242,*(short *)&param_1->field_0x244,
                                   param_1->field_0246,0,(AnonShape_00495FF0_59081BDD *)param_1);
        if (iVar5 == 0) {
          param_1->field_0252 = param_1->field_0252 + -1;
        }
        st::fn_00404264((STT3DSprC *)this,0xe);
        if ((param_1->field_0315 == '\x04') || (param_1->field_0315 == '\x02')) {
          uVar6 = 0xffffffff;
          iVar3 = st::fn_004052CC((STT3DSprC *)this);
          st::fn_0040223E((int)param_1->field_0041,(int)param_1->field_0043,
                             (int)param_1->field_0045,param_1->field_0231,(int)param_1,
                             (int)*(short *)&param_1->field_0x6c,iVar3,uVar6);
        }
        if (param_1->field_0231 == 0xfd) {
          if (g_allPlayers_007FA174 != nullptr) {
            st::fn_004026DA((STArtiafactC *)param_1);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            iVar5 = st::fn_00403A5D
                              (g_allPlayers_007FA174,CONCAT22(extraout_var_00,param_1->field_0032),
                               (AnonShape_00449E60_F2069C78 *)param_1);
            goto joined_r0x005eed0b;
          }
        }
        else if ((param_1->field_0231 == 0xfe) && (g_allPlayers_007FA174 != nullptr)) {
          st::fn_00401AFA((STContainerC *)param_1);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          iVar5 = st::fn_00401F64
                            (g_allPlayers_007FA174,CONCAT22(extraout_var,param_1->field_0032),
                             (AnonShape_0044A730_DBE673B2 *)param_1);
joined_r0x005eed0b:
          if (iVar5 != 0) {
            param_1->field_023A = 6;
          }
        }
        if (param_1->field_023A != 6) {
          param_1->field_0x2e4 = 0;
        }
      }
      if (iVar4 == *(int *)(&DAT_007cdf56 + (uint)param_1->field_02DF * 0x32)) {
        st::fn_00402A90((STT3DSprC *)this);
      }
      if (iVar4 == *(int *)(&DAT_007cdf5a + (uint)param_1->field_02DF * 0x32)) {
        st::fn_00405240((STT3DSprC *)this,9,g_playSystem_00802A38->field_00E4);
      }
      iVar5 = (uint)param_1->field_02DF * 0x32;
      if ((*(int *)(&DAT_007cdf5a + iVar5) < iVar4) &&
         (iVar4 == *(int *)(&DAT_007cdf4e + iVar5) + -1)) {
        st::fn_00404264((STT3DSprC *)this,8);
      }
      iVar4 = st::fn_004042AF(this,'\t');
      if (iVar4 == *(int *)(&DAT_007cdf5e + (uint)param_1->field_02DF * 0x32))
      goto cf_common_exit_005EEDDF;
    }
    st::fn_00401B0E(param_1,1);
    break;
  case 6:
    iVar4 = st::fn_00404EC1(param_1->field_0242,*(short *)&param_1->field_0x244,
                               param_1->field_0246,0,(AnonShape_00495FF0_59081BDD *)param_1);
    if (iVar4 == 0) {
      param_1->field_0252 = param_1->field_0252 + -1;
      return local_8;
    }
    break;
  case 7:
    local_8 = 1;
    if (param_1->field_024F == '\0') {
      uVar1 = g_playSystem_00802A38->field_00E4;
      param_1->field_023A = 0;
      param_1->field_028F = uVar1 + 10;
      return 1;
    }
    break;
  case 8:
    if ((uint)param_1->field_028F <= g_playSystem_00802A38->field_00E4) {
      st::fn_0040233D((STSprGameObjC *)param_1);
      param_1->field_023A = 6;
      return local_8;
    }
  }
  return local_8;
}

// 005EEFF0 FUN_005eeff0
#line 4 "decomp/ST.exe/functions/005EEFF0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall st::fn_005EEFF0(void *this,int param_1)

{
  char cVar1;
  short sVar2;
  VisibleClassTy *pVVar3;
  int iVar4;
  int iVar5;
  int local_c;
  int local_8;

  pVVar3 = g_visibleClass_00802A88;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_1 == 0) {
    if (STField<int>(this,0x2d6) < 0) {
      st::fn_00401F2D(0);
    }
    else {
      st::fn_00404903((int)this);
    }
    pVVar3 = g_visibleClass_00802A88;
    if (STField<char>(this,0x2de) == '\0') {
      return;
    }
    if (g_visibleClass_00802A88 == nullptr) {
      return;
    }
    iVar5 = STField<int>(this,0x27f);
    sVar2 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (short)(((short)(iVar5 / 200) + sVar2) -
                       (short)((longlong)iVar5 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (int)(short)(((short)(iVar5 / 200) + sVar2) -
                            (short)((longlong)iVar5 * 0x51eb851f >> 0x3f));
    }
    iVar5 = STField<int>(this,0x27b);
    sVar2 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar2) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar2) -
                          (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
    }
    iVar4 = STField<int>(this,0x277);
    sVar2 = (short)(iVar4 >> 0x1f);
    if (iVar4 < 0) {
      iVar4 = (short)(((short)(iVar4 / 0xc9) + sVar2) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar4 = (int)(short)(((short)(iVar4 / 0xc9) + sVar2) -
                          (short)((longlong)iVar4 * 0x28c1979 >> 0x3f));
    }
    if (((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
         (st::fn_00403F53
                    (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar4,iVar5,
                     &local_8,&local_c), param_1 < 0)) ||
        (((4 < param_1 || (local_8 < 0)) ||
         (((int)pVVar3->field_0030 <= local_8 ||
          ((local_c = g_centeredOffsets5[param_1] + local_c, local_c < 0 ||
           (pVVar3->field_0034 <= local_c)))))))) ||
       ((pVVar3->field_004C == nullptr ||
        (pVVar3->field_004C[local_8 + local_c * pVVar3->field_0030] != 0)))) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0xd8))();
      st::fn_004045D9
                ((STT3DSprC *)((int)this + 0x1d5),
                 (float)STField<int>(this,0x2be) * _DAT_007904f8 * _DAT_007904f0,
                 (float)STField<int>(this,0x2c2) * _DAT_007904f8 * _DAT_007904f0,
                 (float)STField<int>(this,0x2c6) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      cVar1 = STField<char>(this,0x2b9);
joined_r0x005ef316:
      if (cVar1 != '\0') {
        return;
      }
      st::fn_00402982((void *)((int)this + 0x1d5),0);
      STField<undefined1>(this,0x2b9) = 1;
      STField<undefined1>(this,0x2de) = 0;
      return;
    }
    cVar1 = STField<char>(this,0x2b9);
  }
  else {
    if (g_visibleClass_00802A88 == nullptr) {
      return;
    }
    if (STField<int>(this,0x2d6) < 0) {
      return;
    }
    iVar5 = STField<int>(this,0x27f);
    sVar2 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (short)(((short)(iVar5 / 200) + sVar2) -
                       (short)((longlong)iVar5 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (int)(short)(((short)(iVar5 / 200) + sVar2) -
                            (short)((longlong)iVar5 * 0x51eb851f >> 0x3f));
    }
    iVar5 = STField<int>(this,0x27b);
    sVar2 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar2) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar2) -
                          (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
    }
    iVar4 = STField<int>(this,0x277);
    sVar2 = (short)(iVar4 >> 0x1f);
    if (iVar4 < 0) {
      iVar4 = (short)(((short)(iVar4 / 0xc9) + sVar2) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar4 = (int)(short)(((short)(iVar4 / 0xc9) + sVar2) -
                          (short)((longlong)iVar4 * 0x28c1979 >> 0x3f));
    }
    if (((((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
           (st::fn_00403F53
                      (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar4,iVar5,
                       &local_c,&local_8), param_1 < 0)) || ((4 < param_1 || (local_c < 0)))) ||
         (((int)pVVar3->field_0030 <= local_c ||
          ((local_8 = g_centeredOffsets5[param_1] + local_8, local_8 < 0 ||
           (pVVar3->field_0034 <= local_8)))))) || (pVVar3->field_004C == nullptr)) ||
       (pVVar3->field_004C[local_c + local_8 * pVVar3->field_0030] != 0)) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0xd8))();
      cVar1 = STField<char>(this,0x2b9);
      goto joined_r0x005ef316;
    }
    cVar1 = STField<char>(this,0x2b9);
  }
  if (cVar1 != '\0') {
    st::fn_00403D0F((STT3DSprC *)((int)this + 0x1d5));
    STField<undefined1>(this,0x2b9) = 0;
  }
  return;
}

// 005EF430 FUN_005ef430
#line 4 "decomp/ST.exe/functions/005EF430/decomp.c"
undefined4 st::fn_005EF430(void)

{
  return 1;
}

// 005EF450 FUN_005ef450
#line 4 "decomp/ST.exe/functions/005EF450/decomp.c"
undefined4 st::fn_005EF450(void)

{
  return 0;
}

// 005EF470 FUN_005ef470
#line 4 "decomp/ST.exe/functions/005EF470/decomp.c"
undefined2 st::fn_005EF470(void)

{
  return 0;
}

// 005EF4B0 FUN_005ef4b0
#line 4 "decomp/ST.exe/functions/005EF4B0/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (2), none consume AL/AX, and every RET path defines full EAX; sites=005EE6E0 @ 005EE9BF
   -> TEST TEST EAX,EAX | 005EF7A0 @ 005EF8B6 -> TEST TEST EAX,EAX */

int __thiscall st::fn_005EF4B0(void *this,int param_1)

{
  int iVar1;
  char local_8;

  if ((1 < STField<byte>(this,0x252)) &&
     (iVar1 = st::fn_00404EC1(STField<short>(this,0x254),STField<short>(this,0x256),
                                 STField<short>(this,600),0,this), iVar1 == 0)) {
    STField<char>(this,0x252) = STField<char>(this,0x252) + -1;
  }
  iVar1 = (int)(short)(STField<short>(this,0x242) * 0xc9 + 100);
  if ((iVar1 != STField<int>(this,0x277)) ||
     (local_8 = '\0',
     (int)(short)(STField<short>(this,0x244) * 0xc9 + 100) != STField<int>(this,0x27b))) {
    local_8 = '\x01';
  }
  iVar1 = st::fn_00403FC6(this,iVar1,(int)(short)(STField<short>(this,0x244) * 0xc9 + 100),
                             (int)(short)(STField<short>(this,0x246) * 200 + 100),param_1,local_8
                             ,0x1e);
  return (uint)(iVar1 != 0);
}

// 005EF5D0 FUN_005ef5d0
#line 4 "decomp/ST.exe/functions/005EF5D0/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: D:0079C3A4>00404C87 | P:0079C3A4>00404C87 */

undefined2 __fastcall st::fn_005EF5D0(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return *(undefined2 *)(param_1 + 0x32);
}

// 005EF5F0 FUN_005ef5f0
#line 4 "decomp/ST.exe/functions/005EF5F0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=9, used=0), and
   decompilation contains no value return */

void __fastcall st::fn_005EF5F0(int param_1)

{
  STT3DSprC *this;

  this = (STT3DSprC *)(param_1 + 0x1d5);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  st::fn_00401064
            (this,'\x0e',
             ((0x18 - (int)*(short *)(param_1 + 0x6c) / 0xf) % 0x18 + (4 - DAT_008073fc) * 6) % 0x18
            );
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  st::fn_004052FE(this,'\x0e',(0x18 - (int)*(short *)(param_1 + 0x6c) / 0xf) % 0x18);
  st::fn_004030BC(this,'\x0e');
  return;
}

// 005EF6C0 FUN_005ef6c0
#line 4 "decomp/ST.exe/functions/005EF6C0/decomp.c"
void __thiscall st::fn_005EF6C0(void *this,int param_1)

{
  int iVar1;
  STBoatC *this_00;
  STBoatC *local_8;

  this_00 = nullptr;
  local_8 = this;
  if (STField<ushort>(this,0x2ab) != 0) {
    this_00 = (STBoatC *)
              st::fn_004028BA
                        (g_allPlayers_007FA174,STField<char>(this,0x2a3),
                         STField<ushort>(this,0x2ab),CASE_1);
    if ((this_00 != nullptr) && (this_00->field_0018 == STField<int>(this,0x2a7)))
    goto LAB_005ef720;
  }
  if (STField<AnonShape_005EFAE0_B406B78B *>(this,0x2a7) != nullptr) {
    iVar1 = st::fn_006E62D0
                      (g_playSystem_00802A38,STField<AnonShape_005EFAE0_B406B78B *>(this,0x2a7),
                       (int *)&local_8);
    if (iVar1 != -4) {
      this_00 = local_8;
    }
  }
LAB_005ef720:
  if ((this_00 != nullptr) && (this_00->field_0020 == 0x14)) {
    if (param_1 == 1) {
      st::fn_0040164A(this_00,STField<STFishC *>(this,0x18));
    }
    else {
      if (param_1 == 2) {
        st::fn_004054E3(this_00,STField<int>(this,0x18));
        return;
      }
      if (param_1 == 3) {
        st::fn_00403864(this_00,STField<int>(this,0x18));
        return;
      }
    }
  }
  return;
}

// 005EF7A0 FUN_005ef7a0
#line 4 "decomp/ST.exe/functions/005EF7A0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 005EF7A0 returns return of FUN_005ef4b0 @ 005EF8CD | 005EF7A0 returns return of
   FUN_005ef4b0 @ 005EF8DE */

bool __thiscall st::fn_005EF7A0(void *this,short param_1,short param_2,short param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;

  sVar1 = param_1;
  _param_1 = (STWorldObject *)(uint)(ushort)param_1;
  if (STField<char>(this,0x252) == '\0') {
    if (((((-1 < sVar1) && (sVar1 < g_worldGrid.sizeX)) && (-1 < param_2)) &&
        (((param_2 < g_worldGrid.sizeY && (-1 < param_3)) &&
         ((param_3 < g_worldGrid.sizeZ &&
          (STGridAt3D(g_worldGrid, sVar1, param_2, param_3).objects[0] != nullptr)))))) ||
       (_param_1 = (STWorldObject *)st::fn_00401325(sVar1,param_2,param_3,0,this),
       _param_1 != nullptr)) goto cf_common_exit_005EF8D0;
    STField<char>(this,0x252) = STField<char>(this,0x252) + '\x01';
  }
  else {
    sVar1 = STField<short>(this,0x242);
    sVar2 = STField<short>(this,0x246);
    sVar3 = STField<short>(this,0x244);
    if (((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) ||
       ((sVar3 < 0 ||
        (((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)) || (g_worldGrid.sizeZ <= sVar2)))))) {
      _param_1 = nullptr;
    }
    else {
      _param_1 = STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0];
    }
    if (_param_1 != this) goto cf_common_exit_005EF8D0;
  }
  iVar4 = st::fn_00404223(this,STField<int>(this,0x273));
  _param_1 = nullptr;
  if (iVar4 != 0) {
    STField<undefined4>(this,0x23a) = 2;
    return SUB41(iVar4,0);
  }
cf_common_exit_005EF8D0:
  STField<undefined4>(this,0x23a) = 6;
  return SUB41(_param_1,0);
}

// 005EF950 FUN_005ef950
#line 1 "decomp/ST.exe/functions/005EF950/decomp.c"

int st::fn_005EF950(int param_1,int param_2)

{
  int iVar1;
  int iVar2;

  iVar1 = param_1 / 0xf;
  iVar2 = param_2 / 0xf;
  if (iVar1 == iVar2) {
    return 0;
  }
  if (iVar2 < iVar1) {
    return (((iVar2 - iVar1) + 0x18 <= iVar1 - iVar2) - 1 & 0xfffffffe) + 1;
  }
  return (((iVar1 - iVar2) + 0x18 <= iVar2 - iVar1) - 1 & 2) - 1;
}

// 005EFA30 FUN_005efa30
#line 4 "decomp/ST.exe/functions/005EFA30/decomp.c"
int __fastcall st::fn_005EFA30(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return (*(int *)(param_1 + 0x23e) * 100) / 2000;
}

// 005EFA70 FUN_005efa70
#line 1 "decomp/ST.exe/functions/005EFA70/decomp.c"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void st::fn_005EFA70(void)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int in_ECX;

  *(int *)(in_ECX + 0x2e5) = *(int *)(in_ECX + 0x2e5) + 1;
  return;
}

// 005EFA90 FUN_005efa90
#line 4 "decomp/ST.exe/functions/005EFA90/decomp.c"
void __thiscall st::fn_005EFA90(void *this,undefined4 param_1)

{
  STField<int>(this,0x2e5) = STField<int>(this,0x2e5) + -1;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)this + 0xac))(param_1);
  return;
}

// 005EFAE0 FUN_005efae0
#line 4 "decomp/ST.exe/functions/005EFAE0/decomp.c"
undefined4 __thiscall st::fn_005EFAE0(void *this,AnonShape_005EFAE0_B406B78B *param_1)

{
  int iVar1;

  if ((STField<char>(this,0x24f) == '\0') &&
     (iVar1 = st::fn_006E62D0(g_playSystem_00802A38,param_1,(int *)&param_1),
     iVar1 != -4)) {
    STField<undefined4>(this,0x2a7) = param_1->field_0018;
    STField<undefined2>(this,0x2ab) = param_1->field_0032;
    STField<undefined4>(this,0x2a3) = param_1->field_0024;
    STField<undefined1>(this,0x24f) = 1;
    if (STField<char>(this,800) == '\0') {
      return 1;
    }
    STField<undefined1>(this,800) = 0;
    return 1;
  }
  return 0;
}

// 005EFB80 FUN_005efb80
#line 4 "decomp/ST.exe/functions/005EFB80/decomp.c"
undefined4 __thiscall st::fn_005EFB80(void *this,int param_1)

{
  undefined4 uVar1;

  uVar1 = 0;
  if ((STField<char>(this,0x24f) != '\0') && (STField<int>(this,0x2a7) == param_1)) {
    STField<undefined4>(this,0x2a7) = 0;
    STField<undefined2>(this,0x2ab) = 0;
    STField<undefined1>(this,0x24f) = 0;
    uVar1 = 1;
  }
  return uVar1;
}

// 005EFBD0 FUN_005efbd0
#line 4 "decomp/ST.exe/functions/005EFBD0/decomp.c"
void __thiscall
st::fn_005EFBD0(void *this,int param_1,short param_2,short param_3,short param_4,short param_5)

{
  int iVar1;

  if (STField<int>(this,0x2a7) == param_1) {
    iVar1 = st::fn_004031F2(this,(int)param_4,(int)param_2,(int)param_3,(int)param_4,(int)param_5
                              );
    if (iVar1 == 0) {
      st::fn_004031A7(this,1);
    }
  }
  return;
}

// 005EFC40 FUN_005efc40
#line 4 "decomp/ST.exe/functions/005EFC40/decomp.c"
void __fastcall st::fn_005EFC40(AnonShape_005EFC40_A3F8A20C *param_1)

{
  int iVar1;

  param_1->field_024E = 1;
  iVar1 = st::fn_00404EC1(param_1->field_0242,param_1->field_0244,param_1->field_0246,0,
                             (AnonShape_00495FF0_59081BDD *)param_1);
  if (iVar1 == 0) {
    param_1->field_0252 = param_1->field_0252 + -1;
  }
  param_1->field_023A = 4;
  param_1->field_02E9 = 0;
  param_1->field_0317 = 0;
  st::fn_00405826((AnonShape_005F0620_60AA17CE *)param_1);
  return;
}

// 005EFCD0 FUN_005efcd0
#line 4 "decomp/ST.exe/functions/005EFCD0/decomp.c"
void __fastcall st::fn_005EFCD0(AnonShape_005EFCD0_3603EDD8 *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  int iVar5;

  sVar1 = param_1->field_0047;
  sVar2 = param_1->field_0049;
  sVar3 = param_1->field_004B;
  param_1->field_024E = 0;
  if ((((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar2 < 0)) ||
       ((g_worldGrid.sizeY <= sVar2 || (sVar3 < 0)))) ||
      ((g_worldGrid.sizeZ <= sVar3 ||
       (STGridAt3D(g_worldGrid, sVar1, sVar2, sVar3).objects[0] == nullptr)))) &&
     (iVar5 = st::fn_00401325
                        (sVar1,sVar2,sVar3,0,(RecoveredRecord_DumpClassC_00495EC0 *)param_1),
     iVar5 == 0)) {
    param_1->field_0252 = param_1->field_0252 + '\x01';
    st::fn_00402F04((AnonShape_005F0620_60AA17CE *)param_1);
    sVar1 = param_1->field_0047;
    sVar2 = param_1->field_0049;
    param_1->field_0246 = param_1->field_004B;
    param_1->field_005F = param_1->field_004B;
    param_1->field_027B = param_1->field_02C2;
    param_1->field_0242 = sVar1;
    param_1->field_0244 = sVar2;
    param_1->field_0277 = param_1->field_02BE;
    param_1->field_027F = param_1->field_02C6;
    param_1->field_005B = sVar1;
    param_1->field_005D = sVar2;
    if (param_1->field_02A7 != 0) {
      param_1->field_02A7 = 0;
      param_1->field_02AB = 0;
      param_1->field_024F = 0;
    }
    iVar5 = (int)(short)(sVar1 * 0xc9 + 100);
    if ((param_1->field_02BE == iVar5) && (param_1->field_02C2 == (int)(short)(sVar2 * 0xc9 + 100)))
    {
      uVar4 = g_playSystem_00802A38->field_00E4;
      param_1->field_023A = 0;
      param_1->field_028F = uVar4 + 10;
      return;
    }
    param_1->field_028F = g_playSystem_00802A38->field_00E4 + 10;
    st::fn_00403FC6(param_1,iVar5,(int)(short)(sVar2 * 0xc9 + 100),param_1->field_02C6,
                       param_1->field_02BA,'\x01',0x1e);
    param_1->field_023A = 2;
  }
  return;
}

// 005EFF00 FUN_005eff00
#line 4 "decomp/ST.exe/functions/005EFF00/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __fastcall st::fn_005EFF00(int param_1)

{
  int iVar1;
  short sVar2;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)(param_1 + 0x277);
  sVar2 = (short)(iVar1 >> 0x1f);
  if (iVar1 < 0) {
    sVar2 = (((short)(iVar1 / 0xc9) + sVar2) - (short)((longlong)iVar1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    sVar2 = ((short)(iVar1 / 0xc9) + sVar2) - (short)((longlong)iVar1 * 0x28c1979 >> 0x3f);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)(param_1 + 0x27b);
  *(short *)(param_1 + 0x47) = sVar2;
  sVar2 = (short)(iVar1 >> 0x1f);
  if (iVar1 < 0) {
    sVar2 = (((short)(iVar1 / 0xc9) + sVar2) - (short)((longlong)iVar1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    sVar2 = ((short)(iVar1 / 0xc9) + sVar2) - (short)((longlong)iVar1 * 0x28c1979 >> 0x3f);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)(param_1 + 0x27f);
  *(short *)(param_1 + 0x49) = sVar2;
  sVar2 = (short)(iVar1 >> 0x1f);
  if (iVar1 < 0) {
    sVar2 = (((short)(iVar1 / 200) + sVar2) - (short)((longlong)iVar1 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    sVar2 = ((short)(iVar1 / 200) + sVar2) - (short)((longlong)iVar1 * 0x51eb851f >> 0x3f);
  }
  *(short *)(param_1 + 0x4b) = sVar2;
  *(undefined2 *)(param_1 + 0x41) = *(undefined2 *)(param_1 + 0x277);
  *(undefined2 *)(param_1 + 0x45) = *(undefined2 *)(param_1 + 0x27f);
  *(undefined2 *)(param_1 + 0x5d) = *(undefined2 *)(param_1 + 0x244);
  *(undefined2 *)(param_1 + 0x43) = *(undefined2 *)(param_1 + 0x27b);
  *(undefined2 *)(param_1 + 0x5b) = *(undefined2 *)(param_1 + 0x242);
  *(undefined2 *)(param_1 + 0x5f) = *(undefined2 *)(param_1 + 0x246);
  *(short *)(param_1 + 0x6c) = *(short *)(param_1 + 0x2ba) * 0xf;
  return;
}

