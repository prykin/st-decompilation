#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/004C.cpp

// 004C21A0 FUN_004c21a0
#line 4 "decomp/ST.exe/functions/004C21A0/decomp.c"
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004C21A0_param_1Enum. Cases:
   CASE_0=0;CASE_2=2;CASE_3=3;CASE_E=14;CASE_17=23;CASE_19=25;CASE_1A=26;CASE_26=38;CASE_2A=42;CASE_34=52;CASE_37=55;CASE_42=66;CASE_43=67
    */

undefined4 __thiscall
st::fn_004C21A0(void *this,Global_sub_004C21A0_param_1Enum param_1,int *param_2,float param_3,
            int param_4)

{
  AnonShape_004C21A0_FDE833A6 *pAVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  longlong lVar6;
  float local_c;
  AnonShape_004C21A0_FDE833A6 *local_8;

  sVar4 = 0;
  local_8 = this;
  st::fn_006E1C20
            (STField<ST3DSMAPContext *>(this,0x211),param_3,param_4,0.0,&param_3,&local_c);
  if (param_3 < _DAT_0079034c) {
    lVar6 = st::fn_0072E288();
    iVar5 = (short)lVar6 + -1;
  }
  else {
    lVar6 = st::fn_0072E288();
    iVar5 = (int)(short)lVar6;
  }
  if (local_c < _DAT_0079034c) {
    lVar6 = st::fn_0072E288();
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = (short)lVar6 + -1;
  }
  else {
    lVar6 = st::fn_0072E288();
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = (int)(short)lVar6;
  }
  pAVar1 = local_8;
  if ((STField<byte>(this,0x1d1) & 4) != 0) {
    sVar4 = 0;
    if (param_2 == this) {
      sVar4 = 4;
    }
    if ((param_2 == nullptr) || (param_2[9] != *(int *)&local_8->field_0x24))
    goto cf_common_exit_004C261B;
    iVar5 = param_2[8];
    if (iVar5 == 0x14) {
      iVar5 = *param_2;
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_004c2260:
      iVar5 = (**(code **)(iVar5 + 0xec))();
      if (iVar5 != 0) {
        sVar4 = 3;
      }
      goto cf_common_exit_004C261B;
    }
    if ((iVar5 != 1000) && (iVar5 != 0x3e9)) goto cf_common_exit_004C261B;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar5 = (**(code **)(*param_2 + 0xec))();
joined_r0x004c2294:
    if (iVar5 == 0) goto cf_common_exit_004C261B;
LAB_004c2616:
    sVar4 = 4;
    goto cf_common_exit_004C261B;
  }
  switch(param_1) {
  case CASE_0:
    if ((AnonShape_004C21A0_FDE833A6 *)param_2 != local_8) {
      if (param_2 == nullptr) {
        if (local_8->field_0245 == 4) {
          if ((((-1 < iVar5) && (iVar5 < g_worldGrid.sizeX)) && (-1 < param_4)) &&
             (param_4 < g_worldGrid.sizeY)) {
            sVar4 = 5;
          }
          break;
        }
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      else if (((local_8->field_0245 == 4) &&
               ((iVar3 = (**(code **)(*param_2 + 0x2c))(), iVar3 == 0x37 ||
                (iVar3 = (**(code **)(*param_2 + 0x2c))(), iVar3 == 0x6c)))) &&
              (iVar3 = st::fn_00401EAB(param_2,*(uint *)&local_8->field_0x24), iVar3 != 0)) {
        sVar4 = 0x1d;
        break;
      }
      if ((((-1 < iVar5) && (iVar5 < g_worldGrid.sizeX)) &&
          ((-1 < param_4 &&
           ((param_4 < g_worldGrid.sizeY &&
            (uVar2 = st::fn_004012C1(local_8,0,param_2,iVar5,param_4,0,0,1), uVar2 != 0)))))) &&
         ((iVar5 = (&DAT_00792ca0)[local_8->field_0235 * 6], iVar5 != 0xa8 &&
          ((iVar5 != 0xa3 && (iVar5 != 0xbe)))))) {
        sVar4 = 7;
        break;
      }
      if ((param_2 == nullptr) || (param_2[9] != *(int *)&local_8->field_0x24)) break;
      iVar5 = param_2[8];
      if (iVar5 == 0x14) {
        iVar5 = *param_2;
        sVar4 = 0;
        goto LAB_004c2260;
      }
      if ((iVar5 != 1000) && (iVar5 != 0x3e9)) break;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar5 = (**(code **)(*param_2 + 0xec))();
      goto joined_r0x004c2294;
    }
    goto LAB_004c2616;
  case CASE_2:
    goto joined_r0x004c231f;
  case CASE_3:
  case CASE_19:
  case CASE_1A:
  case CASE_34:
    if ((AnonShape_004C21A0_FDE833A6 *)param_2 == local_8) {
      sVar4 = 0;
    }
    else if ((((-1 < iVar5) && (iVar5 < g_worldGrid.sizeX)) && (-1 < param_4)) &&
            (param_4 < g_worldGrid.sizeY)) {
      uVar2 = st::fn_004012C1(local_8,0,param_2,iVar5,param_4,0,0,0);
      sVar4 = (-(ushort)(uVar2 != 0) & 6) + 1;
    }
    break;
  case CASE_E:
    sVar4 = 0x15;
    if ((g_tLOBldMark_007FB2AC != nullptr) && (g_tLOBldMark_007FB2AC->field_0024 != 0)) {
      sVar4 = 0x14;
    }
    break;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  case CASE_17:
    if (((param_2 != nullptr) && (local_8->field_0245 == 4)) &&
       (((iVar5 = (**(code **)(*param_2 + 0x2c))(), iVar5 == 0x37 ||
         (iVar5 = (**(code **)(*param_2 + 0x2c))(), iVar5 == 0x6c)) &&
        (iVar5 = st::fn_00401EAB(param_2,*(uint *)&pAVar1->field_0x24), iVar5 != 0)))) {
      sVar4 = 0x1d;
      break;
    }
    goto cf_common_exit_004C2352;
  case CASE_26:
  case CASE_37:
joined_r0x004c231f:
    if (param_2 == nullptr) {
      sVar4 = 6;
      break;
    }
    if (((iVar5 < 0) || (g_worldGrid.sizeX <= iVar5)) ||
       ((param_4 < 0 || (g_worldGrid.sizeY <= param_4)))) break;
    goto cf_common_exit_004C2352;
  case CASE_2A:
  case CASE_43:
    if (((((-1 < iVar5) && (iVar5 < g_worldGrid.sizeX)) &&
         ((-1 < param_4 &&
          ((param_4 < g_worldGrid.sizeY && (g_visibleClass_00802A88 != nullptr))))))
        && (0x27 < *(int *)&local_8[2].field_0x3c)) &&
       (iVar5 = st::fn_004040A7
                          (g_visibleClass_00802A88,iVar5,param_4,2,*(uint *)&local_8->field_0x24,7),
       iVar5 == 0)) {
      sVar4 = 0x19;
    }
    break;
  case CASE_42:
    if ((((param_2 != nullptr) && (param_2[9] == *(int *)&local_8->field_0x24)) &&
        (param_2[8] == 1000)) && (iVar5 = st::fn_004052E0(local_8,(int)param_2), iVar5 != 0)) {
      sVar4 = 0x1f;
      break;
    }
cf_common_exit_004C2352:
    sVar4 = 1;
  }
cf_common_exit_004C261B:
  if (((*(int *)&local_8[1].field_0x1d4 != 0) && (sVar4 != 4)) && (sVar4 != 3)) {
    return 0;
  }
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  return CONCAT22((short)((uint)*(int *)&local_8[1].field_0x1d4 >> 0x10),sVar4);
}

// 004C2810 FUN_004c2810
#line 4 "decomp/ST.exe/functions/004C2810/decomp.c"
undefined4 __fastcall st::fn_004C2810(int param_1)

{
  undefined4 uVar1;

  uVar1 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x265) != 0) {
    uVar1 = 100;
  }
  return uVar1;
}

// 004C2840 FUN_004c2840
#line 4 "decomp/ST.exe/functions/004C2840/decomp.c"
void __thiscall st::fn_004C2840(void *this,undefined4 *param_1)

{
  byte bVar1;

  *param_1 = STField<undefined4>(this,0x18);
  param_1[1] = STField<undefined4>(this,0x5ac);
  bVar1 = st::fn_004049B7(STField<char>(this,0x23d));
  *(byte *)(param_1 + 2) = bVar1;
  st::fn_0072E340((char *)((int)param_1 + 9),(char *)((int)this + 0x5c4),0xe);
  return;
}

// 004C28B0 FUN_004c28b0
#line 4 "decomp/ST.exe/functions/004C28B0/decomp.c"
void __thiscall st::fn_004C28B0(void *this,undefined4 *param_1)

{
  byte bVar1;

  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  STField<undefined1>(param_1,10) = 0;
  *(undefined1 *)param_1 = 1;
  bVar1 = st::fn_004049B7(STField<char>(this,0x23d));
  STField<byte>(param_1,6) = bVar1;
  switch(STField<undefined4>(this,0x245)) {
  case 0:
  case 1:
  case 2:
  case 5:
  case 6:
    STField<undefined1>(param_1,1) = 0;
    break;
  case 3:
  case 4:
    STField<undefined1>(param_1,1) = 1;
  }
  STField<undefined4>(param_1,2) = STField<undefined4>(this,0x5ac);
  STField<undefined4>(param_1,7) = STField<undefined4>(this,0x18);
  return;
}

// 004C2950 FUN_004c2950
#line 4 "decomp/ST.exe/functions/004C2950/decomp.c"
/* [STSwitchEnumApplier] Switch target param_3 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004C2950_param_3Enum. Cases:
   CASE_8=8;CASE_9=9;CASE_C=12;CASE_D=13;CASE_E=14

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 0044C130 -> 004C2950 @ 0044C2EA */

void __cdecl
st::fn_004C2950(int param_1,int param_2,Global_sub_004C2950_param_3Enum param_3,undefined4 *param_4,
            char *param_5,undefined1 *param_6,STAllPlayersC_GetTOBJImage_param_2Enum *param_7)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  char *pcVar5;
  char *pcVar6;

  *param_4 = 0;
  *param_5 = '\0';
  switch(param_3) {
  case CASE_8:
    if (*(int *)(&DAT_00791948 + param_2 * 4) == 0) {
      return;
    }
    iVar1 = param_1 + -0x97 + param_2 * 3;
    if (*(int *)(PTR_PTR_007bb198 + iVar1 * 0xc + 4) == 0) {
      return;
    }
    if (param_2 == 0x40) {
      return;
    }
    if (param_2 == 0x49) {
      return;
    }
    st::external_00000080(param_5,"%s_cover%1i",*(int *)(PTR_PTR_007bb198 + iVar1 * 0xc + 4),0);
    *param_4 = PTR_0080678c;
    *param_6 = 0x1d;
    goto LAB_004c2b44;
  case CASE_9:
    if (*(int *)(&DAT_00791948 + param_2 * 4) != 0) {
      iVar1 = param_1 + -0x97 + param_2 * 3;
      if (*(int *)(PTR_PTR_007bb198 + iVar1 * 0xc) != 0) {
        st::external_00000080(param_5,"%s_cover",*(int *)(PTR_PTR_007bb198 + iVar1 * 0xc));
        *param_4 = PTR_0080678c;
        *param_6 = 0x1d;
        *param_7 = *(STAllPlayersC_GetTOBJImage_param_2Enum *)(PTR_DAT_007b5170 + iVar1 * 0x20);
        return;
      }
    }
    break;
  case CASE_C:
    iVar1 = param_1 + -0x97 + param_2 * 3;
    if (*(char **)(PTR_PTR_007bb198 + iVar1 * 0xc + 8) != nullptr) {
      uVar3 = 0xffffffff;
      pcVar5 = *(char **)(PTR_PTR_007bb198 + iVar1 * 0xc + 8);
      do {
        pcVar6 = pcVar5;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar6 = pcVar5 + 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar6;
      } while (cVar2 != '\0');
      uVar3 = ~uVar3;
      pcVar5 = pcVar6 + -uVar3;
      memmove(param_5, pcVar5, uVar3); /* compiler REP MOVS byte copy */
      *param_4 = PTR_0080678c;
      *param_6 = 0x1d;
      *param_7 = *(STAllPlayersC_GetTOBJImage_param_2Enum *)(PTR_DAT_007b8310 + iVar1 * 0x20);
      return;
    }
    break;
  case CASE_D:
    iVar1 = param_1 + -0x97 + param_2 * 3;
    if (*(int *)(PTR_PTR_007bb198 + iVar1 * 0xc + 4) == 0) {
      return;
    }
    st::external_00000080(param_5,"%s%1i",*(int *)(PTR_PTR_007bb198 + iVar1 * 0xc + 4),0);
    *param_4 = PTR_0080678c;
    *param_6 = 0x1d;
    if ((param_2 == 0x40) || (param_2 == 0x49)) {
      *param_7 = 0;
      return;
    }
LAB_004c2b44:
    *param_7 = *(STAllPlayersC_GetTOBJImage_param_2Enum *)(PTR_DAT_007b5170 + iVar1 * 0x20);
    break;
  case CASE_E:
    iVar1 = param_1 + -0x97 + param_2 * 3;
    if (*(char **)(PTR_PTR_007bb198 + iVar1 * 0xc) != nullptr) {
      uVar3 = 0xffffffff;
      pcVar5 = *(char **)(PTR_PTR_007bb198 + iVar1 * 0xc);
      do {
        pcVar6 = pcVar5;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar6 = pcVar5 + 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar6;
      } while (cVar2 != '\0');
      uVar3 = ~uVar3;
      pcVar5 = pcVar6 + -uVar3;
      memmove(param_5, pcVar5, uVar3); /* compiler REP MOVS byte copy */
      *param_4 = PTR_0080678c;
      *param_6 = 0x1d;
      *param_7 = *(STAllPlayersC_GetTOBJImage_param_2Enum *)(PTR_DAT_007b5170 + iVar1 * 0x20);
      return;
    }
  }
  return;
}

// 004C2C10 FUN_004c2c10
#line 4 "decomp/ST.exe/functions/004C2C10/decomp.c"
undefined4 __fastcall st::fn_004C2C10(AnonShape_004C2C10_59B6D93C *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_58 [5];
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  int local_8;

  if (param_1->field_0408 == 0) {
    memset(local_58, 0, 0x50); /* compiler bulk-zero initialization */
    local_58[1] = param_1->field_0024;
    iVar2 = param_1->field_0235 * 4;
    local_58[3] = 1;
    local_58[2] = 1;
    local_38 = *(undefined4 *)(&DAT_00794fa4 + iVar2);
    local_34 = *(undefined4 *)(&DAT_007950ac + iVar2);
    local_44 = (int)param_1->field_0041;
    local_40 = (int)param_1->field_0043;
    local_28 = (uint)param_1->field_0032;
    local_3c = (int)param_1->field_0045;
    local_2c = param_1->field_0018;
    local_58[0] = 0xdc;
    local_30 = 100;
    if (param_1->field_05AC == 0x4d) {
      local_24 = param_1->field_04D4;
    }
    else if (param_1->field_05AC == 0x73) {
      local_24 = param_1->field_04D0;
    }
    st::fn_00401BC2(g_playSystem_00802A38,0xdc,0,&local_8,local_58,0);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar1 = *(undefined4 *)(local_8 + 0x18);
    param_1->field_0408 = 1;
    param_1->field_040C = uVar1;
    return 0;
  }
  return 0;
}

