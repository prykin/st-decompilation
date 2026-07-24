
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004C21A0_param_1Enum. Cases:
   CASE_0=0;CASE_2=2;CASE_3=3;CASE_E=14;CASE_17=23;CASE_19=25;CASE_1A=26;CASE_26=38;CASE_2A=42;CASE_34=52;CASE_37=55;CASE_42=66;CASE_43=67
    */

undefined4 __thiscall
FUN_004c21a0(void *this,Global_sub_004C21A0_param_1Enum param_1,int *param_2,float param_3,
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
  FUN_006e1c20(*(void **)((int)this + 0x211),param_3,param_4,0.0,&param_3,&local_c);
  if (param_3 < _DAT_0079034c) {
    lVar6 = Library::MSVCRT::__ftol();
    iVar5 = (short)lVar6 + -1;
  }
  else {
    lVar6 = Library::MSVCRT::__ftol();
    iVar5 = (int)(short)lVar6;
  }
  if (local_c < _DAT_0079034c) {
    lVar6 = Library::MSVCRT::__ftol();
    param_4 = (short)lVar6 + -1;
  }
  else {
    lVar6 = Library::MSVCRT::__ftol();
    param_4 = (int)(short)lVar6;
  }
  pAVar1 = local_8;
  if ((*(byte *)((int)this + 0x1d1) & 4) != 0) {
    sVar4 = 0;
    if (param_2 == this) {
      sVar4 = 4;
    }
    if ((param_2 == (int *)0x0) || (param_2[9] != *(int *)&local_8->field_0x24))
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
      if (param_2 == (int *)0x0) {
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
              (iVar3 = thunk_FUN_004e8b10(param_2,*(uint *)&local_8->field_0x24), iVar3 != 0)) {
        sVar4 = 0x1d;
        break;
      }
      if ((((-1 < iVar5) && (iVar5 < g_worldGrid.sizeX)) &&
          ((-1 < param_4 &&
           ((param_4 < g_worldGrid.sizeY &&
            (uVar2 = thunk_FUN_004c5350(local_8,0,param_2,iVar5,param_4,0,0,1), uVar2 != 0)))))) &&
         ((iVar5 = (&DAT_00792ca0)[local_8->field_0235 * 6], iVar5 != 0xa8 &&
          ((iVar5 != 0xa3 && (iVar5 != 0xbe)))))) {
        sVar4 = 7;
        break;
      }
      if ((param_2 == (int *)0x0) || (param_2[9] != *(int *)&local_8->field_0x24)) break;
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
      uVar2 = thunk_FUN_004c5350(local_8,0,param_2,iVar5,param_4,0,0,0);
      sVar4 = (-(ushort)(uVar2 != 0) & 6) + 1;
    }
    break;
  case CASE_E:
    sVar4 = 0x15;
    if ((g_tLOBldMark_007FB2AC != (TLOBldMark *)0x0) && (g_tLOBldMark_007FB2AC->field_0024 != 0)) {
      sVar4 = 0x14;
    }
    break;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  case CASE_17:
    if (((param_2 != (int *)0x0) && (local_8->field_0245 == 4)) &&
       (((iVar5 = (**(code **)(*param_2 + 0x2c))(), iVar5 == 0x37 ||
         (iVar5 = (**(code **)(*param_2 + 0x2c))(), iVar5 == 0x6c)) &&
        (iVar5 = thunk_FUN_004e8b10(param_2,*(uint *)&pAVar1->field_0x24), iVar5 != 0)))) {
      sVar4 = 0x1d;
      break;
    }
    goto cf_common_exit_004C2352;
  case CASE_26:
  case CASE_37:
joined_r0x004c231f:
    if (param_2 == (int *)0x0) {
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
          ((param_4 < g_worldGrid.sizeY && (g_visibleClass_00802A88 != (VisibleClassTy *)0x0))))))
        && (0x27 < *(int *)&local_8[2].field_0x3c)) &&
       (iVar5 = thunk_FUN_0055ad00(g_visibleClass_00802A88,iVar5,param_4,2,
                                   *(uint *)&local_8->field_0x24,7), iVar5 == 0)) {
      sVar4 = 0x19;
    }
    break;
  case CASE_42:
    if ((((param_2 != (int *)0x0) && (param_2[9] == *(int *)&local_8->field_0x24)) &&
        (param_2[8] == 1000)) && (iVar5 = thunk_FUN_004dbb10(local_8,(int)param_2), iVar5 != 0)) {
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

