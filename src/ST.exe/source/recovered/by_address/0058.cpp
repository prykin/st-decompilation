#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/0058.cpp

// 005800E0 FUN_005800e0
#line 4 "decomp/ST.exe/functions/005800E0/decomp.c"
void __thiscall st::fn_005800E0(void *this,int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  AnonShape_004E0250_5A3B9236 *pAVar4;

  st::fn_00402973(this,STField<int>(this,0x259) + param_1,1);
  if (STField<int>(this,0x25d) == 1) {
    sVar1 = STField<short>(this,0x245);
    sVar2 = STField<short>(this,0x24d);
    sVar3 = STField<short>(this,0x249);
    if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar3 < 0)) ||
       (((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)) || (g_worldGrid.sizeZ <= sVar2)))) {
      pAVar4 = nullptr;
    }
    else {
      pAVar4 = (AnonShape_004E0250_5A3B9236 *)
               STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0];
    }
    if (pAVar4->field_0018 == STField<int>(this,0x269)) {
      st::fn_00405EE8(pAVar4);
    }
  }
  return;
}

// 005801C0 FUN_005801c0
#line 4 "decomp/ST.exe/functions/005801C0/decomp.c"
void __thiscall st::fn_005801C0(void *this,int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  AnonShape_004E0250_5A3B9236 *pAVar4;

  st::fn_00402973(this,STField<int>(this,0x259) - param_1,1);
  if (STField<int>(this,0x25d) == 1) {
    sVar1 = STField<short>(this,0x245);
    sVar2 = STField<short>(this,0x24d);
    sVar3 = STField<short>(this,0x249);
    if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar3 < 0)) ||
       (((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)) || (g_worldGrid.sizeZ <= sVar2)))) {
      pAVar4 = nullptr;
    }
    else {
      pAVar4 = (AnonShape_004E0250_5A3B9236 *)
               STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0];
    }
    if (pAVar4->field_0018 == STField<int>(this,0x269)) {
      st::fn_00405EE8(pAVar4);
    }
  }
  return;
}

// 00580380 FUN_00580380
#line 4 "decomp/ST.exe/functions/00580380/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00580D30 -> 00580380 @ 00580D86; STResourceC::sub_00580D30 this; stable alias ESI

   [STPrototypeApplier] Propagated return.
   Evidence: 00580380 returns return of sub_006E60A0 @ 005803A6 */

int __fastcall st::fn_00580380(STResourceC *param_1)

{
  int iVar1;
  undefined4 local_24 [3];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;

  local_10 = param_1->field_0008;
  local_18 = 0;
  local_14 = 10;
  iVar1 = st::fn_006E60A0(param_1,local_24);
  return iVar1;
}

// 005803C0 FUN_005803c0
#line 1 "decomp/ST.exe/functions/005803C0/decomp.c"

/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void st::fn_005803C0(void)

{
  return;
}

// 005803E0 FUN_005803e0
#line 4 "decomp/ST.exe/functions/005803E0/decomp.c"
void __fastcall st::fn_005803E0(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(byte *)(param_1 + 0x261) & 1) == 0) {
    st::fn_00405240((STT3DSprC *)(param_1 + 0x1d5),0xe,g_playSystem_00802A38->field_00E4);
    st::fn_00405240((STT3DSprC *)(param_1 + 0x1d5),0xd,g_playSystem_00802A38->field_00E4);
    *(uint *)(param_1 + 0x261) = *(uint *)(param_1 + 0x261) | 1;
  }
  return;
}

// 00580450 FUN_00580450
#line 4 "decomp/ST.exe/functions/00580450/decomp.c"
undefined4 __cdecl
st::fn_00580450(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 local_2c [5];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  memset(local_2c, 0, 0x28); /* compiler bulk-zero initialization */
  local_18 = param_1;
  local_14 = param_2;
  local_c = param_5;
  local_8 = param_4;
  local_2c[0] = 0x5a;
  local_2c[1] = 0xff;
  local_2c[2] = 2;
  local_2c[3] = 1;
  local_10 = param_3;
  g_playSystem_00802A38->vfunc_08(0x10b,0,(short)&param_1,(short)local_2c,0);
  return param_1;
}

// 005804F0 FUN_005804f0
#line 4 "decomp/ST.exe/functions/005804F0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 004E0040 -> 005804F0 @ 004E0114; zero-filled partial register load at 004E0108 |
   004E0250 -> 005804F0 @ 004E030B; zero-filled partial register load at 004E02FF

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 005804F0 -> 00580FF0 @ 0058053D */

void __thiscall st::fn_005804F0(void *this,undefined4 param_1,ushort param_2,ushort param_3)

{
  uint uVar1;

  STField<undefined4>(this,0x269) = param_1;
  uVar1 = STField<uint>(this,0x255);
  STField<undefined4>(this,0x25d) = 1;
  if ((0xdb < uVar1) && ((uVar1 < 0xdf || (uVar1 == 0xe0)))) {
    if (0x14 < g_playSystem_00802A38->field_00E4) {
      st::fn_00404F7F(param_2,param_3);
    }
    st::fn_004045BB();
  }
  return;
}

// 00580570 FUN_00580570
#line 4 "decomp/ST.exe/functions/00580570/decomp.c"
void __fastcall st::fn_00580570(AnonShape_00580570_1EF0F1E6 *param_1)

{
  uint uVar1;

  param_1->field_025D = 0;
  param_1->field_0269 = 0;
  uVar1 = param_1->field_0255;
  if ((0xdb < uVar1) && ((uVar1 < 0xdf || (uVar1 == 0xe0)))) {
    st::fn_004015B9();
    st::fn_0040109B((int)param_1);
  }
  return;
}

// 00580700 FUN_00580700
#line 4 "decomp/ST.exe/functions/00580700/decomp.c"
void __thiscall st::fn_00580700(void *this,undefined1 *param_1)

{
  undefined1 uVar1;
  byte bVar2;
  undefined4 uVar3;

  *param_1 = 4;
  uVar1 = STField<undefined1>(this,0x21d);
  param_1[2] = 0;
  param_1[1] = uVar1;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar3 = (**(code **)(*(int *)this + 0x2c))();
  *(undefined4 *)(param_1 + 3) = uVar3;
  bVar2 = st::fn_004049B7(STField<char>(this,0x24));
  param_1[7] = bVar2;
  *(undefined4 *)(param_1 + 8) = STField<undefined4>(this,0x18);
  param_1[0x2e - STField<int>(this,0x24d)] = 1;
  param_1[0x1b] = 100;
  param_1[0x1d] = 1;
  return;
}

// 00580780 FUN_00580780
#line 4 "decomp/ST.exe/functions/00580780/decomp.c"
void __thiscall st::fn_00580780(void *this,AnonShape_00580780_266862D6 *param_1)

{
  byte bVar1;
  undefined4 uVar2;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar2 = (**(code **)(*(int *)this + 0x2c))();
  *(undefined4 *)param_1 = uVar2;
  bVar1 = st::fn_004049B7(STField<char>(this,0x24));
  param_1->field_0x4 = bVar1;
  param_1->field_0005 = 4;
  param_1->field_0006 = 0;
  param_1->field_0007 = 1;
  param_1->field_0x8 = STField<undefined1>(this,0x21d);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar2 = (**(code **)(*(int *)this + 0x2c))();
  switch(uVar2) {
  case 0xdc:
    param_1->field_0x1c = 2;
    param_1->field_001D = STField<undefined4>(this,0x259);
    return;
  case 0xdd:
    param_1->field_0x1c = 0;
    param_1->field_001D = STField<undefined4>(this,0x259);
    return;
  case 0xde:
    param_1->field_0x1c = 1;
    param_1->field_001D = STField<undefined4>(this,0x259);
    return;
  case 0xe0:
    param_1->field_0x1c = 4;
  }
  param_1->field_001D = STField<undefined4>(this,0x259);
  return;
}

// 00580860 FUN_00580860
#line 4 "decomp/ST.exe/functions/00580860/decomp.c"
void __thiscall st::fn_00580860(void *this,undefined1 *param_1)

{
  undefined4 uVar1;

  *param_1 = 4;
  param_1[1] = 0;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar1 = (**(code **)(*(int *)this + 0x2c))();
  *(undefined4 *)(param_1 + 2) = uVar1;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = STField<undefined4>(this,0x18);
  return;
}

// 005808A0 FUN_005808a0
#line 4 "decomp/ST.exe/functions/005808A0/decomp.c"
void __thiscall st::fn_005808A0(void *this,undefined1 *param_1)

{
  undefined4 uVar1;

  *param_1 = 4;
  param_1[1] = 0;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar1 = (**(code **)(*(int *)this + 0x2c))();
  *(undefined4 *)(param_1 + 2) = uVar1;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = STField<undefined4>(this,0x18);
  return;
}

// 005808E0 FUN_005808e0
#line 4 "decomp/ST.exe/functions/005808E0/decomp.c"
undefined4 __fastcall st::fn_005808E0(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)(param_1 + 0x21d) == 0) && (*(int *)(param_1 + 0x25d) != 2)) {
    return 1;
  }
  return 0;
}

// 00580910 FUN_00580910
#line 4 "decomp/ST.exe/functions/00580910/decomp.c"
/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00580910_param_2Enum. Cases:
   CASE_DC=220;CASE_DD=221;CASE_DE=222;CASE_E0=224

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 0044C130 -> 00580910 @ 0044C376

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0044C130 -> 00580910 @ 0044C376; STAllPlayersC::GetTOBJImage parameter param_1 */

void __cdecl
st::fn_00580910(int param_1,Global_sub_00580910_param_2Enum param_2,int param_3,undefined4 *param_4,
            char *param_5,undefined1 *param_6,STAllPlayersC_GetTOBJImage_param_2Enum *param_7)

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
    switch(param_2) {
    case CASE_DC:
      *param_4 = 0;
      return;
    case CASE_DD:
      pcVar4 = "rc276_c0";
      break;
    case CASE_DE:
    case CASE_E0:
      pcVar4 = &DAT_007cb2a8;
      break;
    default:
      goto switchD_0058094e_caseD_df;
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
switchD_0058094e_caseD_df:
  return;
}

// 005809E0 FUN_005809e0
#line 4 "decomp/ST.exe/functions/005809E0/decomp.c"
undefined4 __cdecl st::fn_005809E0(short param_1,short param_2,int param_3,int param_4)

{
  STWorldObject *this;
  short sVar1;
  int iVar2;
  short sVar3;

  sVar3 = (short)param_3;
  iVar2 = st::fn_00404D3B(param_1,param_2,sVar3);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_3 != 0) {
    sVar1 = sVar3 + -1;
    if (param_1 < 0) {
      return 1;
    }
    if ((((param_1 < g_worldGrid.sizeX) && (-1 < param_2)) && (param_2 < g_worldGrid.sizeY)) &&
       (((-1 < sVar1 && (sVar1 < g_worldGrid.sizeZ)) &&
        (STGridAt3D(g_pathingGrid, param_1, param_2, sVar1) != -1)))) {
      return 0;
    }
  }
  if (((param_1 < 0) || (g_worldGrid.sizeX <= param_1)) ||
     (((param_2 < 0 ||
       (((g_worldGrid.sizeY <= param_2 || (sVar3 < 0)) || (g_worldGrid.sizeZ <= sVar3)))) ||
      (this = STGridAt3D(g_worldGrid, param_1, param_2, sVar3).objects[0], this == nullptr)))) {
    return 1;
  }
  iVar2 = this->GetObjectTypeId();
  if (iVar2 != 0x39) {
    if (iVar2 == 0x4f) {
      if (param_4 != 0xde) {
        return 0;
      }
      return 1;
    }
    if (iVar2 != 0x5e) {
      return 0;
    }
  }
  if (param_4 != 0xdd) {
    return 0;
  }
  return 1;
}

// 00580DC0 FUN_00580dc0
#line 4 "decomp/ST.exe/functions/00580DC0/decomp.c"
undefined4 __fastcall st::fn_00580DC0(STJellyGunC *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  AnonShape_004E0250_5A3B9236 *pAVar4;
  int iVar5;
  undefined4 uVar6;

  uVar6 = 0;
  iVar5 = st::fn_00402040((short)*(undefined4 *)&param_1->field_0x245,
                             (short)*(undefined4 *)&param_1->field_0x249,
                             *(int *)&param_1->field_0x24d,*(int *)&param_1->field_0x255);
  if (iVar5 != 0) {
    iVar5 = st::fn_00403CD8(g_allPlayers_007FA174,0xffff,param_1);
    if (iVar5 != 0) {
      st::fn_00404449((STResourceC *)param_1);
      return 0;
    }
    *(undefined4 *)&param_1->field_0x25d = 0;
    st::fn_00402C4D((int)param_1);
    sVar1 = *(short *)&param_1->field_0x24d;
    sVar2 = *(short *)&param_1->field_0x249;
    sVar3 = *(short *)&param_1->field_0x245;
    uVar6 = 1;
    if (((((-1 < sVar3) && (sVar3 < g_worldGrid.sizeX)) && (-1 < sVar2)) &&
        ((sVar2 < g_worldGrid.sizeY && (-1 < sVar1)))) &&
       ((sVar1 < g_worldGrid.sizeZ &&
        (pAVar4 = (AnonShape_004E0250_5A3B9236 *)
                  STGridAt3D(g_worldGrid, sVar3, sVar2, sVar1).objects[0], pAVar4 != nullptr)))) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar5 = (**(code **)(*(int *)pAVar4 + 0x2c))();
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      if (((iVar5 != 0x39) && (iVar5 = (**(code **)(*(int *)pAVar4 + 0x2c))(), iVar5 != 0x4f)) &&
         (iVar5 = (**(code **)(*(int *)pAVar4 + 0x2c))(), iVar5 != 0x5e)) {
        return 1;
      }
      st::fn_00405EE8(pAVar4);
    }
  }
  return uVar6;
}

// 00580F50 FUN_00580f50
#line 4 "decomp/ST.exe/functions/00580F50/decomp.c"
void st::fn_00580F50(void)

{
  undefined4 local_24 [4];
  undefined4 local_14;

  if (DAT_008117bc != nullptr) {
    memset(local_24, 0, 0x20); /* compiler bulk-zero initialization */
    local_14 = 0x5ddf;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)*DAT_008117bc)(local_24);
  }
  return;
}

// 00580FA0 FUN_00580fa0
#line 4 "decomp/ST.exe/functions/00580FA0/decomp.c"
void st::fn_00580FA0(void)

{
  undefined4 local_24 [4];
  undefined4 local_14;

  if (DAT_008117bc != nullptr) {
    memset(local_24, 0, 0x20); /* compiler bulk-zero initialization */
    local_14 = 0x5de0;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)*DAT_008117bc)(local_24);
  }
  return;
}

// 00580FF0 FUN_00580ff0
#line 4 "decomp/ST.exe/functions/00580FF0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005804F0 -> 00580FF0 @ 0058053D; FUN_005804f0 parameter param_2 */

void st::fn_00580FF0(ushort param_1,undefined2 param_2)

{
  undefined4 local_24 [4];
  undefined4 local_14;
  ushort local_c;
  undefined2 local_a;

  if (DAT_008117bc != nullptr) {
    memset(local_24, 0, 0x20); /* compiler bulk-zero initialization */
    local_a = param_2;
    local_c = param_1;
    local_14 = 0x5de1;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)*DAT_008117bc)(local_24);
  }
  return;
}

// 00581060 FUN_00581060
#line 4 "decomp/ST.exe/functions/00581060/decomp.c"
void st::fn_00581060(void)

{
  undefined4 local_24 [4];
  undefined4 local_14;

  if (DAT_008117bc != nullptr) {
    memset(local_24, 0, 0x20); /* compiler bulk-zero initialization */
    local_14 = 0x5de2;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)*DAT_008117bc)(local_24);
  }
  return;
}

// 00581120 FUN_00581120
#line 4 "decomp/ST.exe/functions/00581120/decomp.c"
/* [STPrototypeApplier] Propagated parameter 7.
   Evidence: 004C5F30 -> 00581120 @ 004C6001; zero-filled partial register load at 004C5FEE */

undefined4 __cdecl
st::fn_00581120(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,ushort param_8)

{
  undefined4 local_34 [5];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  ushort local_8;

  memset(local_34, 0, 0x2e); /* compiler bulk-zero initialization */
  local_20 = param_1;
  local_34[1] = param_6;
  local_18 = param_3;
  local_10 = param_5;
  local_c = param_7;
  local_1c = param_2;
  local_8 = param_8;
  local_34[0] = 0x104;
  local_34[2] = 0;
  local_34[3] = 1;
  local_14 = param_4;
  g_playSystem_00802A38->vfunc_08(0x138,0,(short)&param_6,(short)local_34,0);
  return param_6;
}

// 005811C0 FUN_005811c0
#line 4 "decomp/ST.exe/functions/005811C0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 005811C0 returns return of sub_006E60A0 @ 005811E6 */

int __fastcall st::fn_005811C0(void *param_1)

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