// 004C2D40 FUN_004c2d40
#line 4 "decomp/ST.exe/functions/004C2D40/decomp.c"
undefined4 __fastcall st::fn_004C2D40(AnonShape_004C2D40_7C578146 *param_1)

{
  int iVar1;
  AnonShape_004C2D40_7C578146 *local_8;

  if (param_1->field_0408 != 0) {
    local_8 = param_1;
    iVar1 = st::fn_006E62D0
                      (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)param_1->field_040C,
                       (int *)&local_8);
    if (iVar1 == 0) {
      st::fn_0040432C(g_playSystem_00802A38,*(uint *)&local_8->field_0x8);
      param_1->field_040C = 0;
      param_1->field_0408 = 0;
    }
    param_1->field_0408 = 0;
  }
  return 0;
}

// 004C2DD0 FUN_004c2dd0
#line 4 "decomp/ST.exe/functions/004C2DD0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 004C2DD0 returns zeroed full register at 004C2E06 @ 004C2E08 */

uint __fastcall st::fn_004C2DD0(AnonShape_004C2DD0_4C038B03 *param_1)

{
  param_1->field_0408 = 0;
  param_1->field_040C = 0;
  if (((param_1->field_0231 == 1) || (param_1->field_0231 == 3)) &&
     (*(int *)(&DAT_00794e9c + param_1->field_0235 * 4) != 0)) {
    st::fn_00401B4A((AnonShape_004C2C10_59B6D93C *)param_1);
  }
  return 0;
}

// 004C2E20 FUN_004c2e20
#line 4 "decomp/ST.exe/functions/004C2E20/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 004C2E20 returns zeroed full register at 004C2E40 @ 004C2E42 */

uint __fastcall st::fn_004C2E20(AnonShape_004C2C10_59B6D93C *param_1)

{
  if ((*(int *)&param_1->field_0x231 == 0) &&
     (*(int *)(&DAT_00794e9c + param_1->field_0235 * 4) != 0)) {
    st::fn_00401B4A(param_1);
  }
  return 0;
}

// 004C2E60 FUN_004c2e60
#line 4 "decomp/ST.exe/functions/004C2E60/decomp.c"
undefined4 __fastcall st::fn_004C2E60(int param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  switch(*(undefined4 *)(param_1 + 0x245)) {
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 0:
    if (*(int *)(param_1 + 0x24d) != -1) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)(param_1 + 0x24) != *(int *)(param_1 + 0x23d)) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        bVar2 = st::fn_004049B7((char)*(int *)(param_1 + 0x23d));
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar1 = *(int *)(param_1 + 0x235);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        bVar3 = st::fn_004049B7(*(char *)(param_1 + 0x24));
        if ((&DAT_007e1984)[(uint)bVar3 + (iVar1 * 3 + (uint)bVar2) * 3] == '\0') {
          return 0;
        }
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)(&DAT_00794e9c + *(int *)(param_1 + 0x235) * 4) != 0) {
        st::fn_00401B4A((AnonShape_004C2C10_59B6D93C *)param_1);
        return 0;
      }
    }
    break;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 1:
  case 2:
  case 6:
    if (*(int *)(&DAT_00794e9c + *(int *)(param_1 + 0x235) * 4) != 0) {
      st::fn_00405A33((AnonShape_004C2D40_7C578146 *)param_1);
    }
  }
  return 0;
}

// 004C3000 FUN_004c3000
#line 4 "decomp/ST.exe/functions/004C3000/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 004C3000 returns zeroed full register at 004C3005 @ 004C3007 */

uint __fastcall st::fn_004C3000(int param_1)

{
  st::fn_00405A33((AnonShape_004C2D40_7C578146 *)param_1);
  return 0;
}

// 004C3020 FUN_004c3020
#line 4 "decomp/ST.exe/functions/004C3020/decomp.c"
undefined4 __fastcall st::fn_004C3020(AnonShape_004C3020_45D93566 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;

  param_1->field_0219 = *(undefined4 *)(&DAT_007942fc + param_1->field_0235 * 4);
  param_1->field_025D = 1;
  param_1->field_0261 = *(undefined4 *)(&DAT_00792778 + param_1->field_0235 * 4);
  param_1->field_0265 = (uint)(*(int *)(&DAT_00792880 + param_1->field_0235 * 8) != 0);
  param_1->field_0269 = (uint)((&DAT_00792ca0)[param_1->field_0235 * 6] == 0x9a);
  param_1->field_0279 = ((&DAT_00792ca0)[param_1->field_0235 * 6] != 0xb0) - 1 & 4;
  param_1->field_027D = (-(uint)((&DAT_00792ca0)[param_1->field_0235 * 6] != 0xb0) & 0x10) + 8;
  param_1->field_0281 = (-(uint)(param_1->field_05AC != 0x66) & 0xfffffffd) + 6;
  param_1->field_026D = 0;
  iVar2 = param_1->field_0235;
  if ((*(int *)(&DAT_00792778 + iVar2 * 4) == 0) || (*(int *)(&DAT_00792880 + iVar2 * 8) == 0)) {
    uVar4 = g_playSystem_00802A38->field_00E4;
  }
  else {
    iVar2 = st::fn_00404309(param_1->field_0024,iVar2,0);
    uVar4 = param_1->field_001C * 0x41c64e6d + 0x3039;
    param_1->field_001C = uVar4;
    uVar4 = (uVar4 >> 0x10) % (iVar2 + 1U);
  }
  param_1->field_0271 = uVar4;
  param_1->field_0285 = 0;
  iVar2 = *(int *)(&DAT_00792040 + param_1->field_0235 * 4);
  uVar4 = param_1->field_001C * 0x41c64e6d + 0x3039;
  param_1->field_001C = uVar4;
  uVar1 = g_playSystem_00802A38->field_00E4;
  param_1->field_028D = 0;
  param_1->field_0291 = 0;
  param_1->field_0289 = (uVar4 >> 0x10) % (iVar2 * 10 + 1U) + uVar1;
  uVar4 = g_playSystem_00802A38->field_00E4;
  param_1->field_02B1 = 0;
  param_1->field_0295 = uVar4;
  param_1->field_02B5 = 0;
  uVar4 = param_1->field_001C * 0x41c64e6d + 0x3039;
  param_1->field_001C = uVar4;
  param_1->field_02B9 = (uVar4 >> 0x10) % 0x4c + 0x19;
  if (((param_1->field_0255 == 0) && (param_1->field_05AC != 0x6a)) && (param_1->field_05AC != 0x68)
     ) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  param_1->field_0299 = uVar3;
  iVar2 = param_1->field_0235 * 8;
  param_1->field_02A1 = *(undefined4 *)(&DAT_00791800 + iVar2);
  if (*(int *)(&DAT_00793e28 + iVar2) != 0) {
    param_1->field_02C5 = *(undefined4 *)(&DAT_00794038 + iVar2);
  }
  if (param_1->field_05AC == 0x47) {
    param_1->field_025D = 2;
    iVar2 = param_1->field_0235;
    param_1->field_02E1 = *(undefined4 *)(&DAT_00792778 + iVar2 * 4);
    param_1->field_02E5 = (uint)(*(int *)(&DAT_00792884 + iVar2 * 8) != 0);
    param_1->field_02E9 = 1;
    param_1->field_02F5 = 0;
    param_1->field_02F9 = 6;
    param_1->field_02FD = 0x18;
    param_1->field_0301 = 3;
    param_1->field_02ED = 0;
    iVar2 = st::fn_00404309(param_1->field_0024,iVar2,1);
    uVar4 = param_1->field_001C * 0x41c64e6d + 0x3039;
    param_1->field_001C = uVar4;
    param_1->field_0305 = 0;
    param_1->field_02F1 = (uVar4 >> 0x10) % (iVar2 + 1U);
    iVar2 = *(int *)(&DAT_00792040 + param_1->field_0235 * 4);
    uVar4 = param_1->field_001C * 0x41c64e6d + 0x3039;
    param_1->field_001C = uVar4;
    uVar1 = g_playSystem_00802A38->field_00E4;
    param_1->field_030D = 0;
    param_1->field_0311 = 0;
    param_1->field_0309 = (uVar4 >> 0x10) % (iVar2 * 10 + 1U) + uVar1;
    uVar4 = g_playSystem_00802A38->field_00E4;
    param_1->field_0331 = 0;
    param_1->field_0315 = uVar4;
    param_1->field_0335 = 0;
    uVar4 = param_1->field_001C * 0x41c64e6d + 0x3039;
    param_1->field_001C = uVar4;
    param_1->field_0341 = 0;
    iVar2 = param_1->field_0235 * 8;
    param_1->field_0339 = (uVar4 >> 0x10) % 0x4c + 0x19;
    if (*(int *)(&DAT_00793e2c + iVar2) != 0) {
      param_1->field_0345 = *(undefined4 *)(&DAT_0079403c + iVar2);
    }
  }
  return 0;
}

// 004C3480 FUN_004c3480
#line 1 "decomp/ST.exe/functions/004C3480/decomp.c"

/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void st::fn_004C3480(void)

{
  return;
}

// 004C5350 FUN_004c5350
#line 4 "decomp/ST.exe/functions/004C5350/decomp.c"
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 004C5350 -> 006ACF90 @ 004C552D | 0065E450 -> 004C5350 @ 0065E520; FUN_0065e450
   parameter param_4 | 00664960 -> 004C5350 @ 00666F3E; MOVSX at 00666F2E establishes signed source
   width 2

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 004C5350 -> 006ACF90 @ 004C552D | 0065E450 -> 004C5350 @ 0065E520; FUN_0065e450
   parameter param_5 | 00664960 -> 004C5350 @ 00666F3E; MOVSX at 00666F27 establishes signed source
   width 2 */

uint __thiscall
st::fn_004C5350(void *this,int param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
            int param_6,int param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int *this_00;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  undefined4 local_1c;
  int local_18;
  int local_14;
  byte local_10;
  undefined3 uStack_f;
  uint local_c;
  short local_8;
  short local_6;

  this_00 = param_2;
  local_c = 0;
  if (*(int *)(&DAT_00792778 + STField<int>(this,0x235) * 4) == 0) {
    return 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)((int)this + param_1 * 0x80 + 0x261) == 0) && (STField<int>(this,0x245) != 5)) {
    return 0;
  }
  if (param_2 == nullptr) {
    local_18 = param_3;
    local_14 = param_4;
    local_1c = param_5;
  }
  else {
    st::fn_004018C5
              ((STFishC *)param_2,(short *)&local_18,(undefined2 *)&local_14,(undefined2 *)&local_1c
              );
  }
  if (*(int *)(&DAT_00792a90 + (param_1 + STField<int>(this,0x235) * 2) * 4) == 1) {
    if (this_00 == nullptr) {
      return local_c;
    }
  }
  else {
    if (*(int *)(&DAT_00792a90 + (param_1 + STField<int>(this,0x235) * 2) * 4) != 2) {
      return local_c;
    }
    if (this_00 == nullptr) goto LAB_004c5515;
  }
  if (this_00[10] != 1) {
    return local_c;
  }
  if (7 < (uint)this_00[9]) {
    return local_c;
  }
  if ((g_playSystem_00802A38 != nullptr) &&
     (7 < g_bulkInitializedRecords_008087C7[this_00[9]].field_0022)) {
    return local_c;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar4 = (**(code **)(*this_00 + 0xf4))(STField<undefined4>(this,0x24));
  if (iVar4 == 0) {
    return local_c;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_7 == 0) goto LAB_004c5515;
  bVar1 = *(byte *)(this_00 + 9);
  bVar2 = STField<byte>(this,0x24);
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_7 = STReplaceLowByte((uint32_t)(param_7), (uint8_t)(bVar1));
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  _local_10 = CONCAT31(uStack_f,bVar2);
  if (DAT_00808a8f == '\0') {
    if (bVar1 == bVar2) {
LAB_004c5502:
      iVar4 = 0;
    }
    else {
      bVar3 = g_playerRelationMatrix[bVar1][bVar2];
      if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
        iVar4 = -2;
      }
      else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
        iVar4 = -1;
      }
      else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 1)) {
        iVar4 = 1;
      }
      else {
        if ((bVar3 != 1) || (g_playerRelationMatrix[bVar2][bVar1] != 1)) goto LAB_004c5502;
        iVar4 = 2;
      }
    }
    bVar7 = iVar4 < 0;
  }
  else {
    bVar7 = g_bulkInitializedRecords_008087C7[bVar2].field_0023 !=
            g_bulkInitializedRecords_008087C7[bVar1].field_0023;
  }
  if (!bVar7) {
    return local_c;
  }
LAB_004c5515:
  iVar4 = st::fn_006ACF90((int)(short)local_18,(int)(short)local_14,STField<int>(this,0x5b0),
                       STField<int>(this,0x5b4));
  iVar5 = st::fn_00405C45(STField<int>(this,0x24),STField<int>(this,0x235),param_1);
  if ((((iVar4 <= iVar5) || (uVar6 = local_c, param_6 == 0)) &&
      (uVar6 = 1, *(int *)(&DAT_00792a90 + (param_1 + STField<int>(this,0x235) * 2) * 4) == 1))
     && (param_6 != 0)) {
    st::fn_004031E3(this_00,&local_8,(int *)&local_6,(int *)((int)&param_3 + 2));
    st::fn_004031E3(this,(undefined2 *)((int)&param_5 + 2),(int *)((int)&param_4 + 2),
                       (int *)((int)&param_2 + 2));
    iVar4 = st::fn_006ACF0D((int)local_8,(int)local_6,(int)STPiece<2,2>(param_3),(int)STPiece<2,2>(param_5),
                         (int)STPiece<2,2>(param_4),(int)STPiece<2,2>(param_2));
    uVar6 = (int)STPiece<2,2>(param_3) - (int)STPiece<2,2>(param_2) >> 0x1f;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar6 = (uint)((int)((((int)STPiece<2,2>(param_3) - (int)STPiece<2,2>(param_2) ^ uVar6) - uVar6) * 10) / iVar4
                  <= *(int *)((int)this + param_1 * 0x80 + 0x281));
  }
  local_c = uVar6;
  return local_c;
}

