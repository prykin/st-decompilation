
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006dc320(AnonShape_006DC320_0C876EFA *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int local_50;
  int local_4c;
  int local_48;
  int local_40;
  int local_3c;
  int local_38;
  float local_30;
  float local_2c;
  float local_28;
  int local_24;
  undefined8 local_20;
  float local_18;
  float local_14;
  undefined4 local_10;
  int iStack_c;
  int local_8;

  local_24 = 0;
  local_20 = (double)(ulonglong)(uint)local_20;
  if (param_1->field_0068 <= param_1->field_0060) {
    return;
  }
  if (param_1->field_0078 <= param_1->field_0070) {
    return;
  }
  if (param_1->field_0038 <= (int)param_1->field_0030) {
    return;
  }
  if (param_1->field_003C <= param_1->field_0034) {
    return;
  }
  param_1->field_00D8 =
       (double)(param_1->field_0038 - param_1->field_0030) /
       (param_1->field_0068 - param_1->field_0060);
  local_18 = (float)(param_1->field_003C - param_1->field_0034);
  param_1->field_00E0 = (double)(int)local_18 / (param_1->field_0078 - param_1->field_0070);
  lVar6 = Library::MSVCRT::__ftol();
  iVar5 = (int)lVar6;
  param_1->field_02F0 = iVar5;
  if (iVar5 < 0x36) {
    param_1->field_02F0 = 0x28;
  }
  else {
    param_1->field_02F0 = ((0x53 < iVar5) - 1 & 0xffffffdf) + 100;
  }
  lVar6 = Library::MSVCRT::__ftol();
  iVar5 = (int)lVar6;
  param_1->field_02F4 = iVar5;
  if (iVar5 < 0x36) {
    param_1->field_02F4 = 0x28;
  }
  else {
    param_1->field_02F4 = ((0x53 < iVar5) - 1 & 0xffffffdf) + 100;
  }
  FUN_00717380((AnonShape_00717380_FEFD061B *)param_1);
  local_30 = 0.0;
  local_2c = 0.0;
  local_28 = 0.0;
  FUN_006e25d0(param_1,&local_50);
  switch(param_1->field_00A8) {
  case 0:
    iStack_c = 0xffffffff;
    local_8 = -1;
    break;
  case 1:
    iStack_c = 1;
    local_8 = -1;
    break;
  case 2:
    iStack_c = 1;
    local_8 = 1;
    break;
  case 3:
    iStack_c = 0xffffffff;
    local_8 = 1;
    break;
  default:
    iStack_c = 0;
    local_8 = 0;
  }
  FUN_006e25d0(param_1,&local_40);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  _local_10 = CONCAT44(local_38 - local_48,local_10);
  param_1->field_02F8 = (double)(local_38 - local_48) * _DAT_0079b148;
  FUN_006e25d0(param_1,&local_40);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  _local_10 = CONCAT44(local_38 - local_48,local_10);
  param_1->field_0300 = (double)(local_38 - local_48) * _DAT_0079b148;
  FUN_006e25d0(param_1,&local_40);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  _local_10 = CONCAT44(local_38 - local_48,local_10);
  local_30 = 0.0;
  local_2c = 0.0;
  local_28 = 0.0;
  param_1->field_0308 = (double)(local_38 - local_48) * _DAT_0079b148;
  FUN_006e25d0(param_1,&local_50);
  local_30 = (float)param_1->field_0368;
  local_2c = 0.0;
  local_28 = 0.0;
  FUN_006e25d0(param_1,&local_40);
  param_1->field_03AC = local_40 - local_50;
  param_1->field_03B8 = local_3c - local_4c;
  param_1->field_03C4 = local_38 - local_48;
  local_2c = (float)param_1->field_0368;
  local_30 = 0.0;
  local_28 = 0.0;
  FUN_006e25d0(param_1,&local_40);
  param_1->field_03B0 = local_40 - local_50;
  param_1->field_03BC = local_3c - local_4c;
  param_1->field_03C8 = local_38 - local_48;
  local_30 = 0.0;
  local_2c = 0.0;
  local_28 = (float)((float10)param_1->field_03A4 * (float10)_DAT_0079dfa8);
  FUN_006e25d0(param_1,&local_40);
  param_1->field_03B4 = local_40 - local_50;
  param_1->field_03C0 = local_3c - local_4c;
  param_1->field_03CC = local_38 - local_48;
  lVar6 = Library::MSVCRT::__ftol();
  param_1->field_03D4 = (int)lVar6;
  iStack_c = (int)lVar6;
  lVar6 = Library::MSVCRT::__ftol();
  param_1->field_03D0 = (int)lVar6;
  lVar6 = Library::MSVCRT::__ftol();
  param_1->field_03D8 = (int)lVar6;
  param_1->field_03E0 = 1;
  if (param_1->field_0280 == (short *)0x0) goto LAB_006dcafd;
  local_8 = param_1->field_03DC;
  iVar5 = local_8 / 2;
  local_10 = SUB84((double)(int)*param_1->field_0280 * param_1->field_00C8,0);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  _local_10 = CONCAT44(iVar5,local_10);
  switch(param_1->field_00A8) {
  case 0:
    lVar6 = Library::MSVCRT::__ftol();
    local_24 = (int)lVar6;
    lVar6 = Library::MSVCRT::__ftol();
    local_20 = (double)(lVar6 << 0x20);
    break;
  case 1:
    lVar6 = Library::MSVCRT::__ftol();
    local_24 = (int)lVar6;
    lVar6 = Library::MSVCRT::__ftol();
    local_20 = (double)(lVar6 << 0x20);
    break;
  case 2:
    lVar6 = Library::MSVCRT::__ftol();
    local_24 = (int)lVar6;
    lVar6 = Library::MSVCRT::__ftol();
    local_20 = (double)(lVar6 << 0x20);
    break;
  case 3:
    lVar6 = Library::MSVCRT::__ftol();
    local_24 = (int)lVar6;
    lVar6 = Library::MSVCRT::__ftol();
    local_20 = (double)(lVar6 << 0x20);
  }
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_20 = (double)local_20._4_4_;
  lVar6 = Library::MSVCRT::__ftol();
  param_1->field_03E8 = (int)lVar6;
  iStack_c = (int)lVar6;
  lVar6 = Library::MSVCRT::__ftol();
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_20 = (double)CONCAT44((int)lVar6,(uint)local_20);
  param_1->field_03F4 = (int)lVar6;
  lVar6 = Library::MSVCRT::__ftol();
  iVar2 = (int)lVar6;
  param_1->field_0400 = iVar2;
  lVar6 = Library::MSVCRT::__ftol();
  iVar1 = (int)lVar6;
  param_1->field_040C = iVar1;
  if (0 < iStack_c) {
    param_1->field_03EC = iVar2;
    param_1->field_03F0 = iVar1;
    if (iVar5 < iStack_c) {
      iVar3 = (iStack_c - local_8) + iVar5;
      if (iVar2 <= iVar3 + 1) {
        param_1->field_03EC = iVar3 + 2;
      }
      iVar3 = (local_8 - iStack_c) + iVar5;
      if (iVar3 + -2 <= iVar1) {
        iVar3 = iVar3 + -3;
        goto LAB_006dc9b3;
      }
    }
    else {
      if (iVar2 < iVar5 - iStack_c) {
        param_1->field_03EC = iVar5 - iStack_c;
      }
      if (iStack_c + iVar5 <= iVar1) {
        iVar3 = iStack_c + iVar5 + -1;
LAB_006dc9b3:
        param_1->field_03F0 = iVar3;
      }
    }
  }
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  iVar3 = local_20._4_4_;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  if (local_20._4_4_ < local_8 + -1) {
    param_1->field_03F8 = iVar2;
    param_1->field_03FC = iVar1;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    if (iVar5 < local_20._4_4_) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar4 = (local_20._4_4_ - local_8) + iVar5;
      if (iVar2 <= iVar4 + 1) {
        param_1->field_03F8 = iVar4 + 2;
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar4 = (local_8 - local_20._4_4_) + iVar5;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_20 = (double)CONCAT44(iVar4,(uint)local_20);
      if (iVar4 + -2 <= iVar1) {
        iVar4 = iVar4 + -3;
        goto LAB_006dca21;
      }
    }
    else {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      if (iVar2 < iVar5 - local_20._4_4_) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        param_1->field_03F8 = iVar5 - local_20._4_4_;
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      if (local_20._4_4_ + iVar5 <= iVar1) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        iVar4 = local_20._4_4_ + iVar5 + -1;
LAB_006dca21:
        param_1->field_03FC = iVar4;
      }
    }
  }
  if (0 < iVar2) {
    param_1->field_0404 = iStack_c;
    param_1->field_0408 = iVar3;
    if (iVar5 < iVar2) {
      iVar4 = (iVar2 - local_8) + iVar5;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_20 = (double)CONCAT44(iVar4,(uint)local_20);
      if (iStack_c <= iVar4 + 1) {
        param_1->field_0404 = iVar4 + 2;
      }
      iVar2 = (local_8 - iVar2) + iVar5;
      if (iVar2 + -2 <= iVar3) {
        param_1->field_0408 = iVar2 + -3;
      }
    }
    else {
      if (iStack_c < iVar5 - iVar2) {
        param_1->field_0404 = iVar5 - iVar2;
      }
      if (iVar2 + iVar5 <= iVar3) {
        param_1->field_0408 = iVar2 + iVar5 + -1;
      }
    }
  }
  local_24 = iVar1;
  if (0 < iVar1) {
    param_1->field_0410 = iStack_c;
    param_1->field_0414 = iVar3;
    if (iVar5 < iVar1) {
      local_24 = (iVar1 - local_8) + iVar5;
      if (iStack_c <= local_24 + 1) {
        param_1->field_0410 = local_24 + 2;
      }
      iVar5 = iVar5 + (local_8 - iVar1);
      if (iVar3 < iVar5 + -2) goto LAB_006dcafd;
      iVar5 = iVar5 + -3;
    }
    else {
      if (iStack_c < iVar5 - iVar1) {
        param_1->field_0410 = iVar5 - iVar1;
      }
      if (iVar3 < iVar5 + iVar1) goto LAB_006dcafd;
      iVar5 = iVar5 + iVar1 + -1;
    }
    param_1->field_0414 = iVar5;
  }