// 00581200 FUN_00581200
#line 4 "decomp/ST.exe/functions/00581200/decomp.c"
void __fastcall st::fn_00581200(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  STWorldObject *pSVar4;
  void *this;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  AnonShape_00581200_BFD82E5E *pAVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  short sVar13;
  int iVar14;
  int iVar15;
  short sVar16;
  bool bVar17;
  int local_54;
  int local_4c;
  int local_44;
  int *local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  AnonShape_00581200_BFD82E5E *local_c;
  short local_8;
  char local_5;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar10 = *(int *)(param_1 + 0x1f5) - *(int *)(param_1 + 0x1ed) >> 1;
  local_1c = 0;
  iVar11 = iVar10 + 3;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar12 = *(int *)(param_1 + 0x1f9) - *(int *)(param_1 + 0x1f1) >> 1;
  iVar15 = iVar12 + 3;
  if (iVar15 < iVar11) {
    iVar15 = iVar11;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar11 = *(int *)(param_1 + 0x1f5) + 3;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_40 = (int *)(*(int *)(param_1 + 0x1ed) + -3);
  if (g_worldGrid.sizeX <= iVar11) {
    iVar11 = g_worldGrid.sizeX + -1;
  }
  if ((int)local_40 < 0) {
    local_40 = nullptr;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_24 = *(int *)(param_1 + 0x1f9) + 3;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_20 = *(int *)(param_1 + 0x1f1) + -3;
  iVar14 = (int)g_worldGrid.sizeY;
  if (iVar14 <= local_24) {
    iVar14 = iVar14 + -1;
    local_24 = iVar14;
  }
  if (local_20 < 0) {
    local_20 = 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  sVar13 = *(short *)(param_1 + 0x1ed) + (short)iVar10;
  local_28 = STReplaceLowWord((uint32_t)(iVar14), (uint16_t)(sVar13));
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  sVar16 = *(short *)(param_1 + 0x1f1) + (short)iVar12;
  local_2c = STReplaceLowWord((uint32_t)(param_1), (uint16_t)(sVar16));
  local_10 = (int)sVar16;
  local_c = (AnonShape_00581200_BFD82E5E *)param_1;
  if ((((sVar13 <= iVar11) && (local_10 <= local_24)) && ((int)local_40 <= (int)sVar13)) &&
     (local_20 <= local_10)) {
    local_18 = 0;
    do {
      iVar10 = local_18;
      if ((((-1 < sVar13) && (sVar13 < g_worldGrid.sizeX)) &&
          ((-1 < (short)local_10 &&
           (((short)local_10 < g_worldGrid.sizeY && (sVar16 = (short)local_18, -1 < sVar16)))))) &&
         ((sVar16 < g_worldGrid.sizeZ &&
          ((pSVar4 = STGridAt3D(g_worldGrid, sVar13, local_10, sVar16).objects[0],
           pSVar4 != nullptr &&
           (((((pSVar4->value_20 == 1000 || (pSVar4->value_20 == 0x14)) &&
              (iVar12 = (*pSVar4->vtable[5].slots_00_28[0])(), pAVar8 = local_c, iVar12 != 0)) &&
             (pSVar4[1].vtable < (STWorldObjectVTable *)0x8)) &&
            ((g_playSystem_00802A38 == nullptr ||
             (g_bulkInitializedRecords_008087C7[(int)pSVar4[1].vtable].field_0022 < 8)))))))))) {
        this = (void *)local_c->field_0010;
        if (STField<char>(this,0x146f) == '\0') {
          iVar10 = st::fn_00405D8F(this,*(byte *)&pSVar4[1].vtable,local_c->field_0024);
          bVar17 = iVar10 < 0;
        }
        else {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          local_5 = *(char *)((uint)local_c->field_0024 * 0x51 + 0x11ca + (int)this);
          bVar17 = local_5 !=
                   *(char *)((uint)*(byte *)&pSVar4[1].vtable * 0x51 + 0x11ca + (int)this);
        }
        iVar10 = local_18;
        if ((bVar17) &&
           (iVar12 = (*pSVar4->vtable[5].slots_00_28[2])(), iVar10 = local_18, iVar12 != 0)) {
          *(STWorldObject **)(pAVar8->field_020B + local_1c * 4) = pSVar4;
          local_1c = local_1c + 1;
          if (pAVar8->field_01FD <= local_1c) goto cf_break_loop_00581775;
        }
      }
      local_18 = iVar10 + 1;
    } while (local_18 < 5);
  }
  local_18 = 0;
  do {
    iVar10 = (short)local_28 + 1;
    local_10 = (short)local_2c + 1;
    local_44 = 1;
    local_30 = 0;
    local_34 = 3;
    local_4c = DAT_007cb2dc;
    local_38 = DAT_007cb2e8;
cf_continue_loop_005814A2:
    iVar10 = iVar10 + local_4c;
    local_10 = local_10 + local_38;
    sVar13 = (short)iVar10 - (short)local_28;
    iVar12 = (int)sVar13;
    if (sVar13 < 0) {
      iVar12 = -iVar12;
    }
    local_14 = iVar10;
    if (iVar12 <= local_44) {
      sVar13 = (short)local_10 - (short)local_2c;
      iVar12 = (int)sVar13;
      if (sVar13 < 0) {
        iVar12 = -iVar12;
      }
      if (local_44 < iVar12) goto LAB_005814e2;
      goto LAB_00581545;
    }
LAB_005814e2:
    bVar17 = false;
    local_30 = local_30 + 1;
    if (local_30 < 4) {
      iVar10 = iVar10 - local_4c;
      local_10 = local_10 - local_38;
      bVar17 = true;
LAB_00581518:
      local_34 = local_34 + 1;
      if (3 < local_34) {
        local_34 = 0;
      }
      local_4c = (&DAT_007cb2dc)[local_30];
      local_38 = (&DAT_007cb2dc)[local_34];
      local_14 = iVar10;
      if (bVar17) goto cf_continue_loop_005814A2;
LAB_00581545:
      iVar10 = local_14;
      if (((((iVar11 < local_14) || (local_24 < local_10)) || (local_14 < (int)local_40)) ||
          (((((local_10 < local_20 || (sVar13 = (short)local_14, sVar13 < 0)) ||
             ((g_worldGrid.sizeX <= sVar13 ||
              ((sVar16 = (short)local_10, sVar16 < 0 || (g_worldGrid.sizeY <= sVar16)))))) ||
            (sVar9 = (short)local_18, sVar9 < 0)) ||
           ((g_worldGrid.sizeZ <= sVar9 ||
            (pSVar4 = STGridAt3D(g_worldGrid, sVar13, sVar16, sVar9).objects[0],
            pSVar4 == nullptr)))))) ||
         ((((pSVar4->value_20 != 1000 && (pSVar4->value_20 != 0x14)) ||
           ((iVar12 = (*pSVar4->vtable[5].slots_00_28[0])(), iVar12 == 0 ||
            ((STWorldObjectVTable *)0x7 < pSVar4[1].vtable)))) ||
          ((g_playSystem_00802A38 != nullptr &&
           (7 < g_bulkInitializedRecords_008087C7[(int)pSVar4[1].vtable].field_0022))))))
      goto cf_continue_loop_005814A2;
      bVar1 = *(byte *)&pSVar4[1].vtable;
      bVar2 = local_c->field_0024;
      iVar12 = local_c->field_0010;
      if (*(char *)(iVar12 + 0x146f) != '\0') {
        local_5 = *(char *)((uint)bVar2 * 0x51 + 0x11ca + iVar12);
        local_14 = 0;
        bVar17 = local_5 != *(char *)((uint)bVar1 * 0x51 + 0x11ca + iVar12);
        goto LAB_00581728;
      }
      if (bVar1 == bVar2) {
LAB_0058171d:
        iVar12 = 0;
      }
      else {
        uVar6 = (uint)bVar1;
        uVar7 = (uint)bVar2;
        cVar3 = *(char *)(uVar7 + uVar6 * 8 + 0x142f + iVar12);
        if ((cVar3 == '\0') &&
           (iVar10 = local_14, *(char *)(uVar6 + uVar7 * 8 + 0x142f + iVar12) == '\0')) {
          iVar12 = -2;
        }
        else if ((cVar3 == '\x01') &&
                (iVar10 = local_14, *(char *)(uVar6 + uVar7 * 8 + 0x142f + iVar12) == '\0')) {
          iVar12 = -1;
        }
        else if ((cVar3 == '\0') &&
                (iVar10 = local_14, *(char *)(uVar6 + uVar7 * 8 + 0x142f + iVar12) == '\x01')) {
          iVar12 = 1;
        }
        else {
          if ((cVar3 != '\x01') || (*(char *)(uVar6 + uVar7 * 8 + 0x142f + iVar12) != '\x01'))
          goto LAB_0058171d;
          iVar12 = 2;
        }
      }
      bVar17 = iVar12 < 0;
LAB_00581728:
      if ((bVar17) && (iVar12 = (*pSVar4->vtable[5].slots_00_28[2])(), iVar12 != 0)) {
        local_1c = local_1c + 1;
        *(STWorldObject **)(local_c->field_020B + -4 + local_1c * 4) = pSVar4;
        if (local_c->field_01FD <= local_1c) goto cf_break_loop_00581775;
      }
      goto cf_continue_loop_005814A2;
    }
    local_44 = local_44 + 1;
    local_30 = 0;
    if (local_44 <= iVar15) goto LAB_00581518;
    local_18 = local_18 + 1;
    if (4 < local_18) {
cf_break_loop_00581775:
      iVar15 = local_c->field_01FD;
      while (iVar15 = iVar15 + -1, -1 < iVar15) {
        iVar10 = *(int *)(local_c->field_0207 + iVar15 * 4);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (((iVar10 != 0) && (*(int *)(iVar10 + 0x23d) != 0)) &&
           (((int)*(short *)(iVar10 + 0x47) < (int)local_40 ||
            (((iVar11 < *(short *)(iVar10 + 0x47) || (*(short *)(iVar10 + 0x49) < local_20)) ||
             (local_24 < *(short *)(iVar10 + 0x49))))))) {
          *(undefined4 *)(iVar10 + 0x241) = 0xff;
          *(undefined4 *)(iVar10 + 0x23d) = 0;
        }
      }
      local_24 = 0;
      if (0 < local_1c) {
        do {
          iVar11 = local_24;
          local_54 = -1;
          iVar15 = 0x1fffff;
          st::fn_004031E3(*(void **)(local_c->field_020B + local_24 * 4),(undefined2 *)&local_28,
                             &local_2c,(int *)&local_8);
          iVar10 = local_c->field_01FD + -1;
          if (-1 < iVar10) {
            local_40 = (int *)(local_c->field_0207 + iVar10 * 4);
            do {
              iVar11 = *local_40;
              if ((iVar11 != 0) && (*(int *)(iVar11 + 0x23d) == 0)) {
                sVar13 = *(short *)(iVar11 + 0x41) - (short)local_28;
                iVar12 = (int)sVar13;
                if (sVar13 < 0) {
                  iVar12 = -iVar12;
                }
                sVar13 = *(short *)(iVar11 + 0x43) - (short)local_2c;
                iVar14 = (int)sVar13;
                if (sVar13 < 0) {
                  iVar14 = -iVar14;
                }
                sVar13 = *(short *)(iVar11 + 0x45) - local_8;
                iVar11 = (int)sVar13;
                if (sVar13 < 0) {
                  iVar11 = -iVar11;
                }
                iVar12 = iVar11 + iVar14 + iVar12;
                if (iVar12 < iVar15) {
                  iVar15 = iVar12;
                  local_54 = iVar10;
                }
              }
              iVar10 = iVar10 + -1;
              local_40 = local_40 + -1;
            } while (-1 < iVar10);
            iVar11 = local_24;
            if (local_54 != -1) {
              iVar15 = *(int *)(local_c->field_0207 + local_54 * 4);
              iVar10 = *(int *)(local_c->field_020B + local_24 * 4);
              if (*(int *)(iVar15 + 0x235) != 2) {
                uVar5 = *(undefined4 *)(iVar10 + 0x24);
                *(undefined2 *)(iVar15 + 0x245) = *(undefined2 *)(iVar10 + 0x32);
                *(undefined4 *)(iVar15 + 0x241) = uVar5;
                *(undefined4 *)(iVar15 + 0x23d) = 1;
                *(undefined4 *)(iVar15 + 0x252) = 0;
              }
            }
          }
          local_24 = iVar11 + 1;
        } while (local_24 < local_1c);
      }
      return;
    }
  } while( true );
}

// 00581B80 FUN_00581b80
#line 4 "decomp/ST.exe/functions/00581B80/decomp.c"
void __fastcall st::fn_00581B80(int param_1)

{
  *(uint *)(param_1 + 0x1d5) = *(uint *)(param_1 + 0x1d5) | 1;
  return;
}

// 00581BC0 FUN_00581bc0
#line 4 "decomp/ST.exe/functions/00581BC0/decomp.c"
uint __fastcall st::fn_00581BC0(int param_1)

{
  uint uVar1;

  if (g_playSystem_00802A38->field_00E4 % 0x3c == 0) {
    uVar1 = st::fn_004020E5(param_1);
    return uVar1;
  }
  return g_playSystem_00802A38->field_00E4 / 0x3c;
}

// 00582280 CreateSTJellyMan
#line 4 "decomp/ST.exe/functions/00582280/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA95C>00403B11

   [STObjectFactoryApplier] Central object factory for 0x0138 (ST_OBJECT_ST_JELLY_MAN).
   Evidence: registry[71] at 007CA958 stores type 0x0138 and executable pointer 00403B11; allocation
   size 531 uniquely matches /STJellyManC */

STJellyManC * __cdecl st::fn_00582280(void)

{
  STJellyManC *pSVar1;

  pSVar1 = (STJellyManC *)st::fn_006B04D0(0x213);
  if (pSVar1 != nullptr) {
    pSVar1 = st::fn_00402388(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

// 005822B0 FUN_005822b0
#line 4 "decomp/ST.exe/functions/005822B0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004CCC10 -> 005822B0 @ 004CD079; zero-filled partial register load at 004CD070 */

void __thiscall st::fn_005822B0(void *this,undefined4 param_1,ushort param_2)

{
  STField<ushort>(this,0x205) = param_2;
  STField<undefined4>(this,0x1dd) = param_1;
  return;
}

// 005822E0 FUN_005822e0
#line 4 "decomp/ST.exe/functions/005822E0/decomp.c"
undefined4 __thiscall st::fn_005822E0(void *this,byte param_1,byte param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;

  if (param_1 != param_2) {
    uVar2 = (uint)param_1;
    uVar3 = (uint)param_2;
    cVar1 = *(char *)(uVar3 + uVar2 * 8 + 0x142f + (int)this);
    if ((cVar1 == '\0') && (*(char *)(uVar2 + uVar3 * 8 + 0x142f + (int)this) == '\0')) {
      return 0xfffffffe;
    }
    if ((cVar1 == '\x01') && (*(char *)(uVar2 + uVar3 * 8 + 0x142f + (int)this) == '\0')) {
      return 0xffffffff;
    }
    if ((cVar1 == '\0') && (*(char *)(uVar2 + uVar3 * 8 + 0x142f + (int)this) == '\x01')) {
      return 1;
    }
    if ((cVar1 == '\x01') && (*(char *)(uVar2 + uVar3 * 8 + 0x142f + (int)this) == '\x01')) {
      return 2;
    }
  }
  return 0;
}

// 005823B0 FUN_005823b0
#line 4 "decomp/ST.exe/functions/005823B0/decomp.c"
undefined4 st::fn_005823B0(void)

{
  return 0xed;
}

// 00582460 FUN_00582460
#line 4 "decomp/ST.exe/functions/00582460/decomp.c"
/* [STPrototypeApplier] Propagated parameter 10.
   Evidence: 00581AC0 -> 00582460 @ 00581B44; zero-filled partial register load at 00581B06 */

undefined4 __cdecl
st::fn_00582460(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,uint param_11,undefined2 param_12)

{
  undefined4 local_44 [5];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  undefined2 local_8;

  memset(local_44, 0, 0x3e); /* compiler bulk-zero initialization */
  local_30 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  local_24 = param_4;
  local_20 = param_5;
  local_44[1] = param_9;
  local_1c = param_6;
  local_18 = param_7;
  local_14 = param_8;
  local_c = param_11;
  local_44[0] = 0xfa;
  local_44[2] = 0;
  local_44[3] = 1;
  local_10 = 0;
  local_8 = param_12;
  g_playSystem_00802A38->vfunc_08(0x137,0,(short)&param_9,(short)local_44,0);
  return param_9;
}

// 00583E00 FUN_00583e00
#line 4 "decomp/ST.exe/functions/00583E00/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA954>00405858

   [STObjectFactoryApplier] Central object factory for 0x0137 (ST_OBJECT_TYPE_0137).
   Evidence: registry[70] at 007CA950 stores type 0x0137 and executable pointer 00405858; allocation
   size 660 has no unique current class-layout match */

void * __cdecl st::fn_00583E00(void)

{
  STJellyGunC *pSVar1;

  pSVar1 = (STJellyGunC *)st::fn_006B04D0(0x294);
  if (pSVar1 != nullptr) {
    pSVar1 = st::fn_0040562D(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

// 005844B0 FUN_005844b0
#line 4 "decomp/ST.exe/functions/005844B0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=005844B3 MOV AX,word ptr
   [EBP + 0xc] */

void __thiscall st::fn_005844B0(void *this,undefined4 param_1,ushort param_2)

{
  STField<ushort>(this,0x292) = param_2;
  STField<undefined4>(this,0x25a) = param_1;
  return;
}

// 005845B0 FUN_005845b0
#line 4 "decomp/ST.exe/functions/005845B0/decomp.c"
undefined4 __cdecl
st::fn_005845B0(int param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,int *param_7,
            int *param_8,int *param_9,uint param_10)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  short sVar9;

  *param_7 = 0;
  *param_8 = 0;
  *param_9 = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (((int)((param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f)) < param_3) &&
     (param_10 = param_10 * 0x41c64e6d + 0x3039, (param_10 & 0x10000) == 0)) {
LAB_00584666:
    if ((int)param_2 < 0) {
      if ((param_10 * 0x4e6d + 0x3039 & 0x10000) == 0) {
        piVar2 = (int *)&DAT_007cb658;
      }
      else {
        piVar2 = (int *)&DAT_007cb610;
      }
    }
    else if ((param_10 * 0x4e6d + 0x3039 & 0x10000) == 0) {
      piVar2 = (int *)&DAT_007cb634;
    }
    else {
      piVar2 = (int *)&DAT_007cb5ec;
    }
  }
  else {
    if ((int)param_2 < 1) {
      uVar1 = (uint)(param_2 != 0);
      if (uVar1 == 1) {
        piVar2 = (int *)&DAT_007cb6c4;
        if ((param_10 * 0x4e6d + 0x3039 & 0x10000) == 0) {
          piVar2 = (int *)&DAT_007cb6e8;
        }
        goto LAB_005846f7;
      }
      if (uVar1 == 0) goto LAB_00584666;
      if (uVar1 != 0xffffffff) {
        piVar2 = &DAT_007cb5c8;
        goto LAB_005846f7;
      }
    }
    if ((param_10 * 0x4e6d + 0x3039 & 0x10000) == 0) {
      piVar2 = (int *)&DAT_007cb6a0;
    }
    else {
      piVar2 = (int *)&DAT_007cb67c;
    }
  }
LAB_005846f7:
  if (piVar2 == nullptr) {
    piVar2 = &DAT_007cb5c8;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_10 = 0;
  do {
    iVar3 = (*piVar2 + param_1 * 9) * 6;
    iVar6 = *(short *)(&DAT_007cb418 + iVar3) + param_4;
    iVar5 = *(short *)(&DAT_007cb41c + iVar3) + param_6;
    iVar3 = *(short *)(&DAT_007cb41a + iVar3) + param_5;
    if (((((-1 < iVar6) && (-1 < iVar3)) && (-1 < iVar5)) &&
        ((iVar6 < g_worldGrid.sizeX && (iVar3 < g_worldGrid.sizeY)))) && (iVar5 < g_worldGrid.sizeZ)
       ) {
      sVar7 = (short)iVar6;
      sVar8 = (short)iVar3;
      sVar9 = (short)iVar5;
      iVar4 = st::fn_00404D3B(sVar7,sVar8,sVar9);
      if ((iVar4 != 0) &&
         (((sVar7 < 0 || (g_worldGrid.sizeX <= sVar7)) ||
          ((((sVar8 < 0 ||
             (((g_worldGrid.sizeY <= sVar8 || (sVar9 < 0)) || (g_worldGrid.sizeZ <= sVar9)))) ||
            (STGridAt3D(g_worldGrid, sVar7, sVar8, sVar9).objects[0] == nullptr)) &&
           ((((g_worldGrid.sizeX <= sVar7 || (sVar8 < 0)) ||
             ((g_worldGrid.sizeY <= sVar8 || ((sVar9 < 0 || (g_worldGrid.sizeZ <= sVar9)))))) ||
            (STGridAt3D(g_worldGrid, sVar7, sVar8, sVar9).objects[1] == nullptr)))))))) {
        *param_7 = iVar6;
        *param_8 = iVar3;
        *param_9 = iVar5;
        return 1;
      }
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_10 = param_10 + 1;
    piVar2 = piVar2 + 1;
    if (8 < (int)param_10) {
      return 0;
    }
  } while( true );
}

// 00584950 FUN_00584950
#line 4 "decomp/ST.exe/functions/00584950/decomp.c"
undefined4 st::fn_00584950(void)

{
  return 0xec;
}

// 00584A30 FUN_00584a30
#line 4 "decomp/ST.exe/functions/00584A30/decomp.c"
/* [STPrototypeApplier] Propagated parameter 8.
   Evidence: 004C4550 -> 00584A30 @ 004C4AAE; zero-filled partial register load at 004C4A71 */

undefined4 __cdecl
st::fn_00584A30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            ushort param_9)

{
  undefined4 local_38 [5];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  ushort local_c;

  memset(local_38, 0, 0x32); /* compiler bulk-zero initialization */
  local_24 = param_1;
  local_38[1] = param_6;
  local_18 = param_4;
  local_1c = param_3;
  local_10 = param_8;
  local_20 = param_2;
  local_c = param_9;
  local_38[0] = 0xaa;
  local_38[2] = 0;
  local_38[3] = 1;
  local_14 = param_5;
  g_playSystem_00802A38->vfunc_08(0x130,0,(short)&param_6,(short)local_38,0);
  return param_6;
}

// 00584AD0 FUN_00584ad0
#line 4 "decomp/ST.exe/functions/00584AD0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 00584AD0 returns return of sub_006E60A0 @ 00584AF6 */

int __fastcall st::fn_00584AD0(void *param_1)

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

// 00584B10 FUN_00584b10
#line 4 "decomp/ST.exe/functions/00584B10/decomp.c"
void __fastcall st::fn_00584B10(AnonShape_00584B10_33997544 *param_1)

{
  undefined1 *this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  this = &param_1->field_0x1d5;
  st::fn_00404264((STT3DSprC *)this,0xe);
  st::fn_00402A90((STT3DSprC *)this);
  st::fn_00404183((STT3DSprC *)this,8,PTR_00806774,"Expb22",0x1d);
  st::fn_00404183((STT3DSprC *)this,10,PTR_00806774,"expmask3",0x1d);
  uVar4 = 0x45;
  uVar3 = 0x5a;
  iVar2 = 1;
  uVar1 = st::fn_004052CC((STT3DSprC *)this);
  st::fn_006EA4E0(param_1->field_0211,uVar1,iVar2,uVar3,uVar4);
  st::fn_00403233((STT3DSprC *)this,'\n');
  st::fn_004044EE((STT3DSprC *)this,PTR_008032b8,0x10);
  st::fn_00405240((STT3DSprC *)this,10,g_playSystem_00802A38->field_00E4);
  st::fn_00405240((STT3DSprC *)this,8,g_playSystem_00802A38->field_00E4);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)param_1 + 0xd8))();
  iVar2 = st::fn_00404183((STT3DSprC *)this,9,PTR_00806764,"expl_bbt0",0x1d);
  if (iVar2 == 0) {
    st::fn_00402761((STT3DSprC *)this,9);
    uVar3 = st::fn_004022AC((STT3DSprC *)this,'\t');
    param_1->field_0255 = (char)uVar3;
    param_1->field_0256 = DAT_007cb8e0;
    param_1->field_0257 = 0;
  }
  return;
}

// 00584C50 FUN_00584c50
#line 4 "decomp/ST.exe/functions/00584C50/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_00584C50(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 **ppuVar3;
  undefined4 *local_40 [8];
  undefined4 local_20 [3];
  undefined2 local_14;
  undefined2 local_12;

  if (param_1 != nullptr) {
    memset(local_20, 0, 0x1c); /* compiler bulk-zero initialization */
    iVar1 = 0;
    local_14 = STField<undefined2>(this,0x284);
    local_20[0] = DAT_007e656c;
    local_12 = STField<undefined2>(this,0x280);
    local_20[2] = STField<undefined4>(this,0x25c);
    local_40[2] = (undefined4 *)param_1[2];
    ppuVar3 = local_40;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppuVar3 = nullptr;
      ppuVar3 = ppuVar3 + 1;
    }
    local_40[5] = local_20;
    local_20[1] = 0xa3;
    local_40[3] = (undefined4 *)0x2;
    local_40[4] = (undefined4 *)0x110;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)*param_1)(local_40);
  }
  return;
}

// 00584D10 FUN_00584d10
#line 4 "decomp/ST.exe/functions/00584D10/decomp.c"
void __fastcall st::fn_00584D10(AnonShape_00584D10_AA6E9D03 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_64 [6];
  short local_4a;
  short sStack_48;
  short local_46;
  short sStack_44;
  short local_42;
  short local_40;
  undefined2 local_3e;
  undefined4 local_3c;
  undefined1 local_38;
  undefined4 local_37;
  undefined2 local_33;
  int local_c;
  int local_8;

  iVar5 = param_1->field_0251;
  uVar2 = param_1->field_025C;
  puVar6 = local_64;
  local_8 = iVar5;
  for (iVar4 = 0x16; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_33 = param_1->field_0284;
  local_38 = 0;
  local_37 = param_1->field_0280;
  local_3c = 0xa3;
  local_64[0] = 0x28;
  local_64[3] = 1;
  local_c = 0;
  local_64[1] = uVar2;
  do {
    local_3e = (undefined2)iVar5;
    st::fn_004031E3(param_1,&local_4a,(int *)&sStack_48,(int *)&local_46);
    if (local_c < 4) {
      iVar4 = st::fn_006AFF50(iVar5);
      iVar3 = st::fn_006AFF5B(local_8);
      iVar4 = iVar4 * 0xc9;
      iVar5 = iVar4 / 3;
      local_4a = local_4a +
                 (((short)(iVar5 / 10000) + (short)(iVar5 >> 0x1f)) -
                 (short)((longlong)iVar5 * 0x68db8bad >> 0x3f));
      iVar5 = iVar3 * 0xc9;
      iVar3 = (int)((ulonglong)((longlong)iVar5 * 0x55555555) >> 0x20) + iVar3 * -0xc9;
      iVar3 = (iVar3 >> 1) - (iVar3 >> 0x1f);
      sStack_48 = sStack_48 +
                  (((short)(iVar3 / 10000) + (short)(iVar3 >> 0x1f)) -
                  (short)((longlong)iVar3 * 0x68db8bad >> 0x3f));
      sStack_44 = (((short)(iVar4 / 10000) + (short)(iVar4 >> 0x1f)) -
                  (short)((longlong)iVar4 * 0x68db8bad >> 0x3f)) + local_4a;
      local_42 = sStack_48 -
                 (((short)(iVar5 / 10000) + (short)(iVar5 >> 0x1f)) -
                 (short)((longlong)iVar5 * 0x68db8bad >> 0x3f));
      local_40 = local_46 + 0x32;
      iVar5 = local_8;
    }
    else {
      local_46 = local_46 + -0x1e;
      local_40 = 0;
      uVar1 = param_1->field_001C * 0x41c64e6d + 0x3039;
      param_1->field_001C = uVar1;
      sStack_44 = (short)((ulonglong)(uVar1 >> 0x10) % 0x193) + -0xc9 + local_4a;
      uVar1 = param_1->field_001C * 0x41c64e6d + 0x3039;
      param_1->field_001C = uVar1;
      local_42 = (short)((ulonglong)(uVar1 >> 0x10) % 0x193) + -0xc9 + sStack_48;
    }
    if ((((-1 < local_4a) && (-1 < sStack_48)) && (-1 < local_46)) &&
       (((short)((local_4a / 0xc9 + (local_4a >> 0xf)) -
                (short)((longlong)(int)local_4a * 0x28c1979 >> 0x3f)) < g_worldGrid.sizeX &&
        ((short)((sStack_48 / 0xc9 + (sStack_48 >> 0xf)) -
                (short)((longlong)(int)sStack_48 * 0x28c1979 >> 0x3f)) < g_worldGrid.sizeY)))) {
      st::fn_00401BC2(g_playSystem_00802A38,0x28,0,0,local_64,0);
      if (0xc9 < local_46) {
        local_40 = local_46 + -0xc9;
        st::fn_00401BC2(g_playSystem_00802A38,0x28,0,0,local_64,0);
      }
      iVar5 = (iVar5 + 0x5a) % 0x168;
      local_8 = iVar5;
    }
    local_c = local_c + 1;
  } while (local_c < 5);
  iVar5 = param_1->field_0251 + -0xf;
  param_1->field_0251 = iVar5;
  if (iVar5 < 0) {
    param_1->field_0251 = 0x168;
  }
  return;
}

// 00585020 FUN_00585020
#line 4 "decomp/ST.exe/functions/00585020/decomp.c"
void __fastcall st::fn_00585020(AnonShape_00585020_1C9B1418 *param_1)

{
  int iVar1;
  undefined1 *this;
  STWorldObject *pSVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  int local_14;
  short local_10;
  short local_8;

  sVar6 = param_1->field_0041;
  if (sVar6 < 0) {
    sVar6 = ((sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar6 = (sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f);
  }
  param_1->field_0047 = sVar6;
  param_1->field_005B = sVar6;
  sVar6 = param_1->field_0043;
  if (sVar6 < 0) {
    sVar6 = ((sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar6 = (sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f);
  }
  param_1->field_0049 = sVar6;
  param_1->field_005D = sVar6;
  sVar6 = param_1->field_0045;
  if (sVar6 < 0) {
    sVar6 = ((sVar6 / 200 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x51eb851f >> 0x3f)) +
            -1;
  }
  else {
    sVar6 = (sVar6 / 200 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x51eb851f >> 0x3f);
  }
  param_1->field_004B = sVar6;
  param_1->field_005F = sVar6;
  iVar3 = st::fn_00401A3C((AnonShape_0041C710_C4D46939 *)param_1);
  this = &param_1->field_0x1d5;
  if (iVar3 == 0) {
    iVar3 = 0;
    uVar4 = st::fn_004052CC((STT3DSprC *)this);
    st::fn_006EABF0(param_1->field_0211,uVar4,iVar3);
    iVar3 = st::fn_004050D8((AnonShape_0041CAF0_1630B9E0 *)param_1);
    if (iVar3 == 1) {
      iVar3 = 1;
    }
    else {
      iVar3 = 0;
    }
  }
  else {
    iVar3 = 1;
    uVar4 = st::fn_004052CC((STT3DSprC *)this);
    st::fn_006EABF0(param_1->field_0211,uVar4,iVar3);
    iVar3 = 1;
  }
  iVar5 = st::fn_004052CC((STT3DSprC *)this);
  st::fn_006E6870(param_1->field_0211,iVar5,iVar3);
  sVar6 = param_1->field_0041;
  iVar3 = (int)sVar6;
  if (sVar6 < 0) {
    local_10 = ((sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)iVar3 * 0x28c1979 >> 0x3f)) + -1
    ;
  }
  else {
    local_10 = (sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)iVar3 * 0x28c1979 >> 0x3f);
  }
  sVar6 = param_1->field_0043;
  iVar5 = (int)sVar6;
  if (sVar6 < 0) {
    local_8 = ((sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_8 = (sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f);
  }
  sVar6 = param_1->field_0045;
  if (sVar6 < 0) {
    local_14 = (short)((sVar6 / 200 + (sVar6 >> 0xf)) -
                      (short)((longlong)(int)sVar6 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    local_14 = (int)(short)((sVar6 / 200 + (sVar6 >> 0xf)) -
                           (short)((longlong)(int)sVar6 * 0x51eb851f >> 0x3f));
  }
  iVar7 = param_1->field_0231;
  sVar6 = (short)local_14;
  if (iVar7 == 0) {
    iVar5 = g_playSystem_00802A38->field_00E4 - param_1->field_023D;
    iVar3 = (param_1->field_024D * iVar5 * iVar5) / 22000;
    if ((local_14 < 5) && (iVar7 = st::fn_00404D3B(local_10,local_8,sVar6), iVar7 == 0)) {
      if ((((-1 < local_10) &&
           (((local_10 < g_worldGrid.sizeX && (-1 < local_8)) && (local_8 < g_worldGrid.sizeY)))) &&
          (((-1 < sVar6 && (sVar6 < g_worldGrid.sizeZ)) &&
           (pSVar2 = STGridAt3D(g_worldGrid, local_10, local_8, sVar6).objects[0],
           pSVar2 != nullptr)))) && (pSVar2->value_20 != 0xaa)) {
        st::fn_004054DE(param_1,&pSVar2->vtable);
        st::fn_00401730(param_1,(int)(short)param_1->field_0041,(int)(short)param_1->field_0043,
                           0x464);
      }
      param_1->field_0231 = 2;
      st::fn_00402B03((AnonShape_00584B10_33997544 *)param_1);
      return;
    }
    iVar7 = DAT_007cb8e4 >> 1;
    if (iVar7 < iVar5) {
      iVar1 = PTR_00806724->entryCount + -1;
      iVar7 = ((iVar5 - iVar7) * iVar1) / iVar7;
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      if (PTR_00806724->entryCount <= iVar7) {
        st::fn_0040116D((STT3DSprC *)this,0,0);
        iVar7 = iVar1;
      }
      param_1->field_0241 = iVar7;
      st::fn_0040116D
                ((STT3DSprC *)this,PTR_00806724->entries[iVar7],(int)PTR_00806724->field_002C);
    }
    sVar6 = (short)iVar3;
    if (iVar3 + 0x28 < 0) {
      st::fn_00403107(param_1,*(ushort *)&param_1->field_0x278,*(short *)&param_1->field_0x27c,
                   sVar6 + param_1->field_0045 + 0x28);
      param_1->field_0251 = 0x168;
      param_1->field_0235 = (int)param_1->field_0045;
      *(int *)&param_1->field_0x274 = *(int *)&param_1->field_0x274 + 1;
      param_1->field_023D = g_playSystem_00802A38->field_00E4;
      iVar3 = (int)((ulonglong)((longlong)param_1->field_024D * -0x2aaaaaab) >> 0x20);
      param_1->field_024D = iVar3 - (iVar3 >> 0x1f);
      if (g_visibleClass_00802A88 != nullptr) {
        sVar6 = param_1->field_0043;
        if (sVar6 < 0) {
          iVar3 = (short)((sVar6 / 0xc9 + (sVar6 >> 0xf)) -
                         (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar3 = (int)(short)((sVar6 / 0xc9 + (sVar6 >> 0xf)) -
                              (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f));
        }
        sVar6 = param_1->field_0041;
        if (sVar6 < 0) {
          iVar5 = (short)((sVar6 / 0xc9 + (sVar6 >> 0xf)) -
                         (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar5 = (int)(short)((sVar6 / 0xc9 + (sVar6 >> 0xf)) -
                              (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f));
        }
        st::fn_00401FD2
                  (g_visibleClass_00802A88,iVar5,iVar3,nullptr,
                   *(uint *)&param_1->field_0x24,(undefined *)0x5,500);
      }
      param_1->field_0231 = 1;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)param_1 + 0xd8))();
      return;
    }
    uVar4 = (uint)(ushort)(param_1->field_0249 + sVar6 + param_1->field_0045);
  }
  else {
    if (iVar7 != 1) {
      if (iVar7 != 2) {
        return;
      }
      uVar4 = st::fn_004042AF(this,'\b');
      if ((param_1->field_0255 != '\0') && (uVar4 == param_1->field_0256)) {
        st::fn_00405240((STT3DSprC *)this,9,g_playSystem_00802A38->field_00E4);
        st::fn_00404854(this,9);
      }
      iVar3 = st::fn_004022AC((STT3DSprC *)this,'\b');
      if (uVar4 == iVar3 - 1U) {
        st::fn_00404264((STT3DSprC *)this,8);
      }
      iVar3 = st::fn_004022AC((STT3DSprC *)this,'\n');
      if (uVar4 == iVar3 - 1U) {
        st::fn_00404264((STT3DSprC *)this,10);
      }
      if (param_1->field_0255 != '\0') {
        iVar3 = st::fn_004022AC((STT3DSprC *)this,'\t');
        iVar5 = st::fn_004042AF(this,'\t');
        if (iVar5 == iVar3 + -1) {
          st::fn_00404264((STT3DSprC *)this,9);
          param_1->field_0255 = 0;
        }
      }
      iVar3 = st::fn_004022AC((STT3DSprC *)this,'\b');
      if ((uVar4 == iVar3 - 1U) && (param_1->field_0255 == '\0')) {
        st::fn_00401DE3(param_1);
        return;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)param_1 + 0xd8))();
      return;
    }
    iVar7 = g_playSystem_00802A38->field_00E4 - param_1->field_023D;
    if (iVar7 == 1) {
      st::fn_00402117(param_1,iVar3,iVar5,param_1->field_0286);
    }
    iVar3 = PTR_00806724->entryCount + -1;
    iVar3 = iVar3 - (iVar3 * iVar7) / (DAT_007cb8e4 >> 1);
    if (iVar3 < 1) {
      param_1->field_0241 = 0;
      st::fn_0040116D((STT3DSprC *)this,0,0);
      st::fn_00403FDA(this,'\x0e');
    }
    else {
      param_1->field_0241 = iVar3;
      st::fn_0040116D
                ((STT3DSprC *)this,*(uint *)((int)PTR_00806724 + iVar3 * 4 + 0x30),
                 (int)PTR_00806724->field_002C);
    }
    uVar4 = (int)param_1->field_0045 - 5;
    if ((param_1->field_0045 < 0x44c) && (0x1b < (int)(param_1->field_0235 - uVar4))) {
      st::fn_00404930((AnonShape_00584D10_AA6E9D03 *)param_1);
      param_1->field_0235 = uVar4;
    }
    if ((local_14 < 5) && (iVar3 = st::fn_00404D3B(local_10,local_8,sVar6), iVar3 == 0)) {
      if (((-1 < local_10) &&
          ((((local_10 < g_worldGrid.sizeX && (-1 < local_8)) && (local_8 < g_worldGrid.sizeY)) &&
           ((-1 < sVar6 && (sVar6 < g_worldGrid.sizeZ)))))) &&
         ((pSVar2 = STGridAt3D(g_worldGrid, local_10, local_8, sVar6).objects[0],
          pSVar2 != nullptr && (pSVar2->value_20 != 0xaa)))) {
        st::fn_004054DE(param_1,&pSVar2->vtable);
      }
      param_1->field_0231 = 2;
      st::fn_00402B03((AnonShape_00584B10_33997544 *)param_1);
    }
  }
  st::fn_00403107(param_1,param_1->field_0041,param_1->field_0043,(ushort)uVar4);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)param_1 + 0xd8))();
  return;
}

// 00585890 FUN_00585890
#line 4 "decomp/ST.exe/functions/00585890/decomp.c"
void __thiscall st::fn_00585890(void *this,int param_1,int param_2,uint param_3)

{
  short sVar1;
  int soundId;
  SoundPosition local_10;

  if (DAT_0080874d == param_3) {
    if (DAT_0080874e == '\x01') {
      soundId = 0xa7;
    }
    else if (DAT_0080874e == '\x02') {
      soundId = 0xa8;
    }
    else if (DAT_0080874e == '\x03') {
      soundId = 0xa9;
    }
    else {
      soundId = 0;
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

// 005860D0 FUN_005860d0
#line 4 "decomp/ST.exe/functions/005860D0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 005860D0 -> 00568DD0 @ 00586156

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_005860D0(void *this,int param_1,int param_2,int soundId)

{
  short sVar1;
  SoundPosition local_10;

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
  st::fn_00404BD8((SoundClassTy *)&g_sound,SOUND_MODE_2,nullptr,soundId,&local_10,0);
  return;
}

// 005861A0 FUN_005861a0
#line 4 "decomp/ST.exe/functions/005861A0/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA92C>004038CD

   [STObjectFactoryApplier] Central object factory for 0x0130 (ST_OBJECT_TYPE_0130).
   Evidence: registry[65] at 007CA928 stores type 0x0130 and executable pointer 004038CD; allocation
   size 650 has no unique current class-layout match */

void * __cdecl st::fn_005861A0(void)

{
  STLBombC *pSVar1;

  pSVar1 = (STLBombC *)st::fn_006B04D0(0x28a);
  if (pSVar1 != nullptr) {
    pSVar1 = st::fn_00402207(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

// 005861D0 FUN_005861d0
#line 4 "decomp/ST.exe/functions/005861D0/decomp.c"
undefined4 st::fn_005861D0(void)

{
  return 0xaa;
}

// 00586240 FUN_00586240
#line 4 "decomp/ST.exe/functions/00586240/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004C4550 -> 00586240 @ 004C4F32; MOVSX at 004C4F2C establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004C4550 -> 00586240 @ 004C4F32; MOVSX at 004C4F26 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004C4550 -> 00586240 @ 004C4F32; MOVSX at 004C4F22 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 004C4550 -> 00586240 @ 004C4F32; zero-filled partial register load at 004C4F15 */

undefined4 __cdecl
st::fn_00586240(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,ushort param_7)

{
  undefined4 local_30 [5];
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  ushort local_8;

  memset(local_30, 0, 0x2a); /* compiler bulk-zero initialization */
  local_1c = param_1;
  local_30[1] = param_5;
  local_14 = param_3;
  local_c = param_6;
  local_18 = param_2;
  local_10 = param_4;
  local_30[0] = 0xb4;
  local_30[2] = 0;
  local_30[3] = 1;
  local_8 = param_7;
  g_playSystem_00802A38->vfunc_08(0x131,0,(short)&param_5,(short)local_30,0);
  return param_5;
}

// 005862E0 FUN_005862e0
#line 4 "decomp/ST.exe/functions/005862E0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 005862E0 returns return of sub_006E60A0 @ 00586306 */

int __fastcall st::fn_005862E0(void *param_1)

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

// 00586320 FUN_00586320
#line 4 "decomp/ST.exe/functions/00586320/decomp.c"
int * __fastcall st::fn_00586320(AnonShape_00586320_9792A2C7 *param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  STWorldObject *pSVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  short sVar12;
  int iVar13;
  bool bVar14;
  int local_44;
  int local_40;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_1c;
  int local_18;
  int local_14;
  int local_c;

  sVar12 = param_1->field_0041;
  if (sVar12 < 0) {
    iVar13 = (short)((sVar12 / 0xc9 + (sVar12 >> 0xf)) -
                    (short)((longlong)(int)sVar12 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar13 = (int)(short)((sVar12 / 0xc9 + (sVar12 >> 0xf)) -
                         (short)((longlong)(int)sVar12 * 0x28c1979 >> 0x3f));
  }
  sVar12 = param_1->field_0043;
  if (sVar12 < 0) {
    local_14 = (short)((sVar12 / 0xc9 + (sVar12 >> 0xf)) -
                      (short)((longlong)(int)sVar12 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_14 = (int)(short)((sVar12 / 0xc9 + (sVar12 >> 0xf)) -
                           (short)((longlong)(int)sVar12 * 0x28c1979 >> 0x3f));
  }
  param_1->field_0273 = 0;
  param_1->field_026F = 0xff;
  param_1->field_0231 = 1;
  iVar9 = iVar13 + 5;
  local_40 = iVar13 + -5;
  if (g_worldGrid.sizeX <= iVar9) {
    iVar9 = g_worldGrid.sizeX + -1;
  }
  if (local_40 < 0) {
    local_40 = 0;
  }
  iVar10 = local_14 + 5;
  local_44 = local_14 + -5;
  if (g_worldGrid.sizeY <= iVar10) {
    iVar10 = g_worldGrid.sizeY + -1;
  }
  if (local_44 < 0) {
    local_44 = 0;
  }
  if ((((iVar13 <= iVar9) && (local_14 <= iVar10)) && (local_40 <= iVar13)) &&
     (local_44 <= local_14)) {
    local_1c = 0;
    do {
      sVar12 = (short)iVar13;
      if ((((((-1 < sVar12) && (sVar12 < g_worldGrid.sizeX)) &&
            ((-1 < (short)local_14 &&
             (((short)local_14 < g_worldGrid.sizeY && (sVar11 = (short)local_1c, -1 < sVar11))))))
           && (sVar11 < g_worldGrid.sizeZ)) &&
          (((pSVar4 = STGridAt3D(g_worldGrid, sVar12, local_14, sVar11).objects[0],
            pSVar4 != nullptr &&
            (((pSVar4->value_20 == 1000 || (pSVar4->value_20 == 0x14)) &&
             (iVar7 = (*pSVar4->vtable[5].slots_00_28[0])(), iVar7 != 0)))) &&
           (pSVar4[1].vtable < (STWorldObjectVTable *)0x8)))) &&
         (((g_playSystem_00802A38 == nullptr ||
           (g_bulkInitializedRecords_008087C7[(int)pSVar4[1].vtable].field_0022 < 8)) &&
          (iVar7 = (*pSVar4->vtable[5].slots_00_28[2])(), iVar7 != 0)))) {
        bVar1 = *(byte *)&pSVar4[1].vtable;
        bVar2 = param_1->field_0024;
        iVar7 = param_1->field_0010;
        if (*(char *)(iVar7 + 0x146f) == '\0') {
          if (bVar1 == bVar2) {
            iVar7 = 0;
          }
          else {
            uVar5 = (uint)bVar1;
            uVar6 = (uint)bVar2;
            cVar3 = *(char *)(uVar6 + uVar5 * 8 + 0x142f + iVar7);
            if ((cVar3 == '\0') && (*(char *)(uVar5 + uVar6 * 8 + 0x142f + iVar7) == '\0')) {
              iVar7 = -2;
            }
            else if ((cVar3 == '\x01') && (*(char *)(uVar5 + uVar6 * 8 + 0x142f + iVar7) == '\0')) {
              iVar7 = -1;
            }
            else if ((cVar3 == '\0') && (*(char *)(uVar5 + uVar6 * 8 + 0x142f + iVar7) == '\x01')) {
              iVar7 = 1;
            }
            else if ((cVar3 == '\x01') && (*(char *)(uVar5 + uVar6 * 8 + 0x142f + iVar7) == '\x01'))
            {
              iVar7 = 2;
            }
            else {
              iVar7 = 0;
            }
          }
          bVar14 = iVar7 < 0;
        }
        else {
          bVar14 = *(char *)((uint)bVar2 * 0x51 + 0x11ca + iVar7) !=
                   *(char *)((uint)bVar1 * 0x51 + 0x11ca + iVar7);
        }
        if (bVar14) {
          param_1->field_0231 = 0;
          param_1->field_0257 = 0;
          param_1->field_0273 = *(undefined2 *)&pSVar4[1].field_0xe;
          param_1->field_026F = pSVar4[1].vtable;
          return (int *)pSVar4;
        }
      }
      local_1c = local_1c + 1;
    } while (local_1c < 5);
  }
  local_1c = 0;
  do {
    local_c = local_14 + 1;
    local_18 = iVar13 + 1;
    local_34 = 1;
    local_24 = 0;
    local_28 = 3;
    local_2c = DAT_007cb95c;
    local_30 = DAT_007cb968;
LAB_00586642:
    local_18 = local_18 + local_2c;
    local_c = local_c + local_30;
    iVar7 = local_18 - iVar13;
    if (iVar7 < 0) {
      iVar7 = iVar13 - local_18;
    }
    if (iVar7 <= local_34) {
      iVar7 = local_c - local_14;
      if (iVar7 < 0) {
        iVar7 = local_14 - local_c;
      }
      if (local_34 < iVar7) goto LAB_0058667b;
      goto LAB_00586713;
    }
LAB_0058667b:
    bVar14 = false;
    local_24 = local_24 + 1;
    if (local_24 < 4) {
      bVar14 = true;
      local_18 = local_18 - local_2c;
      local_c = local_c - local_30;
LAB_005866e6:
      local_28 = local_28 + 1;
      if (3 < local_28) {
        local_28 = 0;
      }
      local_2c = (&DAT_007cb95c)[local_24];
      local_30 = (&DAT_007cb95c)[local_28];
      if (!bVar14) {
LAB_00586713:
        if ((((((local_18 <= iVar9) && (local_c <= iVar10)) && (local_40 <= local_18)) &&
             (((local_44 <= local_c && (sVar12 = (short)local_18, -1 < sVar12)) &&
              ((sVar12 < g_worldGrid.sizeX &&
               ((sVar11 = (short)local_c, -1 < sVar11 && (sVar11 < g_worldGrid.sizeY)))))))) &&
            (((sVar8 = (short)local_1c, -1 < sVar8 &&
              ((sVar8 < g_worldGrid.sizeZ &&
               (pSVar4 = STGridAt3D(g_worldGrid, sVar12, sVar11, sVar8).objects[0],
               pSVar4 != nullptr)))) &&
             (((pSVar4->value_20 == 1000 || (pSVar4->value_20 == 0x14)) &&
              ((iVar7 = (*pSVar4->vtable[5].slots_00_28[0])(), iVar7 != 0 &&
               (pSVar4[1].vtable < (STWorldObjectVTable *)0x8)))))))) &&
           ((g_playSystem_00802A38 == nullptr ||
            (g_bulkInitializedRecords_008087C7[(int)pSVar4[1].vtable].field_0022 < 8)))) {
          bVar1 = *(byte *)&pSVar4[1].vtable;
          bVar2 = param_1->field_0024;
          iVar7 = param_1->field_0010;
          if (*(char *)(iVar7 + 0x146f) == '\0') {
            if (bVar1 == bVar2) {
              iVar7 = 0;
            }
            else {
              uVar5 = (uint)bVar1;
              uVar6 = (uint)bVar2;
              cVar3 = *(char *)(uVar6 + uVar5 * 8 + 0x142f + iVar7);
              if ((cVar3 == '\0') && (*(char *)(uVar5 + uVar6 * 8 + 0x142f + iVar7) == '\0')) {
                iVar7 = -2;
              }
              else if ((cVar3 == '\x01') && (*(char *)(uVar5 + uVar6 * 8 + 0x142f + iVar7) == '\0'))
              {
                iVar7 = -1;
              }
              else if ((cVar3 == '\0') && (*(char *)(uVar5 + uVar6 * 8 + 0x142f + iVar7) == '\x01'))
              {
                iVar7 = 1;
              }
              else if ((cVar3 == '\x01') &&
                      (*(char *)(uVar5 + uVar6 * 8 + 0x142f + iVar7) == '\x01')) {
                iVar7 = 2;
              }
              else {
                iVar7 = 0;
              }
            }
            bVar14 = iVar7 < 0;
          }
          else {
            bVar14 = *(char *)((uint)bVar2 * 0x51 + 0x11ca + iVar7) !=
                     *(char *)((uint)bVar1 * 0x51 + 0x11ca + iVar7);
          }
          if ((bVar14) && (iVar7 = (*pSVar4->vtable[5].slots_00_28[2])(), iVar7 != 0)) {
            param_1->field_0231 = 0;
            param_1->field_0257 = 0;
            param_1->field_0273 = *(undefined2 *)&pSVar4[1].field_0xe;
            param_1->field_026F = pSVar4[1].vtable;
            return (int *)pSVar4;
          }
        }
      }
      goto LAB_00586642;
    }
    local_34 = local_34 + 1;
    local_24 = 0;
    if (local_34 < 6) goto LAB_005866e6;
    local_1c = local_1c + 1;
    if (4 < local_1c) {
      return nullptr;
    }
  } while( true );
}

// 00586AF0 FUN_00586af0
#line 4 "decomp/ST.exe/functions/00586AF0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STTypeFamilyApplier] RETURN_TO_LOCAL_FAMILY.
   Evidence: direct call return copied through registers into this script-owned anonymous stack
   local */

void __fastcall st::fn_00586AF0(int *param_1)

{
  STT3DSprC *this;
  byte bVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  STGameObjC *pSVar10;
  STGameObjC *this_00;
  undefined2 uVar13;
  int iVar11;
  int iVar12;
  short sVar14;
  short sVar15;
  short sVar16;
  STWorldObject *pSVar17;
  AnonShape_0041AF40_F59F8577 *pAVar19;
  bool bVar20;
  AnonShape_0041AF40_F59F8577 local_6c;
  int local_4c;
  int local_48;
  STGameObjC *local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  ushort local_30 [2];
  short local_2c [2];
  ushort local_28 [2];
  int local_24;
  STWorldObject *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  char local_5;

  local_20 = nullptr;
  sVar14 = STField<short>(param_1,0x41);
  if (sVar14 < 0) {
    sVar14 = ((sVar14 / 0xc9 + (sVar14 >> 0xf)) - (short)((longlong)(int)sVar14 * 0x28c1979 >> 0x3f)
             ) + -1;
  }
  else {
    sVar14 = (sVar14 / 0xc9 + (sVar14 >> 0xf)) - (short)((longlong)(int)sVar14 * 0x28c1979 >> 0x3f);
  }
  STField<short>(param_1,0x47) = sVar14;
  STField<short>(param_1,0x5b) = sVar14;
  sVar14 = STField<short>(param_1,0x43);
  if (sVar14 < 0) {
    sVar14 = ((sVar14 / 0xc9 + (sVar14 >> 0xf)) - (short)((longlong)(int)sVar14 * 0x28c1979 >> 0x3f)
             ) + -1;
  }
  else {
    sVar14 = (sVar14 / 0xc9 + (sVar14 >> 0xf)) - (short)((longlong)(int)sVar14 * 0x28c1979 >> 0x3f);
  }
  STField<short>(param_1,0x49) = sVar14;
  STField<short>(param_1,0x5d) = sVar14;
  sVar14 = STField<short>(param_1,0x45);
  if (sVar14 < 0) {
    sVar14 = ((sVar14 / 200 + (sVar14 >> 0xf)) - (short)((longlong)(int)sVar14 * 0x51eb851f >> 0x3f)
             ) + -1;
  }
  else {
    sVar14 = (sVar14 / 200 + (sVar14 >> 0xf)) - (short)((longlong)(int)sVar14 * 0x51eb851f >> 0x3f);
  }
  STField<short>(param_1,0x4b) = sVar14;
  STField<short>(param_1,0x5f) = sVar14;
  iVar7 = st::fn_00401A3C((AnonShape_0041C710_C4D46939 *)param_1);
  this = (STT3DSprC *)((int)param_1 + 0x1d5);
  if (iVar7 == 0) {
    iVar7 = 0;
    uVar8 = st::fn_004052CC(this);
    st::fn_006EABF0(STField<void *>(param_1,0x211),uVar8,iVar7);
    iVar7 = st::fn_004050D8((AnonShape_0041CAF0_1630B9E0 *)param_1);
    if (iVar7 == 1) {
      iVar7 = 1;
    }
    else {
      iVar7 = 0;
    }
  }
  else {
    iVar7 = 1;
    uVar8 = st::fn_004052CC(this);
    st::fn_006EABF0(STField<void *>(param_1,0x211),uVar8,iVar7);
    iVar7 = 1;
  }
  iVar9 = st::fn_004052CC(this);
  st::fn_006E6870(STField<void *>(param_1,0x211),iVar9,iVar7);
  iVar7 = STField<int>(param_1,0x231);
  if (iVar7 == 0) {
    lVar4 = (longlong)STField<int>(param_1,0x235) * 0xeeff;
    uVar8 = (uint)lVar4;
    STField<uint>(param_1,0x235) =
         (uVar8 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) + (uint)((uVar8 >> 0xf & 1) != 0);
    lVar4 = (longlong)STField<int>(param_1,0x239) * 0xeeff;
    uVar8 = (uint)lVar4;
    local_4c = STField<int>(param_1,0x23d);
    STField<uint>(param_1,0x239) =
         (uVar8 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) + (uint)((uVar8 >> 0xf & 1) != 0);
    uVar8 = (uint)((longlong)local_4c * 0xeeff);
    STField<uint>(param_1,0x23d) =
         (uVar8 >> 0x10 | (int)((ulonglong)((longlong)local_4c * 0xeeff) >> 0x20) << 0x10) +
         (uint)((uVar8 >> 0xf & 1) != 0);
    local_44 = st::fn_004028BA
                         (g_allPlayers_007FA174,STField<char>(param_1,0x26f),
                          STField<ushort>(param_1,0x273),CASE_1);
    if (local_44 == nullptr) {
LAB_00587844:
      local_44 = (STGameObjC *)st::fn_00405150((AnonShape_00586320_9792A2C7 *)param_1);
      STField<uint>(param_1,0x253) = g_playSystem_00802A38->field_00E4;
      if ((local_44 == nullptr) || (STField<int>(param_1,0x231) != 0)) {
        STField<undefined4>(param_1,0x26b) = 0;
        STField<undefined4>(param_1,0x267) = 0;
        STField<undefined4>(param_1,0x263) = 0;
        goto LAB_00588350;
      }
      st::fn_004031E3(local_44,(undefined2 *)((int)param_1 + 0x241),(int *)((int)param_1 + 0x243)
                         ,(int *)((int)param_1 + 0x245));
      iVar7 = st::fn_006ACF0D((int)STField<short>(param_1,0x41),(int)STField<short>(param_1,0x43)
                           ,(int)STField<short>(param_1,0x45),
                           (int)STField<short>(param_1,0x241),
                           (int)STField<short>(param_1,0x243),
                           (int)STField<short>(param_1,0x245));
    }
    else {
      st::fn_004031E3(local_44,(undefined2 *)((int)param_1 + 0x241),(int *)((int)param_1 + 0x243)
                         ,(int *)((int)param_1 + 0x245));
      iVar7 = st::fn_006ACF0D((int)STField<short>(param_1,0x41),(int)STField<short>(param_1,0x43)
                           ,(int)STField<short>(param_1,0x45),
                           (int)STField<short>(param_1,0x241),
                           (int)STField<short>(param_1,0x243),
                           (int)STField<short>(param_1,0x245));
      if (DAT_0081170c < iVar7) goto LAB_00587844;
    }
    iVar9 = DAT_0081170c - iVar7;
    if (iVar9 < 0) {
      iVar9 = -iVar9;
    }
    iVar9 = (((iVar9 * iVar9) / 10) * (iVar9 / 10)) / 50000;
    STField<uint>(param_1,0x263) = STField<uint>(param_1,0x263) & 3;
    uVar8 = STField<uint>(param_1,0x26b) & 3;
    STField<uint>(param_1,0x267) = STField<uint>(param_1,0x267) & 3;
    STField<uint>(param_1,0x26b) = uVar8;
    if (iVar7 != 0) {
      STField<int>(param_1,0x263) =
           (((((int)STField<short>(param_1,0x241) - (int)STField<short>(param_1,0x41)) *
             DAT_0081170c) / iVar7) * iVar9 * 4) / 0x19640 + STField<int>(param_1,0x263);
      STField<int>(param_1,0x267) =
           (((((int)STField<short>(param_1,0x243) - (int)STField<short>(param_1,0x43)) *
             DAT_0081170c) / iVar7) * iVar9 * 4) / 0x19640 + STField<int>(param_1,0x267);
      uVar8 = ((((int)STField<short>(param_1,0x245) - (int)STField<short>(param_1,0x45)) *
               DAT_0081170c) / iVar7) * iVar9 * 4;
      STField<int>(param_1,0x26b) = (int)uVar8 / 0x19640 + STField<int>(param_1,0x26b);
    }
    local_48 = STReplaceLowWord((uint32_t)(uVar8), (uint16_t)(STField<short>(param_1,0x41)));
    local_4c = STReplaceLowWord((uint32_t)(iVar9), (uint16_t)(STField<short>(param_1,0x43)));
    local_10 = (STField<int>(param_1,0x263) >> 2) +
               ((int)(STField<int>(param_1,0x235) +
                     (STField<int>(param_1,0x235) >> 0x1f & 0xffffU)) >> 0x10) +
               (int)STField<short>(param_1,0x41);
    local_40 = STReplaceLowWord((uint32_t)(local_40), (uint16_t)(STField<short>(param_1,0x45)));
    local_14 = (STField<int>(param_1,0x267) >> 2) +
               ((int)(STField<int>(param_1,0x239) +
                     (STField<int>(param_1,0x239) >> 0x1f & 0xffffU)) >> 0x10) +
               (int)STField<short>(param_1,0x43);
    iVar7 = (STField<int>(param_1,0x26b) >> 2) +
            ((int)(STField<int>(param_1,0x23d) +
                  (STField<int>(param_1,0x23d) >> 0x1f & 0xffffU)) >> 0x10) +
            ((int)(STField<int>(param_1,0x25b) + (STField<int>(param_1,0x25b) >> 0x1f & 3U))
            >> 2) + (int)STField<short>(param_1,0x45);
    if (local_10 < 0) {
      local_10 = 0;
    }
    if (local_14 < 0) {
      local_14 = 0;
    }
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    if (g_worldGrid.sizeX * 0xc9 <= local_10) {
      local_10 = g_worldGrid.sizeX * 0xc9 + -1;
    }
    iVar9 = local_10;
    if (g_worldGrid.sizeY * 0xc9 <= local_14) {
      local_14 = g_worldGrid.sizeY * 0xc9 + -1;
    }
    if (g_worldGrid.sizeZ * 200 <= iVar7) {
      iVar7 = g_worldGrid.sizeZ * 200 + -1;
    }
    sVar14 = (short)(local_10 >> 0x1f);
    if (local_10 < 0) {
      local_34 = (short)(((short)(local_10 / 0xc9) + sVar14) -
                        (short)((longlong)local_10 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      local_34 = (int)(short)(((short)(local_10 / 0xc9) + sVar14) -
                             (short)((longlong)local_10 * 0x28c1979 >> 0x3f));
    }
    sVar14 = (short)(local_14 >> 0x1f);
    if (local_14 < 0) {
      local_38 = (short)(((short)(local_14 / 0xc9) + sVar14) -
                        (short)((longlong)local_14 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      local_38 = (int)(short)(((short)(local_14 / 0xc9) + sVar14) -
                             (short)((longlong)local_14 * 0x28c1979 >> 0x3f));
    }
    sVar14 = (short)(iVar7 >> 0x1f);
    if (iVar7 < 0) {
      local_3c = (short)(((short)(iVar7 / 200) + sVar14) -
                        (short)((longlong)iVar7 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      local_3c = (int)(short)(((short)(iVar7 / 200) + sVar14) -
                             (short)((longlong)iVar7 * 0x51eb851f >> 0x3f));
    }
    param_1[0x9e] = -1;
    local_1c = local_14;
    local_18 = iVar7;
    local_c = local_10;
    if (((((g_playSystem_00802A38->field_00E4 & 1) != 0) && (local_44->field_0047 == local_34)) &&
        (local_44->field_0049 == local_38)) && (local_44->field_004B == local_3c)) {
      uVar13 = (undefined2)((uint)local_3c >> 0x10);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar12 = (*local_44->vtable->vfunc_DC)
                         (local_48,local_4c,local_40,
                          CONCAT22(uVar13,STField<undefined2>(param_1,0x24d)),
                          CONCAT22(uVar13,STField<undefined2>(param_1,0x24f)),
                          CONCAT22(uVar13,STField<undefined2>(param_1,0x251)));
      param_1[0x9e] = iVar12;
    }
    if (param_1[0x9e] < 0) {
      sVar14 = STField<short>(param_1,0x41);
      if (sVar14 < 0) {
        iVar12 = (short)((sVar14 / 0xc9 + (sVar14 >> 0xf)) -
                        (short)((longlong)(int)sVar14 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar12 = (int)(short)((sVar14 / 0xc9 + (sVar14 >> 0xf)) -
                             (short)((longlong)(int)sVar14 * 0x28c1979 >> 0x3f));
      }
      iVar11 = param_1[0xa4];
      sVar14 = (short)(iVar11 >> 0x1f);
      if (iVar11 < 0) {
        iVar11 = (short)(((short)(iVar11 / 0xc9) + sVar14) -
                        (short)((longlong)iVar11 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar11 = (int)(short)(((short)(iVar11 / 0xc9) + sVar14) -
                             (short)((longlong)iVar11 * 0x28c1979 >> 0x3f));
      }
      if (iVar12 == iVar11) {
        sVar14 = STField<short>(param_1,0x43);
        if (sVar14 < 0) {
          iVar12 = (short)((sVar14 / 0xc9 + (sVar14 >> 0xf)) -
                          (short)((longlong)(int)sVar14 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar12 = (int)(short)((sVar14 / 0xc9 + (sVar14 >> 0xf)) -
                               (short)((longlong)(int)sVar14 * 0x28c1979 >> 0x3f));
        }
        iVar11 = param_1[0xa5];
        sVar14 = (short)(iVar11 >> 0x1f);
        if (iVar11 < 0) {
          iVar11 = (short)(((short)(iVar11 / 0xc9) + sVar14) -
                          (short)((longlong)iVar11 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar11 = (int)(short)(((short)(iVar11 / 0xc9) + sVar14) -
                               (short)((longlong)iVar11 * 0x28c1979 >> 0x3f));
        }
        if (iVar12 != iVar11) goto LAB_00587dde;
        sVar14 = STField<short>(param_1,0x45);
        if (sVar14 < 0) {
          iVar12 = (short)((sVar14 / 200 + (sVar14 >> 0xf)) -
                          (short)((longlong)(int)sVar14 * 0x51eb851f >> 0x3f)) + -1;
        }
        else {
          iVar12 = (int)(short)((sVar14 / 200 + (sVar14 >> 0xf)) -
                               (short)((longlong)(int)sVar14 * 0x51eb851f >> 0x3f));
        }
        iVar11 = param_1[0xa6];
        sVar14 = (short)(iVar11 >> 0x1f);
        if (iVar11 < 0) {
          iVar11 = (short)(((short)(iVar11 / 200) + sVar14) -
                          (short)((longlong)iVar11 * 0x51eb851f >> 0x3f)) + -1;
        }
        else {
          iVar11 = (int)(short)(((short)(iVar11 / 200) + sVar14) -
                               (short)((longlong)iVar11 * 0x51eb851f >> 0x3f));
        }
        if (iVar12 != iVar11) goto LAB_00587dde;
LAB_00587fb9:
        iVar7 = 0;
        pSVar17 = local_20;
      }
      else {
LAB_00587dde:
        sVar14 = (short)local_34;
        if ((((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) ||
            ((sVar15 = (short)local_38, sVar15 < 0 ||
             ((g_worldGrid.sizeY <= sVar15 || (sVar16 = (short)local_3c, sVar16 < 0)))))) ||
           ((g_worldGrid.sizeZ <= sVar16 ||
            (pSVar17 = STGridAt3D(g_worldGrid, sVar14, sVar15, sVar16).objects[0],
            local_20 = pSVar17, pSVar17 == nullptr)))) {
          uVar8 = st::fn_00404A3E(iVar9,local_14,iVar7);
          local_20 = (STWorldObject *)(uint)(-1 < (int)uVar8);
          goto LAB_00587fb9;
        }
        if ((pSVar17->value_20 != 0xb4) &&
           (iVar7 = (*pSVar17->vtable[5].slots_00_28[2])(), iVar7 != 0)) {
          if (((pSVar17->value_20 == 1000) || (pSVar17->value_20 == 0x14)) &&
             ((pSVar17[1].vtable < (STWorldObjectVTable *)0x8 &&
              ((g_playSystem_00802A38 == nullptr ||
               (g_bulkInitializedRecords_008087C7[(int)pSVar17[1].vtable].field_0022 < 8)))))) {
            iVar7 = param_1[4];
            bVar1 = *(byte *)&pSVar17[1].vtable;
            bVar2 = *(byte *)(param_1 + 9);
            local_4c = STReplaceLowByte((uint32_t)(local_4c), (uint8_t)(bVar1));
            local_48 = STReplaceLowByte((uint32_t)(local_48), (uint8_t)(bVar2));
            if (*(char *)(iVar7 + 0x146f) == '\0') {
              if (bVar1 == bVar2) {
LAB_00587f89:
                iVar7 = 0;
              }
              else {
                uVar8 = (uint)bVar1;
                uVar6 = (uint)bVar2;
                cVar3 = *(char *)(iVar7 + uVar8 * 8 + 0x142f + uVar6);
                if ((cVar3 == '\0') && (*(char *)(iVar7 + uVar6 * 8 + 0x142f + uVar8) == '\0')) {
                  iVar7 = -2;
                }
                else if ((cVar3 == '\x01') &&
                        (*(char *)(iVar7 + uVar6 * 8 + 0x142f + uVar8) == '\0')) {
                  iVar7 = -1;
                }
                else if ((cVar3 == '\0') &&
                        (*(char *)(iVar7 + uVar6 * 8 + 0x142f + uVar8) == '\x01')) {
                  iVar7 = 1;
                }
                else {
                  if ((cVar3 != '\x01') || (*(char *)(iVar7 + uVar6 * 8 + 0x142f + uVar8) != '\x01')
                     ) goto LAB_00587f89;
                  iVar7 = 2;
                }
              }
              bVar20 = iVar7 < 0;
            }
            else {
              bVar20 = *(char *)((uint)bVar2 * 0x51 + 0x11ca + iVar7) !=
                       *(char *)((uint)bVar1 * 0x51 + 0x11ca + iVar7);
            }
            if (bVar20) goto LAB_00587f98;
          }
          goto LAB_00587fb9;
        }
LAB_00587f98:
        iVar7 = 0;
        pSVar17 = nullptr;
      }
      do {
        if (pSVar17 == nullptr) {
          if (iVar7 < 7) {
            iVar7 = local_18;
            if (local_18 < 0) {
              iVar7 = 0;
              STField<int>(param_1,0x25f) = -STField<int>(param_1,0x25f);
            }
            st::fn_00403107(param_1,(ushort)local_c,(short)local_1c,(ushort)iVar7);
          }
          break;
        }
        switch(iVar7) {
        case 0:
        case 2:
          local_c = (int)STField<short>(param_1,0x41);
          break;
        case 1:
          local_1c = (int)STField<short>(param_1,0x43);
          local_c = local_10;
          break;
        case 3:
          local_c = local_10;
          goto LAB_00588002;
        case 4:
          local_c = (int)STField<short>(param_1,0x41);
LAB_00588002:
          local_1c = local_14;
          local_18 = ((int)(STField<int>(param_1,0x25b) +
                           (STField<int>(param_1,0x25b) >> 0x1f & 3U)) >> 2) +
                     (int)STField<short>(param_1,0x45);
          break;
        case 5:
          local_1c = (int)STField<short>(param_1,0x43);
          local_c = local_10;
          local_18 = ((int)(STField<int>(param_1,0x25b) +
                           (STField<int>(param_1,0x25b) >> 0x1f & 3U)) >> 2) +
                     (int)STField<short>(param_1,0x45);
          break;
        case 6:
          local_10 = (int)STField<short>(param_1,0x41);
          local_14 = (int)STField<short>(param_1,0x43);
        }
        local_38 = iVar7 + 1;
        sVar14 = (short)(local_c >> 0x1f);
        if (local_c < 0) {
          local_34 = (short)(((short)(local_c / 0xc9) + sVar14) -
                            (short)((longlong)local_c * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          local_34 = (int)(short)(((short)(local_c / 0xc9) + sVar14) -
                                 (short)((longlong)local_c * 0x28c1979 >> 0x3f));
        }
        sVar14 = (short)(local_1c >> 0x1f);
        if (local_1c < 0) {
          sVar14 = (((short)(local_1c / 0xc9) + sVar14) -
                   (short)((longlong)local_1c * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          sVar14 = ((short)(local_1c / 0xc9) + sVar14) -
                   (short)((longlong)local_1c * 0x28c1979 >> 0x3f);
        }
        sVar15 = (short)(local_18 >> 0x1f);
        if (local_18 < 0) {
          sVar15 = (((short)(local_18 / 200) + sVar15) -
                   (short)((longlong)local_18 * 0x51eb851f >> 0x3f)) + -1;
        }
        else {
          sVar15 = ((short)(local_18 / 200) + sVar15) -
                   (short)((longlong)local_18 * 0x51eb851f >> 0x3f);
        }
        sVar16 = (short)local_34;
        if ((((sVar16 < 0) || (g_worldGrid.sizeX <= sVar16)) || (sVar14 < 0)) ||
           (((g_worldGrid.sizeY <= sVar14 || (sVar15 < 0)) ||
            ((g_worldGrid.sizeZ <= sVar15 ||
             (pSVar17 = STGridAt3D(g_worldGrid, sVar16, sVar14, sVar15).objects[0],
             pSVar17 == nullptr)))))) {
          uVar8 = st::fn_00404A3E(local_c,local_1c,local_18);
          pSVar17 = (STWorldObject *)(uint)(-1 < (int)uVar8);
        }
        else if ((pSVar17->value_20 == 0xb4) ||
                (iVar7 = (*pSVar17->vtable[5].slots_00_28[2])(), iVar7 == 0)) {
LAB_005882af:
          pSVar17 = nullptr;
        }
        else if ((((pSVar17->value_20 == 1000) || (pSVar17->value_20 == 0x14)) &&
                 (pSVar17[1].vtable < (STWorldObjectVTable *)0x8)) &&
                ((g_playSystem_00802A38 == nullptr ||
                 (g_bulkInitializedRecords_008087C7[(int)pSVar17[1].vtable].field_0022 < 8)))) {
          iVar7 = param_1[4];
          bVar1 = *(byte *)&pSVar17[1].vtable;
          bVar2 = *(byte *)(param_1 + 9);
          local_4c = STReplaceLowByte((uint32_t)(local_4c), (uint8_t)(bVar1));
          local_48 = STReplaceLowByte((uint32_t)(local_48), (uint8_t)(bVar2));
          if (*(char *)(iVar7 + 0x146f) == '\0') {
            if (bVar1 == bVar2) {
LAB_005882a0:
              iVar7 = 0;
            }
            else {
              uVar8 = (uint)bVar1;
              uVar6 = (uint)bVar2;
              local_5 = *(char *)(iVar7 + uVar8 * 8 + 0x142f + uVar6);
              if ((local_5 == '\0') && (*(char *)(iVar7 + uVar6 * 8 + 0x142f + uVar8) == '\0')) {
                iVar7 = -2;
              }
              else if ((local_5 == '\x01') &&
                      (*(char *)(iVar7 + uVar6 * 8 + 0x142f + uVar8) == '\0')) {
                iVar7 = -1;
              }
              else if ((local_5 == '\0') &&
                      (*(char *)(iVar7 + uVar6 * 8 + 0x142f + uVar8) == '\x01')) {
                iVar7 = 1;
              }
              else {
                if ((local_5 != '\x01') || (*(char *)(iVar7 + uVar6 * 8 + 0x142f + uVar8) != '\x01')
                   ) goto LAB_005882a0;
                iVar7 = 2;
              }
            }
            bVar20 = iVar7 < 0;
          }
          else {
            local_44 = (STGameObjC *)(iVar7 + (uint)bVar2 * 0x48);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            bVar20 = *(char *)((int)&local_44[2].field_0185 + (uint)bVar2 * 9 + 1) !=
                     *(char *)((uint)bVar1 * 0x51 + 0x11ca + iVar7);
          }
          if (bVar20) goto LAB_005882af;
        }
        iVar7 = local_38;
      } while (local_38 < 7);
      iVar7 = STField<int>(param_1,0x25b) + STField<int>(param_1,0x25f);
      STField<int>(param_1,0x25b) = iVar7;
      if (iVar7 < 0xd) {
        if (iVar7 < -0xc) {
          STField<undefined4>(param_1,0x25f) = 2;
        }
      }
      else {
        STField<undefined4>(param_1,0x25f) = 0xfffffffe;
      }
    }
    else {
      STField<undefined4>(param_1,0x231) = 2;
      st::fn_00404264((STT3DSprC *)((int)param_1 + 0x1d5),0xe);
      st::fn_00402A90((STT3DSprC *)((int)param_1 + 0x1d5));
      st::fn_00403D19(param_1,(int)STField<short>(param_1,0x41),
                         (int)STField<short>(param_1,0x43),0x45c);
      iVar7 = st::fn_00401D93((AnonShape_00589740_397F9B27 *)param_1);
      pSVar10 = local_44;
      if (iVar7 != 0) goto LAB_00587761;
      (*local_44->vtable->vfunc_E0)
                (param_1[0x9e],(int)param_1 + 0x41,(int)param_1 + 0x43,(int)param_1 + 0x45,&local_24
                );
      if (local_24 == 0) {
        st::fn_006EA460
                  (STField<void *>(param_1,0x211),STField<uint>(param_1,0x1ed),
                   pSVar10->field_01ED);
      }
      else {
        st::fn_006EA3E0
                  (STField<void *>(param_1,0x211),STField<uint>(param_1,0x1ed),
                   pSVar10->field_01ED);
      }
    }
  }
  else if (iVar7 == 1) {
    if (STField<int>(param_1,599) == 0) {
      STField<uint>(param_1,599) = g_playSystem_00802A38->field_00E4;
    }
    lVar4 = (longlong)STField<int>(param_1,0x235) * 0xeeff;
    uVar8 = (uint)lVar4;
    STField<uint>(param_1,0x235) =
         (uVar8 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) + (uint)((uVar8 >> 0xf & 1) != 0);
    lVar4 = (longlong)STField<int>(param_1,0x239) * 0xeeff;
    uVar8 = (uint)lVar4;
    STField<uint>(param_1,0x239) =
         (uVar8 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) + (uint)((uVar8 >> 0xf & 1) != 0);
    lVar4 = (longlong)STField<int>(param_1,0x23d) * 0xeeff;
    uVar8 = (uint)lVar4;
    iVar7 = (uVar8 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
            (uint)((uVar8 >> 0xf & 1) != 0);
    sVar14 = STField<short>(param_1,0x41);
    STField<int>(param_1,0x23d) = iVar7;
    iVar9 = (int)sVar14;
    local_10 = ((int)(STField<int>(param_1,0x235) +
                     (STField<int>(param_1,0x235) >> 0x1f & 0xffffU)) >> 0x10) + iVar9;
    sVar15 = STField<short>(param_1,0x43);
    local_4c = STReplaceLowWord((uint32_t)(local_10), (uint16_t)(sVar15));
    local_44 = (STGameObjC *)(int)sVar15;
    local_14 = (int)&local_44->vtable +
               ((int)(STField<int>(param_1,0x239) +
                     (STField<int>(param_1,0x239) >> 0x1f & 0xffffU)) >> 0x10);
    sVar16 = STField<short>(param_1,0x45);
    local_40 = STReplaceLowWord((uint32_t)(local_14), (uint16_t)(sVar16));
    local_48 = (int)sVar16;
    local_18 = ((int)(STField<int>(param_1,0x25b) + (STField<int>(param_1,0x25b) >> 0x1f & 3U)
                     ) >> 2) + local_48 + ((int)(iVar7 + (iVar7 >> 0x1f & 0xffffU)) >> 0x10);
    if (local_10 < 0) {
      local_10 = 0;
    }
    if (local_14 < 0) {
      local_14 = 0;
    }
    if (local_18 < 0) {
      local_18 = 0;
    }
    if (g_worldGrid.sizeX * 0xc9 <= local_10) {
      local_10 = g_worldGrid.sizeX * 0xc9 + -1;
    }
    if (g_worldGrid.sizeY * 0xc9 <= local_14) {
      local_14 = g_worldGrid.sizeY * 0xc9 + -1;
    }
    if (g_worldGrid.sizeZ * 200 <= local_18) {
      local_18 = g_worldGrid.sizeZ * 200 + -1;
    }
    local_c = local_10;
    local_1c = local_14;
    sVar5 = (short)(local_10 >> 0x1f);
    if (local_10 < 0) {
      local_34 = (short)(((short)(local_10 / 0xc9) + sVar5) -
                        (short)((longlong)local_10 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      local_34 = (int)(short)(((short)(local_10 / 0xc9) + sVar5) -
                             (short)((longlong)local_10 * 0x28c1979 >> 0x3f));
    }
    sVar5 = (short)(local_14 >> 0x1f);
    if (local_14 < 0) {
      local_38 = (short)(((short)(local_14 / 0xc9) + sVar5) -
                        (short)((longlong)local_14 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      local_38 = (int)(short)(((short)(local_14 / 0xc9) + sVar5) -
                             (short)((longlong)local_14 * 0x28c1979 >> 0x3f));
    }
    sVar5 = (short)(local_18 >> 0x1f);
    if (local_18 < 0) {
      local_3c = (short)(((short)(local_18 / 200) + sVar5) -
                        (short)((longlong)local_18 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      local_3c = (int)(short)(((short)(local_18 / 200) + sVar5) -
                             (short)((longlong)local_18 * 0x51eb851f >> 0x3f));
    }
    if (sVar14 < 0) {
      iVar7 = (short)((sVar14 / 0xc9 + (sVar14 >> 0xf)) -
                     (short)((longlong)iVar9 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar7 = (int)(short)((sVar14 / 0xc9 + (sVar14 >> 0xf)) -
                          (short)((longlong)iVar9 * 0x28c1979 >> 0x3f));
    }
    iVar9 = param_1[0xa4];
    sVar14 = (short)(iVar9 >> 0x1f);
    if (iVar9 < 0) {
      iVar9 = (short)(((short)(iVar9 / 0xc9) + sVar14) -
                     (short)((longlong)iVar9 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar9 = (int)(short)(((short)(iVar9 / 0xc9) + sVar14) -
                          (short)((longlong)iVar9 * 0x28c1979 >> 0x3f));
    }
    if (iVar7 == iVar9) {
      if (sVar15 < 0) {
        iVar7 = (short)((sVar15 / 0xc9 + (sVar15 >> 0xf)) -
                       (short)((longlong)(int)local_44 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar7 = (int)(short)((sVar15 / 0xc9 + (sVar15 >> 0xf)) -
                            (short)((longlong)(int)local_44 * 0x28c1979 >> 0x3f));
      }
      iVar9 = param_1[0xa5];
      sVar14 = (short)(iVar9 >> 0x1f);
      if (iVar9 < 0) {
        iVar9 = (short)(((short)(iVar9 / 0xc9) + sVar14) -
                       (short)((longlong)iVar9 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar9 = (int)(short)(((short)(iVar9 / 0xc9) + sVar14) -
                            (short)((longlong)iVar9 * 0x28c1979 >> 0x3f));
      }
      if (iVar7 != iVar9) goto LAB_00587161;
      if (sVar16 < 0) {
        iVar7 = (short)((sVar16 / 200 + (sVar16 >> 0xf)) -
                       (short)((longlong)local_48 * 0x51eb851f >> 0x3f)) + -1;
      }
      else {
        iVar7 = (int)(short)((sVar16 / 200 + (sVar16 >> 0xf)) -
                            (short)((longlong)local_48 * 0x51eb851f >> 0x3f));
      }
      iVar9 = param_1[0xa6];
      sVar14 = (short)(iVar9 >> 0x1f);
      if (iVar9 < 0) {
        iVar9 = (short)(((short)(iVar9 / 200) + sVar14) -
                       (short)((longlong)iVar9 * 0x51eb851f >> 0x3f)) + -1;
      }
      else {
        iVar9 = (int)(short)(((short)(iVar9 / 200) + sVar14) -
                            (short)((longlong)iVar9 * 0x51eb851f >> 0x3f));
      }
      pSVar17 = local_20;
      if (iVar7 != iVar9) goto LAB_00587161;
      goto LAB_00587359;
    }
LAB_00587161:
    sVar14 = (short)local_34;
    if (((((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) ||
         ((sVar15 = (short)local_38, sVar15 < 0 ||
          ((g_worldGrid.sizeY <= sVar15 || (sVar16 = (short)local_3c, sVar16 < 0)))))) ||
        (g_worldGrid.sizeZ <= sVar16)) ||
       (pSVar17 = STGridAt3D(g_worldGrid, sVar14, sVar15, sVar16).objects[0], local_20 = pSVar17, pSVar17 == nullptr))
    {
      uVar8 = st::fn_00404A3E(local_10,local_14,local_18);
      local_38 = 0;
      iVar7 = local_18;
      pSVar17 = (STWorldObject *)(uint)(-1 < (int)uVar8);
    }
    else if ((pSVar17->value_20 == 0xb4) ||
            (iVar7 = (*pSVar17->vtable[5].slots_00_28[2])(), iVar7 == 0)) {
LAB_00587323:
      local_38 = 0;
      iVar7 = local_18;
      pSVar17 = nullptr;
    }
    else {
      if (((pSVar17->value_20 == 1000) || (pSVar17->value_20 == 0x14)) &&
         ((pSVar17[1].vtable < (STWorldObjectVTable *)0x8 &&
          ((g_playSystem_00802A38 == nullptr ||
           (g_bulkInitializedRecords_008087C7[(int)pSVar17[1].vtable].field_0022 < 8)))))) {
        iVar7 = param_1[4];
        bVar1 = *(byte *)&pSVar17[1].vtable;
        bVar2 = *(byte *)(param_1 + 9);
        local_4c = STReplaceLowByte((uint32_t)(local_4c), (uint8_t)(bVar1));
        local_48 = STReplaceLowByte((uint32_t)(local_48), (uint8_t)(bVar2));
        if (*(char *)(iVar7 + 0x146f) == '\0') {
          if (bVar1 == bVar2) {
            iVar7 = 0;
          }
          else {
            uVar8 = (uint)bVar1;
            uVar6 = (uint)bVar2;
            cVar3 = *(char *)(iVar7 + uVar8 * 8 + 0x142f + uVar6);
            pSVar17 = local_20;
            if ((cVar3 == '\0') && (*(char *)(iVar7 + uVar6 * 8 + 0x142f + uVar8) == '\0')) {
              iVar7 = -2;
            }
            else if ((cVar3 == '\x01') && (*(char *)(iVar7 + uVar6 * 8 + 0x142f + uVar8) == '\0')) {
              iVar7 = -1;
            }
            else if ((cVar3 == '\0') && (*(char *)(iVar7 + uVar6 * 8 + 0x142f + uVar8) == '\x01')) {
              iVar7 = 1;
            }
            else if ((cVar3 == '\x01') && (*(char *)(iVar7 + uVar6 * 8 + 0x142f + uVar8) == '\x01'))
            {
              iVar7 = 2;
            }
            else {
              iVar7 = 0;
            }
          }
          bVar20 = iVar7 < 0;
        }
        else {
          bVar20 = *(char *)((uint)bVar2 * 0x51 + 0x11ca + iVar7) !=
                   *(char *)((uint)bVar1 * 0x51 + 0x11ca + iVar7);
        }
        if (bVar20) goto LAB_00587323;
      }
LAB_00587359:
      local_38 = 0;
      iVar7 = local_18;
    }
    do {
      if (pSVar17 == nullptr) {
        if (local_38 < 7) {
          if (iVar7 < 0) {
            iVar7 = 0;
            STField<undefined4>(param_1,0x25f) = 2;
          }
          st::fn_00403107(param_1,(ushort)local_c,(short)local_1c,(ushort)iVar7);
        }
        break;
      }
      switch(local_38) {
      case 0:
      case 2:
        local_c = (int)STField<short>(param_1,0x41);
        break;
      case 1:
        local_1c = (int)STField<short>(param_1,0x43);
        local_c = local_10;
        break;
      case 3:
        local_c = local_10;
        goto LAB_005873a4;
      case 4:
        local_c = (int)STField<short>(param_1,0x41);
LAB_005873a4:
        local_1c = local_14;
        iVar7 = ((int)(STField<int>(param_1,0x25b) +
                      (STField<int>(param_1,0x25b) >> 0x1f & 3U)) >> 2) +
                (int)STField<short>(param_1,0x45);
        local_18 = iVar7;
        break;
      case 5:
        local_1c = (int)STField<short>(param_1,0x43);
        local_c = local_10;
        iVar7 = ((int)(STField<int>(param_1,0x25b) +
                      (STField<int>(param_1,0x25b) >> 0x1f & 3U)) >> 2) +
                (int)STField<short>(param_1,0x45);
        local_18 = iVar7;
        break;
      case 6:
        local_10 = (int)STField<short>(param_1,0x41);
        local_14 = (int)STField<short>(param_1,0x43);
      }
      local_38 = local_38 + 1;
      sVar14 = (short)(local_c >> 0x1f);
      if (local_c < 0) {
        sVar14 = (((short)(local_c / 0xc9) + sVar14) -
                 (short)((longlong)local_c * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        sVar14 = ((short)(local_c / 0xc9) + sVar14) - (short)((longlong)local_c * 0x28c1979 >> 0x3f);
      }
      sVar15 = (short)(local_1c >> 0x1f);
      if (local_1c < 0) {
        sVar15 = (((short)(local_1c / 0xc9) + sVar15) -
                 (short)((longlong)local_1c * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        sVar15 = ((short)(local_1c / 0xc9) + sVar15) -
                 (short)((longlong)local_1c * 0x28c1979 >> 0x3f);
      }
      sVar16 = (short)(iVar7 >> 0x1f);
      if (iVar7 < 0) {
        sVar16 = (((short)(iVar7 / 200) + sVar16) - (short)((longlong)iVar7 * 0x51eb851f >> 0x3f)) +
                 -1;
      }
      else {
        sVar16 = ((short)(iVar7 / 200) + sVar16) - (short)((longlong)iVar7 * 0x51eb851f >> 0x3f);
      }
      if ((((((sVar14 < 0) || (g_worldGrid.sizeX <= sVar14)) || (sVar15 < 0)) ||
           ((g_worldGrid.sizeY <= sVar15 || (sVar16 < 0)))) || (g_worldGrid.sizeZ <= sVar16)) ||
         (pSVar17 = STGridAt3D(g_worldGrid, sVar14, sVar15, sVar16).objects[0],
         local_20 = pSVar17, pSVar17 == nullptr)) {
        uVar8 = st::fn_00404A3E(local_c,local_1c,iVar7);
        local_20 = (STWorldObject *)(uint)(-1 < (int)uVar8);
      }
      else if ((pSVar17->value_20 == 0xb4) ||
              (iVar9 = (*pSVar17->vtable[5].slots_00_28[2])(), iVar9 == 0)) {
LAB_00587648:
        local_20 = nullptr;
      }
      else if ((((pSVar17->value_20 == 1000) || (pSVar17->value_20 == 0x14)) &&
               (pSVar17[1].vtable < (STWorldObjectVTable *)0x8)) &&
              ((g_playSystem_00802A38 == nullptr ||
               (g_bulkInitializedRecords_008087C7[(int)pSVar17[1].vtable].field_0022 < 8)))) {
        iVar9 = param_1[4];
        bVar1 = *(byte *)&pSVar17[1].vtable;
        bVar2 = *(byte *)(param_1 + 9);
        local_4c = STReplaceLowByte((uint32_t)(local_4c), (uint8_t)(bVar1));
        local_48 = STReplaceLowByte((uint32_t)(local_48), (uint8_t)(bVar2));
        if (*(char *)(iVar9 + 0x146f) == '\0') {
          if (bVar1 == bVar2) {
            iVar9 = 0;
          }
          else {
            uVar8 = (uint)bVar1;
            uVar6 = (uint)bVar2;
            cVar3 = *(char *)(iVar9 + uVar8 * 8 + 0x142f + uVar6);
            iVar7 = local_18;
            if ((cVar3 == '\0') && (*(char *)(iVar9 + uVar6 * 8 + 0x142f + uVar8) == '\0')) {
              iVar9 = -2;
            }
            else if ((cVar3 == '\x01') && (*(char *)(iVar9 + uVar6 * 8 + 0x142f + uVar8) == '\0')) {
              iVar9 = -1;
            }
            else if ((cVar3 == '\0') && (*(char *)(iVar9 + uVar6 * 8 + 0x142f + uVar8) == '\x01')) {
              iVar9 = 1;
            }
            else if ((cVar3 == '\x01') && (*(char *)(iVar9 + uVar6 * 8 + 0x142f + uVar8) == '\x01'))
            {
              iVar9 = 2;
            }
            else {
              iVar9 = 0;
            }
          }
          bVar20 = iVar9 < 0;
        }
        else {
          local_5 = *(char *)((uint)bVar2 * 0x51 + 0x11ca + iVar9);
          local_44 = nullptr;
          bVar20 = local_5 != *(char *)((uint)bVar1 * 0x51 + 0x11ca + iVar9);
        }
        if (bVar20) goto LAB_00587648;
      }
      pSVar17 = local_20;
    } while (local_38 < 7);
    iVar7 = STField<int>(param_1,0x25b) + STField<int>(param_1,0x25f);
    STField<int>(param_1,0x25b) = iVar7;
    if (iVar7 < 0xd) {
      if (iVar7 < -0xc) {
        STField<undefined4>(param_1,0x25f) = 2;
      }
    }
    else {
      STField<undefined4>(param_1,0x25f) = 0xfffffffe;
    }
    if (10 < g_playSystem_00802A38->field_00E4 - STField<int>(param_1,0x253)) {
      st::fn_00405150((AnonShape_00586320_9792A2C7 *)param_1);
      STField<uint>(param_1,0x253) = g_playSystem_00802A38->field_00E4;
    }
    if (4000 < g_playSystem_00802A38->field_00E4 - STField<int>(param_1,599)) {
      STField<undefined4>(param_1,0x231) = 2;
      st::fn_00404264((STT3DSprC *)((int)param_1 + 0x1d5),0xe);
      st::fn_00402A90((STT3DSprC *)((int)param_1 + 0x1d5));
      STField<undefined4>(param_1,0x26f) = 0xff;
      iVar7 = st::fn_00401D93((AnonShape_00589740_397F9B27 *)param_1);
      if (iVar7 == 0) goto LAB_00588350;
LAB_00587761:
      st::fn_00405EF2(param_1);
    }
  }
  else if (iVar7 == 2) {
    pSVar10 = (STGameObjC *)st::fn_004042AF(this,'\b');
    local_44 = pSVar10;
    if ((pSVar10 == (STGameObjC *)0x1) && (STField<int>(param_1,0x26f) != 0xff)) {
      this_00 = st::fn_004028BA
                          (g_allPlayers_007FA174,(char)STField<int>(param_1,0x26f),
                           STField<ushort>(param_1,0x273),CASE_1);
      if (this_00 != nullptr) {
        memset(&DAT_008116f0, 0, 0x1c); /* compiler bulk-zero initialization */
        DAT_008116f0 = DAT_007e660c;
        _DAT_008116fc = (undefined2)param_1[0xa9];
        _DAT_008116fe = (undefined2)param_1[0xa8];
        _DAT_008116f8 = param_1[0xa0];
        iVar7 = 8;
        DAT_008116f4 = 0xab;
        pAVar19 = &local_6c;
        while( true ) {
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          *(undefined4 *)pAVar19 = 0;
          pAVar19 = (AnonShape_0041AF40_F59F8577 *)&pAVar19->field_0x4;
        }
        STPiece<8,4>(local_6c) = this_00->field_0008;
        STPiece<12,4>(local_6c) = 2;
        local_6c.field_0010 = 0x110;
        local_6c.field_0014 = &DAT_008116f0;
        this_00->GetMessage(&local_6c);
        pSVar10 = local_44;
      }
    }
    if ((STField<char>(param_1,0x275) != '\0') &&
       (pSVar10 == (STGameObjC *)(uint)STField<byte>(param_1,0x276))) {
      st::fn_00405240(this,9,g_playSystem_00802A38->field_00E4);
      st::fn_00404854(this,9);
    }
    iVar7 = st::fn_004022AC(this,'\b');
    if (pSVar10 == (STGameObjC *)(iVar7 - 1U)) {
      st::fn_00404264(this,8);
    }
    iVar7 = st::fn_004022AC(this,'\n');
    if (pSVar10 == (STGameObjC *)(iVar7 - 1U)) {
      st::fn_00404264(this,10);
    }
    if (STField<char>(param_1,0x275) != '\0') {
      iVar7 = st::fn_004022AC(this,'\t');
      iVar9 = st::fn_004042AF(this,'\t');
      pSVar10 = local_44;
      if (iVar9 == iVar7 + -1) {
        st::fn_00404264(this,9);
        STField<undefined1>(param_1,0x275) = 0;
        pSVar10 = local_44;
      }
    }
    iVar7 = st::fn_004022AC(this,'\b');
    if ((pSVar10 == (STGameObjC *)(iVar7 - 1U)) && (STField<char>(param_1,0x275) == '\0')) {
      st::fn_00405EF2(param_1);
      return;
    }
    if ((((int)pSVar10 < 10) && (STField<int>(param_1,0x26f) != 0xff)) &&
       (pSVar10 = st::fn_004028BA
                            (g_allPlayers_007FA174,(char)STField<int>(param_1,0x26f),
                             STField<ushort>(param_1,0x273),CASE_1), pSVar10 != nullptr
       )) {
      (*pSVar10->vtable->vfunc_E0)(param_1[0x9e],local_28,local_2c,local_30,&local_24);
      st::fn_00403107(param_1,local_28[0],local_2c[0],local_30[0]);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*param_1 + 0xd8))();
      return;
    }
    goto LAB_005884da;
  }
LAB_00588350:
  sVar14 = STField<short>(param_1,0x41);
  sVar15 = STField<short>(param_1,0x43);
  sVar16 = STField<short>(param_1,0x45);
  STField<short>(param_1,0x24d) = sVar14;
  STField<short>(param_1,0x24f) = sVar15;
  STField<short>(param_1,0x251) = sVar16;
  if (STField<int>(param_1,0x231) != 2) {
    if (sVar14 < 0) {
      iVar7 = (short)((sVar14 / 0xc9 + (sVar14 >> 0xf)) -
                     (short)((longlong)(int)sVar14 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar7 = (int)(short)((sVar14 / 0xc9 + (sVar14 >> 0xf)) -
                          (short)((longlong)(int)sVar14 * 0x28c1979 >> 0x3f));
    }
    if (sVar15 < 0) {
      iVar9 = (short)((sVar15 / 0xc9 + (sVar15 >> 0xf)) -
                     (short)((longlong)(int)sVar15 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar9 = (int)(short)((sVar15 / 0xc9 + (sVar15 >> 0xf)) -
                          (short)((longlong)(int)sVar15 * 0x28c1979 >> 0x3f));
    }
    if (sVar16 < 0) {
      iVar12 = (short)((sVar16 / 200 + (sVar16 >> 0xf)) -
                      (short)((longlong)(int)sVar16 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      iVar12 = (int)(short)((sVar16 / 200 + (sVar16 >> 0xf)) -
                           (short)((longlong)(int)sVar16 * 0x51eb851f >> 0x3f));
    }
    if ((((STField<short>(param_1,0x47) != iVar7) || (STField<short>(param_1,0x49) != iVar9))
        || (STField<short>(param_1,0x4b) != iVar12)) &&
       (((-1 < iVar7 && (-1 < iVar9)) &&
        ((iVar7 < g_worldGrid.sizeX &&
         ((iVar9 < g_worldGrid.sizeY &&
          (iVar12 = g_worldGrid.sizeX * iVar9, *(char *)(iVar7 + iVar12 + DAT_007fb26c) != '\0')))))
        ))) {
      if ((((&DAT_007fb24c)[param_1[9]] == 0) ||
          (*(char *)((&DAT_007fb24c)[param_1[9]] + iVar7 + iVar12) == '\0')) &&
         (uVar8 = st::fn_00403B66(iVar7,iVar9,param_1[9],1,DAT_007e660c), -1 < (int)uVar8)) {
        st::fn_00405B82((int)STField<short>(param_1,0x41),(int)STField<short>(param_1,0x43)
                           ,(int)STField<short>(param_1,0x45));
        st::fn_00404264((STT3DSprC *)((int)param_1 + 0x1d5),0xe);
        st::fn_00402A90((STT3DSprC *)((int)param_1 + 0x1d5));
        STField<undefined4>(param_1,0x231) = 2;
        STField<undefined4>(param_1,0x26f) = 0xff;
        st::fn_00405EF2(param_1);
      }
    }
  }
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_005884da:
  (**(code **)(*param_1 + 0xd8))();
  return;
}

// 00589740 FUN_00589740
#line 4 "decomp/ST.exe/functions/00589740/decomp.c"
undefined4 __fastcall st::fn_00589740(AnonShape_00589740_397F9B27 *param_1)

{
  undefined1 *this;
  int iVar1;
  undefined4 uVar2;

  this = &param_1->field_0x1d5;
  iVar1 = st::fn_00404183((STT3DSprC *)this,8,PTR_00806774,"Expb23",0x1d);
  if (iVar1 == 0) {
    st::fn_00405240((STT3DSprC *)this,8,g_playSystem_00802A38->field_00E4);
    st::fn_00404183((STT3DSprC *)this,10,PTR_00806774,"expmask2",0x1d);
    st::fn_00403233((STT3DSprC *)this,'\n');
    st::fn_004044EE((STT3DSprC *)this,PTR_008032b8,0x10);
    st::fn_00405240((STT3DSprC *)this,10,g_playSystem_00802A38->field_00E4);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)param_1 + 0xd8))();
    iVar1 = st::fn_00404183((STT3DSprC *)this,9,PTR_00806764,"bulb_n4",0x1d);
    if (iVar1 == 0) {
      st::fn_00402761((STT3DSprC *)this,9);
      uVar2 = st::fn_004022AC((STT3DSprC *)this,'\t');
      param_1->field_0275 = (char)uVar2;
      param_1->field_0276 = DAT_007cb958;
      param_1->field_0277 = 0;
    }
    return 0;
  }
  return 0xffffffff;
}

// 00589870 FUN_00589870
#line 4 "decomp/ST.exe/functions/00589870/decomp.c"
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00589870 -> 00568DD0 @ 005898F6

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_00589870(void *this,int param_1,int param_2,int soundId)

{
  short sVar1;
  SoundPosition local_10;

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
  st::fn_00404BD8((SoundClassTy *)&g_sound,SOUND_MODE_2,nullptr,soundId,&local_10,0);
  return;
}

// 00589940 FUN_00589940
#line 4 "decomp/ST.exe/functions/00589940/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA934>00403D2D

   [STObjectFactoryApplier] Central object factory for 0x0131 (ST_OBJECT_TYPE_0131).
   Evidence: registry[66] at 007CA930 stores type 0x0131 and executable pointer 00403D2D; allocation
   size 678 has no unique current class-layout match */

void * __cdecl st::fn_00589940(void)

{
  STMBombC *pSVar1;

  pSVar1 = (STMBombC *)st::fn_006B04D0(0x2a6);
  if (pSVar1 != nullptr) {
    pSVar1 = st::fn_00403733(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

// 00589970 FUN_00589970
#line 4 "decomp/ST.exe/functions/00589970/decomp.c"
undefined4 st::fn_00589970(void)

{
  return 0xab;
}

// 005899E0 FUN_005899e0
#line 4 "decomp/ST.exe/functions/005899E0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __fastcall st::fn_005899E0(void *param_1)

{
  undefined4 local_24 [3];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;

  local_10 = STField<undefined4>(param_1,8);
  local_18 = 0;
  local_14 = 10;
  st::fn_006E60A0(param_1,local_24);
  return;
}

// 00589A20 FUN_00589a20
#line 4 "decomp/ST.exe/functions/00589A20/decomp.c"
undefined4 __thiscall
st::fn_00589A20(void *this,short param_1,short param_2,short param_3,short param_4,short param_5,
            short param_6)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;

  sVar1 = STField<short>(this,0x45) + -0x1c;
  sVar4 = STField<short>(this,0x45) + 0x1c;
  sVar6 = STField<short>(this,0x41) + -0x1c;
  sVar2 = STField<short>(this,0x43) + -0x1c;
  sVar3 = STField<short>(this,0x41) + 0x1c;
  sVar5 = STField<short>(this,0x43) + 0x1c;
  if ((((((sVar6 <= param_1) && (param_1 <= sVar3)) || ((sVar6 <= param_4 && (param_4 <= sVar3))))
       || ((param_1 <= sVar6 && (sVar3 <= param_4)))) &&
      (((sVar2 <= param_2 && (param_2 <= sVar5)) ||
       (((sVar2 <= param_5 && (param_5 <= sVar5)) || ((param_2 <= sVar2 && (sVar5 <= param_5))))))))
     && ((((sVar1 <= param_3 && (param_3 <= sVar4)) || ((sVar1 <= param_6 && (param_6 <= sVar4))))
         || ((param_3 <= sVar1 && (sVar4 <= param_6)))))) {
    return 0;
  }
  return 0xffffffff;
}

// 00589B10 FUN_00589b10
#line 4 "decomp/ST.exe/functions/00589B10/decomp.c"
undefined4 __thiscall
st::fn_00589B10(void *this,undefined4 param_1,undefined2 *param_2,undefined2 *param_3,
            undefined2 *param_4,undefined4 *param_5)

{
  *param_2 = STField<undefined2>(this,0x41);
  *param_3 = STField<undefined2>(this,0x43);
  *param_4 = STField<undefined2>(this,0x45);
  *param_5 = 0;
  return 0;
}

// 0058A970 FUN_0058a970
#line 4 "decomp/ST.exe/functions/0058A970/decomp.c"
int __thiscall st::fn_0058A970(void *this,undefined4 param_1,int param_2)

{
  uint uVar1;

  uVar1 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
  STField<uint>(this,0x1c) = uVar1;
  return (uVar1 >> 0x10) % 0x15 + 0x1e + param_2;
}

// 0058A9B0 CreateSTOctopus
#line 4 "decomp/ST.exe/functions/0058A9B0/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA96C>00401D7A | P:007CA974>00401D7A

   [STObjectFactoryApplier] Central object factory for 0x0140 (ST_OBJECT_ST_OCTOPUS_0140).
   Evidence: registry[73] at 007CA968 stores type 0x0140 and executable pointer 00401D7A; allocation
   size 685 uniquely matches /STOctopusC */

STOctopusC * __cdecl st::fn_0058A9B0(void)

{
  STOctopusC *pSVar1;

  pSVar1 = (STOctopusC *)st::fn_006B04D0(0x2ad);
  if (pSVar1 != nullptr) {
    pSVar1 = st::fn_00405A1F(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

// 0058A9E0 FUN_0058a9e0
#line 4 "decomp/ST.exe/functions/0058A9E0/decomp.c"
void __fastcall st::fn_0058A9E0(AnonShape_0058A9E0_DB5690D0 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  int local_c;

  sVar6 = param_1->field_0041;
  if (sVar6 < 0) {
    sVar6 = ((sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar6 = (sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f);
  }
  param_1->field_0047 = sVar6;
  param_1->field_005B = sVar6;
  sVar6 = param_1->field_0043;
  if (sVar6 < 0) {
    sVar6 = ((sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar6 = (sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f);
  }
  param_1->field_0049 = sVar6;
  param_1->field_005D = sVar6;
  sVar6 = param_1->field_0045;
  if (sVar6 < 0) {
    sVar6 = ((sVar6 / 200 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x51eb851f >> 0x3f)) +
            -1;
  }
  else {
    sVar6 = (sVar6 / 200 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x51eb851f >> 0x3f);
  }
  param_1->field_004B = sVar6;
  param_1->field_005F = sVar6;
  iVar2 = st::fn_00401A3C((AnonShape_0041C710_C4D46939 *)param_1);
  puVar1 = &param_1->field_0x1d5;
  if (iVar2 == 0) {
    iVar2 = 0;
    uVar3 = st::fn_004052CC((STT3DSprC *)puVar1);
    st::fn_006EABF0(param_1->field_0211,uVar3,iVar2);
    iVar2 = st::fn_004050D8((AnonShape_0041CAF0_1630B9E0 *)param_1);
    if (iVar2 == 1) {
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 1;
    uVar3 = st::fn_004052CC((STT3DSprC *)puVar1);
    st::fn_006EABF0(param_1->field_0211,uVar3,iVar2);
    iVar2 = 1;
  }
  iVar4 = st::fn_004052CC((STT3DSprC *)puVar1);
  st::fn_006E6870(param_1->field_0211,iVar4,iVar2);
  iVar2 = param_1->field_02A5;
  if ((iVar2 == 0xf8) || (iVar2 == 0xf9)) {
    local_c = 8;
    iVar4 = 8;
  }
  else {
    iVar4 = 6;
    local_c = 6;
  }
  if (2 < g_playSystem_00802A38->field_00E4 - param_1->field_0245) {
    param_1->field_0245 = g_playSystem_00802A38->field_00E4;
    param_1->field_0235 = 0;
    iVar7 = (param_1->field_0231 + 1) % iVar4;
    param_1->field_0231 = iVar7;
    if (iVar7 != 0) {
      param_1->field_0235 = ((iVar4 - iVar7) * 0x6a0) / iVar4;
    }
  }
  if (param_1->field_0249 == 1) {
    if (param_1->field_0281 == 0) {
      iVar2 = (int)param_1->field_0041 - (int)param_1->field_004E;
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      if (iVar2 < 0x15) {
        iVar2 = (int)param_1->field_0043 - (int)*(short *)&param_1->field_0x50;
        if (iVar2 < 0) {
          iVar2 = -iVar2;
        }
        if (iVar2 < 0x15) {
          uVar5 = st::fn_00401A05
                            ((STOctopusC *)param_1,&param_1->field_004E,
                             (short *)&param_1->field_0x50,&param_1->field_0052,
                             (short *)&param_1->field_0x6c);
          param_1->field_0249 = uVar5;
          param_1->field_024D = 0;
        }
      }
      iVar2 = param_1->field_02A5;
      param_1->field_025D = param_1->field_025D + param_1->field_0251;
      param_1->field_0261 = param_1->field_0261 + param_1->field_0255;
      if ((iVar2 == 0xf8) || (iVar2 == 0xf9)) {
        param_1->field_025D =
             (param_1->field_0269 * param_1->field_0235) / param_1->field_0239 + param_1->field_025D
        ;
        param_1->field_0261 =
             (param_1->field_026D * param_1->field_0235) / param_1->field_0239 + param_1->field_0261
        ;
        iVar4 = local_c;
      }
      param_1->field_0041 =
           (short)(param_1->field_025D + (param_1->field_025D >> 0x1f & 0xffU) >> 8) +
           param_1->field_0275;
      param_1->field_0043 =
           (short)(param_1->field_0261 + (param_1->field_0261 >> 0x1f & 0xffU) >> 8) +
           param_1->field_0279;
    }
    iVar7 = param_1->field_0265 + param_1->field_0259;
    param_1->field_0265 = iVar7;
    if ((iVar2 == 0xf8) || (iVar2 == 0xf9)) {
      param_1->field_0265 =
           (param_1->field_0271 * param_1->field_0235) / param_1->field_0239 + iVar7;
    }
    sVar6 = (short)(param_1->field_0265 + (param_1->field_0265 >> 0x1f & 0xffU) >> 8) +
            param_1->field_027D;
    param_1->field_0045 = sVar6;
    if (param_1->field_0281 != 0) {
      iVar2 = (int)sVar6 - (int)param_1->field_0052;
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      if (iVar2 < 10) {
        param_1->field_0259 = 0;
        param_1->field_0281 = 0;
      }
    }
  }
  else if (0xc < (uint)param_1->field_024D) {
    uVar5 = st::fn_00401A05
                      ((STOctopusC *)param_1,&param_1->field_004E,(short *)&param_1->field_0x50,
                       &param_1->field_0052,(short *)&param_1->field_0x6c);
    param_1->field_0249 = uVar5;
    param_1->field_024D = 0;
  }
  sVar6 = *(short *)&param_1->field_0x6c * 0x2d;
  *(short *)&param_1->field_0x6c = sVar6;
  if (param_1->field_0281 == 0) {
    iVar2 = (0x18 - (int)sVar6 / 0xf) % 0x18;
    uVar3 = (((iVar2 + (4 - DAT_008073fc) * 6) % 0x18) / 3) * local_c + param_1->field_0231;
    uVar8 = (iVar2 / 3) * local_c + param_1->field_0231;
  }
  else {
    uVar3 = param_1->field_0231 + iVar4 * 8;
    uVar8 = uVar3;
  }
  puVar1 = &param_1->field_0x1d5;
  *(short *)&param_1->field_0x6c = sVar6 / 0x2d - (short)((int)sVar6 / -0x4c000000);
  st::fn_00401064((STT3DSprC *)puVar1,'\x0e',uVar3);
  st::fn_004052FE((STT3DSprC *)puVar1,'\x0e',uVar8);
  st::fn_004030BC((STT3DSprC *)puVar1,'\x0e');
  param_1->field_024D = param_1->field_024D + 1;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)param_1 + 0xd8))();
  return;
}

// 0058B980 FUN_0058b980
#line 4 "decomp/ST.exe/functions/0058B980/decomp.c"
undefined4 __cdecl
st::fn_0058B980(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 local_2c [5];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  memset(local_2c, 0, 0x28); /* compiler bulk-zero initialization */
  local_18 = param_2;
  local_c = param_1;
  local_8 = param_5;
  local_2c[1] = param_6;
  local_10 = param_4;
  local_2c[0] = 0x118;
  local_2c[2] = 0;
  local_2c[3] = 1;
  local_14 = param_3;
  g_playSystem_00802A38->vfunc_08(0x140,0,(short)&param_6,(short)local_2c,0);
  return param_6;
}

// 0058BAB0 FUN_0058bab0
#line 4 "decomp/ST.exe/functions/0058BAB0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 5.
   Evidence: 004C4550 -> 0058BAB0 @ 004C4B6A; zero-filled partial register load at 004C4B4E */

undefined4 __cdecl
st::fn_0058BAB0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,ushort param_6)

{
  undefined4 local_2c [5];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  ushort local_8;

  memset(local_2c, 0, 0x26); /* compiler bulk-zero initialization */
  local_14 = param_2;
  local_18 = param_1;
  local_8 = param_6;
  local_2c[1] = param_4;
  local_c = param_5;
  local_2c[0] = 400;
  local_2c[2] = 0;
  local_2c[3] = 1;
  local_10 = param_3;
  g_playSystem_00802A38->vfunc_08(0x14d,0,(short)&param_4,(short)local_2c,0);
  return param_4;
}

// 0058BB50 FUN_0058bb50
#line 4 "decomp/ST.exe/functions/0058BB50/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0058BB50 returns return of sub_006E60A0 @ 0058BB76 */

int __fastcall st::fn_0058BB50(void *param_1)

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

// 0058BB90 FUN_0058bb90
#line 4 "decomp/ST.exe/functions/0058BB90/decomp.c"
void __fastcall st::fn_0058BB90(AnonShape_0058BB90_CF74AF20 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar5;
  undefined4 local_60 [6];
  short local_46;
  short local_44;
  short local_42;
  short local_40;
  short local_3e;
  short local_3c;
  undefined2 local_3a;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_33;
  undefined2 local_2f;
  int local_8;

  uVar1 = param_1->field_0279;
  memset(local_60, 0, 0x58); /* compiler bulk-zero initialization */
  local_2f = param_1->field_0299;
  local_34 = 0;
  local_33 = param_1->field_0295;
  local_44 = param_1->field_0043;
  local_46 = (short)((uint)(param_1->field_0259 * 5) >> 8) + param_1->field_0041;
  local_42 = param_1->field_0045 + -0x96;
  local_3c = param_1->field_0045 + -200;
  local_38 = 0xa5;
  local_60[0] = 0x28;
  local_60[3] = 1;
  local_3a = 0;
  if (local_46 < 0) {
    local_8 = (short)((local_46 / 0xc9 + (local_46 >> 0xf)) -
                     (short)((longlong)(int)local_46 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_8 = (int)(short)((local_46 / 0xc9 + (local_46 >> 0xf)) -
                          (short)((longlong)(int)local_46 * 0x28c1979 >> 0x3f));
  }
  if (local_44 < 0) {
    iVar3 = (short)((local_44 / 0xc9 + (local_44 >> 0xf)) -
                   (short)((longlong)(int)local_44 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar3 = (int)(short)((local_44 / 0xc9 + (local_44 >> 0xf)) -
                        (short)((longlong)(int)local_44 * 0x28c1979 >> 0x3f));
  }
  puVar5 = (undefined *)0x4;
  local_60[1] = uVar1;
  local_40 = local_46;
  local_3e = local_44;
  iVar2 = st::fn_00404D3B((short)local_8,(short)iVar3,4);
  if (iVar2 != 0) {
    do {
      if ((int)puVar5 < 1) break;
      puVar5 = puVar5 + -1;
      iVar2 = st::fn_00404D3B((short)local_8,(short)iVar3,(short)puVar5);
    } while (iVar2 != 0);
    if ((int)puVar5 < 0) {
      local_3c = (short)((int)puVar5 / 200) + -1;
      goto LAB_0058bcd7;
    }
  }
  local_3c = (short)((int)puVar5 / 200);
LAB_0058bcd7:
  if (g_visibleClass_00802A88 != nullptr) {
    st::fn_00401FD2
              (g_visibleClass_00802A88,local_8,iVar3,puVar5,param_1->field_0024,(undefined *)0x2,
               0x19);
  }
  st::fn_00401BC2(g_playSystem_00802A38,0x28,0,0,local_60,0);
  return;
}

// 0058BD90 FUN_0058bd90
#line 4 "decomp/ST.exe/functions/0058BD90/decomp.c"
void __fastcall st::fn_0058BD90(AnonShape_0058BD90_DCBCF849 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  uint local_8;

  local_8 = 0;
  if (param_1->field_0231 == 1) {
    return;
  }
  sVar5 = param_1->field_0041;
  if (sVar5 < 0) {
    sVar5 = ((sVar5 / 0xc9 + (sVar5 >> 0xf)) - (short)((longlong)(int)sVar5 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar5 = (sVar5 / 0xc9 + (sVar5 >> 0xf)) - (short)((longlong)(int)sVar5 * 0x28c1979 >> 0x3f);
  }
  param_1->field_0047 = sVar5;
  param_1->field_005B = sVar5;
  sVar5 = param_1->field_0043;
  if (sVar5 < 0) {
    sVar5 = ((sVar5 / 0xc9 + (sVar5 >> 0xf)) - (short)((longlong)(int)sVar5 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar5 = (sVar5 / 0xc9 + (sVar5 >> 0xf)) - (short)((longlong)(int)sVar5 * 0x28c1979 >> 0x3f);
  }
  param_1->field_0049 = sVar5;
  param_1->field_005D = sVar5;
  sVar5 = param_1->field_0045;
  if (sVar5 < 0) {
    sVar5 = ((sVar5 / 200 + (sVar5 >> 0xf)) - (short)((longlong)(int)sVar5 * 0x51eb851f >> 0x3f)) +
            -1;
  }
  else {
    sVar5 = (sVar5 / 200 + (sVar5 >> 0xf)) - (short)((longlong)(int)sVar5 * 0x51eb851f >> 0x3f);
  }
  param_1->field_004B = sVar5;
  param_1->field_005F = sVar5;
  iVar2 = st::fn_00401A3C((AnonShape_0041C710_C4D46939 *)param_1);
  puVar1 = &param_1->field_0x1d5;
  if (iVar2 == 0) {
    iVar2 = 0;
    uVar3 = st::fn_004052CC((STT3DSprC *)puVar1);
    st::fn_006EABF0(param_1->field_0211,uVar3,iVar2);
    iVar2 = st::fn_004050D8((AnonShape_0041CAF0_1630B9E0 *)param_1);
    if (iVar2 == 1) {
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 1;
    uVar3 = st::fn_004052CC((STT3DSprC *)puVar1);
    st::fn_006EABF0(param_1->field_0211,uVar3,iVar2);
    iVar2 = 1;
  }
  iVar4 = st::fn_004052CC((STT3DSprC *)puVar1);
  st::fn_006E6870(param_1->field_0211,iVar4,iVar2);
  switch(param_1->field_0231) {
  case 0:
  case 3:
    goto switchD_0058bec9_caseD_0;
  default:
    goto cf_common_exit_0058C391;
  case 2:
    goto switchD_0058bec9_caseD_2;
  case 4:
    puVar1 = &param_1->field_0x1d5;
    iVar2 = st::fn_004042AF(puVar1,'\x0e');
    local_8 = iVar2 + 1;
    if ((int)local_8 < 0x23) {
      st::fn_00401064((STT3DSprC *)puVar1,'\x0e',local_8);
    }
    else {
      st::fn_00401064((STT3DSprC *)puVar1,'\x0e',0x18);
      param_1->field_0231 = 2;
    }
    if (local_8 == 0x20) {
      st::fn_0040293C((AnonShape_0058BB90_CF74AF20 *)param_1);
    }
switchD_0058bec9_caseD_2:
    if (param_1->field_0231 == 2) {
      local_8 = 0x18;
    }
    if ((g_playSystem_00802A38->field_00E4 & 3) == 0) {
      if (param_1->field_0235 == 0) {
        if (param_1->field_023D < param_1->field_0241) {
          iVar2 = param_1->field_0239 + 1;
          param_1->field_0239 = iVar2;
          if (PTR_00806724->entryCount <= iVar2) {
            param_1->field_0231 = 1;
            param_1->field_0251 = param_1->field_0249 * 2 - param_1->field_0251;
            param_1->field_0255 = param_1->field_024D * 2 - param_1->field_0255;
            goto cf_common_exit_0058C391;
          }
          st::fn_00401BAE((STT3DSprC *)&param_1->field_0x1d5,'\x0e');
          st::fn_0040116D
                    ((STT3DSprC *)&param_1->field_0x1d5,PTR_00806724->entries[param_1->field_0239],
                     (int)PTR_00806724->field_002C);
        }
      }
      else {
        iVar2 = param_1->field_0239;
        iVar4 = iVar2 + -1;
        param_1->field_0239 = iVar4;
        if (iVar4 < 1) {
          param_1->field_0239 = 0;
          param_1->field_0235 = 0;
          st::fn_00403FDA(&param_1->field_0x1d5,'\x0e');
          param_1->field_0241 = -param_1->field_023D;
        }
        else {
          st::fn_0040116D
                    ((STT3DSprC *)&param_1->field_0x1d5,PTR_00806724->entries[iVar2 + -1],
                     (int)PTR_00806724->field_002C);
          param_1->field_0241 = -param_1->field_023D;
        }
      }
    }
    iVar4 = param_1->field_0261 + param_1->field_0259 * 5;
    iVar8 = param_1->field_0265 + param_1->field_025D * 5;
    param_1->field_0265 = iVar8;
    iVar2 = param_1->field_023D + -5;
    sVar6 = param_1->field_0269 - (short)((uint)iVar4 >> 8);
    param_1->field_023D = iVar2;
    param_1->field_0261 = iVar4;
    iVar2 = iVar2 * iVar2 * 0xd;
    sVar7 = param_1->field_026D - (short)((uint)iVar8 >> 8);
    param_1->field_0041 = sVar6;
    param_1->field_0043 = sVar7;
    sVar5 = (short)((int)(iVar2 + (iVar2 >> 0x1f & 0x3fffU)) >> 0xe) + param_1->field_0271;
    param_1->field_0045 = sVar5;
    if ((((sVar5 < 0x4b0) && (g_playSystem_00802A38->field_00E4 % 0x11 == 0)) &&
        ((int)sVar6 < g_worldGrid.sizeX * 0xc9)) &&
       (((0 < sVar6 && ((int)sVar7 < g_worldGrid.sizeY * 0xc9)) && (0 < sVar7)))) {
      param_1->field_0231 = 4;
    }
    goto LAB_0058c38c;
  case 6:
    break;
  }
  iVar2 = st::fn_004022AC((STT3DSprC *)&param_1->field_0x1d5,'\b');
  iVar4 = st::fn_004042AF(&param_1->field_0x1d5,'\b');
  if (iVar2 + -1 <= iVar4) {
    st::fn_004058B2(param_1);
  }
switchD_0058bec9_caseD_0:
  sVar5 = param_1->field_0041;
  param_1->field_0045 = param_1->field_0045 + 0x12;
  sVar7 = param_1->field_0045;
  if (sVar5 < 0) {
    sVar5 = ((sVar5 / 0xc9 + (sVar5 >> 0xf)) - (short)((longlong)(int)sVar5 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar5 = (sVar5 / 0xc9 + (sVar5 >> 0xf)) - (short)((longlong)(int)sVar5 * 0x28c1979 >> 0x3f);
  }
  sVar6 = param_1->field_0043;
  if (sVar6 < 0) {
    sVar6 = ((sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar6 = (sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f);
  }
  if (sVar7 < 0) {
    iVar2 = (short)((sVar7 / 200 + (sVar7 >> 0xf)) -
                   (short)((longlong)(int)sVar7 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    iVar2 = (int)(short)((sVar7 / 200 + (sVar7 >> 0xf)) -
                        (short)((longlong)(int)sVar7 * 0x51eb851f >> 0x3f));
  }
  if (((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) ||
     ((sVar6 < 0 ||
      ((((g_worldGrid.sizeY <= sVar6 || (sVar7 = (short)iVar2, sVar7 < 0)) ||
        (g_worldGrid.sizeZ <= sVar7)) ||
       ((STGridAt3D(g_worldGrid, sVar5, sVar6, sVar7).objects[0] == nullptr ||
        (STGridAt3D(g_worldGrid, sVar5, sVar6, sVar7).objects[0]->value_20 == 400)))))))) {
    if ((5 < iVar2) && ((g_playSystem_00802A38->field_00E4 & 3) == 0)) {
      iVar2 = param_1->field_0239;
      iVar4 = iVar2 + 1;
      param_1->field_0239 = iVar4;
      if (PTR_00806724->entryCount <= iVar4) {
        iVar2 = param_1->field_0231;
        param_1->field_0239 = 0;
        param_1->field_0231 = 1;
        if (iVar2 == 3) {
          st::fn_004021F3(param_1,param_1->field_0249,param_1->field_024D);
        }
        goto cf_common_exit_0058C391;
      }
      st::fn_0040116D
                ((STT3DSprC *)&param_1->field_0x1d5,PTR_00806724[1].entries[iVar2 + -0xc],
                 (int)PTR_00806724->field_002C);
    }
    if ((g_playSystem_00802A38->field_00E4 & 1) == 0) {
      iVar2 = st::fn_004042AF(&param_1->field_0x1d5,'\x0e');
      local_8 = iVar2 + 1;
      if (0x18 < (int)local_8) {
        local_8 = 0x18;
      }
LAB_0058c38c:
      st::fn_00401064((STT3DSprC *)&param_1->field_0x1d5,'\x0e',local_8);
    }
  }
  else {
    puVar1 = &param_1->field_0x1d5;
    param_1->field_0231 = 5;
    st::fn_00404264((STT3DSprC *)puVar1,0xe);
    st::fn_00402A90((STT3DSprC *)puVar1);
    st::fn_00404183((STT3DSprC *)puVar1,8,PTR_00806774,"explsna",0x1d);
    st::fn_00405240((STT3DSprC *)puVar1,8,g_playSystem_00802A38->field_00E4);
    param_1->field_0045 = param_1->field_0045 + 0x12;
    param_1->field_0231 = 6;
  }
cf_common_exit_0058C391:
  st::fn_004030BC((STT3DSprC *)&param_1->field_0x1d5,'\x0e');
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)param_1 + 0xd8))();
  return;
}

// 0058CF60 FUN_0058cf60
#line 4 "decomp/ST.exe/functions/0058CF60/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA97C>00403BF7

   [STObjectFactoryApplier] Central object factory for 0x014D (ST_OBJECT_TYPE_014D).
   Evidence: registry[75] at 007CA978 stores type 0x014D and executable pointer 00403BF7; allocation
   size 667 has no unique current class-layout match */

void * __cdecl st::fn_0058CF60(void)

{
  STSatC *pSVar1;

  pSVar1 = (STSatC *)st::fn_006B04D0(0x29b);
  if (pSVar1 != nullptr) {
    pSVar1 = st::fn_00401ECE(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

// 0058CF90 FUN_0058cf90
#line 4 "decomp/ST.exe/functions/0058CF90/decomp.c"
void __thiscall st::fn_0058CF90(void *this,undefined4 param_1,undefined2 param_2)

{
  STField<undefined2>(this,0x299) = param_2;
  STField<undefined4>(this,0x279) = param_1;
  STField<undefined4>(this,0x24) = param_1;
  return;
}

// 0058CFC0 FUN_0058cfc0
#line 4 "decomp/ST.exe/functions/0058CFC0/decomp.c"
undefined4 st::fn_0058CFC0(void)

{
  return 0xfc;
}

// 0058CFE0 FUN_0058cfe0
#line 4 "decomp/ST.exe/functions/0058CFE0/decomp.c"
undefined4 __cdecl st::fn_0058CFE0(int param_1)

{
  DAT_00811720 = DAT_00811720 + 1;
  PTR_00811718 = st::fn_006ACF50(PTR_00811718,DAT_00811720 * 4);
  PTR_0081171c = st::fn_006ACF50(PTR_0081171c,DAT_00811720 * 4);
  if ((PTR_00811718 != nullptr) &&
     (PTR_0081171c != nullptr)) {
    *(undefined4 *)((int)PTR_00811718 + DAT_00811720 * 4 + -4) = *(undefined4 *)(param_1 + 0x18);
    *(int *)((int)PTR_0081171c + DAT_00811720 * 4 + -4) = param_1;
    return 1;
  }
  return 0;
}

// 0058D080 FUN_0058d080
#line 4 "decomp/ST.exe/functions/0058D080/decomp.c"
undefined4 __cdecl st::fn_0058D080(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;

  iVar5 = DAT_00811720 + -1;
  if (-1 < iVar5) {
    piVar2 = (int *)((int)PTR_00811718 + iVar5 * 4);
    iVar1 = iVar5;
    do {
      if (param_1 == *piVar2) {
        iVar3 = iVar5 - iVar1;
        DAT_00811720 = iVar5;
        if (0 < iVar3) {
          puVar6 = &PTR_00811718->field_0004 + iVar1;
          puVar7 = &PTR_00811718->field_0000 + iVar1;
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          puVar6 = &PTR_0081171c->field_0004 + iVar1;
          puVar7 = &PTR_0081171c->field_0000 + iVar1;
          for (uVar4 = DAT_00811720 - iVar1 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
            *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
        }
        if (DAT_00811720 == 0) {
          st::fn_006AB060(&PTR_00811718);
          PTR_00811718 = nullptr;
          st::fn_006AB060(&PTR_0081171c);
          PTR_0081171c = nullptr;
        }
        return 1;
      }
      iVar1 = iVar1 + -1;
      piVar2 = piVar2 + -1;
    } while (-1 < iVar1);
  }
  return 0;
}

// 0058D160 FUN_0058d160
#line 4 "decomp/ST.exe/functions/0058D160/decomp.c"
undefined4 __cdecl
st::fn_0058D160(short param_1,short param_2,short param_3,short param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9,undefined2 *param_10,undefined2 *param_11,
            short *param_12)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_8;

  iVar3 = param_5;
  local_8 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar6 = ((param_8 - param_6 >> 1) + (int)*(short *)(param_5 + 0x41)) - param_6;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar8 = ((param_9 - param_7 >> 1) + (int)*(short *)(param_5 + 0x43)) - param_7;
  do {
    iVar7 = iVar6;
    iVar9 = iVar8;
    if (local_8 != 0) {
      iVar7 = param_6;
      iVar9 = param_7;
    }
    iVar6 = iVar7;
    if (iVar7 < 0) {
      iVar6 = -iVar7;
    }
    iVar8 = iVar9;
    if (iVar9 < 0) {
      iVar8 = -iVar9;
    }
    if (iVar8 < iVar6) {
      while( true ) {
        while (-1 < iVar7) {
          iVar6 = *(short *)(iVar3 + 0x41) + 0xc9;
          if (iVar6 <= (short)(param_3 * 0xc9 + 100)) goto LAB_0058d1fe;
          iVar7 = -1;
        }
        iVar6 = *(short *)(iVar3 + 0x41) + -0xc9;
        if ((short)(param_1 * 0xc9 + 100) <= iVar6) break;
        iVar7 = 1;
      }
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
LAB_0058d1fe:
      param_6 = 0;
      iVar8 = (int)*(short *)(iVar3 + 0x43);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_7 = iVar9;
    }
    else {
      while( true ) {
        while (-1 < iVar9) {
          iVar8 = *(short *)(iVar3 + 0x43) + 0xc9;
          if (iVar8 <= (short)(param_4 * 0xc9 + 100)) goto LAB_0058d252;
          iVar9 = -1;
        }
        iVar8 = *(short *)(iVar3 + 0x43) + -0xc9;
        if ((short)(param_2 * 0xc9 + 100) <= iVar8) break;
        iVar9 = 1;
      }
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
LAB_0058d252:
      param_7 = 0;
      iVar6 = (int)*(short *)(iVar3 + 0x41);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_6 = iVar7;
    }
    sVar1 = *(short *)(iVar3 + 0x45);
    if (sVar1 < 0) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_5 = (short)((sVar1 / 200 + (sVar1 >> 0xf)) -
                       (short)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_5 = (int)(short)((sVar1 / 200 + (sVar1 >> 0xf)) -
                            (short)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f));
    }
    sVar1 = (short)(iVar8 >> 0x1f);
    if (iVar8 < 0) {
      sVar4 = (((short)(iVar8 / 0xc9) + sVar1) - (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      sVar4 = ((short)(iVar8 / 0xc9) + sVar1) - (short)((longlong)iVar8 * 0x28c1979 >> 0x3f);
    }
    sVar2 = (short)(iVar6 >> 0x1f);
    if (iVar6 < 0) {
      sVar5 = (((short)(iVar6 / 0xc9) + sVar2) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      sVar5 = ((short)(iVar6 / 0xc9) + sVar2) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f);
    }
    iVar7 = st::fn_00404D3B(sVar5,sVar4,(short)param_5);
    if (iVar7 != 0) goto LAB_0058d3a9;
    local_8 = local_8 + 1;
  } while (local_8 < 2);
  local_8 = 0;
  while( true ) {
    if (iVar8 < 0) {
      sVar4 = (((short)(iVar8 / 0xc9) + sVar1) - (short)((longlong)iVar8 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      sVar4 = ((short)(iVar8 / 0xc9) + sVar1) - (short)((longlong)iVar8 * 0x28c1979 >> 0x3f);
    }
    if (iVar6 < 0) {
      sVar5 = (((short)(iVar6 / 0xc9) + sVar2) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      sVar5 = ((short)(iVar6 / 0xc9) + sVar2) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f);
    }
    iVar3 = st::fn_00404D3B(sVar5,sVar4,(short)param_5);
    if (iVar3 != 0) break;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_5 = (param_5 + 1) % 5;
    local_8 = local_8 + 1;
    if (4 < local_8) {
      return 0;
    }
  }
LAB_0058d3a9:
  *param_10 = (short)iVar6;
  *param_11 = (short)iVar8;
  *param_12 = (short)param_5 * 200 + 100;
  return 1;
}

// 0058D480 FUN_0058d480
#line 4 "decomp/ST.exe/functions/0058D480/decomp.c"
int __cdecl st::fn_0058D480(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_8;

  local_8 = 0;
  iVar4 = param_1 - param_3;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  iVar6 = param_2 - param_3;
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  iVar5 = param_1 + param_3;
  if (g_worldGrid.sizeX <= iVar5) {
    iVar5 = g_worldGrid.sizeX + -1;
  }
  iVar3 = param_3 + param_2;
  if (g_worldGrid.sizeY <= iVar3) {
    iVar3 = g_worldGrid.sizeY + -1;
  }
  iVar2 = DAT_00811720;
  while( true ) {
    do {
      iVar2 = iVar2 + -1;
      if (iVar2 < 0) {
        return local_8;
      }
      iVar1 = (&PTR_0081171c->field_0000)[iVar2];
    } while (((((int)*(short *)(iVar1 + 0x41) < iVar4 * 0xc9) ||
              (iVar5 * 0xc9 < (int)*(short *)(iVar1 + 0x41))) ||
             ((int)*(short *)(iVar1 + 0x43) < iVar6 * 0xc9)) ||
            (iVar3 * 0xc9 < (int)*(short *)(iVar1 + 0x43)));
    if (param_5 == 1) break;
    if (param_5 != 0) goto LAB_0058d54d;
    if ((*(int *)(iVar1 + 0x20) == 0x32) || (*(int *)(iVar1 + 0x20) == 0x8c)) {
      (*g_playSystem_00802A38->vtable->SendMessage)
                ((SystemWithNamedObjClassTy *)g_playSystem_00802A38,param_4);
LAB_0058d559:
      local_8 = local_8 + 1;
    }
  }
  if ((*(int *)(iVar1 + 0x20) == 0x10e) || (*(int *)(iVar1 + 0x20) == 0x118)) {
    (*g_playSystem_00802A38->vtable->SendMessage)
              ((SystemWithNamedObjClassTy *)g_playSystem_00802A38,param_4);
    local_8 = local_8 + 1;
  }
LAB_0058d54d:
  (*g_playSystem_00802A38->vtable->SendMessage)
            ((SystemWithNamedObjClassTy *)g_playSystem_00802A38,param_4);
  goto LAB_0058d559;
}

// 0058D5E0 FUN_0058d5e0
#line 4 "decomp/ST.exe/functions/0058D5E0/decomp.c"
int __cdecl
st::fn_0058D5E0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;

  iVar3 = 0;
  iVar2 = DAT_00811720 + -1;
  if (iVar2 < 0) {
    return 0;
  }
  do {
    puVar1 = (undefined4 *)(&PTR_0081171c->field_0000)[iVar2];
    if ((((param_1 * 0xc9 <= (int)STField<short>(puVar1,0x41)) &&
         ((int)STField<short>(puVar1,0x41) <= param_3 * 0xc9)) &&
        (param_2 * 0xc9 <= (int)STField<short>(puVar1,0x43))) &&
       ((int)STField<short>(puVar1,0x43) <= param_4 * 0xc9)) {
      if (param_6 == 1) {
        if ((puVar1[8] == 0x10e) || (puVar1[8] == 0x118)) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)*puVar1)(param_5);
          iVar3 = iVar3 + 1;
        }
      }
      else if (((param_6 == 0) && (puVar1[8] != 0x32)) && (puVar1[8] != 0x8c)) goto LAB_0058d697;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)*puVar1)(param_5);
      iVar3 = iVar3 + 1;
    }
LAB_0058d697:
    iVar2 = iVar2 + -1;
    if (iVar2 < 0) {
      return iVar3;
    }
  } while( true );
}

// 0058D6F0 FUN_0058d6f0
#line 4 "decomp/ST.exe/functions/0058D6F0/decomp.c"
undefined4 st::fn_0058D6F0(void)

{
  PTR_00811718 = nullptr;
  DAT_00811720 = 0;
  return 1;
}

// 0058D720 FUN_0058d720
#line 1 "decomp/ST.exe/functions/0058D720/decomp.c"

void st::fn_0058D720(void)

{
  if (PTR_00811718 != nullptr) {
    st::fn_006AB060(&PTR_00811718);
  }
  DAT_00811720 = 0;
  return;
}

// 0058E410 CreateSTShark
#line 4 "decomp/ST.exe/functions/0058E410/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA8E4>00404A98

   [STObjectFactoryApplier] Central object factory for 0x0129 (ST_OBJECT_ST_SHARK).
   Evidence: registry[56] at 007CA8E0 stores type 0x0129 and executable pointer 00404A98; allocation
   size 655 uniquely matches /STSharkC */

STSharkC * __cdecl st::fn_0058E410(void)

{
  STSharkC *pSVar1;

  pSVar1 = (STSharkC *)st::fn_006B04D0(0x28f);
  if (pSVar1 != nullptr) {
    pSVar1 = st::fn_00403CE2(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

// 0058E440 FUN_0058e440
#line 4 "decomp/ST.exe/functions/0058E440/decomp.c"
undefined4 __thiscall
st::fn_0058E440(void *this,short param_1,short param_2,short param_3,short param_4,short param_5,
            short param_6)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;

  sVar1 = STField<short>(this,0x45) + -0xc;
  sVar4 = STField<short>(this,0x45) + 0xc;
  sVar6 = STField<short>(this,0x41) + -0x1c;
  sVar2 = STField<short>(this,0x43) + -0xc;
  sVar3 = STField<short>(this,0x41) + 0x1c;
  sVar5 = STField<short>(this,0x43) + 0xc;
  if ((((((sVar6 <= param_1) && (param_1 <= sVar3)) || ((sVar6 <= param_4 && (param_4 <= sVar3))))
       || ((param_1 <= sVar6 && (sVar3 <= param_4)))) &&
      (((sVar2 <= param_2 && (param_2 <= sVar5)) ||
       (((sVar2 <= param_5 && (param_5 <= sVar5)) || ((param_2 <= sVar2 && (sVar5 <= param_5))))))))
     && ((((sVar1 <= param_3 && (param_3 <= sVar4)) || ((sVar1 <= param_6 && (param_6 <= sVar4))))
         || ((param_3 <= sVar1 && (sVar4 <= param_6)))))) {
    return 0;
  }
  return 0xffffffff;
}

// 0058E530 FUN_0058e530
#line 4 "decomp/ST.exe/functions/0058E530/decomp.c"
undefined4 __thiscall
st::fn_0058E530(void *this,undefined4 param_1,undefined2 *param_2,undefined2 *param_3,
            undefined2 *param_4,undefined4 *param_5)

{
  *param_2 = STField<undefined2>(this,0x41);
  *param_3 = STField<undefined2>(this,0x43);
  *param_4 = STField<undefined2>(this,0x45);
  *param_5 = 0;
  return 0;
}

// 0058EEB0 FUN_0058eeb0
#line 4 "decomp/ST.exe/functions/0058EEB0/decomp.c"
void __fastcall st::fn_0058EEB0(AnonShape_0058EEB0_904026FD *param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = g_worldGrid.sizeX + -1;
  iVar2 = g_worldGrid.sizeY + -1;
  if (((((int)param_1->field_027F < 0) || (param_1->field_0287 < 0)) ||
      ((int)param_1->field_0283 < 0)) ||
     (((param_1->field_028B < 0 || (iVar1 < (int)param_1->field_027F)) ||
      ((iVar1 < param_1->field_0287 ||
       ((iVar2 < (int)param_1->field_0283 || (iVar2 < param_1->field_028B)))))))) {
    param_1->field_027F = 0;
    param_1->field_0287 = iVar1;
    param_1->field_0283 = 0;
    param_1->field_028B = iVar2;
  }
  if (param_1->field_0287 <= (int)param_1->field_027F) {
    param_1->field_027F = 0;
    param_1->field_0287 = iVar1;
  }
  if (param_1->field_028B <= (int)param_1->field_0283) {
    param_1->field_0283 = 0;
    param_1->field_028B = iVar2;
  }
  if ((((iVar1 < param_1->field_026F) || (param_1->field_026F < 0)) || (iVar2 < param_1->field_0273)
      ) || (param_1->field_0273 < 0)) {
    param_1->field_026F = iVar1 >> 1;
    param_1->field_0273 = iVar2 >> 1;
  }
  if (((int)param_1->field_0277 < 0) || (4 < (int)param_1->field_0277)) {
    param_1->field_0277 = 2;
  }
  return;
}

// 0058F030 FUN_0058f030
#line 4 "decomp/ST.exe/functions/0058F030/decomp.c"
undefined4 __fastcall st::fn_0058F030(AnonShape_0058F030_ED0F322F *param_1)

{
  int uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  short local_10 [2];
  short local_c [2];
  short local_8 [2];

  uVar1 = st::fn_006DB910((int)param_1->field_0047,(int)param_1->field_0049,(int)param_1->field_0231,
                       (int)param_1->field_0233);
  uVar2 = st::fn_006DB990(uVar1,8);
  uVar3 = param_1->field_001C * 0x41c64e6d + 0x3039;
  param_1->field_001C = uVar3;
  uVar3 = uVar3 >> 0x10;
  piVar10 = (int *)local_8;
  piVar9 = (int *)local_c;
  iVar6 = (int)param_1->field_0049;
  iVar7 = (int)param_1->field_0047;
  piVar8 = (int *)local_10;
  iVar4 = (int)param_1->field_004B;
  iVar5 = st::fn_006ACF90(iVar7,iVar6,(int)param_1->field_0231,(int)param_1->field_0233);
  iVar4 = st::fn_0040244B(uVar2,(int)param_1->field_0235 - (int)param_1->field_004B,iVar5,iVar7,
                             iVar6,iVar4,piVar8,piVar9,piVar10,uVar3);
  if (iVar4 == 0) {
    st::fn_00405C90(param_1,8);
    st::fn_00405105(param_1,6);
    iVar4 = st::fn_00404318
                      ((AnonReceiver_004167A0 *)param_1,param_1->field_0231,param_1->field_0233,
                       param_1->field_0235);
    if (iVar4 == 0) {
      return 1;
    }
  }
  else {
    st::fn_00405C90(param_1,8);
    st::fn_00405105(param_1,6);
    iVar4 = st::fn_00404318
                      ((AnonReceiver_004167A0 *)param_1,local_10[0],local_c[0],local_8[0]);
    if (iVar4 == 0) {
      return 1;
    }
    iVar4 = st::fn_00404318
                      ((AnonReceiver_004167A0 *)param_1,param_1->field_0231,param_1->field_0233,
                       param_1->field_0235);
    if (iVar4 == 0) {
      return 1;
    }
  }
  param_1->field_0253 = 0x1f;
  return 0;
}

// 0058F1E0 FUN_0058f1e0
#line 4 "decomp/ST.exe/functions/0058F1E0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0058F1E0 returns stored into /STSharkC+0x257 @ 0058EBA1 | 0058F1E0 returns stored into
   /STSharkC+0x257 @ 0058EBEB */

STSharkC_field_0257State __thiscall st::fn_0058F1E0(void *this,int param_1)

{
  short sVar1;
  STSharkC_field_0257State SVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;

  sVar5 = STField<short>(this,0x47);
  if ((STField<int>(this,0x27f) <= (int)sVar5) && ((int)sVar5 <= STField<int>(this,0x287))) {
    sVar1 = STField<short>(this,0x49);
    if ((STField<int>(this,0x283) <= (int)sVar1) && ((int)sVar1 <= STField<int>(this,0x28b)))
    {
      if ((((sVar5 == STField<short>(this,0x231)) && (sVar1 == STField<short>(this,0x233))) &&
          (STField<short>(this,0x4b) == STField<short>(this,0x235))) || (param_1 != 0)) {
        SVar2 = st::fn_0040194C(this,(undefined2 *)((int)this + 0x231),
                                   (undefined2 *)((int)this + 0x233),
                                   (undefined2 *)((int)this + 0x235),(short *)((int)this + 0x237));
        if (SVar2 == CASE_2) {
          STField<undefined4>(this,0x253) = 0;
        }
      }
      else {
        SVar2 = CASE_2;
      }
      goto LAB_0058f34a;
    }
  }
  iVar6 = STField<int>(this,0x287) - STField<int>(this,0x27f);
  uVar7 = (int)(iVar6 - 1U) >> 0x1f;
  uVar3 = (STField<int>(this,0x28b) - STField<int>(this,0x283)) - 1;
  uVar8 = (int)uVar3 >> 0x1f;
  if (iVar6 < 1) {
    sVar5 = -(ushort)(iVar6 != 0);
  }
  else {
    sVar5 = 1;
  }
  uVar4 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
  STField<uint>(this,0x1c) = uVar4;
  STField<short>(this,0x231) =
       (short)((uVar4 >> 0x10) % (((iVar6 - 1U ^ uVar7) - uVar7) + 1)) * sVar5 +
       STField<short>(this,0x27f);
  if (STField<int>(this,0x28b) - STField<int>(this,0x283) < 1) {
    iVar6 = -(uint)(STField<int>(this,0x28b) != STField<int>(this,0x283));
  }
  else {
    iVar6 = 1;
  }
  SVar2 = CASE_3;
  uVar7 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
  STField<uint>(this,0x1c) = uVar7;
  STField<undefined2>(this,0x235) = STField<undefined2>(this,0x4b);
  STField<short>(this,0x233) =
       (short)(((uVar7 >> 0x10) % (((uVar3 ^ uVar8) - uVar8) + 1)) * iVar6) +
       STField<short>(this,0x283);
LAB_0058f34a:
  switch(SVar2) {
  case CASE_1:
  case CASE_2:
  case CASE_3:
    iVar6 = st::fn_00404F3E(this);
    if (iVar6 == 0) {
      return CASE_0;
    }
    break;
  case CASE_6:
    iVar6 = st::fn_004021E9(this,STField<short>(this,0x6c),STField<short>(this,0x237));
    if (iVar6 != 0) {
      SVar2 = CASE_0;
    }
  }
  return SVar2;
}

// 0058F680 FUN_0058f680
#line 4 "decomp/ST.exe/functions/0058F680/decomp.c"
int __thiscall
st::fn_0058F680(void *this,undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  short sVar11;
  short sVar12;
  int local_1c;
  int local_18;
  int local_14;
  int local_8;

  uVar8 = 0;
  uVar6 = 0;
  local_1c = st::fn_0040259A(this);
  if (STField<int>(this,0x23d) != 0) {
    return local_1c;
  }
  iVar3 = (int)STField<short>(this,0x47);
  if ((((iVar3 <= STField<int>(this,0x27f)) &&
       (((sVar4 = STField<short>(this,0x6c), sVar4 == 0xe1 || (sVar4 == 0xb4)) || (sVar4 == 0x87)
        ))) || ((STField<int>(this,0x287) <= iVar3 &&
                (((sVar4 = STField<short>(this,0x6c), sVar4 == 0x2d || (sVar4 == 0)) ||
                 (sVar4 == 0x13b)))))) ||
     (((iVar5 = (int)STField<short>(this,0x49), iVar5 <= STField<int>(this,0x283) &&
       (((sVar4 = STField<short>(this,0x6c), sVar4 == 0x87 || (sVar4 == 0x5a)) || (sVar4 == 0x2d)
        ))) || ((STField<int>(this,0x28b) <= iVar5 &&
                (((sVar4 = STField<short>(this,0x6c), sVar4 == 0xe1 || (sVar4 == 0x10e)) ||
                 (sVar4 == 0x13b)))))))) {
    sVar4 = (short)((sVar4 + 0x2d) % 0x168);
    *param_4 = sVar4;
    while (sVar4 < 0) {
      *param_4 = *param_4 + 0x168;
      sVar4 = *param_4;
    }
    return 6;
  }
  local_18 = iVar3 + -1;
  if (iVar3 + -1 < STField<int>(this,0x27f)) {
    local_18 = STField<int>(this,0x27f);
  }
  local_14 = iVar5 + -1;
  if (iVar5 + -1 < STField<int>(this,0x283)) {
    local_14 = STField<int>(this,0x283);
  }
  iVar3 = STField<short>(this,0x47) + 1;
  if (STField<int>(this,0x287) < iVar3) {
    iVar3 = STField<int>(this,0x287);
  }
  local_8 = iVar5 + 1;
  if (STField<int>(this,0x28b) < iVar5 + 1) {
    local_8 = STField<int>(this,0x28b);
  }
  do {
    iVar5 = (int)((ulonglong)((longlong)(int)STField<short>(this,0x6c) * -0x49f49f49) >> 0x20) +
            (int)STField<short>(this,0x6c);
    switch((iVar5 >> 5) - (iVar5 >> 0x1f)) {
    case 0:
      if (iVar3 < 0) {
        iVar5 = STField<int>(this,0x1c);
      }
      else {
        iVar5 = STField<int>(this,0x1c);
      }
      uVar6 = iVar5 * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar6;
      uVar8 = (uVar6 >> 0x10) % ((STField<int>(this,0x287) - iVar3) + 1U) + iVar3;
      iVar5 = uVar8 - (int)STField<short>(this,0x47);
      iVar2 = STField<short>(this,0x49) - iVar5;
      if (iVar2 < 0) {
        iVar1 = STField<int>(this,0x1c);
      }
      else {
        iVar1 = STField<int>(this,0x1c);
      }
      uVar6 = iVar1 * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar6;
      uVar6 = (uVar6 >> 0x10) % (((STField<short>(this,0x49) + iVar5) - iVar2) + 1U) + iVar2;
      break;
    case 1:
      uVar6 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar6;
      uVar6 = (uVar6 >> 0x10) % (local_14 + 1U);
      goto LAB_0058fb0d;
    case 2:
      uVar6 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar6;
      uVar6 = (uVar6 >> 0x10) % (local_14 + 1U);
      iVar2 = (int)STField<short>(this,0x49) - uVar6;
      iVar5 = STField<short>(this,0x47) + iVar2;
      iVar2 = STField<short>(this,0x47) - iVar2;
      if (iVar2 < 0) {
        uVar8 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar8;
        uVar8 = (uVar8 >> 0x10) % ((iVar5 - iVar2) + 1U) + iVar2;
      }
      else {
        uVar8 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar8;
        uVar8 = (uVar8 >> 0x10) % ((iVar5 - iVar2) + 1U) + iVar2;
      }
      break;
    case 3:
      uVar6 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar6;
      uVar8 = (uVar6 >> 0x10) % (local_18 + 1U);
      uVar6 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar6;
      uVar6 = (uVar6 >> 0x10) % (local_14 + 1U);
      break;
    case 4:
      uVar6 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar6;
      uVar8 = (uVar6 >> 0x10) % (local_18 + 1U);
      iVar2 = (int)STField<short>(this,0x47) - uVar8;
      iVar5 = STField<short>(this,0x49) + iVar2;
      iVar2 = STField<short>(this,0x49) - iVar2;
      if (iVar2 < 0) {
        uVar6 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar6;
        uVar6 = (uVar6 >> 0x10) % ((iVar5 - iVar2) + 1U) + iVar2;
      }
      else {
        uVar6 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar6;
        uVar6 = (uVar6 >> 0x10) % ((iVar5 - iVar2) + 1U) + iVar2;
      }
      break;
    case 5:
      if (local_8 < 0) {
        iVar5 = STField<int>(this,0x1c);
      }
      else {
        iVar5 = STField<int>(this,0x1c);
      }
      uVar6 = iVar5 * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar6;
      uVar6 = (uVar6 >> 0x10) % ((STField<int>(this,0x28b) - local_8) + 1U) + local_8;
      uVar8 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar8;
      uVar8 = (uVar8 >> 0x10) % (local_18 + 1U);
      break;
    case 6:
      if (local_8 < 0) {
        iVar5 = STField<int>(this,0x1c);
      }
      else {
        iVar5 = STField<int>(this,0x1c);
      }
      uVar6 = iVar5 * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar6;
      uVar6 = (uVar6 >> 0x10) % ((STField<int>(this,0x28b) - local_8) + 1U) + local_8;
      iVar5 = uVar6 - (int)STField<short>(this,0x49);
      iVar2 = STField<short>(this,0x47) - iVar5;
      if (iVar2 < 0) {
        iVar1 = STField<int>(this,0x1c);
      }
      else {
        iVar1 = STField<int>(this,0x1c);
      }
      uVar8 = iVar1 * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar8;
      uVar8 = (uVar8 >> 0x10) % (((STField<short>(this,0x47) + iVar5) - iVar2) + 1U) + iVar2;
      break;
    case 7:
      if (local_8 < 0) {
        iVar5 = STField<int>(this,0x1c);
      }
      else {
        iVar5 = STField<int>(this,0x1c);
      }
      uVar6 = iVar5 * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar6;
      uVar6 = (uVar6 >> 0x10) % ((STField<int>(this,0x28b) - local_8) + 1U) + local_8;
LAB_0058fb0d:
      if (iVar3 < 0) {
        iVar5 = STField<int>(this,0x1c);
      }
      else {
        iVar5 = STField<int>(this,0x1c);
      }
      uVar8 = iVar5 * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar8;
      uVar8 = (uVar8 >> 0x10) % ((STField<int>(this,0x287) - iVar3) + 1U) + iVar3;
    }
    if ((uVar8 != (int)STField<short>(this,0x47)) || (uVar6 != (int)STField<short>(this,0x49))
       ) {
      if ((int)uVar8 < 0) {
        uVar8 = 0;
      }
      if ((int)STField<uint>(this,0x287) < (int)uVar8) {
        uVar8 = STField<uint>(this,0x287);
      }
      if ((int)uVar6 < 0) {
        uVar6 = 0;
      }
      if ((int)STField<uint>(this,0x28b) < (int)uVar6) {
        uVar6 = STField<uint>(this,0x28b);
      }
      uVar7 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar7;
      iVar3 = STField<short>(this,0x4b) + -2 + (uVar7 >> 0x10) % 5;
      if (iVar3 < 5) {
        if (iVar3 < 0) {
          iVar3 = 0;
        }
      }
      else {
        iVar3 = 4;
      }
      iVar5 = iVar3 + 5;
      if (iVar3 < iVar5) {
        local_1c = 2;
        iVar2 = iVar3;
        do {
          uVar7 = uVar6;
          uVar9 = uVar8;
          iVar3 = iVar2;
          if (4 < iVar2) {
            iVar3 = iVar2 + -5;
          }
          do {
            while( true ) {
              while( true ) {
                while( true ) {
                  sVar4 = (short)uVar9;
                  sVar11 = (short)uVar7;
                  sVar12 = (short)iVar3;
                  iVar1 = st::fn_00404D3B(sVar4,sVar11,sVar12);
                  if (((iVar1 != 0) &&
                      (((sVar4 < 0 || (g_worldGrid.sizeX <= sVar4)) ||
                       ((sVar11 < 0 ||
                        ((((g_worldGrid.sizeY <= sVar11 || (sVar12 < 0)) ||
                          (g_worldGrid.sizeZ <= sVar12)) ||
                         (STGridAt3D(g_worldGrid, sVar4, sVar11, sVar12).objects[0] ==
                          nullptr)))))))) &&
                     (((sVar4 < 0 || (g_worldGrid.sizeX <= sVar4)) ||
                      ((sVar11 < 0 ||
                       (((g_worldGrid.sizeY <= sVar11 || (sVar12 < 0)) ||
                        ((g_worldGrid.sizeZ <= sVar12 ||
                         (STGridAt3D(g_worldGrid, sVar4, sVar11, sVar12).objects[1] ==
                          nullptr)))))))))) goto LAB_0058fd1a;
                  bVar10 = (int)(uVar9 - (int)STField<short>(this,0x47)) < 0;
                  if (uVar9 == (int)STField<short>(this,0x47) || bVar10) break;
                  uVar9 = uVar9 - 1;
                  if ((int)uVar9 < 0) goto LAB_0058fcfe;
                }
                if (!bVar10) break;
                uVar9 = uVar9 + 1;
              }
              bVar10 = -1 < (int)(uVar7 - (int)STField<short>(this,0x49));
              if (uVar7 != (int)STField<short>(this,0x49) && bVar10) break;
              if (bVar10) goto LAB_0058fcfe;
              uVar7 = uVar7 + 1;
            }
            uVar7 = uVar7 - 1;
          } while (-1 < (int)uVar7);
LAB_0058fcfe:
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar5);
      }
      else {
        uVar7 = uVar6;
        uVar9 = uVar8;
        if (local_1c != 0) {
LAB_0058fd1a:
          *param_1 = (short)uVar9;
          *param_2 = (short)uVar7;
          *param_3 = (short)iVar3;
          return local_1c;
        }
      }
      sVar4 = (short)((STField<short>(this,0x6c) + 0x2d) % 0x168);
      *param_4 = sVar4;
      while (sVar4 < 0) {
        *param_4 = *param_4 + 0x168;
        sVar4 = *param_4;
      }
      return 6;
    }
  } while( true );
}