// 004C5980 FUN_004c5980
#line 4 "decomp/ST.exe/functions/004C5980/decomp.c"
int __thiscall st::fn_004C5980(void *this,short param_1,short param_2,short param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_18;
  int local_8;

  iVar7 = 2 - (uint)(*(int *)(&DAT_00791e30 + STField<int>(this,0x235) * 4) != 1);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar3 = (**(code **)(*(int *)this + 0xf8))();
  if ((iVar3 == 0) && (iVar3 = st::fn_004042AF((void *)((int)this + 0x1d5),'\x04'), 0x10 < iVar3)
     ) {
    return -1;
  }
  iVar3 = STField<int>(this,0x5b0) * 0xc9;
  if ((iVar3 <= param_1) && ((int)param_1 < (STField<int>(this,0x5b0) + iVar7) * 0xc9)) {
    iVar2 = STField<int>(this,0x5b4) * 0xc9;
    if ((iVar2 <= param_2) && ((int)param_2 < (STField<int>(this,0x5b4) + iVar7) * 0xc9)) {
      iVar6 = (int)param_3;
      iVar5 = STField<int>(this,0x5b8) * 200;
      if ((iVar5 <= iVar6) && (iVar6 < (STField<int>(this,0x5b8) * 5 + 5) * 0x28)) {
        piVar1 = STField<int *>(this,0x5fb);
        local_18 = 0;
        local_8 = 1;
        iVar4 = (iVar7 * 0xc9) / 2;
        iVar8 = (piVar1[1] - (int)param_2) + iVar4 + iVar2;
        iVar9 = (iVar4 - param_1) + iVar3 + *piVar1;
        iVar7 = (piVar1[2] - iVar6) + iVar5;
        iVar7 = iVar7 * iVar7 + iVar9 * iVar9 + iVar8 * iVar8;
        while( true ) {
          iVar6 = piVar1[3];
          if (((iVar6 == 0) && (piVar1[4] == 0)) && (piVar1[5] == 0)) break;
          iVar6 = (iVar6 - param_1) + iVar4 + iVar3;
          iVar8 = iVar2 + (piVar1[4] - (int)param_2) + iVar4;
          iVar9 = iVar5 + (piVar1[5] - (int)param_3);
          iVar6 = iVar8 * iVar8 + iVar9 * iVar9 + iVar6 * iVar6;
          if (iVar6 < iVar7) {
            local_18 = local_8;
            iVar7 = iVar6;
          }
          local_8 = local_8 + 1;
          piVar1 = piVar1 + 3;
        }
        return local_18;
      }
      return -1;
    }
  }
  return -1;
}

// 004C5BD0 FUN_004c5bd0
#line 4 "decomp/ST.exe/functions/004C5BD0/decomp.c"
undefined4 __thiscall
st::fn_004C5BD0(void *this,float param_1,short *param_2,short *param_3,short *param_4,
            undefined4 *param_5)

{
  float fVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0;
  longlong lVar8;

  psVar6 = param_3;
  psVar5 = param_2;
  iVar7 = (int)param_1 * 0xc;
  sVar2 = (short)((int)((2 - (uint)(*(int *)(&DAT_00791e30 + STField<int>(this,0x235) * 4) != 1))
                       * 0xc9) / 2);
  *param_2 = *(short *)(iVar7 + STField<int>(this,0x5fb)) + STField<short>(this,0x5b0) * 0xc9
             + sVar2;
  *param_3 = *(short *)(iVar7 + 4 + STField<int>(this,0x5fb)) +
             STField<short>(this,0x5b4) * 0xc9 + sVar2;
  *param_4 = *(short *)(iVar7 + 8 + STField<int>(this,0x5fb)) +
             STField<short>(this,0x5b8) * 200;
  *param_5 = 0;
  st::fn_006DD530
            (STField<ST3DSMAPContext *>(this,0x211),&param_1,(float *)&param_2,(float *)&param_3);
  lVar8 = st::fn_0072E288();
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = (float)(int)(short)lVar8;
  lVar8 = st::fn_0072E288();
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = (float)(int)(short)lVar8;
  lVar8 = st::fn_0072E288();
  fVar3 = (float)(int)STField<short>(this,0x43) - param_1;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  fVar1 = (float)((float10)(int)STField<short>(this,0x41) - extraout_ST0);
  fVar4 = (float)(int)*param_4 - (float)(int)(short)lVar8;
  fVar4 = fVar4 * fVar4;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  if (((float10)(int)*psVar5 - extraout_ST0) * ((float10)(int)*psVar5 - extraout_ST0) +
      ((float10)(int)*psVar6 - (float10)param_1) * ((float10)(int)*psVar6 - (float10)param_1) +
      (float10)fVar4 <
      (float10)fVar3 * (float10)fVar3 + (float10)fVar1 * (float10)fVar1 + (float10)fVar4) {
    *param_5 = 0;
    return 0;
  }
  *param_5 = 1;
  return 0;
}

// 004C5DE0 FUN_004c5de0
#line 4 "decomp/ST.exe/functions/004C5DE0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 004C5DE0 returns zeroed full register at 004C5E13 @ 004C5E15 */

uint __fastcall st::fn_004C5DE0(AnonShape_004C5DE0_7F596C47 *param_1)

{
  param_1->field_04D0 = 0;
  param_1->field_04D4 = g_playSystem_00802A38->field_00E4 + 0x7d;
  if ((param_1->field_0231 == 1) || (param_1->field_0231 == 3)) {
    st::fn_0040558D((AnonShape_004C5F30_84FC19DC *)param_1);
  }
  return 0;
}

// 004C5E30 FUN_004c5e30
#line 4 "decomp/ST.exe/functions/004C5E30/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 004C5E30 returns zeroed full register at 004C5E3F @ 004C5E41 */

uint __fastcall st::fn_004C5E30(AnonShape_004C5F30_84FC19DC *param_1)

{
  if (*(int *)&param_1->field_0x231 == 0) {
    st::fn_0040558D(param_1);
  }
  return 0;
}

// 004C5E60 FUN_004c5e60
#line 4 "decomp/ST.exe/functions/004C5E60/decomp.c"
undefined4 __fastcall st::fn_004C5E60(int param_1)

{
  int iVar1;
  int local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(AnonShape_005EFAE0_B406B78B **)(param_1 + 0x4d0) != nullptr) {
    local_8 = param_1;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar1 = st::fn_006E62D0
                      (g_playSystem_00802A38,*(AnonShape_005EFAE0_B406B78B **)(param_1 + 0x4d0),
                       &local_8);
    if (iVar1 == 0) {
      st::fn_0040364D(local_8);
    }
    *(undefined4 *)(param_1 + 0x4d0) = 0;
  }
  return 0;
}

// 004C5EB0 FUN_004c5eb0
#line 4 "decomp/ST.exe/functions/004C5EB0/decomp.c"
undefined4 __fastcall st::fn_004C5EB0(AnonShape_004C5EB0_4D7D61A8 *param_1)

{
  int iVar1;
  AnonShape_004C5EB0_4D7D61A8 *local_8;

  if ((uint)param_1->field_04D4 <= g_playSystem_00802A38->field_00E4) {
    local_8 = param_1;
    iVar1 = st::fn_006E62D0
                      (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)param_1->field_04D0,
                       (int *)&local_8);
    if (iVar1 == 0) {
      param_1->field_02CD = *(undefined4 *)&local_8->field_0x20f;
    }
    param_1->field_04D4 = g_playSystem_00802A38->field_00E4 + 0x7d;
  }
  return 0;
}

// 004C5F30 FUN_004c5f30
#line 4 "decomp/ST.exe/functions/004C5F30/decomp.c"
undefined4 __fastcall st::fn_004C5F30(AnonShape_004C5F30_84FC19DC *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_8;

  if (param_1->field_04D0 == 0) {
    local_8 = st::fn_00405C45(param_1->field_0024,param_1->field_0235,0);
    local_8 = param_1->field_05B0 - local_8;
    if (local_8 < 0) {
      local_8 = 0;
    }
    iVar1 = st::fn_00405C45(param_1->field_0024,param_1->field_0235,0);
    iVar1 = param_1->field_05B4 - iVar1;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    iVar2 = st::fn_00405C45(param_1->field_0024,param_1->field_0235,0);
    iVar2 = iVar2 + param_1->field_05B0;
    if (g_worldGrid.sizeX <= iVar2) {
      iVar2 = g_worldGrid.sizeX + -1;
    }
    iVar3 = st::fn_00405C45(param_1->field_0024,param_1->field_0235,0);
    iVar3 = iVar3 + param_1->field_05B4;
    if (g_worldGrid.sizeY <= iVar3) {
      iVar3 = g_worldGrid.sizeY + -1;
    }
    iVar1 = st::fn_00403F76(local_8,iVar1,iVar2,iVar3,5,param_1->field_0024,param_1->field_0018,
                               param_1->field_0032);
    param_1->field_04D0 = *(undefined4 *)(iVar1 + 0x18);
    param_1->field_02D1 = 5;
    return 0;
  }
  return 0;
}

// 004C6070 FUN_004c6070
#line 4 "decomp/ST.exe/functions/004C6070/decomp.c"
undefined4 __fastcall st::fn_004C6070(int *param_1)

{
  if (STField<int>(param_1,0x245) == 5) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*param_1 + 0x90))(3,0x3fb);
  }
  return 0;
}

// 004C6B20 CreateTLOBldMark
#line 4 "decomp/ST.exe/functions/004C6B20/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA7EC>00404D2C

   [STObjectFactoryApplier] Central object factory for 0x0201 (ST_OBJECT_TLO_BLD_MARK).
   Evidence: registry[25] at 007CA7E8 stores type 0x0201 and executable pointer 00404D2C; allocation
   size 60 uniquely matches /TLOBldMark */

TLOBldMark * __cdecl st::fn_004C6B20(void)

{
  TLOBldMark *pTVar1;

  pTVar1 = (TLOBldMark *)st::fn_006B04D0(0x3c);
  if (pTVar1 != nullptr) {
    pTVar1 = st::fn_004012D0(pTVar1);
    return pTVar1;
  }
  return nullptr;
}

// 004C6B50 FUN_004c6b50
#line 4 "decomp/ST.exe/functions/004C6B50/decomp.c"
undefined4 __fastcall st::fn_004C6B50(void *param_1)

{
  STField<undefined4>(param_1,0x3dc) = 0;
  STField<undefined4>(param_1,0x3ec) = 0;
  st::fn_00401AAA(param_1,1);
  st::fn_00405C90(param_1,3);
  st::fn_00405105(param_1,1);
  return 0;
}

// 004C71F0 FUN_004c71f0
#line 4 "decomp/ST.exe/functions/004C71F0/decomp.c"
void __fastcall st::fn_004C71F0(AnonShape_004C71F0_9DDD72E5 *param_1)

{
  param_1->field_03D0 = 5;
  param_1->field_0361 = 0;
  param_1->field_03D4 = 0;
  param_1->field_03D8 = 0;
  param_1->field_0607 = 0;
  return;
}

// 004C7230 FUN_004c7230
#line 4 "decomp/ST.exe/functions/004C7230/decomp.c"
void __fastcall st::fn_004C7230(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x607) != 0) {
    st::fn_006AB060((void **)(param_1 + 0x607));
  }
  return;
}

// 004C7260 FUN_004c7260
#line 4 "decomp/ST.exe/functions/004C7260/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004C7260_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_4=4;CASE_5=5;CASE_6=6;CASE_8=8 */

undefined4 __thiscall
st::fn_004C7260(void *this,Global_sub_004C7260_param_1Enum param_1,int param_2,undefined4 *param_3,
            undefined4 *param_4,int *param_5,undefined4 *param_6)

{
  int iVar1;
  byte bVar2;
  int iVar3;

  bVar2 = st::fn_004049B7(STField<char>(this,0x23d));
  *param_6 = 0;
  *param_5 = 0;
  *param_4 = 0;
  *param_3 = 0;
  switch(param_1) {
  case CASE_1:
    *param_3 = *(undefined4 *)(&DAT_00854428 + param_2 * 4);
    *param_4 = *(undefined4 *)(&DAT_007e055c + param_2 * 4);
    *param_5 = *(int *)(&DAT_007e079c + param_2 * 4);
    *param_6 = *(undefined4 *)(&DAT_007e09dc + param_2 * 4);
    return 0;
  case CASE_2:
    iVar3 = st::fn_0040186B(STField<int>(this,0x24),param_2);
    *param_3 = *(undefined4 *)(&DAT_007e481c + (iVar3 + param_2 * 4) * 4);
    return 0;
  case CASE_4:
    *param_4 = DAT_007e6128;
    return 0;
  case CASE_5:
    *param_3 = 0;
    *param_4 = 0;
    iVar3 = STField<int>(this,0x235) * 3;
    iVar3 = *(int *)(&DAT_007e29f0 + (iVar3 + STField<int>(this,0x239)) * 4) -
            (STField<int>(this,0x241) *
            *(int *)(&DAT_007e29f0 + (iVar3 + STField<int>(this,0x239)) * 4)) /
            *(int *)(&DAT_007e417c + (iVar3 + (bVar2 - 1)) * 4);
    *param_5 = iVar3;
    if ((*(int *)(&DAT_007e29f0 +
                 (STField<int>(this,0x235) * 3 + STField<int>(this,0x239)) * 4) != 0) &&
       (iVar1 = *(int *)(&DAT_007e29f0 +
                        (STField<int>(this,0x235) * 3 + STField<int>(this,0x239)) * 4) / 100,
       iVar3 < iVar1)) {
      *param_5 = iVar1;
      return 0;
    }
    break;
  case CASE_6:
    *param_4 = DAT_007e618c;
    return 0;
  case CASE_8:
    *param_4 = DAT_007e6344;
  }
  return 0;
}

// 004C7730 FUN_004c7730
#line 4 "decomp/ST.exe/functions/004C7730/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004C7730_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_4=4;CASE_5=5;CASE_6=6;CASE_8=8 */

uint __thiscall st::fn_004C7730(void *this,Global_sub_004C7730_param_1Enum param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;

  uVar2 = *(uint *)(&DAT_00794d4c + param_1 * 4);
  switch(param_1) {
  case CASE_1:
    return *(uint *)(&DAT_007e049c + param_2 * 4);
  case CASE_2:
    iVar1 = st::fn_0040186B(STField<int>(this,0x24),param_2);
    uVar2 = (&DAT_007e5478)[iVar1 + param_2 * 4];
    if (DAT_0080c51e != 0) {
      uVar4 = 0;
      puVar3 = &DAT_007e5478;
      do {
        if (uVar4 < *puVar3) {
          uVar4 = *puVar3;
        }
        puVar3 = puVar3 + 4;
      } while ((int)puVar3 < 0x7e5e28);
      uVar2 = (uVar2 * 0x5dc) / uVar4;
      if (0x5dc < uVar2) {
        return 0x5dc;
      }
    }
    break;
  case CASE_4:
    return DAT_007e6120;
  case CASE_5:
    return *(uint *)(&DAT_007e2da8 +
                    (STField<int>(this,0x235) * 3 + STField<int>(this,0x239)) * 4);
  case CASE_6:
    return DAT_007e6184;
  case CASE_8:
    uVar2 = DAT_007e633c;
  }
  return uVar2;
}