LAB_006dcafd:
  FUN_006e1c20(param_1,(float)param_1->field_0030,param_1->field_0034,0.0,&local_14,&local_18);
  lVar6 = Library::MSVCRT::__ftol();
  iVar5 = (int)lVar6;
  lVar6 = Library::MSVCRT::__ftol();
  iVar2 = (int)lVar6;
  switch(param_1->field_00A8) {
  case 0:
    param_1->field_004C = iVar2;
    param_1->field_0048 = iVar5 + -2;
    break;
  case 1:
    param_1->field_0040 = iVar5;
    param_1->field_0044 = iVar2 + -2;
    break;
  case 2:
    param_1->field_005C = iVar2;
    param_1->field_0058 = iVar5 + 2;
    break;
  case 3:
    param_1->field_0050 = iVar5;
    param_1->field_0054 = iVar2 + 2;
  }
  FUN_006e1c20(param_1,(float)(param_1->field_0038 + -1),param_1->field_0034,0.0,&local_14,&local_18
              );
  lVar6 = Library::MSVCRT::__ftol();
  iVar5 = (int)lVar6;
  lVar6 = Library::MSVCRT::__ftol();
  iVar2 = (int)lVar6;
  switch(param_1->field_00A8) {
  case 0:
    param_1->field_0040 = iVar5;
    param_1->field_0044 = iVar2 + -2;
    break;
  case 1:
    param_1->field_005C = iVar2;
    param_1->field_0058 = iVar5 + 2;
    break;
  case 2:
    param_1->field_0050 = iVar5;
    param_1->field_0054 = iVar2 + 2;
    break;
  case 3:
    param_1->field_004C = iVar2;
    param_1->field_0048 = iVar5 + -2;
  }
  FUN_006e1c20(param_1,(float)param_1->field_0030,param_1->field_003C + -1,
               (float)((float10)param_1->field_00D0 * (float10)_DAT_0079df90),&local_14,&local_18);
  lVar6 = Library::MSVCRT::__ftol();
  iVar5 = (int)lVar6;
  lVar6 = Library::MSVCRT::__ftol();
  iVar2 = (int)lVar6;
  switch(param_1->field_00A8) {
  case 0:
    param_1->field_0050 = iVar5;
    param_1->field_0054 = iVar2 + 2;
    break;
  case 1:
    param_1->field_004C = iVar2;
    param_1->field_0048 = iVar5 + -2;
    break;
  case 2:
    param_1->field_0040 = iVar5;
    param_1->field_0044 = iVar2 + -2;
    break;
  case 3:
    param_1->field_005C = iVar2;
    param_1->field_0058 = iVar5 + 2;
  }
  FUN_006e1c20(param_1,(float)(param_1->field_0038 + -1),param_1->field_003C + -1,
               (float)((float10)param_1->field_00D0 * (float10)_DAT_0079df90),&local_14,&local_18);
  lVar6 = Library::MSVCRT::__ftol();
  iVar5 = (int)lVar6;
  lVar6 = Library::MSVCRT::__ftol();
  iVar2 = (int)lVar6;
  switch(param_1->field_00A8) {
  case 0:
    param_1->field_005C = iVar2;
    param_1->field_0058 = iVar5 + 2;
    return;
  case 1:
    param_1->field_0050 = iVar5;
    param_1->field_0054 = iVar2 + 2;
    return;
  case 2:
    param_1->field_004C = iVar2;
    param_1->field_0048 = iVar5 + -2;
    return;
  case 3:
    param_1->field_0040 = iVar5;
    param_1->field_0044 = iVar2 + -2;
  }
  return;
}