// 004C7C20 FUN_004c7c20
#line 4 "decomp/ST.exe/functions/004C7C20/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (6), none consume AL/AX, and every RET path defines full EAX; sites=004C7CC0 @ 004C7EEF
   -> TEST TEST EAX,EAX | 004C84C0 @ 004C8DA5 -> TEST TEST EAX,EAX | 004DE820 @ 004DE905 -> TEST
   TEST EAX,EAX | 004DE820 @ 004DE92B -> TEST TEST EAX,EAX | 004EA870 @ 004EA8C9 -> TEST TEST
   EAX,EAX | 004EA870 @ 004EA976 -> TEST TEST EAX,EAX

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004C7CC0 -> 004C7C20 @ 004C7EEF; TLOBaseTy::FUN_004c7cc0 this; stable alias EBX */

int __fastcall st::fn_004C7C20(TLOBaseTy *param_1)

{
  return (uint)(*(int *)&param_1->field_0x361 == 0);
}

// 004C7C50 FUN_004c7c50
#line 4 "decomp/ST.exe/functions/004C7C50/decomp.c"
undefined4 __thiscall st::fn_004C7C50(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;

  uVar1 = 0;
  iVar2 = *(int *)(&DAT_00794404 + STField<int>(this,0x235) * 0x24);
  if (iVar2 != 0) {
    puVar3 = &DAT_00794404 + STField<int>(this,0x235) * 0x24;
    while (iVar2 != param_1) {
      iVar2 = *(int *)(puVar3 + 4);
      puVar3 = puVar3 + 4;
      if (iVar2 == 0) {
        return uVar1;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}

// 004C91A0 FUN_004c91a0
#line 4 "decomp/ST.exe/functions/004C91A0/decomp.c"
undefined4 __fastcall st::fn_004C91A0(TLOBaseTy *param_1)

{
  byte bVar1;
  int iVar2;

  if ((param_1->field_03D4 != 0) && (param_1->field_0607 != nullptr)) {
    param_1->field_03D4 = 0;
  }
  if (*(int *)&param_1->field_0x361 != 0) {
    *(undefined4 *)&param_1->field_0x36d = 1;
    *(int *)&param_1->field_0x365 = *(int *)&param_1->field_0x361;
    iVar2 = st::fn_00404B6A(param_1);
    if (iVar2 != 0) {
      bVar1 = st::fn_004049B7(*(char *)&param_1->field_0024);
      if ((bVar1 != 3) && (param_1->field_0398 != 0)) {
        st::fn_00404336(*(char *)&param_1->field_0024,
                           (param_1->field_0394 * param_1->field_0398) / 100);
      }
      if (param_1->field_039C != 0) {
        st::fn_00404412(*(char *)&param_1->field_0024,
                           (param_1->field_0394 * param_1->field_039C) / 100);
      }
      if (param_1->field_03A0 != 0) {
        st::fn_004055E7(*(char *)&param_1->field_0024,
                           (param_1->field_0394 * param_1->field_03A0) / 100);
      }
      if (param_1->field_03A4 != 0) {
        st::fn_00405E6B((int)param_1->field_0024,
                           (param_1->field_0394 * param_1->field_03A4) / 100);
      }
      st::fn_00405A2E(param_1);
      st::fn_004028F6(*(char *)&param_1->field_0024);
      if (param_1->field_0024 == (byte *)(uint)(byte)param_1->field_0010->field_112D) {
        st::fn_00404B8D((char)param_1->field_0024);
      }
    }
  }
  return 0;
}

// 004C93E0 FUN_004c93e0
#line 4 "decomp/ST.exe/functions/004C93E0/decomp.c"
int __thiscall st::fn_004C93E0(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;

  iVar3 = STField<int>(this,0x3d4);
  iVar1 = 0;
  if (((iVar3 != 0) && (piVar2 = STField<int *>(this,0x607), piVar2 != nullptr)) && (0 < iVar3)
     ) {
    do {
      if ((param_1 == 0) || (*piVar2 == param_1)) {
        iVar1 = iVar1 + piVar2[2];
      }
      piVar2 = (int *)((int)piVar2 + 0x27);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar1;
}

// 004C9430 FUN_004c9430
#line 4 "decomp/ST.exe/functions/004C9430/decomp.c"
undefined4 __thiscall st::fn_004C9430(void *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;

  if ((STField<int>(this,0x361) != param_1) || (STField<int>(this,0x375) != param_2)) {
    iVar1 = STField<int>(this,0x3d4);
    if (iVar1 == 0) {
      return 0;
    }
    piVar2 = STField<int *>(this,0x607);
    if (piVar2 == nullptr) {
      return 0;
    }
    iVar3 = 0;
    if (iVar1 < 1) {
      return 0;
    }
    while ((*piVar2 != param_1 || (piVar2[4] != param_2))) {
      iVar3 = iVar3 + 1;
      piVar2 = (int *)((int)piVar2 + 0x27);
      if (iVar1 <= iVar3) {
        return 0;
      }
    }
  }
  return 1;
}

// 004CBA10 FUN_004cba10
#line 4 "decomp/ST.exe/functions/004CBA10/decomp.c"
undefined4 st::fn_004CBA10(void)

{
  return 1;
}

// 004CBAD0 FUN_004cbad0
#line 4 "decomp/ST.exe/functions/004CBAD0/decomp.c"
undefined4 __fastcall st::fn_004CBAD0(AnonShape_004CBAD0_DCDD6BA9 *param_1)

{
  int iVar1;
  uint uVar2;

  iVar1 = st::fn_00401A3C((AnonShape_0041C710_C4D46939 *)param_1);
  if (iVar1 == 0) {
    iVar1 = 0;
    uVar2 = st::fn_004052CC((STT3DSprC *)&param_1->field_0x1d5);
    st::fn_006EABF0(param_1->field_0211,uVar2,iVar1);
    if ((STT3DSprC *)param_1->field_05FF != nullptr) {
      iVar1 = 0;
      uVar2 = st::fn_004052CC((STT3DSprC *)param_1->field_05FF);
      st::fn_006EABF0(param_1->field_0211,uVar2,iVar1);
    }
    if ((STT3DSprC *)param_1->field_0603 != nullptr) {
      iVar1 = 0;
      uVar2 = st::fn_004052CC((STT3DSprC *)param_1->field_0603);
      st::fn_006EABF0(param_1->field_0211,uVar2,iVar1);
    }
    iVar1 = st::fn_004050D8((AnonShape_0041CAF0_1630B9E0 *)param_1);
    uVar2 = (uint)(iVar1 != 0);
  }
  else {
    if ((param_1->field_046C != 4) || (param_1->field_0490 == 0)) {
      iVar1 = 1;
      uVar2 = st::fn_004052CC((STT3DSprC *)&param_1->field_0x1d5);
      st::fn_006EABF0(param_1->field_0211,uVar2,iVar1);
      if ((STT3DSprC *)param_1->field_05FF != nullptr) {
        iVar1 = 1;
        uVar2 = st::fn_004052CC((STT3DSprC *)param_1->field_05FF);
        st::fn_006EABF0(param_1->field_0211,uVar2,iVar1);
      }
      if ((STT3DSprC *)param_1->field_0603 != nullptr) {
        iVar1 = 1;
        uVar2 = st::fn_004052CC((STT3DSprC *)param_1->field_0603);
        st::fn_006EABF0(param_1->field_0211,uVar2,iVar1);
      }
    }
    uVar2 = 1;
  }
  iVar1 = st::fn_004052CC((STT3DSprC *)&param_1->field_0x1d5);
  st::fn_006E6870(param_1->field_0211,iVar1,uVar2);
  return 0;
}

// 004CBE10 FUN_004cbe10
#line 4 "decomp/ST.exe/functions/004CBE10/decomp.c"
/* [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_39=57;CASE_3B=59;CASE_40=64;CASE_45=69;CASE_49=73;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_5C=92;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_69=105;CASE_70=112;CASE_72=114

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_36=54;CASE_39=57;CASE_3B=59;CASE_3D=61;CASE_40=64;CASE_45=69;CASE_49=73;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_70=112;CASE_72=114

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3D=61;CASE_40=64;CASE_41=65;CASE_43=67;CASE_45=69;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6B=107;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_72=114;CASE_73=115;CASE_96=150;CASE_97=151;CASE_98=152;CASE_99=153;CASE_9A=154;CASE_A6=166;CASE_A7=167;CASE_A9=169;CASE_AB=171;CASE_AC=172;CASE_AD=173;CASE_AE=174;CASE_B3=179;CASE_B5=181;CASE_B8=184;CASE_BC=188;CASE_BD=189;CASE_BE=190

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_65=101;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6B=107;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_72=114;CASE_73=115;CASE_96=150;CASE_97=151;CASE_98=152;CASE_99=153;CASE_9A=154;CASE_A6=166;CASE_A7=167;CASE_A9=169;CASE_AB=171;CASE_AC=172;CASE_AD=173;CASE_AE=174;CASE_B3=179;CASE_B5=181;CASE_B8=184;CASE_BC=188;CASE_BD=189;CASE_BE=190
    */

undefined4 __fastcall st::fn_004CBE10(TLOBaseTy *param_1)

{
  switch(param_1->field_05AC) {
  case CASE_32:
  case CASE_40:
  case CASE_49:
  case CASE_5C:
    st::fn_00404615();
    break;
  case CASE_45:
    st::fn_00405B32((AnonShape_004EAD90_30D2E515 *)param_1);
    break;
  case CASE_4E:
    st::fn_00404791(param_1);
    break;
  case CASE_52:
  case CASE_5F:
    st::fn_00405C2C((AnonShape_004EC400_367D4575 *)param_1);
    break;
  case CASE_69:
    st::fn_0040538F((AnonShape_004DD070_62E18556 *)param_1);
    break;
  case CASE_70:
    st::fn_004028D8(param_1);
    break;
  case CASE_72:
    st::fn_004018E3(param_1);
  }
  st::fn_004033AA(param_1->field_05FF,g_playSystem_00802A38->field_00E4);
  return 0;
}

// 004CBF70 FUN_004cbf70
#line 4 "decomp/ST.exe/functions/004CBF70/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004CEB00 -> 004CBF70 @ 004CF048; TLOBaseTy::sub_004CEB00 this; stable alias EBX */

undefined4 __fastcall st::fn_004CBF70(TLOBaseTy *param_1)

{
  if ((STT3DSprC *)param_1->field_05FF != nullptr) {
    st::fn_00404264((STT3DSprC *)param_1->field_05FF,0xe);
    st::fn_00404264((STT3DSprC *)param_1->field_05FF,0xc);
    st::fn_00403D0F((STT3DSprC *)param_1->field_05FF);
  }
  return 0;
}

// 004CBFB0 FUN_004cbfb0
#line 4 "decomp/ST.exe/functions/004CBFB0/decomp.c"
undefined4 __fastcall st::fn_004CBFB0(int param_1)

{
  undefined4 uVar1;

  uVar1 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  switch(*(undefined4 *)(param_1 + 0x5ac)) {
  case 0x32:
  case 0x40:
  case 0x49:
  case 0x5c:
    uVar1 = st::fn_004051C3(param_1);
    return uVar1;
  case 0x52:
  case 0x5f:
    uVar1 = st::fn_004047FA(param_1);
  }
  return uVar1;
}

// 004CC040 FUN_004cc040
#line 4 "decomp/ST.exe/functions/004CC040/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004B7F90 -> 004CC040 @ 004B804A; TLOBaseTy::sub_004B7F90 this; stable alias ESI

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_65=101;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6B=107;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_72=114;CASE_73=115;CASE_96=150;CASE_97=151;CASE_98=152;CASE_99=153;CASE_9A=154;CASE_A6=166;CASE_A7=167;CASE_A9=169;CASE_AB=171;CASE_AC=172;CASE_AD=173;CASE_AE=174;CASE_B3=179;CASE_B5=181;CASE_B8=184;CASE_BC=188;CASE_BD=189;CASE_BE=190
    */

undefined4 __fastcall st::fn_004CC040(TLOBaseTy *param_1)

{
  undefined4 uVar1;

  uVar1 = 0;
  switch(param_1->field_05AC) {
  case CASE_32:
  case CASE_40:
  case CASE_49:
  case CASE_5C:
    uVar1 = st::fn_00403210();
    return uVar1;
  case CASE_45:
    uVar1 = st::fn_004015C8((int)param_1);
    return uVar1;
  case CASE_4E:
    uVar1 = st::fn_00402013((int)param_1);
    return uVar1;
  case CASE_52:
  case CASE_5F:
    uVar1 = st::fn_004015FF();
    return uVar1;
  case CASE_69:
    uVar1 = st::fn_00401AE1();
    break;
  case CASE_70:
    uVar1 = st::fn_00403724((int)param_1);
    return uVar1;
  case CASE_72:
    uVar1 = st::fn_00405560((int)param_1);
    return uVar1;
  }
  return uVar1;
}

// 004CC130 FUN_004cc130
#line 4 "decomp/ST.exe/functions/004CC130/decomp.c"
undefined4 __fastcall st::fn_004CC130(AnonShape_004CC130_08293212 *param_1)

{
  undefined4 uVar1;

  uVar1 = 0;
  switch(param_1->field_05AC) {
  case 0x32:
  case 0x40:
  case 0x49:
  case 0x5c:
    uVar1 = st::fn_00403DAF();
    return uVar1;
  case 0x45:
    uVar1 = st::fn_00403657((AnonShape_004EAF90_D23494A9 *)param_1);
    return uVar1;
  case 0x4e:
    uVar1 = st::fn_0040366B((int)param_1);
    return uVar1;
  case 0x52:
  case 0x5f:
    uVar1 = st::fn_004020CC();
    return uVar1;
  case 0x69:
    uVar1 = st::fn_004051D2((int)param_1);
    break;
  case 0x70:
    uVar1 = st::fn_00404AE8((int)param_1);
    return uVar1;
  case 0x72:
    uVar1 = st::fn_0040134D((int)param_1);
    return uVar1;
  }
  return uVar1;
}

// 004CC7F0 FUN_004cc7f0
#line 4 "decomp/ST.exe/functions/004CC7F0/decomp.c"
undefined4 __fastcall st::fn_004CC7F0(int param_1)

{
  *(undefined4 *)(param_1 + 0x444) = 1;
  return 0;
}

// 004CC810 FUN_004cc810
#line 4 "decomp/ST.exe/functions/004CC810/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 004CC810 returns zeroed full register at 004CC82C @ 004CC82F */

uint __fastcall st::fn_004CC810(AnonShape_004CC900_31EE9CAA *param_1)

{
  if (param_1->field_0448 != 0) {
    st::fn_00405768((TLOBaseTy *)param_1);
  }
  param_1->field_0444 = 0;
  return 0;
}

// 004CC840 FUN_004cc840
#line 4 "decomp/ST.exe/functions/004CC840/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 004CC840 returns zeroed full register at 004CC86B @ 004CC86E */

uint __fastcall st::fn_004CC840(int *param_1)

{
  int iVar1;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)(*param_1 + 0x7c))();
  if ((-1 < iVar1 / 0x14) && (iVar1 / 0x14 < 4)) {
    st::fn_004028F1((TLOBaseTy *)param_1,1);
  }
  return 0;
}

// 004CC9C0 FUN_004cc9c0
#line 4 "decomp/ST.exe/functions/004CC9C0/decomp.c"
undefined4 __thiscall st::fn_004CC9C0(void *this,int param_1)

{
  if ((param_1 != STField<int>(this,0x24)) &&
     ((STField<int>(this,0x245) == 0 || (STField<int>(this,0x245) == 5)))) {
    return 1;
  }
  return 0;
}

// 004CCA00 FUN_004cca00
#line 4 "decomp/ST.exe/functions/004CCA00/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=004845E0 @ 004850BA
   -> DEC DEC EAX */

int __thiscall st::fn_004CCA00(void *this,int param_1)

{
  byte bVar1;

  if ((param_1 != STField<int>(this,0x24)) &&
     ((STField<int>(this,0x245) == 0 || (STField<int>(this,0x245) == 5)))) {
    if ((STField<int>(this,0x24) == STField<int>(this,0x23d)) &&
       (*(int *)(&DAT_007e1218 + (STField<int>(this,0x235) * 3 + STField<int>(this,0x239)) * 4
                ) != 0)) {
      return 3;
    }
    bVar1 = st::fn_004049B7((char)param_1);
    return ((&DAT_007e1987)
            [(STField<int>(this,0x235) * 3 + STField<int>(this,0x239)) * 3 + (uint)bVar1] !=
           '\0') + 1;
  }
  return 0;
}

// 004CCAD0 FUN_004ccad0
#line 4 "decomp/ST.exe/functions/004CCAD0/decomp.c"
void __fastcall st::fn_004CCAD0(AnonShape_004CCAD0_262475FB *param_1)

{
  undefined4 uVar1;

  st::fn_00401474();
  uVar1 = 0;
  if (param_1->field_0361 != 0) {
    uVar1 = st::fn_0040142E((TLOBaseTy *)param_1);
  }
  param_1->field_0265 = param_1->field_0265 & 0xfffffffd;
  param_1->field_026D = 0;
  if (param_1->field_05AC == 0x50) {
    st::fn_00401C30(STReplaceLowByte((uint32_t)(uVar1), (uint8_t)(param_1->field_0x24)),0x28);
  }
  if ((param_1->field_05AC == 0x6f) || (param_1->field_05AC == 0x73)) {
    st::fn_00401523((int *)param_1);
  }
  if (param_1->field_05AC == 0x36) {
    st::fn_00401776((AnonShape_0041CF50_01071190 *)param_1);
  }
  if ((param_1->field_05AC == 0x3d) || (param_1->field_05AC == 0x5d)) {
    if (param_1->field_04E0 != 0) {
      st::fn_00401F3C((AnonShape_0041D100_A90F7B7E *)param_1);
      param_1->field_04E0 = 0;
    }
    if (param_1->field_04E4 != 0) {
      st::fn_0040216C((STMineSetC *)param_1);
      param_1->field_04E4 = 0;
    }
  }
  st::fn_00402D92((TLOBaseTy *)param_1);
  st::fn_00403404((STSprGameObjC *)param_1);
  st::fn_0040207C((TLOBaseTy *)param_1,0xfe);
  return;
}

// 004CCC10 FUN_004ccc10
#line 4 "decomp/ST.exe/functions/004CCC10/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004CCC10 -> 006E62D0 @ 004CD011 | 004CCC10 -> 006E62D0 @ 004CD062 | 004CCC10 ->
   006E62D0 @ 004CD0A6 | 004CCC10 -> 006E62D0 @ 004CD0EC | 004CCC10 -> 006E62D0 @ 004CD124 */

void __thiscall st::fn_004CCC10(void *this,int *param_1,int *param_2)

{
  int *piVar1;
  int local_EAX_120;
  int iVar2;
  int uVar2;
  int local_EAX_374;
  int local_EAX_512;
  undefined *puVar3;
  int local_EAX_654;
  int local_EAX_691;
  int local_EAX_948;
  int uVar5;
  int local_EAX_1346;
  int local_EAX_1385;
  int iVar4;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_02;
  undefined4 *puVar6;
  char recordIndex;
  undefined4 uVar7;
  int local_294 [155];
  undefined4 local_28 [4];
  undefined4 local_18;
  undefined2 local_14;
  undefined2 local_10;
  short local_e;
  int local_8;

  piVar1 = param_1;
  local_8 = STField<int>(this,0x24);
  st::fn_00402BB2();
  recordIndex = (char)param_1;
  if ((STField<int>(this,0x24) == STField<int>(this,0x23d)) &&
     (*(int *)(&DAT_007e1218 + (STField<int>(this,0x235) * 3 + STField<int>(this,0x239)) * 4)
      != 0)) {
    memset(local_294, 0, 0x26c); /* compiler bulk-zero initialization */
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = local_294;
    iVar4 = 0;
    do {
      local_EAX_120 = st::fn_004049B7(STField<char>(this,0x24));
      local_EAX_120 = (int)(byte)local_EAX_120;
      if (*(char *)(*(int *)(&DAT_007bfc00 + local_EAX_120 * 4) + iVar4) == '\0') {
        iVar2 = st::fn_0040186B((int)piVar1,iVar4);
        iVar2 = st::fn_00402342((int)piVar1,iVar4,iVar2 + 1);
        if (iVar2 != 0) {
          *param_1 = 1;
        }
      }
      iVar4 = iVar4 + 1;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = param_1 + 1;
    } while (iVar4 < 0x9b);
    st::fn_00404DC2((int)piVar1,STField<int>(this,0x24),
                       *(int *)(&DAT_007e1218 +
                               (STField<int>(this,0x235) * 3 + STField<int>(this,0x239)) * 4));
    if (piVar1 == (int *)(uint)DAT_0080874d) {
      uVar2 = st::fn_004049B7(recordIndex);
      uVar2 = (int)(byte)uVar2;
      if (uVar2 == 1) {
        iVar4 = *(int *)this;
        uVar7 = 0x74;
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_004ccd43:
        (**(code **)(iVar4 + 0x90))(6,uVar7);
      }
      else if (uVar2 == 2) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*(int *)this + 0x90))(6,0x75);
      }
      else if (uVar2 == 3) {
        iVar4 = *(int *)this;
        uVar7 = 0x76;
        goto LAB_004ccd43;
      }
    }
    if (DAT_008117bc != nullptr) {
      memset(local_28, 0, 0x20); /* compiler bulk-zero initialization */
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = local_294;
      local_18 = 0x5de9;
      local_14 = SUB42(piVar1,0);
      iVar4 = 0;
      do {
        local_EAX_374 = st::fn_004049B7(STField<char>(this,0x24));
        local_EAX_374 = (int)(byte)local_EAX_374;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        if ((*(char *)(*(int *)(&DAT_007bfc00 + local_EAX_374 * 4) + iVar4) == '\0') &&
           (*param_1 == 0)) {
          iVar2 = st::fn_0040186B((int)piVar1,iVar4);
          iVar2 = st::fn_00402342((int)piVar1,iVar4,iVar2 + 1);
          if (iVar2 != 0) {
            local_10 = (undefined2)iVar4;
            uVar7 = st::fn_0040186B((int)piVar1,iVar4);
            local_e = (short)uVar7 + 1;
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)*DAT_008117bc)(local_28);
          }
        }
        iVar4 = iVar4 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = param_1 + 1;
      } while (iVar4 < 0x9b);
    }
  }
  STField<int *>(this,0x24) = piVar1;
  STField<int *>(this,0x5c0) = param_2;
  local_EAX_512 = st::fn_004049B7(recordIndex);
  local_EAX_512 = (int)(byte)local_EAX_512;
  STField<int>(this,0x239) = local_EAX_512 + -1;
  st::fn_00402A36(this);
  iVar4 = 0;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  st::fn_00404BC9(this,extraout_EDX,0);
  st::fn_00401997(this);
  if ((*(int *)(&DAT_00792778 + STField<int>(this,0x235) * 4) == 0) ||
     (iVar2 = st::fn_00405C45(STField<int>(this,0x24),STField<int>(this,0x235),0),
     iVar2 == 0)) {
    puVar3 = (undefined *)0x5;
  }
  else {
    puVar3 = (undefined *)
             st::fn_00405C45(STField<int>(this,0x24),STField<int>(this,0x235),0);
  }
  st::fn_004023A1(this,puVar3);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uVar7 = extraout_EDX_00;
  if (STField<int>(this,0x5ac) == 0x34) {
    st::fn_004031AC(this);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    uVar7 = extraout_EDX_01;
  }
  if (STField<int>(this,0x24) == STField<int>(this,0x23d)) {
LAB_004ccedc:
    if (STField<int>(this,0x5ac) == 0x50) {
      st::fn_00404106(STReplaceLowByte((uint32_t)(uVar7), (uint8_t)(STField<undefined1>(this,0x24))),0x28);
    }
    if ((STField<int>(this,0x5ac) == 0x6f) || (STField<int>(this,0x5ac) == 0x73)) {
      st::fn_004027F2(this);
    }
    if ((STField<int>(this,0x5ac) == 0x36) || (STField<int>(this,0x5ac) == 0x5d)) {
      iVar2 = st::fn_0040186B(STField<int>(this,0x24),
                                 *(int *)(&DAT_00798fb0 + STField<int>(this,0x239) * 4));
      iVar2 = *(int *)(&DAT_00798f98 + (iVar2 + STField<int>(this,0x239) * 2) * 4);
      STField<int>(this,0x4d0) = iVar2;
      st::fn_00405835(this,iVar2);
      STField<undefined4>(this,0x4dc) = 1;
    }
    if ((STField<int>(this,0x5ac) == 0x3d) || (STField<int>(this,0x5ac) == 0x5d)) {
      st::fn_00401B18(this);
    }
  }
  else {
    local_EAX_654 = st::fn_004049B7((char)STField<int>(this,0x23d));
    iVar2 = STField<int>(this,0x235);
    local_EAX_691 = st::fn_004049B7(STField<char>(this,0x24));
    local_EAX_691 = (int)(byte)local_EAX_691;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    uVar7 = extraout_EDX_02;
    if ((&DAT_007e1984)[local_EAX_691 + (iVar2 * 3 + (uint)(byte)local_EAX_654) * 3] != '\0')
    goto LAB_004ccedc;
    STField<undefined4>(this,0x261) = 0;
    STField<undefined4>(this,0x2e1) = 0;
    if (STField<int>(this,0x5ac) == 0x3c) {
      st::fn_00404601(local_8);
    }
  }
  if (STField<int>(this,0x408) != 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = nullptr;
    if (STField<int>(this,0x24) != STField<int>(this,0x23d)) {
      local_EAX_948 = st::fn_004049B7((char)STField<int>(this,0x23d));
      iVar2 = STField<int>(this,0x235);
      uVar5 = st::fn_004049B7(STField<char>(this,0x24));
      uVar5 = (int)(byte)uVar5;
      if ((&DAT_007e1984)[uVar5 + ((uint)(byte)local_EAX_948 + iVar2 * 3) * 3] == '\0') {
        st::fn_00405A33(this);
        goto LAB_004cd038;
      }
    }
    iVar2 = st::fn_006E62D0
                      (g_playSystem_00802A38,STField<AnonShape_005EFAE0_B406B78B *>(this,0x40c),
                       (int *)&param_2);
    if ((iVar2 == 0) && (param_2 != nullptr)) {
      st::fn_00401AE6(param_2,STField<undefined4>(this,0x24),STField<ushort>(this,0x32));
    }
  }
LAB_004cd038:
  if (((STField<int>(this,0x5ac) == 0x6a) &&
      (STField<uint>(this,0x4d4) <= g_playSystem_00802A38->field_00E4)) &&
     (iVar2 = st::fn_006E62D0
                        (g_playSystem_00802A38,STField<AnonShape_005EFAE0_B406B78B *>(this,0x4d0),
                         (int *)&param_2), iVar2 == 0)) {
    st::fn_0040128F(param_2,STField<undefined4>(this,0x24),STField<ushort>(this,0x32));
  }
  if ((STField<int>(this,0x5ac) == 0x41) && (0 < STField<int>(this,0x4e4))) {
    puVar6 = (undefined4 *)((int)this + 0x4d0);
    do {
      if (((AnonShape_005EFAE0_B406B78B *)*puVar6 != nullptr) &&
         (iVar2 = st::fn_006E62D0
                            (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)*puVar6,
                             (int *)&param_2), iVar2 == 0)) {
        st::fn_0040103C(param_2,STField<undefined4>(this,0x24));
      }
      iVar4 = iVar4 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar4 < STField<int>(this,0x4e4));
  }
  if ((STField<int>(this,0x5ac) == 0x69) &&
     (iVar4 = st::fn_006E62D0
                        (g_playSystem_00802A38,STField<AnonShape_005EFAE0_B406B78B *>(this,0x4ec),
                         (int *)&param_2), iVar4 == 0)) {
    st::fn_00405358(param_2,STField<undefined4>(this,0x24),STField<undefined2>(this,0x32));
  }
  if (((STField<int>(this,0x5ac) == 0x70) &&
      (STField<AnonShape_005EFAE0_B406B78B *>(this,0x4f0) != nullptr))
     && (iVar4 = st::fn_006E62D0
                           (g_playSystem_00802A38,
                            STField<AnonShape_005EFAE0_B406B78B *>(this,0x4f0),(int *)&param_2),
        iVar4 == 0)) {
    st::fn_00405128(param_2,STField<undefined4>(this,0x24),STField<undefined2>(this,0x32));
  }
  if (STField<int>(this,0x24) != STField<int>(this,0x23d)) {
    local_EAX_1346 = st::fn_004049B7((char)STField<int>(this,0x23d));
    iVar4 = STField<int>(this,0x235);
    local_EAX_1385 = st::fn_004049B7(STField<char>(this,0x24));
    local_EAX_1385 = (int)(byte)local_EAX_1385;
    if ((&DAT_007e1984)[local_EAX_1385 + ((uint)(byte)local_EAX_1346 + iVar4 * 3) * 3] == '\0')
    goto LAB_004cd1d7;
  }
  iVar4 = STField<int>(this,0x5ac);
  if ((((iVar4 != 0x4d) || (STField<int>(this,0x4d0) == 2)) &&
      ((iVar4 != 0x4c || (STField<int>(this,0x4d0) == 2)))) &&
     ((iVar4 != 0x43 || (STField<int>(this,0x4d0) == 2)))) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar4 = (**(code **)(*(int *)this + 0x2c))();
    st::fn_00405E39(STReplaceLowByte((uint32_t)(iVar4), (uint8_t)(STField<undefined1>(this,0x24))),iVar4);
  }
LAB_004cd1d7:
  st::fn_00404E17(this);
  st::fn_00402CF7(this,1);
  if (STField<uint>(this,0x24) == (uint)*(byte *)(STField<int>(this,0x10) + 0x112d)) {
    st::fn_00404B8D((char)STField<uint>(this,0x24));
  }
  return;
}

// 004CD390 FUN_004cd390
#line 4 "decomp/ST.exe/functions/004CD390/decomp.c"
undefined4 __fastcall st::fn_004CD390(int param_1)

{
  *(undefined4 *)(param_1 + 0x45c) = 0;
  return 0;
}

// 004CD3B0 FUN_004cd3b0
#line 4 "decomp/ST.exe/functions/004CD3B0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 004CD3B0 returns zeroed full register at 004CD3BF @ 004CD3C1 */

uint __fastcall st::fn_004CD3B0(AnonShape_004CC900_31EE9CAA *param_1)

{
  if (*(int *)&param_1->field_0x45c != 0) {
    st::fn_00405B1E(param_1);
  }
  return 0;
}

// 004CD3E0 FUN_004cd3e0
#line 4 "decomp/ST.exe/functions/004CD3E0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00476CE0 -> 004CD3E0 @ 0047700B; /STBoatC+0x18 | 00476CE0 -> 004CD3E0 @ 00477436;
   /STBoatC+0x18 */

undefined4 __thiscall st::fn_004CD3E0(void *this,uint param_1,undefined4 param_2)

{
  if (STField<int>(this,0x45c) == 0) {
    STField<undefined4>(this,0x45c) = 1;
    STField<uint>(this,0x460) = param_1;
    STField<undefined4>(this,0x464) = param_2;
    STField<uint>(this,0x468) = g_playSystem_00802A38->field_00E4;
    st::fn_004028F1(this,2);
  }
  return 0;
}

// 004CD450 FUN_004cd450
#line 4 "decomp/ST.exe/functions/004CD450/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 004CD450 returns zeroed full register at 004CD45F @ 004CD461 */

uint __fastcall st::fn_004CD450(AnonShape_004CC900_31EE9CAA *param_1)

{
  *(undefined4 *)&param_1->field_0x45c = 0;
  st::fn_00405768((TLOBaseTy *)param_1);
  return 0;
}

// 004CD480 FUN_004cd480
#line 4 "decomp/ST.exe/functions/004CD480/decomp.c"
undefined4 __fastcall st::fn_004CD480(AnonShape_004CC900_31EE9CAA *param_1)

{
  int local_EAX_19;
  int iVar1;
  uint uVar2;
  int local_EAX_235;
  int uVar1;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;

  iVar3 = 0;
  local_EAX_19 = st::fn_004049B7(param_1->field_0x464);
  local_EAX_19 = (int)(byte)local_EAX_19;
  if (local_EAX_19 == 1) {
    iVar1 = st::fn_0040186B(*(int *)&param_1->field_0x464,0x98);
joined_r0x004cd4ea:
    if (iVar1 != 0) {
      iVar3 = 1;
    }
  }
  else {
    if (local_EAX_19 == 2) {
      iVar1 = *(int *)&param_1->field_0x464;
      iVar5 = 0x94;
LAB_004cd4c0:
      iVar1 = st::fn_0040186B(iVar1,iVar5);
      goto joined_r0x004cd4ea;
    }
    if (local_EAX_19 == 3) {
      iVar1 = *(int *)&param_1->field_0x464;
      iVar5 = 0x90;
      goto LAB_004cd4c0;
    }
  }
  if (g_playSystem_00802A38->field_00E4 <
      (uint)((&DAT_007914d8)[iVar3] + *(int *)&param_1->field_0x468)) {
    return 0;
  }
  uVar2 = *(int *)&param_1->field_0x1c * 0x41c64e6d + 0x3039;
  *(uint *)&param_1->field_0x1c = uVar2;
  if ((uVar2 & 0x30000) < 0x20001) {
    uVar4 = 1;
    if (*(uint *)&param_1->field_0x464 != (uint)DAT_0080874d) goto cf_common_exit_004CD624;
    st::fn_00402D5B(1,*(float *)&param_1->field_0x1f9,*(float *)&param_1->field_0x1fd);
    local_EAX_235 = st::fn_004049B7(param_1->field_0x24);
    local_EAX_235 = (int)(byte)local_EAX_235;
    if (local_EAX_235 == 1) {
      iVar3 = *(int *)param_1;
      uVar6 = 0x7a;
    }
    else {
      if (local_EAX_235 == 2) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*(int *)param_1 + 0x90))(6,0x7b);
        st::fn_00405B1E(param_1);
        return 1;
      }
      if (local_EAX_235 != 3) goto cf_common_exit_004CD624;
      iVar3 = *(int *)param_1;
      uVar6 = 0x7c;
    }
  }
  else {
    uVar4 = 2;
    if (*(uint *)&param_1->field_0x464 != (uint)DAT_0080874d) goto cf_common_exit_004CD624;
    st::fn_00402D5B(1,*(float *)&param_1->field_0x1f9,*(float *)&param_1->field_0x1fd);
    uVar1 = st::fn_004049B7(param_1->field_0x24);
    uVar1 = (int)(byte)uVar1;
    if (uVar1 == 1) {
      iVar3 = *(int *)param_1;
      uVar6 = 0x7d;
    }
    else {
      if (uVar1 == 2) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*(int *)param_1 + 0x90))(6,0x7e);
        st::fn_00405B1E(param_1);
        return 2;
      }
      if (uVar1 != 3) goto cf_common_exit_004CD624;
      iVar3 = *(int *)param_1;
      uVar6 = 0x7f;
    }
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(iVar3 + 0x90))(6,uVar6);
cf_common_exit_004CD624:
  st::fn_00405B1E(param_1);
  return uVar4;
}

// 004CD6B0 FUN_004cd6b0
#line 4 "decomp/ST.exe/functions/004CD6B0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 004CD6B0 returns zeroed full register at 004CD6CF @ 004CD6D1 */

uint __fastcall st::fn_004CD6B0(AnonShape_004CD6B0_318BEA19 *param_1)

{
  param_1->field_0524 = 0;
  if ((param_1->field_0231 == 1) || (param_1->field_0231 == 3)) {
    st::fn_00402C93((AnonShape_004CD790_161F55D2 *)param_1);
  }
  return 0;
}

// 004CD6F0 FUN_004cd6f0
#line 4 "decomp/ST.exe/functions/004CD6F0/decomp.c"
undefined4 __fastcall st::fn_004CD6F0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  TLOBaseTy *local_8;

  iVar3 = 0;
  local_8 = nullptr;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (0 < *(int *)(param_1 + 0x524)) {
    puVar2 = (undefined4 *)(param_1 + 0x4d0);
    do {
      iVar1 = st::fn_006E62D0
                        (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)*puVar2,
                         (int *)&local_8);
      if (iVar1 == 0) {
        local_8->field_04D4 = 0;
        local_8->field_05D3 = 0;
        st::fn_0040142E(local_8);
      }
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    } while (iVar3 < *(int *)(param_1 + 0x524));
    *(undefined4 *)(param_1 + 0x524) = 0;
    return 0;
  }
  *(undefined4 *)(param_1 + 0x524) = 0;
  return 0;
}

// 004CD790 FUN_004cd790
#line 4 "decomp/ST.exe/functions/004CD790/decomp.c"
undefined4 __fastcall st::fn_004CD790(AnonShape_004CD790_161F55D2 *param_1)

{
  STWorldObject *pSVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  short sVar6;

  iVar3 = param_1->field_05B4 + -1;
  sVar5 = (short)param_1->field_05B0;
  if (((((((-1 < iVar3) && (sVar6 = param_1->field_05B8, -1 < sVar5)) && (sVar5 < g_worldGrid.sizeX)
         ) && ((sVar2 = (short)iVar3, -1 < sVar2 && (sVar2 < g_worldGrid.sizeY)))) &&
       ((-1 < sVar6 &&
        ((sVar6 < g_worldGrid.sizeZ &&
         (pSVar1 = STGridAt3D(g_worldGrid, sVar5, sVar2, sVar6).objects[0], pSVar1 != nullptr)))))) &&
      (iVar3 = pSVar1->GetObjectTypeId(), 0x53 < iVar3)) &&
     ((iVar3 = pSVar1->GetObjectTypeId(), iVar3 < 0x5b &&
      (*(int *)&pSVar1[0x29].field_0xf == 0)))) {
    *(undefined4 *)&pSVar1[0x29].field_0xf = param_1->field_0018;
    st::fn_004035B2(pSVar1,1);
  }
  iVar3 = param_1->field_05B4 + 1;
  if (((((iVar3 < g_worldGrid.sizeY) && (sVar6 = param_1->field_05B8, -1 < sVar5)) &&
       (sVar5 < g_worldGrid.sizeX)) &&
      (((sVar2 = (short)iVar3, -1 < sVar2 && (sVar2 < g_worldGrid.sizeY)) &&
       ((-1 < sVar6 &&
        ((sVar6 < g_worldGrid.sizeZ &&
         (pSVar1 = STGridAt3D(g_worldGrid, sVar5, sVar2, sVar6).objects[0], pSVar1 != nullptr)))))))) &&
     ((iVar4 = pSVar1->GetObjectTypeId(), 0x53 < iVar4 &&
      ((iVar4 = pSVar1->GetObjectTypeId(), iVar4 < 0x5b &&
       (*(int *)&pSVar1[0x29].field_0xf == 0)))))) {
    *(undefined4 *)&pSVar1[0x29].field_0xf = param_1->field_0018;
    st::fn_004035B2(pSVar1,1);
  }
  iVar4 = param_1->field_05B0 + 1;
  if (iVar4 < g_worldGrid.sizeX) {
    iVar3 = param_1->field_05B4 + -1;
    sVar5 = (short)iVar4;
    if (((((-1 < iVar3) && (sVar6 = param_1->field_05B8, -1 < sVar5)) && (sVar5 < g_worldGrid.sizeX)
         ) && (((sVar2 = (short)iVar3, -1 < sVar2 && (sVar2 < g_worldGrid.sizeY)) &&
               ((-1 < sVar6 &&
                ((sVar6 < g_worldGrid.sizeZ &&
                 (pSVar1 = STGridAt3D(g_worldGrid, sVar5, sVar2, sVar6).objects[0],
                 pSVar1 != nullptr)))))))) &&
       ((iVar3 = pSVar1->GetObjectTypeId(), 0x53 < iVar3 &&
        ((iVar3 = pSVar1->GetObjectTypeId(), iVar3 < 0x5b &&
         (*(int *)&pSVar1[0x29].field_0xf == 0)))))) {
      *(undefined4 *)&pSVar1[0x29].field_0xf = param_1->field_0018;
      st::fn_004035B2(pSVar1,1);
    }
    iVar3 = param_1->field_05B4 + 2;
    if ((((((iVar3 < g_worldGrid.sizeY) && (sVar6 = param_1->field_05B8, -1 < sVar5)) &&
          (sVar5 < g_worldGrid.sizeX)) &&
         ((sVar2 = (short)iVar3, -1 < sVar2 && (sVar2 < g_worldGrid.sizeY)))) && (-1 < sVar6)) &&
       (((sVar6 < g_worldGrid.sizeZ &&
         (pSVar1 = STGridAt3D(g_worldGrid, sVar5, sVar2, sVar6).objects[0], pSVar1 != nullptr)) &&
        ((iVar4 = pSVar1->GetObjectTypeId(), 0x53 < iVar4 &&
         ((iVar4 = pSVar1->GetObjectTypeId(), iVar4 < 0x5b &&
          (*(int *)&pSVar1[0x29].field_0xf == 0)))))))) {
      *(undefined4 *)&pSVar1[0x29].field_0xf = param_1->field_0018;
      st::fn_004035B2(pSVar1,1);
    }
  }
  iVar4 = param_1->field_05B0 + -1;
  if (-1 < iVar4) {
    sVar5 = param_1->field_05B8;
    sVar6 = (short)iVar4;
    if (((((-1 < sVar6) && (sVar6 < g_worldGrid.sizeX)) && (sVar2 = (short)iVar3, -1 < sVar2)) &&
        ((sVar2 < g_worldGrid.sizeY && (-1 < sVar5)))) &&
       (((sVar5 < g_worldGrid.sizeZ &&
         ((pSVar1 = STGridAt3D(g_worldGrid, sVar6, sVar2, sVar5).objects[0], pSVar1 != nullptr &&
          (iVar3 = pSVar1->GetObjectTypeId(), 0x53 < iVar3)))) &&
        ((iVar3 = pSVar1->GetObjectTypeId(), iVar3 < 0x5b &&
         (*(int *)&pSVar1[0x29].field_0xf == 0)))))) {
      *(undefined4 *)&pSVar1[0x29].field_0xf = param_1->field_0018;
      st::fn_004035B2(pSVar1,1);
    }
    iVar3 = param_1->field_05B4 + 1;
    if (((((iVar3 < g_worldGrid.sizeY) && (sVar5 = param_1->field_05B8, -1 < sVar6)) &&
         (sVar6 < g_worldGrid.sizeX)) &&
        (((sVar2 = (short)iVar3, -1 < sVar2 && (sVar2 < g_worldGrid.sizeY)) &&
         ((-1 < sVar5 &&
          ((sVar5 < g_worldGrid.sizeZ &&
           (pSVar1 = STGridAt3D(g_worldGrid, sVar6, sVar2, sVar5).objects[0],
           pSVar1 != nullptr)))))))) &&
       ((iVar4 = pSVar1->GetObjectTypeId(), 0x53 < iVar4 &&
        ((iVar4 = pSVar1->GetObjectTypeId(), iVar4 < 0x5b &&
         (*(int *)&pSVar1[0x29].field_0xf == 0)))))) {
      *(undefined4 *)&pSVar1[0x29].field_0xf = param_1->field_0018;
      st::fn_004035B2(pSVar1,1);
    }
  }
  iVar4 = param_1->field_05B0 + 2;
  if (iVar4 < g_worldGrid.sizeX) {
    sVar5 = param_1->field_05B8;
    sVar6 = (short)iVar4;
    if (((((-1 < sVar6) && (sVar6 < g_worldGrid.sizeX)) && (sVar2 = (short)iVar3, -1 < sVar2)) &&
        ((sVar2 < g_worldGrid.sizeY && (-1 < sVar5)))) &&
       ((((sVar5 < g_worldGrid.sizeZ &&
          ((pSVar1 = STGridAt3D(g_worldGrid, sVar6, sVar2, sVar5).objects[0],
           pSVar1 != nullptr &&
           (iVar3 = pSVar1->GetObjectTypeId(), 0x53 < iVar3)))) &&
         (iVar3 = pSVar1->GetObjectTypeId(), iVar3 < 0x5b)) &&
        (*(int *)&pSVar1[0x29].field_0xf == 0)))) {
      *(undefined4 *)&pSVar1[0x29].field_0xf = param_1->field_0018;
      st::fn_004035B2(pSVar1,1);
    }
    iVar3 = param_1->field_05B4 + 1;
    if ((((iVar3 < g_worldGrid.sizeY) && (sVar5 = param_1->field_05B8, -1 < sVar6)) &&
        (sVar6 < g_worldGrid.sizeX)) &&
       (((((sVar2 = (short)iVar3, -1 < sVar2 && (sVar2 < g_worldGrid.sizeY)) &&
          ((-1 < sVar5 &&
           ((sVar5 < g_worldGrid.sizeZ &&
            (pSVar1 = STGridAt3D(g_worldGrid, sVar6, sVar2, sVar5).objects[0],
            pSVar1 != nullptr)))))) &&
         (iVar3 = pSVar1->GetObjectTypeId(), 0x53 < iVar3)) &&
        ((iVar3 = pSVar1->GetObjectTypeId(), iVar3 < 0x5b &&
         (*(int *)&pSVar1[0x29].field_0xf == 0)))))) {
      *(undefined4 *)&pSVar1[0x29].field_0xf = param_1->field_0018;
      st::fn_004035B2(pSVar1,1);
    }
  }
  return 0;
}

// 004CDEB0 FUN_004cdeb0
#line 4 "decomp/ST.exe/functions/004CDEB0/decomp.c"
undefined4 __thiscall st::fn_004CDEB0(void *this,undefined4 param_1)

{
  if (STField<int>(this,0x524) < 0x14) {
    *(undefined4 *)((int)this + STField<int>(this,0x524) * 4 + 0x4d0) = param_1;
    STField<int>(this,0x524) = STField<int>(this,0x524) + 1;
  }
  return 0;
}

// 004CDEF0 FUN_004cdef0
#line 4 "decomp/ST.exe/functions/004CDEF0/decomp.c"
undefined4 __thiscall st::fn_004CDEF0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;

  iVar2 = 0;
  iVar1 = STField<int>(this,0x524);
  if (0 < iVar1) {
    piVar3 = (int *)((int)this + 0x4d0);
    while (*piVar3 != param_1) {
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
      if (iVar1 <= iVar2) {
        return 0;
      }
    }
    st::fn_0072DA70
              ((undefined4 *)((int)this + iVar2 * 4 + 0x4d0),
               (AnonPointee_TLOBaseTy_0607 *)((int)this + iVar2 * 4 + 0x4d4),
               ((iVar2 + 1) * 0x3fffffff + iVar1) * 4);
    STField<int>(this,0x524) = STField<int>(this,0x524) + -1;
  }
  return 0;
}

// 004CDF80 FUN_004cdf80
#line 4 "decomp/ST.exe/functions/004CDF80/decomp.c"
undefined4 __thiscall st::fn_004CDF80(void *this,int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;

  uVar1 = 0;
  iVar3 = 0;
  if (0 < STField<int>(this,0x524)) {
    piVar2 = (int *)((int)this + 0x4d0);
    while (*piVar2 != param_1) {
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
      if (STField<int>(this,0x524) <= iVar3) {
        return uVar1;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}

// 004CDFD0 FUN_004cdfd0
#line 4 "decomp/ST.exe/functions/004CDFD0/decomp.c"
undefined4 __thiscall st::fn_004CDFD0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;

  iVar1 = st::fn_00402829((short)param_2,param_3,param_4,param_1,STField<int>(this,0x24),
                             nullptr,nullptr,nullptr,0,STField<int *>(this,0x18));
  if (iVar1 != 0) {
    st::fn_004018A2(STField<int>(this,0x24),param_1,param_2,param_3,param_4,
                       (uint)STField<ushort>(this,0x30),STField<int>(this,0x5c0),nullptr,
                       STField<undefined4>(this,0x18),100);
  }
  return 0;
}

// 004CE060 FUN_004ce060
#line 4 "decomp/ST.exe/functions/004CE060/decomp.c"
int __thiscall st::fn_004CE060(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *local_c;
  int local_8;

  iVar3 = 0;
  local_8 = 0;
  iVar1 = 0;
  if (0 < STField<int>(this,0x524)) {
    puVar2 = (undefined4 *)((int)this + 0x4d0);
    do {
      iVar1 = st::fn_006E62D0
                        (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)*puVar2,
                         (int *)&local_c);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      if (((iVar1 == 0) && (local_c != nullptr)) &&
         (iVar1 = (**(code **)(*local_c + 0x2c))(), iVar1 == param_1)) {
        local_8 = local_8 + 1;
      }
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
      iVar1 = local_8;
    } while (iVar3 < STField<int>(this,0x524));
  }
  return iVar1;
}

// 004CE0F0 FUN_004ce0f0
#line 4 "decomp/ST.exe/functions/004CE0F0/decomp.c"
void __thiscall st::fn_004CE0F0(void *this,int *param_1)

{
  DArrayTy *pDVar1;
  int iVar2;
  int local_EAX_132;
  int uVar3;
  int local_EAX_200;
  int iVar3;
  int local_38 [2];
  undefined1 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  int local_8;

  if (*param_1 == 0) {
    pDVar1 = st::fn_006AE290(nullptr,5,0x30,5);
    *param_1 = (int)pDVar1;
  }
  *(undefined4 *)(*param_1 + 0xc) = 0;
  if (STField<int>(this,0x5ac) == 0x53) {
    local_8 = 0x54;
    iVar3 = 0xfc;
    do {
      iVar2 = st::fn_0040571D(STField<int>(this,0x24),local_8 + -0x32);
      if (iVar2 != 0) {
        memset(local_38, 0, 0x30); /* compiler bulk-zero initialization */
        local_38[0] = local_8;
        local_30 = 1;
        local_EAX_132 = st::fn_004049B7(STField<char>(this,0x24));
        local_EAX_132 = (int)(byte)local_EAX_132;
        local_2a = *(undefined2 *)(&DAT_00854350 + (local_EAX_132 + iVar3) * 4);
        uVar3 = st::fn_004049B7(STField<char>(this,0x24));
        uVar3 = (int)(byte)uVar3;
        local_2e = *(undefined2 *)(&DAT_007e19f4 + (uVar3 + iVar3) * 4);
        local_EAX_200 = st::fn_004049B7(STField<char>(this,0x24));
        local_EAX_200 = (int)(byte)local_EAX_200;
        local_2c = *(undefined2 *)(&DAT_007e2f04 + (local_EAX_200 + iVar3) * 4);
        st::fn_006AE1C0((DArrayTy *)*param_1,local_38);
      }
      iVar3 = iVar3 + 3;
      local_8 = local_8 + 1;
    } while (iVar3 < 0x10f);
  }
  return;
}

// 004CE250 FUN_004ce250
#line 4 "decomp/ST.exe/functions/004CE250/decomp.c"
undefined4 __thiscall st::fn_004CE250(void *this,int param_1)

{
  short sVar1;
  STWorldObject *pSVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  short sVar6;
  void *local_8;

  local_8 = nullptr;
  if ((STField<AnonShape_005EFAE0_B406B78B *>(this,0x5d3) != nullptr)
     && (STField<int>(this,0x4d4) == 0)) {
    iVar4 = st::fn_006E62D0
                      (g_playSystem_00802A38,STField<AnonShape_005EFAE0_B406B78B *>(this,0x5d3),
                       (int *)&local_8);
    if (iVar4 == 0) {
      st::fn_00403238(local_8,STField<undefined4>(this,0x18));
      uVar5 = st::fn_00402FBD(local_8,STField<int>(this,0x18));
      STField<undefined4>(this,0x4d4) = uVar5;
      if (param_1 != 0) {
        iVar4 = STField<int>(this,0x5b4) + -1;
        sVar6 = (short)STField<undefined4>(this,0x5b0);
        if (((((-1 < iVar4) && (sVar1 = STField<short>(this,0x5b8), -1 < sVar6)) &&
             (sVar6 < g_worldGrid.sizeX)) &&
            ((sVar3 = (short)iVar4, -1 < sVar3 && (sVar3 < g_worldGrid.sizeY)))) &&
           ((-1 < sVar1 &&
            ((sVar1 < g_worldGrid.sizeZ &&
             (pSVar2 = STGridAt3D(g_worldGrid, sVar6, sVar3, sVar1).objects[0],
             pSVar2 != nullptr)))))) {
          iVar4 = pSVar2->GetObjectTypeId();
          if (0x53 < iVar4) {
            iVar4 = pSVar2->GetObjectTypeId();
            if ((iVar4 < 0x5b) && (*(int *)&pSVar2[0x29].field_0xf == 0)) {
              *(undefined4 *)&pSVar2[0x29].field_0xf = STField<undefined4>(this,0x5d3);
              st::fn_004035B2(pSVar2,1);
            }
          }
        }
        iVar4 = STField<int>(this,0x5b4) + 1;
        if ((((iVar4 < g_worldGrid.sizeY) && (sVar1 = STField<short>(this,0x5b8), -1 < sVar6)) &&
            (sVar6 < g_worldGrid.sizeX)) &&
           (((sVar3 = (short)iVar4, -1 < sVar3 && (sVar3 < g_worldGrid.sizeY)) &&
            ((-1 < sVar1 &&
             ((sVar1 < g_worldGrid.sizeZ &&
              (pSVar2 = STGridAt3D(g_worldGrid, sVar6, sVar3, sVar1).objects[0],
              pSVar2 != nullptr)))))))) {
          iVar4 = pSVar2->GetObjectTypeId();
          if (0x53 < iVar4) {
            iVar4 = pSVar2->GetObjectTypeId();
            if ((iVar4 < 0x5b) && (*(int *)&pSVar2[0x29].field_0xf == 0)) {
              *(undefined4 *)&pSVar2[0x29].field_0xf = STField<undefined4>(this,0x5d3);
              st::fn_004035B2(pSVar2,1);
            }
          }
        }
        iVar4 = STField<int>(this,0x5b0) + -1;
        sVar6 = (short)STField<undefined4>(this,0x5b4);
        if (-1 < iVar4) {
          sVar1 = STField<short>(this,0x5b8);
          sVar3 = (short)iVar4;
          if ((((-1 < sVar3) && (sVar3 < g_worldGrid.sizeX)) && (-1 < sVar6)) &&
             (((sVar6 < g_worldGrid.sizeY && (-1 < sVar1)) &&
              ((sVar1 < g_worldGrid.sizeZ &&
               (pSVar2 = STGridAt3D(g_worldGrid, sVar3, sVar6, sVar1).objects[0],
               pSVar2 != nullptr)))))) {
            iVar4 = pSVar2->GetObjectTypeId();
            if (0x53 < iVar4) {
              iVar4 = pSVar2->GetObjectTypeId();
              if ((iVar4 < 0x5b) && (*(int *)&pSVar2[0x29].field_0xf == 0)) {
                *(undefined4 *)&pSVar2[0x29].field_0xf = STField<undefined4>(this,0x5d3);
                st::fn_004035B2(pSVar2,1);
              }
            }
          }
        }
        iVar4 = STField<int>(this,0x5b0) + 1;
        if (iVar4 < g_worldGrid.sizeX) {
          sVar1 = STField<short>(this,0x5b8);
          sVar3 = (short)iVar4;
          if (((((-1 < sVar3) && (sVar3 < g_worldGrid.sizeX)) && (-1 < sVar6)) &&
              ((sVar6 < g_worldGrid.sizeY && (-1 < sVar1)))) &&
             ((sVar1 < g_worldGrid.sizeZ &&
              (pSVar2 = STGridAt3D(g_worldGrid, sVar3, sVar6, sVar1).objects[0],
              pSVar2 != nullptr)))) {
            iVar4 = pSVar2->GetObjectTypeId();
            if (0x53 < iVar4) {
              iVar4 = pSVar2->GetObjectTypeId();
              if ((iVar4 < 0x5b) && (*(int *)&pSVar2[0x29].field_0xf == 0)) {
                *(undefined4 *)&pSVar2[0x29].field_0xf = STField<undefined4>(this,0x5d3);
                st::fn_004035B2(pSVar2,1);
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

// 004CE640 FUN_004ce640
#line 4 "decomp/ST.exe/functions/004CE640/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 004CE640 returns zeroed full register at 004CE657 @ 004CE659 */

uint __fastcall st::fn_004CE640(void *param_1)

{
  if ((STField<int>(param_1,0x231) == 1) || (STField<int>(param_1,0x231) == 3)) {
    st::fn_004035B2(param_1,1);
  }
  return 0;
}

// 004CE670 FUN_004ce670
#line 4 "decomp/ST.exe/functions/004CE670/decomp.c"
undefined4 __fastcall st::fn_004CE670(AnonShape_004CE670_5D83C685 *param_1)

{
  int iVar1;
  void *local_8;

  local_8 = nullptr;
  if ((param_1->field_04D4 != 0) &&
     ((AnonShape_005EFAE0_B406B78B *)param_1->field_05D3 != nullptr)) {
    iVar1 = st::fn_006E62D0
                      (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)param_1->field_05D3,
                       (int *)&local_8);
    if (iVar1 == 0) {
      st::fn_0040536C(local_8,param_1->field_0018);
    }
  }
  param_1->field_04D4 = 0;
  return 0;
}

// 004CE6E0 FUN_004ce6e0
#line 4 "decomp/ST.exe/functions/004CE6E0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 004CE6E0 returns zeroed full register at 004CE6E7 @ 004CE6E9 */

uint __fastcall st::fn_004CE6E0(void *param_1)

{
  st::fn_004035B2(param_1,1);
  return 0;
}

// 004CE700 FUN_004ce700
#line 4 "decomp/ST.exe/functions/004CE700/decomp.c"
void __fastcall st::fn_004CE700(int param_1)

{
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  *(undefined4 *)(param_1 + 0x4dc) = 0;
  return;
}

// 004CE720 FUN_004ce720
#line 4 "decomp/ST.exe/functions/004CE720/decomp.c"
void __fastcall st::fn_004CE720(AnonShape_004CE720_8639BE44 *param_1)

{
  if ((param_1->field_04D0 != 0) && (param_1->field_04DC != 0)) {
    st::fn_00401DD4(DAT_00800bcc,param_1->field_04E0,param_1->field_04E4,param_1->field_04E8);
  }
  return;
}

// 004CE770 FUN_004ce770
#line 4 "decomp/ST.exe/functions/004CE770/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 004CE770 returns zeroed full register at 004CE788 @ 004CE78B */

uint __thiscall st::fn_004CE770(void *this,int param_1)

{
  if ((param_1 == 1) && (STField<int>(this,0x4d0) == 0)) {
    st::fn_00403AA8(this);
  }
  return 0;
}

// 004CE7A0 FUN_004ce7a0
#line 4 "decomp/ST.exe/functions/004CE7A0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 004CE7A0 returns zeroed full register at 004CE7B1 @ 004CE7B3 */

uint __fastcall st::fn_004CE7A0(TLOBaseTy *param_1)

{
  param_1->field_04D0 = CASE_1;
  st::fn_00402CF7(param_1,1);
  return 0;
}

// 004CE9E0 FUN_004ce9e0
#line 4 "decomp/ST.exe/functions/004CE9E0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_004CE9E0(void *this,int *param_1,int *param_2,int *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;

  if (&stack0x00000000 == (undefined1 *)0xfffffffc) {
    sVar3 = (short)param_1;
    sVar1 = sVar3;
    sVar2 = sVar3;
  }
  else {
    sVar3 = STField<short>(this,0x45);
    sVar1 = STField<short>(this,0x43);
    sVar2 = STField<short>(this,0x41);
  }
  switch(STField<undefined4>(this,0x5ac)) {
  case 0x32:
  case 0x5c:
    *param_1 = sVar2 + 100;
    *param_2 = sVar1 + 100;
    *param_3 = sVar3 + 10;
    break;
  case 0x40:
  case 0x49:
    *param_1 = (int)sVar2;
    *param_2 = (int)sVar1;
    *param_3 = sVar3 + 10;
    return;
  }
  return;
}

// 004CF3E0 FUN_004cf3e0
#line 4 "decomp/ST.exe/functions/004CF3E0/decomp.c"
undefined4 __thiscall st::fn_004CF3E0(void *this,int param_1)

{
  if (param_1 == STField<int>(this,0x4d4)) {
    STField<undefined4>(this,0x4d8) = 1;
  }
  return 0;
}

// 004CF410 FUN_004cf410
#line 4 "decomp/ST.exe/functions/004CF410/decomp.c"
undefined4 st::fn_004CF410(void)

{
  return 0;
}

// 004CF430 FUN_004cf430
#line 1 "decomp/ST.exe/functions/004CF430/decomp.c"

/* [STPrototypeApplier] Propagated return.
   Evidence: 004CF430 returns zeroed full register at 004CF435 @ 004CF437 */

uint st::fn_004CF430(void)

{
  st::fn_00404395();
  return 0;
}

// 004CF450 FUN_004cf450
#line 4 "decomp/ST.exe/functions/004CF450/decomp.c"
undefined4 __thiscall st::fn_004CF450(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;

  if (STField<int>(this,0x361) == 1) {
    STField<int>(this,0x371) = param_1;
  }
  if (((STField<int>(this,0x3d4) != 0) && (STField<int>(this,0x607) != 0)) &&
     (iVar3 = 0, 0 < STField<int>(this,0x3d4))) {
    iVar2 = 0;
    do {
      piVar1 = (int *)(STField<int>(this,0x607) + iVar2);
      if (*piVar1 == 1) {
        piVar1[3] = param_1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x27;
    } while (iVar3 < STField<int>(this,0x3d4));
    return 0;
  }
  return 0;
}

// 004CF640 FUN_004cf640
#line 4 "decomp/ST.exe/functions/004CF640/decomp.c"
void __thiscall st::fn_004CF640(void *this,int *param_1)

{
  bool bVar1;
  byte bVar2;
  DArrayTy *pDVar3;
  int uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint index;
  int local_fc [40];
  int local_5c [2];
  char local_54;
  byte local_53;
  undefined2 local_52;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  uint local_4a [7];
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  int *local_14;
  undefined *local_10;
  undefined *local_c;
  int local_8;

  local_20 = 0;
  local_18 = 0;
  local_1c = 0;
  local_24 = 0;
  local_8 = 4;
  piVar4 = param_1;
  do {
    if (*piVar4 == 0) {
      pDVar3 = st::fn_006AE290(nullptr,5,0x30,5);
      *piVar4 = (int)pDVar3;
    }
    iVar6 = *piVar4;
    piVar4 = piVar4 + 1;
    *(undefined4 *)(iVar6 + 0xc) = 0;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if ((STField<int>(this,0x5ac) == 0x32) || (STField<int>(this,0x5ac) == 0x5c)) {
    uVar3 = st::fn_004049B7(STField<char>(this,0x24));
    uVar3 = (int)(byte)uVar3;
    local_10 = (undefined *)(uVar3 + -1);
    memset(local_fc, 0, 0xa0); /* compiler bulk-zero initialization */
    if (((STField<int>(this,0x5ac) == 0x5c) &&
        (pDVar3 = g_packedRecords_A62x8[STField<int>(this,0x24)].field1970_0x9de,
        pDVar3 != nullptr)) && (index = 0, 0 < (int)pDVar3->count)) {
      do {
        st::fn_006ACC70(pDVar3,index,&local_28);
        piVar4 = local_fc;
        piVar7 = (int *)(local_28 + 0x4e0);
        iVar6 = 0x28;
        do {
          iVar5 = *piVar7;
          piVar7 = piVar7 + 1;
          *piVar4 = *piVar4 + iVar5;
          piVar4 = piVar4 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        index = index + 1;
        pDVar3 = g_packedRecords_A62x8[STField<int>(this,0x24)].field1970_0x9de;
      } while ((int)index < (int)pDVar3->count);
    }
    local_2c = (int)local_10 << 4;
    local_8 = 0;
    do {
      local_10 = &DAT_00801330 + local_2c;
      local_c = nullptr;
      switch(local_8) {
      case 0:
        local_c = &DAT_00801450;
        break;
      case 1:
        local_c = &DAT_00801480;
        break;
      case 2:
        local_c = &DAT_00800f10;
        break;
      case 3:
        local_10 = &DAT_008013f0 + local_2c;
        local_c = local_10;
      }
      local_14 = local_fc;
      iVar6 = 1;
      do {
        if ((local_10 == nullptr) || (iVar5 = st::fn_006B0FD0((int)local_10), iVar5 != 0)) {
          iVar5 = st::fn_006B0FD0((int)local_c);
          if ((iVar5 != 0) &&
             (iVar5 = st::fn_0040571D(STField<int>(this,0x24),iVar6 + 0x41), iVar5 != 0)) {
            memset(local_5c, 0, 0x30); /* compiler bulk-zero initialization */
            local_5c[0] = iVar6;
            local_5c[1] = st::fn_00401B59(this,1,iVar6,-1);
            if ((STField<int>(this,0x361) == 1) && (STField<int>(this,0x369) == iVar6)) {
              local_5c[1] = local_5c[1] + STField<int>(this,0x36d);
            }
            iVar5 = st::fn_0040413D(STField<byte *>(this,0x24),iVar6);
            if ((iVar5 == 0) ||
               (local_54 = '\x01', g_worldGrid.sizeZ + -1 <= STField<int>(this,0x5b8))) {
              local_54 = '\0';
            }
            st::fn_004035DF(this,CASE_1,iVar6,&local_20,&local_18,&local_1c,&local_24);
            local_4e = (undefined2)local_20;
            local_52 = (undefined2)local_18;
            bVar2 = st::fn_004049B7(STField<char>(this,0x24));
            if (bVar2 == 3) {
              local_50 = (undefined2)local_24;
            }
            else {
              local_50 = (undefined2)local_1c;
            }
            local_4c = 0xffff;
            if (*local_14 != 0) {
              local_4c = (undefined2)*local_14;
            }
            local_53 = st::fn_004049B7(STField<char>(this,0x24));
            if (local_54 == '\0') {
              st::fn_00402E32(STField<byte *>(this,0x24),iVar6,local_4a);
            }
            st::fn_006AE1C0((DArrayTy *)param_1[local_8],local_5c);
          }
        }
        local_14 = local_14 + 1;
        bVar1 = iVar6 < 0x28;
        iVar6 = iVar6 + 1;
      } while (bVar1);
      local_8 = local_8 + 1;
    } while (local_8 < 4);
  }
  return;
}

// 004CFBE0 FUN_004cfbe0
#line 4 "decomp/ST.exe/functions/004CFBE0/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004CFBE0_param_1Enum. Cases:
   CASE_8=8;CASE_9=9;CASE_D=13;CASE_E=14

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 004CAFC0 -> 004CFBE0 @ 004CB022

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 004CAFC0 -> 004CFBE0 @ 004CB022 */

void __thiscall
st::fn_004CFBE0(void *this,Global_sub_004CFBE0_param_1Enum param_1,int param_2,uint *param_3,
            uint *param_4)

{
  int iVar1;
  int iVar2;
  int uVar3;
  int iVar3;
  uint uVar4;

  uVar3 = st::fn_004049B7(STField<char>(this,0x23d));
  uVar3 = (int)(byte)uVar3;
  iVar1 = STField<int>(this,0x245);
  iVar3 = uVar3 + -1;
  switch(param_1) {
  case CASE_8:
  case CASE_9:
    iVar2 = STField<int>(this,0x4d0);
    if (iVar2 != 3) {
      if (iVar2 == 4) {
        uVar4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                         (param_2 + (iVar3 + STField<int>(this,0x235) * 3) * 4) * 8 + 4);
        *param_4 = uVar4;
        *param_3 = uVar4;
        return;
      }
joined_r0x004cfc7d:
      if (iVar2 == 5) {
        *param_4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                            (param_2 + (iVar3 + STField<int>(this,0x235) * 3) * 4) * 8);
        *param_3 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                            (param_2 + (iVar3 + STField<int>(this,0x235) * 3) * 4) * 8 + 4);
        return;
      }
      uVar4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                       (param_2 + (iVar3 + STField<int>(this,0x235) * 3) * 4) * 8);
      *param_4 = uVar4;
      *param_3 = uVar4;
switchD_004cfc1d_caseD_a:
      return;
    }
    break;
  default:
    goto switchD_004cfc1d_caseD_a;
  case CASE_D:
  case CASE_E:
    iVar2 = STField<int>(this,0x4d0);
    if (iVar2 != 3) {
      if (iVar2 == 4) {
        uVar4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                         (param_2 + (iVar3 + STField<int>(this,0x235) * 3) * 4) * 8 + 4);
        goto LAB_004cfc50;
      }
      goto joined_r0x004cfc7d;
    }
  }
  uVar4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                   (param_2 + (iVar3 + STField<int>(this,0x235) * 3) * 4) * 8);
LAB_004cfc50:
  *param_3 = uVar4;
  *param_4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                      (param_2 + (iVar3 + STField<int>(this,0x235) * 3) * 4) * 8 + 4);
  return;
}

// 004CFDE0 FUN_004cfde0
#line 4 "decomp/ST.exe/functions/004CFDE0/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 004CAFC0 -> 004CFDE0 @ 004CB068 */

void __thiscall
st::fn_004CFDE0(void *this,TLOBaseTy_sub_004CAFC0_param_1Enum param_1,uint param_2,uint *param_3,
            uint *param_4)

{
  int iVar1;
  int iVar2;
  int uVar3;
  int iVar3;
  uint uVar4;

  uVar3 = st::fn_004049B7(STField<char>(this,0x23d));
  uVar3 = (int)(byte)uVar3;
  iVar1 = STField<int>(this,0x245);
  iVar3 = uVar3 + -1;
  if (param_1 == CASE_9) {
    iVar2 = STField<int>(this,0x4d0);
  }
  else {
    if (param_1 == CASE_D) {
      uVar4 = param_2 & 0x80000001;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
      }
      *param_4 = (uint)(uVar4 != 0);
      *param_3 = (uint)(uVar4 != 0);
      return;
    }
    if (param_1 != CASE_E) {
      return;
    }
    iVar2 = STField<int>(this,0x4d0);
  }
  if (iVar2 == 3) {
    *param_3 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                       (param_2 + (iVar3 + STField<int>(this,0x235) * 3) * 4) * 8) - 0xf;
    *param_4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                        (param_2 + (iVar3 + STField<int>(this,0x235) * 3) * 4) * 8);
    return;
  }
  if (iVar2 == 4) {
LAB_004cff4c:
    uVar4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                     (param_2 + (iVar3 + STField<int>(this,0x235) * 3) * 4) * 8);
    *param_3 = uVar4;
    *param_4 = uVar4;
    return;
  }
  if (iVar2 != 5) {
    if (iVar2 == 2) {
      iVar1 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                      (param_2 + (iVar3 + STField<int>(this,0x235) * 3) * 4) * 8);
      *param_3 = iVar1 - 0xfU;
      *param_4 = iVar1 - 0xfU;
      return;
    }
    if (iVar2 != 1) goto LAB_004cff4c;
  }
  *param_3 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                      (param_2 + (iVar3 + STField<int>(this,0x235) * 3) * 4) * 8);
  *param_4 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                     (param_2 + (iVar3 + STField<int>(this,0x235) * 3) * 4) * 8) - 0xf;
  return;
}

// 004CFFF0 FUN_004cfff0
#line 4 "decomp/ST.exe/functions/004CFFF0/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 004CAFC0 -> 004CFFF0 @ 004CB045 */

void __thiscall
st::fn_004CFFF0(void *this,TLOBaseTy_sub_004CAFC0_param_1Enum param_1,int param_2,int *param_3,
            int *param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;

  bVar3 = st::fn_004049B7(STField<char>(this,0x23d));
  iVar1 = STField<int>(this,0x245);
  iVar4 = bVar3 - 1;
  if (param_1 == CASE_9) {
    iVar2 = STField<int>(this,0x4d0);
  }
  else {
    if (param_1 == CASE_D) {
      *param_4 = 0;
      *param_3 = 0;
      return;
    }
    if (param_1 != CASE_E) {
      return;
    }
    iVar2 = STField<int>(this,0x4d0);
  }
  if (iVar2 == 3) {
    *param_3 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                       (param_2 + (iVar4 + STField<int>(this,0x235) * 3) * 4) * 8) + -0x10;
    *param_4 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                       (param_2 + (iVar4 + STField<int>(this,0x235) * 3) * 4) * 8);
    return;
  }
  if (iVar2 == 4) {
LAB_004d014f:
    iVar1 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                    (param_2 + (iVar4 + STField<int>(this,0x235) * 3) * 4) * 8);
    *param_3 = iVar1;
    *param_4 = iVar1;
    return;
  }
  if (iVar2 != 5) {
    if (iVar2 == 2) {
      iVar1 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                      (param_2 + (iVar4 + STField<int>(this,0x235) * 3) * 4) * 8);
      *param_3 = iVar1 + -0x10;
      *param_4 = iVar1 + -0x10;
      return;
    }
    if (iVar2 != 1) goto LAB_004d014f;
  }
  *param_3 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                     (param_2 + (iVar4 + STField<int>(this,0x235) * 3) * 4) * 8);
  *param_4 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                     (param_2 + (iVar4 + STField<int>(this,0x235) * 3) * 4) * 8) + -0x10;
  return;
}

