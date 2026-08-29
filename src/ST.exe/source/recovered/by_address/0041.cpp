#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/0041.cpp

// 00411CF0 FUN_00411cf0
#line 1 "decomp/ST.exe/functions/00411CF0/decomp.c"

int st::fn_00411CF0(char *param_1,int param_2)

{
  int scalar_pcVar7;

  char *pcVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar8_mg1;

  pcVar6 = param_1;
  iVar3 = 0;
  iVar5 = param_2 * -2 + 3;
  pcVar1 = nullptr;
  pcVar7 = param_1;
  do {
    iVar2 = param_2;
    pcVar4 = pcVar1;
    *pcVar7 = (char)iVar2;
    pcVar7[1] = -(char)iVar3;
    pcVar1 = pcVar4 + 1;
    pcVar7 = pcVar7 + 4;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 6 + iVar3 * 4;
      param_2 = iVar2;
    }
    else {
      param_2 = iVar2 + -1;
      iVar5 = iVar5 + 10 + (iVar3 - iVar2) * 4;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < param_2);
  if ((iVar3 == param_2) && (param_2 != iVar2)) {
    param_1[(int)pcVar1 * 4] = (char)param_2;
    param_1[(int)pcVar1 * 4 + 1] = -(char)iVar3;
    pcVar1 = pcVar4 + 2;
  }
  if (0 < (int)pcVar4) {
    iVar5 = (int)pcVar1 * 4;
    pcVar7 = param_1 + (int)pcVar4 * 4;
    pcVar1 = pcVar1 + (int)pcVar4;
    pcVar8 = param_1 + iVar5;
    do {
      *pcVar8 = -pcVar7[1];
      pcVar8[1] = -*pcVar7;
      pcVar7 = pcVar7 + -4;
      pcVar4 = pcVar4 + -1;
      pcVar8 = pcVar8 + 4;
    } while (pcVar4 != nullptr);
  }
  pcVar7 = pcVar1;
  if (0 < (int)pcVar1) {
    pcVar4 = param_1 + (int)pcVar1 * 4;
    scalar_pcVar7 = (int)pcVar1 * 2; /* split integer lifetime from pointer-typed SSA storage */
    pcVar8_mg1 = param_1;
    auto param_1_after_write = pcVar1; /* compiler stack-slot lifetime split */
    do {
      *pcVar4 = pcVar8_mg1[1];
      pcVar4[1] = -*pcVar8_mg1;
      pcVar4 = pcVar4 + 4;
      param_1_after_write = param_1_after_write + -1;
      pcVar8_mg1 = pcVar8_mg1 + 4;
    } while (param_1_after_write != nullptr);
  }
  if (0 < (int)pcVar1) {
    iVar5 = scalar_pcVar7 * 4;
    pcVar7 = pcVar7 + (int)pcVar1;
    pcVar4 = pcVar6 + iVar5;
    pcVar8 = pcVar6;
    auto param_1_after_write_2 = pcVar1; /* compiler stack-slot lifetime split */
    do {
      *pcVar4 = -*pcVar8;
      pcVar4[1] = -pcVar8[1];
      pcVar8 = pcVar8 + 4;
      param_1_after_write_2 = param_1_after_write_2 + -1;
      pcVar4 = pcVar4 + 4;
    } while (param_1_after_write_2 != nullptr);
    if (0 < (int)pcVar1) {
      iVar5 = (int)pcVar7 * 4;
      pcVar7 = pcVar7 + (int)pcVar1;
      pcVar4 = pcVar6 + iVar5;
      do {
        *pcVar4 = -pcVar6[1];
        pcVar4[1] = *pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar1 = pcVar1 + -1;
        pcVar4 = pcVar4 + 4;
      } while (pcVar1 != nullptr);
    }
  }
  return (int)pcVar7;
}

// 00412B80 FUN_00412b80
#line 4 "decomp/ST.exe/functions/00412B80/decomp.c"
/* [STReturnSemanticsApplier] machine_scalar_return.
   Evidence: every reachable RET carries a machine-proven scalar domain; exact negative immediate
   returns establish signed int while zero is a signedness-neutral member of that same domain;
   machine CFG audit: used=1, ignored=0, unknown=0 */

int st::fn_00412B80(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int local_18;
  int local_10;
  int local_c;
  int local_8;

  iVar1 = param_1 * 4 + 2;
  iVar2 = param_2 * 4 + 2;
  iVar4 = DAT_007f4d30 * DAT_007f4d2c;
  iVar7 = 0;
  iVar3 = param_3 * 4 + 2;
  local_18 = 0;
  if (0 < DAT_007f4d20) {
    do {
      local_c = (*(int *)(iVar7 + 0x10 + DAT_007f4d48) * DAT_007f4d28 + 0x8000 +
                 *(int *)(iVar7 + 0xc + DAT_007f4d48) * DAT_007f4d38 >> 0x10) + iVar1 >> 2;
      local_10 = ((*(int *)(iVar7 + 0x10 + DAT_007f4d48) * DAT_007f4d38 -
                  *(int *)(iVar7 + 0xc + DAT_007f4d48) * DAT_007f4d28) + 0x8000 >> 0x10) + iVar2 >>
                 2;
      local_8 = *(int *)(iVar7 + 0x14 + DAT_007f4d48) + iVar3 >> 2;
      if (local_8 < 0) {
        local_8 = 0;
      }
      else if (DAT_007f4d34 <= local_8) {
        local_8 = DAT_007f4d34 + -1;
      }
      if (((((local_c < 0) || (DAT_007f4d2c <= local_c)) || (local_10 < 0)) ||
          (((DAT_007f4d30 <= local_10 ||
            (uVar6 = local_c + DAT_007f4d2c * local_10 + local_8 * iVar4, PTR_007f4cf0[uVar6] != 0))
           || (uVar6 = uVar6 ^ 7, (STBitTest(g_bitset_007F4CFC, uVar6)) != 0))))
         && (iVar5 = st::fn_0040F270(&local_c,&local_10,&local_8,*(int *)(iVar7 + DAT_007f4d48),
                                  *(int *)(iVar7 + 4 + DAT_007f4d48),
                                  *(int *)(iVar7 + 8 + DAT_007f4d48),iVar1 >> 2,iVar2 >> 2,
                                  iVar3 >> 2), iVar5 != 0)) {
        return -4;
      }
      uVar6 = local_8 * iVar4 + local_c + DAT_007f4d2c * local_10 ^ 7;
      STBitSet(g_bitset_007F4CFC, uVar6);
      *(int *)(iVar7 + 0xc + DAT_007f4d48) = local_c;
      *(int *)(iVar7 + 0x10 + DAT_007f4d48) = local_10;
      *(int *)(iVar7 + 0x14 + DAT_007f4d48) = local_8;
      local_18 = local_18 + 1;
      iVar7 = iVar7 + 0x1c;
    } while (local_18 < DAT_007f4d20);
  }
  return 0;
}

// 00412DE0 FUN_00412de0
#line 4 "decomp/ST.exe/functions/00412DE0/decomp.c"
/* [STReturnSemanticsApplier] machine_scalar_return.
   Evidence: every reachable RET carries a machine-proven scalar domain; exact negative immediate
   returns establish signed int while zero is a signedness-neutral member of that same domain;
   machine CFG audit: used=1, ignored=0, unknown=0 */

int st::fn_00412DE0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int local_18;
  int local_10;
  int local_c;
  int local_8;

  iVar1 = param_1 * 4 + 2;
  iVar2 = param_2 * 4 + 2;
  iVar4 = DAT_007f4d30 * DAT_007f4d2c;
  iVar7 = 0;
  iVar3 = param_3 * 4 + 2;
  local_18 = 0;
  if (0 < DAT_007f4d20) {
    do {
      local_c = (STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar7).field_0000 * DAT_007f4d38 +
                 0x8000 + DAT_007f4d28 *
                          STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar7).field_0004 >> 0x10) +
                iVar1 >> 2;
      local_10 = ((DAT_007f4d38 * STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar7).field_0004 -
                  STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar7).field_0000 * DAT_007f4d28) +
                  0x8000 >> 0x10) + iVar2 >> 2;
      local_8 = STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar7).field_0008 + iVar3 >> 2;
      if (local_8 < 0) {
        local_8 = 0;
      }
      else if (DAT_007f4d34 <= local_8) {
        local_8 = DAT_007f4d34 + -1;
      }
      if (((((local_c < 0) || (DAT_007f4d2c <= local_c)) || (local_10 < 0)) ||
          (((DAT_007f4d30 <= local_10 ||
            (uVar6 = local_c + DAT_007f4d2c * local_10 + local_8 * iVar4, PTR_007f4cf0[uVar6] != 0))
           || (uVar6 = uVar6 ^ 7, (STBitTest(g_bitset_007F4CFC, uVar6)) != 0))))
         && (iVar5 = st::fn_0040F270(&local_c,&local_10,&local_8,DAT_007f4d0c >> 2,DAT_007f4d10 >> 2,
                                  DAT_007f4d1c >> 2,iVar1 >> 2,iVar2 >> 2,iVar3 >> 2), iVar5 != 0))
      {
        return -4;
      }
      uVar6 = local_8 * iVar4 + local_c + DAT_007f4d2c * local_10 ^ 7;
      STBitSet(g_bitset_007F4CFC, uVar6);
      STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar7).field_0000 = local_c;
      STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar7).field_0004 = local_10;
      STObjectAtByteOffset(g_runtimeRecords_007F4D3C, iVar7).field_0008 = local_8;
      local_18 = local_18 + 1;
      iVar7 = iVar7 + 0x14;
    } while (local_18 < DAT_007f4d20);
  }
  return 0;
}

// 00413170 FUN_00413170
#line 4 "decomp/ST.exe/functions/00413170/decomp.c"
/* [STReturnSemanticsApplier] machine_scalar_return.
   Evidence: every reachable RET carries a machine-proven scalar domain; exact negative immediate
   returns establish signed int while zero is a signedness-neutral member of that same domain;
   machine CFG audit: used=1, ignored=0, unknown=0 */

int st::fn_00413170(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5,int param_6)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  int local_1c;
  int local_10;
  int local_8;

  pcVar9 = (char *)*param_5;
  cVar2 = pcVar9[3];
  while ((-1 < cVar2 && (cVar2 < param_4))) {
    pcVar8 = pcVar9 + 7;
    pcVar9 = pcVar9 + 4;
    cVar2 = *pcVar8;
  }
  local_10 = 0;
  if (0 < param_6) {
    cVar2 = pcVar9[3];
    pcVar8 = pcVar9 + 3;
    local_10 = 0;
    while ((-1 < cVar2 && (*pcVar8 <= param_6))) {
      pcVar1 = pcVar8 + 3;
      pcVar8 = pcVar8 + 4;
      if ((-1 < *pcVar1 + param_3) && (*pcVar1 + param_3 < DAT_007f4d34)) {
        local_10 = local_10 + 1;
      }
      cVar2 = *pcVar8;
    }
  }
  iVar3 = DAT_007f4d30 * DAT_007f4d2c;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_4 = 0;
  iVar10 = param_1;
  iVar11 = param_1;
  if (DAT_007f4d20 < local_10) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_6 = 0;
    iVar4 = (local_10 << 0x10) / DAT_007f4d20;
    local_8 = 0;
    param_4 = 0;
    if (0 < DAT_007f4d20) {
      local_1c = 0;
LAB_0041321e:
      if (-1 < pcVar9[3]) {
        do {
          iVar5 = pcVar9[2] + param_3;
          iVar7 = local_8;
          if ((iVar5 < 0) || (DAT_007f4d34 <= iVar5)) goto LAB_0041330a;
          switch(DAT_007f4d08) {
          case 0:
          case 1:
            iVar10 = (int)*pcVar9;
            cVar2 = pcVar9[1];
            goto LAB_0041329b;
          case 2:
          case 3:
            iVar10 = pcVar9[1] + param_1;
            iVar11 = param_2 - *pcVar9;
            break;
          case 4:
          case 5:
            iVar10 = param_1 - *pcVar9;
            iVar11 = param_2 - pcVar9[1];
            break;
          case 6:
          case 7:
            cVar2 = *pcVar9;
            iVar10 = -(int)pcVar9[1];
LAB_0041329b:
            iVar10 = param_1 + iVar10;
            iVar11 = cVar2 + param_2;
          }
          if ((((-1 < iVar10) && (iVar10 < DAT_007f4d2c)) && (-1 < iVar11)) &&
             (iVar11 < DAT_007f4d30)) {
            param_6 = param_6 + -0x10000;
            iVar7 = local_8 + 1;
            if (((param_6 < 0) &&
                (uVar6 = iVar10 + DAT_007f4d2c * iVar11 + iVar3 * iVar5, iVar7 = local_8,
                PTR_007f4cf0[uVar6] == 0)) &&
               (uVar6 = uVar6 ^ 7, (STBitTest(g_bitset_007F4CFC, uVar6)) == 0))
            goto LAB_00413319;
          }
LAB_0041330a:
          local_8 = iVar7;
          pcVar8 = pcVar9 + 7;
          pcVar9 = pcVar9 + 4;
          if (*pcVar8 < '\0') break;
        } while( true );
      }
      if (param_4 < DAT_007f4d20) {
        if (local_10 <= local_8) goto cf_break_loop_004134EC;
        iVar4 = (local_8 << 0x10) / DAT_007f4d20;
        param_6 = 0;
        param_4 = 0;
        if (0 < DAT_007f4d20) {
          local_1c = 0;
          goto cf_continue_loop_004133AD;
        }
      }
    }
  }
  else {
cf_break_loop_004134EC:
    if ((param_4 < DAT_007f4d20) && (param_4 = 0, 0 < DAT_007f4d20)) {
      param_6 = 0;
LAB_0041350c:
      do {
        if (pcVar9[3] < '\0') {
          return -4;
        }
        iVar4 = pcVar9[2] + param_3;
        if ((iVar4 < 0) || (DAT_007f4d34 <= iVar4)) goto LAB_004135d8;
        switch(DAT_007f4d08) {
        case 0:
        case 1:
          iVar10 = (int)*pcVar9;
          cVar2 = pcVar9[1];
          goto LAB_00413585;
        case 2:
        case 3:
          iVar10 = pcVar9[1] + param_1;
          iVar11 = param_2 - *pcVar9;
          break;
        case 4:
        case 5:
          iVar10 = param_1 - *pcVar9;
          iVar11 = param_2 - pcVar9[1];
          break;
        case 6:
        case 7:
          cVar2 = *pcVar9;
          iVar10 = -(int)pcVar9[1];
LAB_00413585:
          iVar10 = param_1 + iVar10;
          iVar11 = cVar2 + param_2;
        }
        if ((((iVar10 < 0) || (DAT_007f4d2c <= iVar10)) || (iVar11 < 0)) ||
           (((DAT_007f4d30 <= iVar11 ||
             (uVar6 = iVar10 + DAT_007f4d2c * iVar11 + iVar3 * iVar4, PTR_007f4cf0[uVar6] != 0)) ||
            (uVar6 = uVar6 ^ 7, (STBitTest(g_bitset_007F4CFC, uVar6)) != 0)))) {
LAB_004135d8:
          pcVar9 = pcVar9 + 4;
          goto LAB_0041350c;
        }
        pcVar9 = pcVar9 + 4;
        STObjectAtByteOffset(g_runtimeRecords_007F4D3C, param_6).field_0000 = iVar10;
        STObjectAtByteOffset(g_runtimeRecords_007F4D3C, param_6).field_0004 = iVar11;
        STObjectAtByteOffset(g_runtimeRecords_007F4D3C, param_6).field_0008 = iVar4;
        param_6 = param_6 + 0x14;
        param_4 = param_4 + 1;
      } while (param_4 < DAT_007f4d20);
    }
  }
cf_common_exit_00413620:
  *param_5 = st::machine_word_boundary_cast<undefined4>(pcVar9);
  return 0;
LAB_00413319:
  param_6 = param_6 + iVar4;
  pcVar9 = pcVar9 + 4;
  STObjectAtByteOffset(g_runtimeRecords_007F4D3C, local_1c).field_0000 = iVar10;
  STObjectAtByteOffset(g_runtimeRecords_007F4D3C, local_1c).field_0004 = iVar11;
  STObjectAtByteOffset(g_runtimeRecords_007F4D3C, local_1c).field_0008 = iVar5;
  local_1c = local_1c + 0x14;
  param_4 = param_4 + 1;
  local_8 = local_8 + 1;
  if (DAT_007f4d20 <= param_4) goto cf_common_exit_00413620;
  goto LAB_0041321e;
cf_continue_loop_004133AD:
  if (-1 < pcVar9[3]) {
    do {
      iVar7 = pcVar9[2] + param_3;
      if ((iVar7 < 0) || (DAT_007f4d34 <= iVar7)) goto LAB_00413487;
      switch(DAT_007f4d08) {
      case 0:
      case 1:
        iVar10 = (int)*pcVar9;
        cVar2 = pcVar9[1];
        goto LAB_00413426;
      case 2:
      case 3:
        iVar10 = pcVar9[1] + param_1;
        iVar11 = param_2 - *pcVar9;
        break;
      case 4:
      case 5:
        iVar10 = param_1 - *pcVar9;
        iVar11 = param_2 - pcVar9[1];
        break;
      case 6:
      case 7:
        cVar2 = *pcVar9;
        iVar10 = -(int)pcVar9[1];
LAB_00413426:
        iVar10 = param_1 + iVar10;
        iVar11 = cVar2 + param_2;
      }
      if (((((-1 < iVar10) && (iVar10 < DAT_007f4d2c)) && (-1 < iVar11)) &&
          ((iVar11 < DAT_007f4d30 && (param_6 = param_6 + -0x10000, param_6 < 0)))) &&
         ((uVar6 = iVar10 + DAT_007f4d2c * iVar11 + iVar3 * iVar7, PTR_007f4cf0[uVar6] == 0 &&
          (uVar6 = uVar6 ^ 7, (STBitTest(g_bitset_007F4CFC, uVar6)) == 0))))
      goto LAB_00413496;
LAB_00413487:
      pcVar8 = pcVar9 + 7;
      pcVar9 = pcVar9 + 4;
      if (*pcVar8 < '\0') break;
    } while( true );
  }
  goto cf_break_loop_004134EC;
LAB_00413496:
  param_6 = param_6 + iVar4;
  pcVar9 = pcVar9 + 4;
  STObjectAtByteOffset(g_runtimeRecords_007F4D3C, local_1c).field_0000 = iVar10;
  STObjectAtByteOffset(g_runtimeRecords_007F4D3C, local_1c).field_0004 = iVar11;
  STObjectAtByteOffset(g_runtimeRecords_007F4D3C, local_1c).field_0008 = iVar7;
  local_1c = local_1c + 0x14;
  param_4 = param_4 + 1;
  if (DAT_007f4d20 <= param_4) goto cf_common_exit_00413620;
  goto cf_continue_loop_004133AD;
}

// 004137F0 FUN_004137f0
#line 4 "decomp/ST.exe/functions/004137F0/decomp.c"
undefined4
st::fn_004137F0(RecoveredRecordView_004137F0_0E69B2C0 *param_1,int param_2,uint param_3,int param_4)

{
  ushort uVar1;
  AnonNested_AnonShape_004137F0_350C8AE0_0029_743E91AB *pAVar2;
  RecoveredRecordView_004137F0_0E69B2C0 *this;
  uint uVar3;
  int iVar4;
  AnonNested_AnonShape_004137F0_350C8AE0_0059_F07A8D99 *pAVar5;
  ushort *puVar6;
  STGameObjC *pSVar7;
  int iVar8;
  int *piVar9;
  int iVar10;

  this = param_1;
  if ((int)param_3 < 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = 0;
  }
  else if (9 < (int)param_3) {
    param_3 = 9;
  }
  uVar3 = param_3;
  param_1->field_0051 = param_3;
  iVar4 = ((param_4 * 4 + 0x2d) / 0x5a) * 0x5a;
  iVar4 = STSignedDiv4(iVar4);
  if (iVar4 == 0x168) {
    iVar4 = 0;
  }
  param_1->field_0055 = iVar4;
  param_1->field_0049 = param_1->field_0049 | 1;
  if (param_2 != -1) {
    param_1->field_004D = param_2;
    st::fn_006AB060(&param_1->field_0059);
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((param_2 == -2) || (param_2 == -3)) {
    iVar8 = param_1->field_0029->field_000C;
    param_1->field_0049 = param_1->field_0049 & 0xfffffffe;
    RecoveredRecordView_004137F0_0E69B2C0 * param_1_after_write = nullptr; /* compiler stack-slot lifetime split */
    auto param_4_after_write = 0; /* compiler stack-slot lifetime split */
    auto param_2_after_write = 0; /* compiler stack-slot lifetime split */
    /* ST_CALLSITE[004138A8]: CALL 0x006aac70; direct=006AAC70 Library::DKW::LIB::MemAlloc; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/AnonNested_AnonShape_004137F0_350C8AE0_0059_F07A8D99; source view only; no Ghidra override */
    pAVar5 = static_cast<AnonNested_AnonShape_004137F0_350C8AE0_0059_F07A8D99 *>(st::fn_006AAC70(iVar8 * 0x10 + 0xc));
    this->field_0059 = pAVar5;
    piVar9 = reinterpret_cast<int *>(&pAVar5->field_000C);
    pAVar5->field_0004 = iVar4;
    param_3 = 0;
    this->field_0059->field_0008 = uVar3;
    this->field_0059->field_0000 = 0;
    if (0 < iVar8) {
      do {
        pAVar2 = this->field_0029;
        if (((uint)pAVar2->field_000C <= param_3) ||
           (puVar6 = (ushort *)(pAVar2->field_0008 * param_3 + pAVar2->field_001C),
           puVar6 == nullptr)) break;
        uVar1 = *puVar6;
        if (uVar1 != 0xffff) {
          /* ST_CALLSITE[00413905]: CALL 0x0040286f; direct=0040286F STGroupBoatC::sub_00423E70 */
          pSVar7 = st::fn_0040286F(reinterpret_cast<STGroupBoatC *>(this),uVar1);
          if (pSVar7 != nullptr) {
            iVar4 = pSVar7->field_00C7;
            if ((((iVar4 < 0) || (g_pathingGrid.sizeX <= iVar4)) || (pSVar7->field_00CB < 0)) ||
               ((((int)g_pathingGrid.sizeY <= pSVar7->field_00CB || (pSVar7->field_00CF < 0)) ||
                ((int)g_pathingGrid.sizeZ <= pSVar7->field_00CF)))) {
              *piVar9 = pSVar7->field_005B * 4 + 2;
              piVar9[1] = pSVar7->field_005D * 4 + 2;
              iVar4 = (int)pSVar7->field_005F;
            }
            else {
              *piVar9 = iVar4 * 4 + 2;
              piVar9[1] = pSVar7->field_00CB * 4 + 2;
              iVar4 = pSVar7->field_00CF;
            }
            piVar9[2] = iVar4 * 4 + 2;
            param_1_after_write = reinterpret_cast<RecoveredRecordView_004137F0_0E69B2C0 *>((&param_1_after_write->field_0x0 + *piVar9));
            param_4_after_write = param_4_after_write + piVar9[1];
            param_2_after_write = param_2_after_write + piVar9[2];
            piVar9[3] = (uint)(ushort)pSVar7->field_0032;
            piVar9 = piVar9 + 4;
            this->field_0059->field_0000 = this->field_0059->field_0000 + 1;
          }
        }
        param_3 = param_3 + 1;
      } while ((int)param_3 < iVar8);
    }
    iVar4 = this->field_0059->field_0000;
    iVar8 = iVar4 / 2;
    piVar9 = reinterpret_cast<int *>(&this->field_0059->field_000C);
    iVar10 = 0;
    if (0 < iVar4) {
      do {
        *piVar9 = *piVar9 - (int)(&param_1_after_write->field_0x0 + iVar8) / iVar4;
        piVar9[1] = piVar9[1] - (iVar8 + param_4_after_write) / iVar4;
        piVar9[2] = piVar9[2] - (param_2_after_write + iVar8) / iVar4;
        iVar10 = iVar10 + 1;
        piVar9 = piVar9 + 4;
      } while (iVar10 < (int)this->field_0059->field_0000);
    }
  }
  return 0;
}

// 00413AF0 FUN_00413af0
#line 4 "decomp/ST.exe/functions/00413AF0/decomp.c"
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Unable to use type for symbol piVar16_mg0 */

void st::fn_00413AF0(STGroupBoatC *param_1,DArrayTy *param_2,int param_3,int param_4,int param_5)

{
  alignas(4) byte st_stack_frame[152];

  short sVar1;
  short sVar2;
  short sVar3;
  DArrayTy *pDVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  RuntimeRecord_007F4D3C_0014 *pRVar8;
  int iVar9;
  int iVar10;
  short *psVar11;
  STGameObjC *pSVar12;
  ushort *puVar13;
  int iVar14;
  int iVar15;
  int iVar7;
  int local_EAX_2487;
  uint uVar16;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  int *extraout_EDX;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  int *extraout_EDX_00;
  int *piVar17;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  int *extraout_EDX_01;
  uint uVar18;
  byte *puVar19;
  int aiStackY_a0 [8];
  int local_48;
  int local_40;
  int local_34;
  int local_30;
  uint local_28;
  uint local_20;
  void *local_14;
  byte *puStack_10;
  undefined *puStack_c;
  uint local_8;
  undefined4 *piVar16_mg0;

  local_8 = 0xffffffff;
  puStack_c = (undefined *)&DAT_00790090;
  puStack_10 = (byte *)&st_image_0072D964;
  local_14 = ExceptionList;
  PTR_007f4d04 = nullptr;
  PTR_007f4cf0 = reinterpret_cast<undefined2 *>(g_pathingGrid.cells);
  DAT_007f4d2c = (int)g_pathingGrid.sizeX;
  DAT_007f4d30 = (int)g_pathingGrid.sizeY;
  DAT_007f4d34 = (int)g_pathingGrid.sizeZ;
  if ((PTR_007f4d50 == nullptr) || (ExceptionList = &local_14, PTR_007f4d54 == nullptr)) {
    aiStackY_a0[7] = 0x413b6b;
    ExceptionList = &local_14;
    st::fn_00414980(4000);
  }
  iVar6 = (uint)(ushort)param_1->field_0027 * -0x14;
  iVar9 = DAT_007f4d34 * DAT_007f4d30 * DAT_007f4d2c + 7;
  uVar18 = st::storage_bit_cast<int>(static_cast<uint32_t>(iVar9 + (iVar9 >> 0x1f & 7U))) >> 3;
  *(undefined4 *)((st_stack_frame + 20) + iVar6) = 0x413bc1;
  iVar9 = -(uVar18 + 3 & 0xfffffffc);
  puVar19 = reinterpret_cast<byte *>(((st_stack_frame + 24) + iVar9 + iVar6));
  memset(puVar19, 0, uVar18); /* compiler bulk-zero initialization */
  local_8 = 0xffffffff;
  iVar10 = DAT_007f4d30 * DAT_007f4d2c;
  DAT_007f4d24 = 0;
  g_bitset_007F4CFC = (st_stack_frame + 24) + iVar9 + iVar6;
  g_runtimeRecords_007F4D3C = reinterpret_cast<RuntimeRecord_007F4D3C_0014 *>(((st_stack_frame + 24) + iVar6));
  if ((ushort)param_1->field_0027 != DAT_007f4d4c) {
    DAT_007f4d4c = param_1->field_0029->count;
    local_28 = 0;
    g_bitset_007F4CFC = (st_stack_frame + 24) + iVar9 + iVar6;
    pbVar7 = (st_stack_frame + 24) + iVar9 + iVar6;
    g_runtimeRecords_007F4D3C = reinterpret_cast<RuntimeRecord_007F4D3C_0014 *>(((st_stack_frame + 24) + iVar6));
    pRVar8 = reinterpret_cast<RuntimeRecord_007F4D3C_0014 *>(((st_stack_frame + 24) + iVar6));
    if (0 < (int)DAT_007f4d4c) {
      do {
        g_runtimeRecords_007F4D3C = pRVar8;
        g_bitset_007F4CFC = pbVar7;
        pDVar4 = param_1->field_0029;
        if (local_28 < pDVar4->count) {
          psVar11 = DArrayAt<short>(pDVar4, local_28);
        }
        else {
          psVar11 = nullptr;
        }
        if (psVar11 == nullptr) break;
        if (*psVar11 != -1) {
          *(uint *)((st_stack_frame + 20) + iVar9 + iVar6) =
               STReplaceLowWord((uint32_t)(psVar11), (uint16_t)(*psVar11));
          *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = 0x413c88;
          /* ST_CALLSITE[00413C83]: CALL 0x0040286f; direct=0040286F STGroupBoatC::sub_00423E70 */
          pSVar12 = st::fn_0040286F
                              (param_1,*(ushort *)((st_stack_frame + 20) + iVar9 + iVar6));
          if (pSVar12 != nullptr) {
            iVar15 = pSVar12->field_00C7;
            if (((((iVar15 < 0) || (g_pathingGrid.sizeX <= iVar15)) ||
                 (iVar14 = pSVar12->field_00CB, iVar14 < 0)) ||
                ((g_pathingGrid.sizeY <= iVar14 || (iVar5 = pSVar12->field_00CF, iVar5 < 0)))) ||
               (g_pathingGrid.sizeZ <= iVar5)) {
              sVar1 = pSVar12->field_0047;
              if (((-1 < sVar1) && (sVar1 < g_pathingGrid.sizeX)) &&
                 ((sVar2 = pSVar12->field_0049, -1 < sVar2 &&
                  (((sVar2 < g_pathingGrid.sizeY && (sVar3 = pSVar12->field_004B, -1 < sVar3)) &&
                   (sVar3 < g_pathingGrid.sizeZ)))))) {
                uVar16 = sVar3 * iVar10 + sVar2 * DAT_007f4d2c + (int)sVar1 ^ 7;
                STBitSet(g_bitset_007F4CFC, uVar16);
              }
            }
            else {
              uVar16 = iVar5 * iVar10 + iVar15 + iVar14 * DAT_007f4d2c ^ 7;
              STBitSet(g_bitset_007F4CFC, uVar16);
            }
            DAT_007f4d24 = DAT_007f4d24 + 1;
          }
        }
        local_28 = local_28 + 1;
        pbVar7 = g_bitset_007F4CFC;
        pRVar8 = g_runtimeRecords_007F4D3C;
      } while ((int)local_28 < (int)DAT_007f4d4c);
    }
  }
  *(uint *)((st_stack_frame + 20) + iVar9 + iVar6) = (uint)(ushort)param_1->field_0027 * 0x1c;
  *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = 0x413d92;

  PTR_007f4d04 = (undefined4 *)st::fn_006AAC70(*(uint *)((st_stack_frame + 20) + iVar9 + iVar6));
  DAT_007f4d40 = 0;
  DAT_007f4cf8 = 0;
  local_30 = 0;
  local_34 = 0;
  local_40 = 0;
  DAT_007f4d48 = st::machine_word_boundary_cast<undefined4>(PTR_007f4d04);
  if ((param_1->field_004D == -2) || (param_1->field_004D == -3)) {
    local_48 = 0;
    local_28 = 0;
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    piVar16_mg0 = reinterpret_cast<undefined4 *>(extraout_EDX);
    if (param_1->field_0027 != 0) {
      do {
        if (local_28 < param_2->count) {
          puVar13 = DArrayAt<undefined2>(param_2, local_28);
        }
        else {
          puVar13 = nullptr;
        }
        *(uint *)((st_stack_frame + 20) + iVar9 + iVar6) =
             STReplaceLowWord((uint32_t)(piVar16_mg0), (uint16_t)(*puVar13));
        *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = 0x413fdb;
        /* ST_CALLSITE[00413FD6]: CALL 0x0040286f; direct=0040286F STGroupBoatC::sub_00423E70 */
        pSVar12 = st::fn_0040286F(param_1,*(ushort *)((st_stack_frame + 20) + iVar9 + iVar6));
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        piVar16_mg0 = reinterpret_cast<undefined4 *>(extraout_EDX_01);
        if (pSVar12 != nullptr) {
          pSVar12->field_00B7 = 0;
          if (0 < DAT_007f4d24) {
            iVar15 = pSVar12->field_00C7;
            if (((iVar15 < 0) || (g_pathingGrid.sizeX <= iVar15)) ||
               ((iVar14 = pSVar12->field_00CB, iVar14 < 0 ||
                (((g_pathingGrid.sizeY <= iVar14 || (iVar5 = pSVar12->field_00CF, iVar5 < 0)) ||
                 (g_pathingGrid.sizeZ <= iVar5)))))) {
              sVar1 = pSVar12->field_0047;
              if (((-1 < sVar1) && (sVar1 < g_pathingGrid.sizeX)) &&
                 ((sVar2 = pSVar12->field_0049, -1 < sVar2 &&
                  (((sVar2 < g_pathingGrid.sizeY && (sVar3 = pSVar12->field_004B, -1 < sVar3)) &&
                   (sVar3 < g_pathingGrid.sizeZ)))))) {
                local_20 = sVar2 * DAT_007f4d2c + sVar3 * iVar10 + (int)sVar1;
              }
            }
            else {
              local_20 = iVar5 * iVar10 + iVar15 + iVar14 * DAT_007f4d2c;
            }
            if ((g_bitset_007F4CFC[st::storage_bit_cast<int>(static_cast<uint32_t>(local_20 ^ 7)) >> 3] >> ((local_20 ^ 7) & 7) & 1) != 0) {
              g_bitset_007F4CFC[st::storage_bit_cast<int>(static_cast<uint32_t>(local_20 ^ 7)) >> 3] =
                   g_bitset_007F4CFC[st::storage_bit_cast<int>(static_cast<uint32_t>(local_20 ^ 7)) >> 3] & ~('\x01' << ((local_20 ^ 7) & 7));
              DAT_007f4d24 = DAT_007f4d24 + -1;
            }
          }
          piVar17 = static_cast<int *>(param_1->field_0059);
          iVar15 = local_48;
          if ((uint)(ushort)pSVar12->field_0032 != piVar17[local_48 * 4 + 6]) {
            iVar14 = local_48;
            do {
              iVar14 = iVar14 + 1;
              if (*piVar17 <= iVar14) {
                iVar14 = 0;
              }
              iVar15 = *piVar17;
            } while ((iVar14 != local_48) &&
                    (iVar15 = iVar14, (uint)(ushort)pSVar12->field_0032 != piVar17[iVar14 * 4 + 6]));
          }
          if (iVar15 < *piVar17) {
            PTR_007f4d04[DAT_007f4d40 * 7] = (int)pSVar12->field_0047;
            local_30 = local_30 + 2 + pSVar12->field_0047 * 4;
            PTR_007f4d04[DAT_007f4d40 * 7 + 1] = (int)pSVar12->field_0049;
            local_34 = local_34 + 2 + pSVar12->field_0049 * 4;
            PTR_007f4d04[DAT_007f4d40 * 7 + 2] = (int)pSVar12->field_004B;
            local_40 = local_40 + 2 + pSVar12->field_004B * 4;
            PTR_007f4d04[DAT_007f4d40 * 7 + 6] = local_28;
            if (param_1->field_004D == -3) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              g_runtimeRecords_007F4D3C[DAT_007f4d40].field_0000 =
                   *(int *)((int)param_1->field_0059 + iVar15 * 0x10 + 0xc);
              g_runtimeRecords_007F4D3C[DAT_007f4d40].field_0004 =
                   *(int *)((iVar15 + 1) * 0x10 + (int)param_1->field_0059);
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              g_runtimeRecords_007F4D3C[DAT_007f4d40].field_0008 =
                   *(int *)((int)param_1->field_0059 + iVar15 * 0x10 + 0x14);
            }
            else {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              PTR_007f4d04[DAT_007f4d40 * 7 + 3] =
                   *(undefined4 *)((int)param_1->field_0059 + iVar15 * 0x10 + 0xc);
              PTR_007f4d04[DAT_007f4d40 * 7 + 4] =
                   *(undefined4 *)((iVar15 + 1) * 0x10 + (int)param_1->field_0059);
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              PTR_007f4d04[DAT_007f4d40 * 7 + 5] =
                   *(undefined4 *)((int)param_1->field_0059 + iVar15 * 0x10 + 0x14);
            }
            local_48 = iVar15 + 1;
            piVar16_mg0 = (undefined4 *)param_1->field_0059;
            if (*piVar16_mg0 <= local_48) {
              local_48 = 0;
            }
            DAT_007f4d40 = DAT_007f4d40 + 1;
          }
          else {
            DAT_007f4cf8 = DAT_007f4cf8 + 1;
            PTR_007f4d04[((uint)(ushort)param_1->field_0027 - DAT_007f4cf8) * 7] =
                 (int)pSVar12->field_0047;
            PTR_007f4d04[((uint)(ushort)param_1->field_0027 - DAT_007f4cf8) * 7 + 1] =
                 (int)pSVar12->field_0049;
            PTR_007f4d04[((uint)(ushort)param_1->field_0027 - DAT_007f4cf8) * 7 + 2] =
                 (int)pSVar12->field_004B;
            piVar16_mg0 = PTR_007f4d04;
            PTR_007f4d04[((uint)(ushort)param_1->field_0027 - DAT_007f4cf8) * 7 + 6] = local_28;
          }
        }
        local_28 = local_28 + 1;
      } while ((int)local_28 < (int)(uint)(ushort)param_1->field_0027);
    }
  }
  else {
    local_28 = 0;
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    piVar17 = extraout_EDX;
    if (param_1->field_0027 != 0) {
      do {
        if (local_28 < param_2->count) {
          puVar13 = DArrayAt<undefined2>(param_2, local_28);
        }
        else {
          puVar13 = nullptr;
        }
        *(uint *)((st_stack_frame + 20) + iVar9 + iVar6) =
             STReplaceLowWord((uint32_t)(piVar17), (uint16_t)(*puVar13));
        *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = 0x413df5;
        /* ST_CALLSITE[00413DF0]: CALL 0x0040286f; direct=0040286F STGroupBoatC::sub_00423E70 */
        pSVar12 = st::fn_0040286F(param_1,*(ushort *)((st_stack_frame + 20) + iVar9 + iVar6));
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        piVar17 = extraout_EDX_00;
        if (pSVar12 != nullptr) {
          pSVar12->field_00B7 = 0;
          PTR_007f4d04[DAT_007f4d40 * 7] = (int)pSVar12->field_0047;
          local_30 = local_30 + 2 + pSVar12->field_0047 * 4;
          PTR_007f4d04[DAT_007f4d40 * 7 + 1] = (int)pSVar12->field_0049;
          local_34 = local_34 + 2 + pSVar12->field_0049 * 4;
          PTR_007f4d04[DAT_007f4d40 * 7 + 2] = (int)pSVar12->field_004B;
          local_40 = local_40 + 2 + pSVar12->field_004B * 4;
          piVar17 = (int *)(DAT_007f4d40 * 7);
          PTR_007f4d04[DAT_007f4d40 * 7 + 6] = local_28;
          if (0 < DAT_007f4d24) {
            iVar15 = pSVar12->field_00C7;
            if (((((iVar15 < 0) || (g_pathingGrid.sizeX <= iVar15)) ||
                 (iVar14 = pSVar12->field_00CB, iVar14 < 0)) ||
                ((g_pathingGrid.sizeY <= iVar14 || (iVar5 = pSVar12->field_00CF, iVar5 < 0)))) ||
               (g_pathingGrid.sizeZ <= iVar5)) {
              sVar1 = pSVar12->field_0047;
              if (((-1 < sVar1) && (sVar1 < g_pathingGrid.sizeX)) &&
                 ((sVar2 = pSVar12->field_0049, -1 < sVar2 &&
                  (((sVar2 < g_pathingGrid.sizeY && (sVar3 = pSVar12->field_004B, -1 < sVar3)) &&
                   (sVar3 < g_pathingGrid.sizeZ)))))) {
                local_20 = sVar2 * DAT_007f4d2c + sVar3 * iVar10 + (int)sVar1;
              }
            }
            else {
              local_20 = iVar5 * iVar10 + iVar15 + iVar14 * DAT_007f4d2c;
            }
            piVar17 = (int *)(local_20 ^ 7);
            if ((STBitTest(g_bitset_007F4CFC, piVar17)) != 0) {
              piVar17 = (int *)(local_20 ^ 7);
              STBitClear(g_bitset_007F4CFC, piVar17);
              DAT_007f4d24 = DAT_007f4d24 + -1;
            }
          }
          DAT_007f4d40 = DAT_007f4d40 + 1;
        }
        local_28 = local_28 + 1;
      } while ((int)local_28 < (int)(uint)(ushort)param_1->field_0027);
    }
  }
  if (DAT_007f4d24 < 0) {
    DAT_007f4d24 = 0;
  }
  DAT_007f4d20 = DAT_007f4d40;
  if (0 < DAT_007f4d40) {
    iVar10 = DAT_007f4d40 / 2;
    DAT_007f4d0c = (iVar10 + local_30) / DAT_007f4d40;
    DAT_007f4d10 = (local_34 + iVar10) / DAT_007f4d40;
    DAT_007f4d1c = (iVar10 + local_40) / DAT_007f4d40;
    *(int *)((st_stack_frame + 20) + iVar9 + iVar6) = param_4;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = param_3;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18) = DAT_007f4d10 >> 2;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x14) = DAT_007f4d0c >> 2;
    *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x10) = 0x4143b1;

    DAT_007f4d08 = st::fn_006AD0B0(*(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x14),
                                *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18),
                                *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c),
                                *(int *)((st_stack_frame + 20) + iVar9 + iVar6));
    if (DAT_007f4d08 == 0x7f) {
      DAT_007f4d08 = 0;
    }
  }
  if (((param_1->field_004D != 0) && (((byte)param_1->field_0049 & 1) == 0)) &&
     (DAT_007f4d4c == (ushort)param_1->field_0027)) {
    *(int *)((st_stack_frame + 20) + iVar9 + iVar6) = param_4 * 4 + 2;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = param_3 * 4 + 2;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18) = DAT_007f4d10;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x14) = DAT_007f4d0c;
    *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x10) = 0x41440a;

    iVar7 = st::fn_006DB910(*(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x14),
                         *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18),
                         *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c),
                         *(int *)((st_stack_frame + 20) + iVar9 + iVar6));
    iVar10 = ((iVar7 * 4 + 0x2d) / 0x5a) * 0x5a;
    iVar10 = STSignedDiv4(iVar10);
    param_1->field_0055 = iVar10;
    if (iVar10 == 0x168) {
      param_1->field_0055 = 0;
    }
  }
  *(int *)((st_stack_frame + 20) + iVar9 + iVar6) = param_1->field_0055;
  *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = 0x41444f;

  DAT_007f4d28 = st::fn_006DB640(*(int *)((st_stack_frame + 20) + iVar9 + iVar6));
  *(int *)((st_stack_frame + 20) + iVar9 + iVar6) = param_1->field_0055;
  *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = 0x41445d;

  DAT_007f4d38 = st::fn_006DB6D0(*(int *)((st_stack_frame + 20) + iVar9 + iVar6));
  iVar10 = param_1->field_004D;
  switch(iVar10) {
  case 1:
    *(undefined4 *)((st_stack_frame + 20) + iVar9 + iVar6) = param_1->field_0051;
    *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = 0;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18) = param_5;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x14) = param_4;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x10) = param_3;
    *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0xc) = 0x4145d6;

    st::fn_0040488B(*(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x10),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x14),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c),
                       *(int *)((st_stack_frame + 20) + iVar9 + iVar6));
    break;
  case 2:
    *(undefined4 *)((st_stack_frame + 20) + iVar9 + iVar6) = 0;
    *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = param_1->field_0051;
    *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18) = 0;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x14) = param_5;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x10) = param_4;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0xc) = param_3;
    *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 8) = 0x4145eb;

    st::fn_00401343(*(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0xc),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x10),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x14),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c),
                       *(int *)((st_stack_frame + 20) + iVar9 + iVar6));
    break;
  case 3:
    *(int *)((st_stack_frame + 20) + iVar9 + iVar6) = param_1->field_0055;
    *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = param_1->field_0051;
    *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18) = 0;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x14) = param_5;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x10) = param_4;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0xc) = param_3;
    *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 8) = 0x414602;

    st::fn_00403FC1(*(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0xc),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x10),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x14),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c),
                       *(uint *)((st_stack_frame + 20) + iVar9 + iVar6));
    break;
  case 4:
  case 5:
    *(uint *)((st_stack_frame + 20) + iVar9 + iVar6) = (uint)(iVar10 == 4);
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = param_1->field_0055;
    *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18) = param_1->field_0051;
    *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x14) = 0;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x10) = param_5;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0xc) = param_4;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 8) = param_3;
    *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 4) = 0x414622;

    st::fn_00404368(*(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 8),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0xc),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x10),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x14),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18),
                       *(uint *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c),
                       *(int *)((st_stack_frame + 20) + iVar9 + iVar6));
    break;
  case -10:
    *(undefined4 *)((st_stack_frame + 20) + iVar9 + iVar6) = param_1->field_0051;
    *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = 0;
    *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18) = 2;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x14) = param_4;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x10) = param_3;
    *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0xc) = 0x414633;

    st::fn_004041E7(*(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x10),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x14),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c),
                       *(int *)((st_stack_frame + 20) + iVar9 + iVar6));
    break;
  default:
    *(undefined4 *)((st_stack_frame + 20) + iVar9 + iVar6) = param_1->field_0051;
    *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = 0;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18) = param_5;
    goto LAB_0041463f;
  case -3:
  case -2:
    if (DAT_007f4d20 < 1) {
      local_EAX_2487 = 0;
    }
    else {
      *(uint *)((st_stack_frame + 20) + iVar9 + iVar6) = (uint)(iVar10 == -2);
      *(void **)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = param_1->field_0059;
      *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18) = param_1->field_0051;
      *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x14) = param_1->field_0055;
      *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x10) = 0;
      *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0xc) = param_5;
      *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 8) = param_4;
      *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 4) = param_3;
      *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6) = 0x4144ac;

      local_EAX_2487 =
           st::fn_004037E2(*(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 4),
                              *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 8),
                              *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0xc),
                              *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x10),
                              *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x14),
                              *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18),
                              *(RecoveredRecordView_00412960_AA54A22A **)
                               ((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c),
                              *(int *)((st_stack_frame + 20) + iVar9 + iVar6));
    }
    if ((local_EAX_2487 != 0) || (DAT_007f4cf8 < 1)) break;
    DAT_007f4d48 = st::machine_word_boundary_cast<undefined4>(PTR_007f4d04 + ((uint)(ushort)param_1->field_0027 - DAT_007f4cf8) * 7);
    DAT_007f4d20 = DAT_007f4cf8;
    iVar10 = param_1->field_0055;
    if ((iVar10 < 0x152) && (0x17 < iVar10)) {
      if (iVar10 < 0x125) {
        if (iVar10 < 0xf8) {
          if (iVar10 < 0xcb) {
            if (iVar10 < 0x9e) {
              if (iVar10 < 0x71) {
                DAT_007f4d08 = (0x43 < iVar10) + 1;
                *(undefined4 *)((st_stack_frame + 20) + iVar9 + iVar6) = 0;
                *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = 0;
                *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18) = param_5;
              }
              else {
                DAT_007f4d08 = 3;
                *(undefined4 *)((st_stack_frame + 20) + iVar9 + iVar6) = 0;
                *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = 0;
                *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18) = param_5;
              }
            }
            else {
              DAT_007f4d08 = 4;
              *(undefined4 *)((st_stack_frame + 20) + iVar9 + iVar6) = 0;
              *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = 0;
              *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18) = param_5;
            }
          }
          else {
            DAT_007f4d08 = 5;
            *(undefined4 *)((st_stack_frame + 20) + iVar9 + iVar6) = 0;
            *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = 0;
            *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18) = param_5;
          }
        }
        else {
          DAT_007f4d08 = 6;
          *(undefined4 *)((st_stack_frame + 20) + iVar9 + iVar6) = 0;
          *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = 0;
          *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18) = param_5;
        }
      }
      else {
        DAT_007f4d08 = 7;
        *(undefined4 *)((st_stack_frame + 20) + iVar9 + iVar6) = 0;
        *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = 0;
        *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18) = param_5;
      }
    }
    else {
      DAT_007f4d08 = 0;
      *(undefined4 *)((st_stack_frame + 20) + iVar9 + iVar6) = 0;
      *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c) = 0;
      *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18) = param_5;
    }
LAB_0041463f:
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x14) = param_4;
    *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x10) = param_3;
    *(undefined4 *)((int)aiStackY_a0 + iVar9 + iVar6 + 0xc) = 0x414646;

    st::fn_00404FE3(*(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x10),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x14),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x18),
                       *(int *)((int)aiStackY_a0 + iVar9 + iVar6 + 0x1c),
                       *(int *)((st_stack_frame + 20) + iVar9 + iVar6));
  }
  param_1->field_0049 = param_1->field_0049 & 0xfffffffe;
  ExceptionList = local_14;
  return;
}

// 00414A70 FUN_00414a70
#line 4 "decomp/ST.exe/functions/00414A70/decomp.c"
void st::fn_00414A70(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *local_1c;
  int local_10;
  int local_8;

  if (param_1 == 0) {
    local_10 = 0;
    local_1c = PTR_007f4d50;
  }
  else {
    local_10 = 0x14;
    local_1c = PTR_007f4d54;
  }
  DAT_007f4d18 = st::machine_word_boundary_cast<undefined4>(st::fn_006AAC70(param_2 * 0x18));
  iVar10 = 1;
  DAT_007f4d44 = 0;
  if (0 < DAT_007f4d2c / 2) {
    do {
      iVar1 = DAT_007f4d34 + -1;
      iVar9 = DAT_007f4d34;
      if (iVar10 <= iVar1) {
        iVar9 = iVar10;
      }
      iVar9 = 1 - iVar9;
      if (iVar10 <= iVar1) {
        iVar1 = iVar10 + -1;
      }
      if (iVar9 <= iVar1) {
        iVar2 = -iVar10;
        iVar5 = iVar10;
        do {
          while (iVar5 = iVar5 + -1, iVar3 = iVar10, iVar2 <= iVar5) {
            iVar3 = st::fn_006AADD0(iVar10,iVar5,iVar9,0,0,0);
            local_8 = iVar3 * 4;
            if ((param_1 != 0) && (iVar5 == iVar10 + -1)) {
              local_8 = local_8 + -1;
            }
            iVar4 = st::fn_006AAE60(-0x14,local_10,0,iVar10,iVar5,iVar9);
            st::fn_00415050(iVar10,iVar5,iVar9,local_8,iVar4,iVar3);
            if (param_2 <= DAT_007f4d44) goto cf_break_loop_00414E8A;
          }
          while (iVar3 = iVar3 + -1, iVar2 <= iVar3) {
            iVar5 = st::fn_006AADD0(iVar3,iVar2,iVar9,0,0,0);
            local_8 = iVar5 * 4;
            if (param_1 == 0) {
              if (iVar3 == 0) {
                local_8 = local_8 + -2;
              }
              else if (iVar3 == -1) {
LAB_00414bc1:
                local_8 = local_8 + -1;
              }
            }
            else if (iVar3 == iVar2) {
              local_8 = local_8 + -2;
            }
            else if (iVar3 == iVar2 + 1) goto LAB_00414bc1;
            iVar4 = st::fn_006AAE60(-0x14,local_10,0,iVar3,iVar2,iVar9);
            st::fn_00415050(iVar3,iVar2,iVar9,local_8,iVar4,iVar5);
            if (param_2 <= DAT_007f4d44) goto cf_break_loop_00414E8A;
          }
          iVar5 = iVar2 + 1;
          for (iVar3 = iVar5; iVar3 <= iVar10; iVar3 = iVar3 + 1) {
            iVar4 = st::fn_006AADD0(iVar2,iVar3,iVar9,0,0,0);
            local_8 = iVar4 * 4;
            if (param_1 == 0) {
              if (iVar10 == 1) {
LAB_00414c44:
                local_8 = local_8 + -1;
              }
            }
            else if (iVar3 == iVar5) goto LAB_00414c44;
            iVar6 = st::fn_006AAE60(-0x14,local_10,0,iVar2,iVar3,iVar9);
            st::fn_00415050(iVar2,iVar3,iVar9,local_8,iVar6,iVar4);
            if (param_2 <= DAT_007f4d44) goto cf_break_loop_00414E8A;
          }
          for (; iVar5 <= iVar10; iVar5 = iVar5 + 1) {
            iVar3 = st::fn_006AADD0(iVar5,iVar10,iVar9,0,0,0);
            local_8 = iVar3 * 4;
            if (param_1 == 0) {
              if (iVar5 == 0) {
                local_8 = local_8 + -2;
              }
              else if (iVar5 == -1) {
LAB_00414ccc:
                local_8 = local_8 + -1;
              }
            }
            else if (iVar5 == iVar10) {
              local_8 = local_8 + -2;
            }
            else if (iVar5 == iVar10 + -1) goto LAB_00414ccc;
            iVar4 = st::fn_006AAE60(-0x14,local_10,0,iVar5,iVar10,iVar9);
            st::fn_00415050(iVar5,iVar10,iVar9,local_8,iVar4,iVar3);
            if (param_2 <= DAT_007f4d44) goto cf_break_loop_00414E8A;
          }
          iVar9 = iVar9 + 1;
          iVar5 = iVar10;
        } while (iVar9 <= iVar1);
      }
      if (iVar10 <= DAT_007f4d34 + -1) {
        iVar2 = -iVar10;
        iVar1 = iVar2;
        iVar9 = iVar2;
        iVar5 = iVar2;
        if (-iVar10 == iVar10 || SBORROW4(iVar2,iVar10) != iVar10 * -2 < 0) {
          do {
            for (; iVar1 <= iVar10; iVar1 = iVar1 + 1) {
              iVar3 = st::fn_006AADD0(iVar1,iVar5,iVar10,0,0,0);
              local_8 = iVar3 * 4;
              if (param_1 == 0) {
                if (iVar1 == 0) {
                  local_8 = local_8 + -2;
                }
                else if (iVar1 == -1) {
                  local_8 = local_8 + -1;
                }
              }
              else {
                uVar8 = iVar5 - iVar1 >> 0x1f;
                iVar4 = (iVar5 - iVar1 ^ uVar8) - uVar8;
                if (iVar4 < 2) {
                  local_8 = local_8 + -2 + iVar4;
                }
              }
              iVar4 = st::fn_006AAE60(-0x14,local_10,0,iVar1,iVar5,iVar10);
              st::fn_00415050(iVar1,iVar5,iVar10,local_8,iVar4,iVar3);
              if (param_2 <= DAT_007f4d44) goto cf_break_loop_00414E8A;
            }
            iVar5 = iVar5 + 1;
            iVar1 = iVar2;
          } while (iVar5 <= iVar10);
        }
        for (; iVar1 = iVar2, iVar9 <= iVar10; iVar9 = iVar9 + 1) {
          for (; iVar1 <= iVar10; iVar1 = iVar1 + 1) {
            iVar5 = st::fn_006AADD0(iVar1,iVar9,iVar2,0,0,0);
            local_8 = iVar5 * 4;
            if (param_1 == 0) {
              if (iVar1 == 0) {
                local_8 = local_8 + -2;
              }
              else if (iVar1 == -1) {
                local_8 = local_8 + -1;
              }
            }
            else {
              uVar8 = iVar9 - iVar1 >> 0x1f;
              iVar3 = (iVar9 - iVar1 ^ uVar8) - uVar8;
              if (iVar3 < 2) {
                local_8 = local_8 + -2 + iVar3;
              }
            }
            iVar3 = st::fn_006AAE60(-0x14,local_10,0,iVar1,iVar9,iVar2);
            st::fn_00415050(iVar1,iVar9,iVar2,local_8,iVar3,iVar5);
            if (param_2 <= DAT_007f4d44) goto cf_break_loop_00414E8A;
          }
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 <= DAT_007f4d2c / 2);
  }
cf_break_loop_00414E8A:
  iVar10 = 0;
  *(undefined1 *)local_1c = 0;
  STField<undefined1>(local_1c,1) = 0;
  STField<undefined1>(local_1c,2) = 0;
  STField<undefined1>(local_1c,3) = 0;
  if (0 < DAT_007f4d44) {
    piVar7 = local_1c;
    iVar1 = 0;
    do {
      local_1c = piVar7 + 1;
      iVar10 = iVar10 + 1;
      *(undefined1 *)local_1c = *(undefined1 *)(iVar1 + (int)DAT_007f4d18);
      STField<undefined1>(piVar7,5) = *(undefined1 *)(iVar1 + 4 + (int)DAT_007f4d18);
      STField<undefined1>(piVar7,6) = *(undefined1 *)(iVar1 + 8 + (int)DAT_007f4d18);
      STField<undefined1>(piVar7,7) = *(undefined1 *)(iVar1 + 0x10 + (int)DAT_007f4d18);
      piVar7 = local_1c;
      iVar1 = iVar1 + 0x18;
    } while (iVar10 < DAT_007f4d44);
  }
  ((undefined1 *)local_1c)[1] = 0x7f;
  STField<undefined1>(local_1c,5) = 0x7f;
  STField<undefined1>(local_1c,6) = 0x7f;
  STField<undefined1>(local_1c,7) = 0xff;
  st::fn_006AB060(&DAT_007f4d18);
  return;
}

// 00415050 FUN_00415050
#line 4 "decomp/ST.exe/functions/00415050/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=6, used=0), and
   decompilation contains no value return */

void st::fn_00415050(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;

  iVar2 = DAT_007f4d44 + -1;
  if (-1 < iVar2) {
    piVar1 = (int *)(DAT_007f4d18 + 0xc + iVar2 * 0x18);
    do {
      if ((*piVar1 < param_4) || ((param_4 == *piVar1 && (piVar1[2] <= param_5)))) break;
      iVar2 = iVar2 + -1;
      piVar1 = piVar1 + -6;
    } while (-1 < iVar2);
  }
  iVar3 = iVar2 + 1;
  if (iVar3 < DAT_007f4d44) {

    st::fn_0072DA70
              ((RecoveredRecord_006BFE70_3123BCE8 *)(DAT_007f4d18 + (iVar2 + 4 + iVar3 * 2) * 8),
               (AnonPointee_TLOBaseTy_0607 *)(iVar3 * 0x18 + DAT_007f4d18),
               DAT_007f4d44 * 0x18 + iVar3 * -0x18);
  }
  iVar3 = iVar3 * 0x18;
  *(undefined4 *)(iVar3 + DAT_007f4d18) = param_1;
  *(undefined4 *)(iVar3 + 4 + DAT_007f4d18) = param_2;
  *(undefined4 *)(iVar3 + 8 + DAT_007f4d18) = param_3;
  *(int *)(iVar3 + 0xc + DAT_007f4d18) = param_4;
  *(int *)(iVar3 + 0x14 + DAT_007f4d18) = param_5;
  *(undefined4 *)(iVar3 + 0x10 + DAT_007f4d18) = param_6;
  DAT_007f4d44 = DAT_007f4d44 + 1;
  return;
}

// 00415B10 FUN_00415b10
#line 4 "decomp/ST.exe/functions/00415B10/decomp.c"
undefined4 __fastcall st::fn_00415B10(undefined4 param_1)

{
  return param_1;
}

// 00415B30 sub_00415B30
#line 4 "decomp/ST.exe/functions/00415B30/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (6), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00416400 @ 004165AD -> read as EAX on
   every CFG path | 00418030 @ 00418731 -> read as EAX on every CFG path | 0045F6C0 @ 0045F827 ->
   read as EAX on every CFG path | 00462180 @ 004630D3 -> killed on every CFG path | 00462180 @
   00464772 -> killed on every CFG path | 004653B0 @ 004654B7 -> killed on every CFG path | 004653B0
   @ 0046569E -> killed on every CFG path | 00465C60 @ 00468DBA -> killed on every CFG path |
   00465C60 @ 00469518 -> killed on every CFG path | 0046AA50 @ 0046AC82 -> killed on every CFG path
   | 0046AA50 @ 0046AE8E -> killed on every CFG path | 0046B100 @ 0046B786 -> killed on every CFG
   path | 0046B100 @ 0046BAE3 -> killed on every CFG path | 0046B100 @ 0046C0E7 -> killed on every
   CFG path | 0046C980 @ 0046CB6C -> killed on every CFG path | 0046C980 @ 0046CD2E -> killed on
   every CFG path | 0046CF20 @ 0046D054 -> killed on every CFG path | 0046D450 @ 0046DF2C -> killed
   on every CFG path | 0046D450 @ 0046E4F6 -> killed on every CFG path | 0046EFD0 @ 0046F1B0 ->
   killed on every CFG path | 0046EFD0 @ 0046F3BC -> killed on every CFG path | 0046F5C0 @ 00470208
   -> killed on every CFG path | 0046F5C0 @ 0047086B -> killed on every CFG path | 004714D0 @
   004716A5 -> killed on every CFG path */

int __thiscall
st::fn_00415B30(void *this,short param_1,short param_2,short param_3,short param_4,short param_5,
            short param_6,byte param_7)

{
  short sVar1;
  int iVar3;
  int iVar2;
  int iVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  void *local_14;
  byte *puStack_10;
  undefined *puStack_c;
  uint local_8;
  puStack_c = (undefined *)&DAT_007901a0;
  puStack_10 = (byte *)&st_image_0072D964;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  STField<short>(this,0x34) = param_1;
  STField<short>(this,0x36) = param_2;
  STField<short>(this,0x38) = param_3;
  STField<short>(this,0x3a) = param_4;
  STField<short>(this,0x3c) = param_5;
  STField<short>(this,0x3e) = param_6;
  STField<short>(this,0x41) = param_1;
  STField<short>(this,0x43) = param_2;
  STField<short>(this,0x45) = param_3;
  iVar8 = (int)param_1;
  STField<short>(this,0x47) = param_1 / 0xc9;
  iVar4 = (int)param_2;
  STField<short>(this,0x49) = param_2 / 0xc9;
  iVar5 = (int)param_3;
  STField<short>(this,0x4b) = param_3 / 200;
  iVar3 = (short)((param_1 / 0xc9) * 0xc9 + 100);
  if ((((iVar3 + -0x1e < iVar8) && (iVar8 < iVar3 + 0x1e)) &&
      (iVar3 = (short)((param_2 / 0xc9) * 0xc9 + 100), iVar3 + -0x1e < iVar4)) &&
     (((iVar4 < iVar3 + 0x1e &&
       (iVar3 = (short)((param_3 / 200) * 200 + 100), iVar3 + -0x1d < iVar5)) &&
      (iVar5 < iVar3 + 0x1d)))) {
    STField<undefined1>(this,0x4d) = 0;
  }
  else {
    STField<undefined1>(this,0x4d) = 1;
  }
  STField<undefined1>(this,0x40) = STField<undefined1>(this,0x4d);
  STField<byte>(this,99) = param_7;
  STField<undefined4>(this,0x68) = 0;

  iVar2 = st::fn_006ACF0D(iVar8,iVar4,iVar5,(int)param_4,(int)param_5,(int)param_6);
  STField<int>(this,100) = iVar2 / (int)(uint)param_7;
  if (iVar2 / (int)(uint)param_7 < 1) {
    STField<undefined4>(this,100) = 1;
  }
  iVar3 = STField<int>(this,100);
  sVar7 = param_1 + (short)((param_4 - iVar8) / iVar3);
  STField<short>(this,0x4e) = sVar7;
  sVar1 = (short)((param_5 - iVar4) / iVar3) + param_2;
  STField<short>(this,0x50) = sVar1;
  sVar6 = param_3 + (short)((param_6 - iVar5) / iVar3);
  STField<short>(this,0x52) = sVar6;
  STField<short>(this,0x54) = sVar7 / 0xc9;
  STField<short>(this,0x56) = sVar1 / 0xc9;
  STField<short>(this,0x58) = sVar6 / 200;
  iVar3 = (short)((sVar7 / 0xc9) * 0xc9 + 100);
  if (((iVar3 + -0x1e < (int)sVar7) && ((int)sVar7 < iVar3 + 0x1e)) &&
     ((iVar3 = (short)((sVar1 / 0xc9) * 0xc9 + 100), iVar3 + -0x1e < (int)sVar1 &&
      ((((int)sVar1 < iVar3 + 0x1e &&
        (iVar3 = (short)((sVar6 / 200) * 200 + 100), iVar3 + -0x1d < (int)sVar6)) &&
       ((int)sVar6 < iVar3 + 0x1d)))))) {
    STField<undefined1>(this,0x5a) = 0;
  }
  else {
    STField<undefined1>(this,0x5a) = 1;
  }
  if ((STField<char>(this,0x4d) == '\0') && (STField<char>(this,0x5a) == '\x01')) {
    STField<undefined4>(this,0x7a) = 1;
  }
  else {
    STField<undefined4>(this,0x7a) = 0;
  }
  STField<undefined4>(this,0x7e) = 1;
  ExceptionList = local_14;
  return 0;
}

// 00416240 sub_00416240
#line 4 "decomp/ST.exe/functions/00416240/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=26, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00583270 -> 00416240 @ 00583729; unproven partial register write at 0058371D | 00585020
   -> 00416240 @ 005855BB; unproven partial register write at 005855B0 | 005859A0 -> 00416240 @
   00585C58; unproven partial register write at 00585C4C | 00588BC0 -> 00416240 @ 00588F8C; unproven
   partial register write at 00588F76 | 0058C760 -> 00416240 @ 0058CA27; unproven partial register
   write at 0058CA1B | 005F68B0 -> 00416240 @ 005F694E; unproven partial register write at 005F6942
   | 00638CA0 -> 00416240 @ 00638EB5; unproven partial register write at 00638EA9 | 00639990 ->
   00416240 @ 00639A71; unproven partial register write at 00639A65 | 00639990 -> 00416240 @
   00639B1F; unproven partial register write at 00639B13 | 00639C90 -> 00416240 @ 00639DC5; unproven
   partial register write at 00639DB9 | 00639C90 -> 00416240 @ 00639F25; unproven partial register
   write at 00639F16 | 00639C90 -> 00416240 @ 00639FB9; unproven partial register write at 00639FAD
   | 00639C90 -> 00416240 @ 0063A2DB; unproven partial register write at 0063A2CF | 00639C90 ->
   00416240 @ 0063A612; unproven partial register write at 0063A606 | 00639C90 -> 00416240 @
   0063A795; unproven partial register write at 0063A789 | 00639C90 -> 00416240 @ 0063B234; unproven
   partial register write at 0063B228 | 00639C90 -> 00416240 @ 0063B49F; unproven partial register
   write at 0063B493 | 00639C90 -> 00416240 @ 0063B65A; unproven partial register write at 0063B64E
   | 00639C90 -> 00416240 @ 0063B680; unproven partial register write at 0063B674 | 0063D100 ->
   00416240 @ 0063D1BA; unproven partial register write at 0063D1AE

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00583270 -> 00416240 @ 00583729; unproven partial register write at 00583716 | 00585020
   -> 00416240 @ 005855BB; unproven partial register write at 005855A5 | 005859A0 -> 00416240 @
   00585C58; unproven partial register write at 00585C45 | 00586AF0 -> 00416240 @ 0058769C; MOVSX at
   005873C9 establishes signed source width 2 | 00586AF0 -> 00416240 @ 00588301; MOVSX at 00588027
   establishes signed source width 2 | 00588BC0 -> 00416240 @ 00588F8C; unproven partial register
   write at 00588F80 | 0058C760 -> 00416240 @ 0058CA27; unproven partial register write at 0058CA14
   | 005F68B0 -> 00416240 @ 005F694E; unproven partial register write at 005F693B | 00638CA0 ->
   00416240 @ 00638EB5; unproven partial register write at 00638EA2 | 00639990 -> 00416240 @
   00639A71; unproven partial register write at 00639A5E | 00639990 -> 00416240 @ 00639B1F; unproven
   partial register write at 00639B0C | 00639C90 -> 00416240 @ 00639DC5; unproven partial register
   write at 00639DB2 | 00639C90 -> 00416240 @ 00639F25; unproven partial register write at 00639F0F
   | 00639C90 -> 00416240 @ 00639FB9; unproven partial register write at 00639FA6 | 00639C90 ->
   00416240 @ 0063A2DB; unproven partial register write at 0063A2C8 | 00639C90 -> 00416240 @
   0063A612; unproven partial register write at 0063A5FF | 00639C90 -> 00416240 @ 0063A795; unproven
   partial register write at 0063A782 | 00639C90 -> 00416240 @ 0063B234; unproven partial register
   write at 0063B221 | 00639C90 -> 00416240 @ 0063B49F; unproven partial register write at 0063B48C
   | 00639C90 -> 00416240 @ 0063B65A; unproven partial register write at 0063B647 | 00639C90 ->
   00416240 @ 0063B680; unproven partial register write at 0063B66D | 0063D100 -> 00416240 @
   0063D1BA; unproven partial register write at 0063D1A7

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00583270 -> 00416240 @ 00583729; unproven partial register write at 0058370F | 005859A0
   -> 00416240 @ 00585C58; unproven partial register write at 00585C3E | 00588BC0 -> 00416240 @
   00588F8C; unproven partial register write at 00588F7D | 0058C760 -> 00416240 @ 0058CA27; unproven
   partial register write at 0058CA0D | 005F68B0 -> 00416240 @ 005F694E; unproven partial register
   write at 005F6934 | 00638CA0 -> 00416240 @ 00638EB5; unproven partial register write at 00638E9B
   | 00639990 -> 00416240 @ 00639A71; unproven partial register write at 00639A57 | 00639990 ->
   00416240 @ 00639B1F; unproven partial register write at 00639B05 | 00639C90 -> 00416240 @
   00639DC5; unproven partial register write at 00639DAB | 00639C90 -> 00416240 @ 00639F25; unproven
   partial register write at 00639F08 | 00639C90 -> 00416240 @ 00639FB9; unproven partial register
   write at 00639F9F | 00639C90 -> 00416240 @ 0063A2DB; unproven partial register write at 0063A2C1
   | 00639C90 -> 00416240 @ 0063A612; unproven partial register write at 0063A5F8 | 00639C90 ->
   00416240 @ 0063A795; unproven partial register write at 0063A77B | 00639C90 -> 00416240 @
   0063B234; unproven partial register write at 0063B21A | 00639C90 -> 00416240 @ 0063B49F; unproven
   partial register write at 0063B485 | 00639C90 -> 00416240 @ 0063B65A; unproven partial register
   write at 0063B640 | 00639C90 -> 00416240 @ 0063B680; unproven partial register write at 0063B666
   | 0063D100 -> 00416240 @ 0063D1BA; unproven partial register write at 0063D1A0 */

void __thiscall st::fn_00416240(void *this,ushort param_1,short param_2,ushort param_3)

{
  STField<ushort>(this,0x41) = param_1;
  STField<short>(this,0x43) = param_2;
  STField<ushort>(this,0x45) = param_3;
  return;
}

// 00416270 FUN_00416270
#line 4 "decomp/ST.exe/functions/00416270/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0057B670 -> 00416270 @ 0057B716; address of FUN_0057b670 parameter param_2 | 005FAC40
   -> 00416270 @ 005FAC6A; address of FUN_005fac40 parameter param_1

   [STPrototypeRepairApplier] Propagated parameter 3.
   Evidence: 00484020 -> 00416270 @ 00484166; address of FUN_00484020 parameter param_1 | 005FAC40
   -> 00416270 @ 005FAC6A; address of FUN_005fac40 parameter param_5

   [STPrototypeRepairApplier] Propagated parameter 2.
   Evidence: 005FAC40 -> 00416270 @ 005FAC6A; address of FUN_005fac40 parameter param_4 | 005FF3A0
   -> 00416270 @ 005FF3EB; FUN_005ff3a0 parameter param_2 */

void __thiscall st::fn_00416270(void *this,uint *param_1,short *param_2,short *param_3)

{
  *(undefined2 *)param_1 = STField<undefined2>(this,0x41);
  *param_2 = STField<short>(this,0x43);
  *param_3 = STField<short>(this,0x45);
  return;
}

// 00416330 FUN_00416330
#line 4 "decomp/ST.exe/functions/00416330/decomp.c"
undefined1 __fastcall st::fn_00416330(RecoveredRecord_00416330_34920DE3 *param_1)

{
  return param_1->field_0040;
}

// 00416350 FUN_00416350
#line 4 "decomp/ST.exe/functions/00416350/decomp.c"
undefined1 __fastcall st::fn_00416350(RecoveredRecord_00416350_3493D299 *param_1)

{
  return param_1->field_004D;
}

// 00416390 FUN_00416390
#line 4 "decomp/ST.exe/functions/00416390/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall st::fn_00416390(RecoveredRecordView_00416390_AE365496 *param_1)

{
  uint uVar1;
  uVar1 = 2;
  if ((g_playSystem_00802A38->field_00E4 & 1) != 0) {
    return uVar1;
  }
  param_1->field_006E = param_1->field_006E + 1;
  if (param_1->field_006E == 0x2f) {
    uVar1 = 0;
  }
  if (param_1->field_006E == 0x30) {
    param_1->field_006E = 0;
  }
  param_1->field_0070 =
       *(float *)(&DAT_007a4d24 + (short)param_1->field_006E * 4) * (float)_DAT_007901c0;
  return uVar1;
}

// 00416400 FUN_00416400
#line 4 "decomp/ST.exe/functions/00416400/decomp.c"
int __fastcall st::fn_00416400(STJellyGunC *param_1)

{
  ushort *puVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  short sVar6;
  uint uVar7;
  short sVar8;
  int local_2c;
  int local_28;
  short local_24 [2];
  short local_20 [2];
  short local_1c [2];
  int local_18;
  int local_14;
  byte local_10;
  undefined3 uStack_f;
  int local_c;
  byte local_6;
  bool local_5;

  if (param_1->field_00E3 != '\x01') {
    return (int)param_1->field_00E3;
  }
  if (param_1->field_00E4 == 1) {
    param_1->field_00E4 = 0;
  }
  if (param_1->field_007E == 1) {
    param_1->field_007E = 0;
    param_1->field_00E4 = 1;
  }
  if (param_1->field_00F4 == 1) {
    param_1->field_00F4 = 0;
  }
  /* ST_CALLSITE[00416460]: CALL 0x00402847; direct=00402847 STJellyGunC::sub_00415ED0 */
  iVar4 = st::fn_00402847(param_1,reinterpret_cast<undefined4 *>(&local_28),&local_2c);
  if (iVar4 == -1) {
    param_1->field_00E3 = -1;
    return -1;
  }
  if (iVar4 == 0) {
    param_1->field_00F4 = 1;
    if (param_1->field_00D3 == param_1->field_009B + -1) {
      param_1->field_00E4 = 0;
      param_1->field_00E3 = '\0';
      return 0;
    }
    st::fn_004031E3(param_1,reinterpret_cast<uint *>(local_24),local_20,local_1c);
    iVar4 = param_1->field_00D3 + 1;
    local_6 = 0;
    param_1->field_00D3 = iVar4;
    local_5 = false;
    puVar1 = param_1->field_0097 + iVar4 * 4;
    sVar6 = *puVar1 * 0xc9 + 100;
    sVar8 = puVar1[1] * 0xc9 + 100;
    uVar5 = (int)sVar6 - (int)local_24[0];
    local_c = STReplaceLowWord(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(iVar4)), (uint16_t)(param_1->field_0097[iVar4 * 4 + 2] * 200)) + 100;
    uVar7 = (int)uVar5 >> 0x1f;
    local_14 = (uVar5 ^ uVar7) - uVar7;
    uVar5 = (int)sVar8 - (int)local_20[0];
    uVar7 = (int)uVar5 >> 0x1f;
    iVar4 = (uVar5 ^ uVar7) - uVar7;
    uVar5 = (short)local_c - (int)local_1c[0];
    uVar7 = (int)uVar5 >> 0x1f;
    local_18 = (uVar5 ^ uVar7) - uVar7;
    if (local_18 == 0) {
      bVar2 = param_1->field_0061;
    }
    else {
      bVar3 = 2 < local_18 / local_14;
      local_5 = local_14 == 0 || bVar3;
      if ((local_14 == 0 || bVar3) && (iVar4 == 0 || 2 < local_18 / iVar4)) {
        bVar2 = param_1->field_0062;
      }
      else {
        bVar2 = param_1->field_0061;
      }
    }
    auto _local_10 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(iVar4)), (uint8_t)(bVar2));
    /* ST_CALLSITE[004165AD]: CALL 0x00402455; direct=00402455 sub_00415B30 */
    iVar4 = st::fn_00402455(param_1,local_24[0],local_20[0],local_1c[0],sVar6,sVar8,(short)local_c,
                         bVar2);
    if (iVar4 != 0) {
      param_1->field_00E3 = -1;
      return -1;
    }
    param_1->field_00E3 = '\x03';
    param_1->field_00E4 = 0;
    return 3;
  }
  if (local_28 == 1) {
    param_1->field_00E3 = '\x02';
    param_1->field_00E4 = 0;
    return (int)param_1->field_00E3;
  }
  if ((param_1->field_005A == '\0') && (param_1->field_004D == '\x01')) {
    sVar6 = param_1->field_003A;
    iVar4 = STBiasedDiv16(sVar6, 0xc9); /* exact signed 16-bit grid-index division */
    if (param_1->field_0054 == iVar4) {
      sVar6 = param_1->field_003C;
      iVar4 = STBiasedDiv16(sVar6, 0xc9); /* exact signed 16-bit grid-index division */
      if (param_1->field_0056 == iVar4) {
        sVar6 = param_1->field_003E;
        iVar4 = STBiasedDiv16(sVar6, 200); /* exact signed 16-bit grid-index division */
        if (param_1->field_0058 == iVar4) goto LAB_004166c7;
      }
    }
    param_1->field_005A = 1;
  }
LAB_004166c7:
  param_1->field_00E3 = '\x01';
  return (int)param_1->field_00E3;
}

// 004167A0 sub_004167A0
#line 4 "decomp/ST.exe/functions/004167A0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=16, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_004167A0(void *this)

{
  void *local_14;
  byte *puStack_10;
  undefined *puStack_c;
  uint local_8;
  puStack_c = (undefined *)&DAT_007901d0;
  puStack_10 = (byte *)&st_image_0072D964;
  local_14 = ExceptionList;
  local_8 = 0;
  if (STField<int>(this,0x97) != 0) {
    ExceptionList = &local_14;
    st::fn_006AB060((int *)((int)this + 0x97));
    STField<undefined4>(this,0x9b) = 0;
    STField<undefined4>(this,0xd3) = 0;
    STField<undefined1>(this,0xe3) = 0;
  }
  ExceptionList = local_14;
  return;
}

// 00416840 FUN_00416840
#line 4 "decomp/ST.exe/functions/00416840/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_00416840(void *this,undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  *param_1 = *(undefined2 *)(STField<int>(this,0x97) + STField<int>(this,0xd3) * 8);
  *param_2 = *(undefined2 *)(STField<int>(this,0x97) + 2 + STField<int>(this,0xd3) * 8);
  *param_3 = *(undefined2 *)(STField<int>(this,0x97) + 4 + STField<int>(this,0xd3) * 8);
  return;
}

// 004168B0 FUN_004168b0
#line 4 "decomp/ST.exe/functions/004168B0/decomp.c"
/* [STReturnSemanticsApplier] repair_false_machine_eax_return.
   Evidence: the earlier machine return was admitted only because a self-zeroing XOR/SUB was
   misclassified as reading the call result; every resolved caller now proves an exact EAX kill;
   machine CFG audit: used=0, ignored=6, unknown=0 */

void __fastcall st::fn_004168B0(RecoveredRecord_004168B0_1FFF2915 *param_1)

{
  param_1->field_00E3 = 1;
  param_1->field_007E = 1;
  return;
}

// 004168D0 FUN_004168d0
#line 4 "decomp/ST.exe/functions/004168D0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 st::fn_004168D0(short param_1,short param_2,undefined4 param_3,short param_4,short param_5)

{
  alignas(4) byte st_stack_frame[84];

  float fVar1;
  float10 fVar2;
  float local_30;
  float local_2c;
  uint local_28;
  ushort local_24;
  byte *local_1c;
  void *local_14;
  byte *puStack_10;
  undefined *puStack_c;
  uint local_8;
  puStack_c = (undefined *)&DAT_00790350;
  puStack_10 = (byte *)&st_image_0072D964;
  local_14 = ExceptionList;
  local_1c = (st_stack_frame + 12);
  local_8 = 0;
  local_30 = (float)((int)param_4 - (int)param_1);
  local_2c = (float)((int)param_5 - (int)param_2);
  local_28 = 0;
  if (((float)((int)param_4 - (int)param_1) == _DAT_0079034c) && (local_2c == _DAT_0079034c)) {
    local_30 = 1.0;
  }
  ExceptionList = &local_14;
  fVar2 = (float10)st::fn_0072C624(&local_30);
  fVar1 = (float)((float10)local_2c / fVar2);
  if ((float10)_DAT_00790340 <= (float10)local_2c / fVar2) {
    if ((fVar1 <= (float)_DAT_00790330) || ((float)_DAT_00790320 <= fVar1)) {
      if ((fVar1 <= (float)_DAT_00790310) || ((float)_DAT_00790300 <= fVar1)) {
        if ((fVar1 <= (float)_DAT_007902f0) || ((float)_DAT_007902e0 <= fVar1)) {
          if ((fVar1 <= (float)_DAT_007902d0) || ((float)_DAT_007902c0 <= fVar1)) {
            if ((fVar1 <= (float)_DAT_007902b0) || ((float)_DAT_007902a0 <= fVar1)) {
              if ((fVar1 <= (float)_DAT_00790290) || ((float)_DAT_00790280 <= fVar1)) {
                if ((fVar1 <= (float)_DAT_00790270) || ((float)_DAT_00790260 <= fVar1)) {
                  if ((fVar1 <= (float)_DAT_00790250) || ((float)_DAT_00790240 <= fVar1)) {
                    if ((fVar1 <= (float)_DAT_00790230) || ((float)_DAT_00790220 <= fVar1)) {
                      if ((fVar1 <= (float)_DAT_00790210) || ((float)_DAT_00790200 <= fVar1)) {
                        if ((fVar1 <= (float)_DAT_007901f0) || ((float)_DAT_007901e0 <= fVar1)) {
                          local_24 = 0x10e;
                        }
                        else if (local_30 <= _DAT_0079034c) {
                          local_24 = 0xff;
                        }
                        else {
                          local_24 = 0x11d;
                        }
                      }
                      else if (local_30 <= _DAT_0079034c) {
                        local_24 = 0xf0;
                      }
                      else {
                        local_24 = 300;
                      }
                    }
                    else if (local_30 <= _DAT_0079034c) {
                      local_24 = 0xe1;
                    }
                    else {
                      local_24 = 0x13b;
                    }
                  }
                  else if (local_30 <= _DAT_0079034c) {
                    local_24 = 0xd2;
                  }
                  else {
                    local_24 = 0x14a;
                  }
                }
                else if (local_30 <= _DAT_0079034c) {
                  local_24 = 0xc3;
                }
                else {
                  local_24 = 0x159;
                }
              }
              else if (local_30 <= _DAT_0079034c) {
                local_24 = 0xb4;
              }
              else {
                local_24 = 0;
              }
            }
            else if (local_30 <= _DAT_0079034c) {
              local_24 = 0xa5;
            }
            else {
              local_24 = 0xf;
            }
          }
          else if (local_30 <= _DAT_0079034c) {
            local_24 = 0x96;
          }
          else {
            local_24 = 0x1e;
          }
        }
        else if (local_30 <= _DAT_0079034c) {
          local_24 = 0x87;
        }
        else {
          local_24 = 0x2d;
        }
      }
      else if (local_30 <= _DAT_0079034c) {
        local_24 = 0x78;
      }
      else {
        local_24 = 0x3c;
      }
    }
    else if (local_30 <= _DAT_0079034c) {
      local_24 = 0x69;
    }
    else {
      local_24 = 0x4b;
    }
  }
  else {
    local_24 = 0x5a;
  }
  ExceptionList = local_14;
  return local_24;
}

// 00416DB0 FUN_00416db0
#line 4 "decomp/ST.exe/functions/00416DB0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 st::fn_00416DB0(short param_1,short param_2,undefined4 param_3,short param_4,short param_5)

{
  alignas(4) byte st_stack_frame[84];

  float fVar1;
  float10 fVar2;
  float local_30;
  float local_2c;
  uint local_28;
  ushort local_24;
  byte *local_1c;
  void *local_14;
  byte *puStack_10;
  undefined *puStack_c;
  uint local_8;
  puStack_c = (undefined *)&DAT_007904e0;
  puStack_10 = (byte *)&st_image_0072D964;
  local_14 = ExceptionList;
  local_1c = (st_stack_frame + 12);
  local_8 = 0;
  local_30 = (float)((int)param_4 - (int)param_1);
  local_2c = (float)((int)param_5 - (int)param_2);
  local_28 = 0;
  if (((float)((int)param_4 - (int)param_1) == _DAT_0079034c) && (local_2c == _DAT_0079034c)) {
    local_30 = 1.0;
  }
  ExceptionList = &local_14;
  fVar2 = (float10)st::fn_0072C624(&local_30);
  fVar1 = (float)((float10)local_2c / fVar2);
  if ((float10)_DAT_007904d0 <= (float10)local_2c / fVar2) {
    if ((fVar1 <= (float)_DAT_007904d0) || ((float)_DAT_007904c0 <= fVar1)) {
      if ((fVar1 <= (float)_DAT_007904c0) || ((float)_DAT_007904b0 <= fVar1)) {
        if ((fVar1 <= (float)_DAT_007904b0) || ((float)_DAT_007904a0 <= fVar1)) {
          if ((fVar1 <= (float)_DAT_007904a0) || ((float)_DAT_00790490 <= fVar1)) {
            if ((fVar1 <= (float)_DAT_00790490) || ((float)_DAT_00790480 <= fVar1)) {
              if ((fVar1 <= (float)_DAT_00790480) || ((float)_DAT_00790470 <= fVar1)) {
                if ((fVar1 <= (float)_DAT_00790470) || ((float)_DAT_00790460 <= fVar1)) {
                  if ((fVar1 <= (float)_DAT_00790460) || ((float)_DAT_00790450 <= fVar1)) {
                    if ((fVar1 <= (float)_DAT_00790450) || ((float)_DAT_00790440 <= fVar1)) {
                      if ((fVar1 <= (float)_DAT_00790440) || ((float)_DAT_00790430 <= fVar1)) {
                        if ((fVar1 <= (float)_DAT_00790430) || ((float)_DAT_00790420 <= fVar1)) {
                          if ((fVar1 <= (float)_DAT_00790420) || ((float)_DAT_00790410 <= fVar1)) {
                            if (((float)_DAT_00790400 <= fVar1) || (fVar1 <= (float)_DAT_00790410))
                            {
                              if (((float)_DAT_007903f0 <= fVar1) || (fVar1 <= (float)_DAT_00790400)
                                 ) {
                                if (((float)_DAT_007903e0 <= fVar1) ||
                                   (fVar1 <= (float)_DAT_007903f0)) {
                                  if (((float)_DAT_007903d0 <= fVar1) ||
                                     (fVar1 <= (float)_DAT_007903e0)) {
                                    if (((float)_DAT_007903c0 <= fVar1) ||
                                       (fVar1 <= (float)_DAT_007903d0)) {
                                      if (((float)_DAT_007903b0 <= fVar1) ||
                                         (fVar1 <= (float)_DAT_007903c0)) {
                                        if (((float)_DAT_007903a0 <= fVar1) ||
                                           (fVar1 <= (float)_DAT_007903b0)) {
                                          if (((float)_DAT_00790390 <= fVar1) ||
                                             (fVar1 <= (float)_DAT_007903a0)) {
                                            if (((float)_DAT_00790380 <= fVar1) ||
                                               (fVar1 <= (float)_DAT_00790390)) {
                                              if (((float)_DAT_00790370 <= fVar1) ||
                                                 (fVar1 <= (float)_DAT_00790380)) {
                                                if (((float)_DAT_00790360 <= fVar1) ||
                                                   (fVar1 <= (float)_DAT_00790370)) {
                                                  local_24 = 0x24;
                                                }
                                                else if (local_30 <= _DAT_0079034c) {
                                                  local_24 = 0x23;
                                                }
                                                else {
                                                  local_24 = 0x25;
                                                }
                                              }
                                              else if (local_30 <= _DAT_0079034c) {
                                                local_24 = 0x22;
                                              }
                                              else {
                                                local_24 = 0x26;
                                              }
                                            }
                                            else if (local_30 <= _DAT_0079034c) {
                                              local_24 = 0x21;
                                            }
                                            else {
                                              local_24 = 0x27;
                                            }
                                          }
                                          else if (local_30 <= _DAT_0079034c) {
                                            local_24 = 0x20;
                                          }
                                          else {
                                            local_24 = 0x28;
                                          }
                                        }
                                        else if (local_30 <= _DAT_0079034c) {
                                          local_24 = 0x1f;
                                        }
                                        else {
                                          local_24 = 0x29;
                                        }
                                      }
                                      else if (local_30 <= _DAT_0079034c) {
                                        local_24 = 0x1e;
                                      }
                                      else {
                                        local_24 = 0x2a;
                                      }
                                    }
                                    else if (local_30 <= _DAT_0079034c) {
                                      local_24 = 0x1d;
                                    }
                                    else {
                                      local_24 = 0x2b;
                                    }
                                  }
                                  else if (local_30 <= _DAT_0079034c) {
                                    local_24 = 0x1c;
                                  }
                                  else {
                                    local_24 = 0x2c;
                                  }
                                }
                                else if (local_30 <= _DAT_0079034c) {
                                  local_24 = 0x1b;
                                }
                                else {
                                  local_24 = 0x2d;
                                }
                              }
                              else if (local_30 <= _DAT_0079034c) {
                                local_24 = 0x1a;
                              }
                              else {
                                local_24 = 0x2e;
                              }
                            }
                            else if (local_30 <= _DAT_0079034c) {
                              local_24 = 0x19;
                            }
                            else {
                              local_24 = 0x2f;
                            }
                          }
                          else if (local_30 <= _DAT_0079034c) {
                            local_24 = 0x18;
                          }
                          else {
                            local_24 = 0;
                          }
                        }
                        else if (local_30 <= _DAT_0079034c) {
                          local_24 = 0x17;
                        }
                        else {
                          local_24 = 1;
                        }
                      }
                      else if (local_30 <= _DAT_0079034c) {
                        local_24 = 0x16;
                      }
                      else {
                        local_24 = 2;
                      }
                    }
                    else if (local_30 <= _DAT_0079034c) {
                      local_24 = 0x15;
                    }
                    else {
                      local_24 = 3;
                    }
                  }
                  else if (local_30 <= _DAT_0079034c) {
                    local_24 = 0x14;
                  }
                  else {
                    local_24 = 4;
                  }
                }
                else if (local_30 <= _DAT_0079034c) {
                  local_24 = 0x13;
                }
                else {
                  local_24 = 5;
                }
              }
              else if (local_30 <= _DAT_0079034c) {
                local_24 = 0x12;
              }
              else {
                local_24 = 6;
              }
            }
            else if (local_30 <= _DAT_0079034c) {
              local_24 = 0x11;
            }
            else {
              local_24 = 7;
            }
          }
          else if (local_30 <= _DAT_0079034c) {
            local_24 = 0x10;
          }
          else {
            local_24 = 8;
          }
        }
        else if (local_30 <= _DAT_0079034c) {
          local_24 = 0xf;
        }
        else {
          local_24 = 9;
        }
      }
      else if (local_30 <= _DAT_0079034c) {
        local_24 = 0xe;
      }
      else {
        local_24 = 10;
      }
    }
    else if (local_30 <= _DAT_0079034c) {
      local_24 = 0xd;
    }
    else {
      local_24 = 0xb;
    }
  }
  else {
    local_24 = 0xc;
  }
  ExceptionList = local_14;
  return local_24;
}

// 00417740 FUN_00417740
#line 4 "decomp/ST.exe/functions/00417740/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00418030 @ 00418780 -> killed on
   every CFG path | 004189D0 @ 00418C14 -> killed on every CFG path | 0045F6C0 @ 0045F8E1 -> killed
   on every CFG path | 0045F980 @ 0045FB19 -> killed on every CFG path | 00462180 @ 004624FE ->
   killed on every CFG path | 0057D5F0 @ 0057D69A -> read as EAX on every CFG path | 0058F1E0 @
   0058F37E -> read as EAX on every CFG path */

int __thiscall st::fn_00417740(void *this,short param_1,short param_2)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;

  uVar1 = STField<ushort>(this,0x86);
  iVar5 = (int)param_1;
  if (((int)(param_1 / (short)uVar1) * (short)uVar1 - iVar5 != 0) ||
     (iVar4 = (int)param_2, (int)(param_2 / (short)uVar1) * (short)uVar1 - iVar4 != 0)) {
    return -1;
  }
  STField<short>(this,0x82) = param_1;
  STField<short>(this,0x84) = param_2;
  uVar2 = (short)uVar1 >> 0xf;
  if (param_2 < param_1) {
    if (0xb3 < iVar5 - iVar4) {
      sVar3 = (uVar1 ^ uVar2) - uVar2;
      goto cf_common_exit_004177BE;
    }
  }
  else if (iVar4 - iVar5 < 0xb4) {
    sVar3 = (uVar1 ^ uVar2) - uVar2;
    goto cf_common_exit_004177BE;
  }
  sVar3 = -((uVar1 ^ uVar2) - uVar2);
cf_common_exit_004177BE:
  STField<short>(this,0x86) = sVar3;
  STField<undefined4>(this,0x88) = 1;
  STField<undefined4>(this,0xe8) = 1;
  STField<undefined4>(this,0xf0) = 0;
  return 0;
}

// 00417830 FUN_00417830
#line 4 "decomp/ST.exe/functions/00417830/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=004189D0 @ 004189E2 -> killed on
   every CFG path | 0045F980 @ 0045F994 -> killed on every CFG path | 00462180 @ 004627CF -> read as
   EAX on every CFG path | 0057CD70 @ 0057CF15 -> read as EAX on every CFG path | 0058E570 @
   0058EC48 -> read as EAX on every CFG path */

int __fastcall st::fn_00417830(RecoveredRecordView_00417830_39C1D071 *param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  uint uVar4;

  if (param_1->field_00EC == 1) {
    param_1->field_00EC = 0;
  }
  if (param_1->field_0088 == 1) {
    param_1->field_0088 = 0;
    param_1->field_00EC = 1;
  }
  if (param_1->field_00F0 == 1) {
    param_1->field_00F0 = 0;
    param_1->field_00E8 = 0;
    return 0;
  }
  if (param_1->field_006C == param_1->field_0084) {
    param_1->field_00EC = 0;
    param_1->field_00F0 = 1;
    return 2;
  }
  sVar2 = param_1->field_0086;
  sVar1 = sVar2 + param_1->field_006C;
  uVar4 = (int)sVar2 >> 0x1f;
  param_1->field_006C = sVar1;
  iVar3 = ((int)sVar2 ^ uVar4) - uVar4;
  if (0x168 - iVar3 < (int)sVar1) {
    param_1->field_006C = 0;
  }
  if ((short)param_1->field_006C < 0) {
    param_1->field_006C = 0x168 - (short)iVar3;
  }
  return 2;
}

// 00417A00 FUN_00417a00
#line 4 "decomp/ST.exe/functions/00417A00/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004D11D0 -> 00417A00 @ 004D12CE; literal 0 at 004D12CA | 0057BF60 -> 00417A00 @
   0057C144; literal 1 at 0057C140 | 00583270 -> 00417A00 @ 00583552; literal 1 at 00583530 |
   0058D7C0 -> 00417A00 @ 0058DA1D; literal 1 at 0058DA0D */

void __thiscall st::fn_00417A00(void *this,byte param_1)

{
  STField<byte>(this,0x8e) = param_1;
  return;
}

// 00417A20 FUN_00417a20
#line 4 "decomp/ST.exe/functions/00417A20/decomp.c"
undefined4 __thiscall st::fn_00417A20(void *this,short param_1,short param_2,short param_3,int param_4)

{
  uint uVar1;
  int iVar2;

  if (STField<int>(this,0x2c) == 0) {
    if (param_4 == 1) {

      st::fn_00404EC1(STField<short>(this,0x5b),STField<short>(this,0x5d),
                         STField<short>(this,0x5f),STField<byte>(this,0x8e),static_cast<RecoveredRecordView_00495FF0_A2A90B23 *>(this));
    }
    STField<short>(this,0x47) = param_1;
    STField<short>(this,0x4b) = param_3;
    STField<short>(this,0x41) = param_1 * 0xc9 + 100;
    STField<short>(this,0x49) = param_2;
    STField<short>(this,0x43) = param_2 * 0xc9 + 100;
    STField<short>(this,0x45) = param_3 * 200 + 100;
    if (param_4 == 1) {
      /* ST_CALLSITE[00417AC1]: CALL 0x00401325; direct=00401325 DumpClassC::WritePtr */
      uVar1 = st::fn_00401325(param_1,param_2,param_3,STField<byte>(this,0x8e),static_cast<RecoveredRecord_DumpClassC_00495EC0 *>(this));
      return uVar1;
    }
  }
  else {
    if (param_4 == 1) {

      st::fn_00404EC1(STField<short>(this,0x5b),STField<short>(this,0x5d),
                         STField<short>(this,0x5f),STField<byte>(this,0x8e),static_cast<RecoveredRecordView_00495FF0_A2A90B23 *>(this));

      st::fn_00404EC1(STField<short>(this,0x5b) + 1,STField<short>(this,0x5d),
                         STField<short>(this,0x5f),STField<byte>(this,0x8e),static_cast<RecoveredRecordView_00495FF0_A2A90B23 *>(this));

      st::fn_00404EC1(STField<short>(this,0x5b),STField<short>(this,0x5d) + 1,
                         STField<short>(this,0x5f),STField<byte>(this,0x8e),static_cast<RecoveredRecordView_00495FF0_A2A90B23 *>(this));

      st::fn_00404EC1(STField<short>(this,0x5b) + 1,STField<short>(this,0x5d) + 1,
                         STField<short>(this,0x5f),STField<byte>(this,0x8e),static_cast<RecoveredRecordView_00495FF0_A2A90B23 *>(this));
    }
    STField<short>(this,0x47) = param_1;
    STField<short>(this,0x4b) = param_3;
    STField<short>(this,0x41) = param_1 * 0xc9 + 100;
    STField<short>(this,0x49) = param_2;
    STField<short>(this,0x43) = param_2 * 0xc9 + 100;
    STField<short>(this,0x45) = param_3 * 200 + 100;
    if (param_4 == 1) {
      /* ST_CALLSITE[00417BD6]: CALL 0x00401325; direct=00401325 DumpClassC::WritePtr */
      iVar2 = st::fn_00401325(param_1,param_2,param_3,STField<byte>(this,0x8e),static_cast<RecoveredRecord_DumpClassC_00495EC0 *>(this));
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      /* ST_CALLSITE[00417C0C]: CALL 0x00401325; direct=00401325 DumpClassC::WritePtr */
      iVar2 = st::fn_00401325
                        (STField<short>(this,0x47) + 1,STField<short>(this,0x49),
                         STField<short>(this,0x4b),STField<byte>(this,0x8e),static_cast<RecoveredRecord_DumpClassC_00495EC0 *>(this));
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      /* ST_CALLSITE[00417C42]: CALL 0x00401325; direct=00401325 DumpClassC::WritePtr */
      iVar2 = st::fn_00401325
                        (STField<short>(this,0x47),STField<short>(this,0x49) + 1,
                         STField<short>(this,0x4b),STField<byte>(this,0x8e),static_cast<RecoveredRecord_DumpClassC_00495EC0 *>(this));
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      /* ST_CALLSITE[00417C7A]: CALL 0x00401325; direct=00401325 DumpClassC::WritePtr */
      uVar1 = st::fn_00401325
                        (STField<short>(this,0x47) + 1,STField<short>(this,0x49) + 1,
                         STField<short>(this,0x4b),STField<byte>(this,0x8e),static_cast<RecoveredRecord_DumpClassC_00495EC0 *>(this));
      return uVar1;
    }
  }
  return 0;
}

// 00417E70 FUN_00417e70
#line 4 "decomp/ST.exe/functions/00417E70/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=0044EE30 @ 0044F271 -> killed on
   every CFG path | 0044EE30 @ 0044F5EC -> killed on every CFG path | 004C6B50 @ 004C6B63 -> killed
   on every CFG path | 0057BF60 @ 0057C1D8 -> read as EAX on every CFG path | 00583270 @ 005835A6 ->
   read as EAX on every CFG path | 0058D7C0 @ 0058DA57 -> read as EAX on every CFG path | 005EC9F0 @
   005ECB24 -> killed on every CFG path | 005F6AF0 @ 005F6B8B -> killed on every CFG path */

int __thiscall st::fn_00417E70(void *this,short param_1)

{
  short sVar1;

  sVar1 = (short)(0x168 / (longlong)(int)param_1);
  if ((int)sVar1 * (int)param_1 != 0x168) {
    return -1;
  }
  STField<short>(this,0x8c) = param_1;
  STField<short>(this,0x86) = sVar1;
  return 0;
}

// 00417EE0 FUN_00417ee0
#line 4 "decomp/ST.exe/functions/00417EE0/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (4), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=0044EE30 @ 0044F2A8 -> killed on
   every CFG path | 0044EE30 @ 0044F5F5 -> killed on every CFG path | 0057BF60 @ 0057C1EF -> read as
   EAX on every CFG path | 00583270 @ 005835E1 -> read as EAX on every CFG path | 0058D7C0 @
   0058DB48 -> read as EAX on every CFG path | 0058D7C0 @ 0058DC3D -> read as EAX on every CFG path
    */

int __thiscall st::fn_00417EE0(void *this,short param_1)

{
  if ((int)(param_1 / STField<short>(this,0x86)) * (int)STField<short>(this,0x86) -
      (int)param_1 != 0) {
    return -1;
  }
  STField<short>(this,0x6c) = param_1;
  return 0;
}

// 00417F30 FUN_00417f30
#line 4 "decomp/ST.exe/functions/00417F30/decomp.c"
bool __thiscall st::fn_00417F30(void *this,short param_1,short param_2,short param_3)

{
  if (STGridAt3D(g_pathingGrid, param_1, param_2, param_3) < 0) {
    return false;
  }
  return STGridAt3D(g_worldGrid, param_1, param_2, param_3).objects
         [STField<byte>(this,0x8e)] == nullptr;
}

// 00417FF0 FUN_00417ff0
#line 4 "decomp/ST.exe/functions/00417FF0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=13, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00583E30 -> 00417FF0 @ 00583F9C; literal 6 at 00583F98 | 0058E570 -> 00417FF0 @
   0058E6D9; literal 10 at 0058E6D5 | 0058E570 -> 00417FF0 @ 0058EA1E; literal 8 at 0058EA18 */

void __thiscall st::fn_00417FF0(void *this,byte param_1)

{
  STField<byte>(this,0x61) = param_1;
  return;
}

// 00418010 FUN_00418010
#line 4 "decomp/ST.exe/functions/00418010/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00583E30 -> 00418010 @ 00583FA5; literal 5 at 00583FA1 | 0058E570 -> 00418010 @
   0058E6E2; literal 8 at 0058E6DE | 0058E570 -> 00418010 @ 0058EA27; literal 6 at 0058EA23 |
   0058F030 -> 00418010 @ 0058F0D7; literal 6 at 0058F0D3 | 0058F030 -> 00418010 @ 0058F12B; literal
   6 at 0058F127

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=11, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_00418010(void *this,byte param_1)

{
  STField<byte>(this,0x62) = param_1;
  return;
}

// 00418990 FUN_00418990
#line 4 "decomp/ST.exe/functions/00418990/decomp.c"
undefined4 st::fn_00418990(void)

{
  return 0;
}

// 004189B0 FUN_004189b0
#line 4 "decomp/ST.exe/functions/004189B0/decomp.c"
undefined4 st::fn_004189B0(void)

{
  return 0;
}

// 00418CE0 FUN_00418ce0
#line 4 "decomp/ST.exe/functions/00418CE0/decomp.c"
undefined4 st::fn_00418CE0(void)

{
  return 0;
}

// 00418D00 FUN_00418d00
#line 1 "decomp/ST.exe/functions/00418D00/decomp.c"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void st::fn_00418D00(void)

{
  return;
}

// 00418D20 FUN_00418d20
#line 4 "decomp/ST.exe/functions/00418D20/decomp.c"
uint st::fn_00418D20(short param_1,short param_2,short param_3,short param_4,short param_5,
                 short param_6)

{
  int _param_4 = static_cast<int>(param_4);

  STWorldObject *pSVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  short sVar7;
  int iVar8;

  sVar7 = param_5 - param_2;
  sVar5 = param_6 - param_3;
  if ((short)(param_4 - param_1) == 1) {
    if (sVar7 != 1) {
      if (param_5 != param_2) {
        if (sVar7 != -1) {
          return 0xffffffff;
        }
        if (sVar5 != 1) {
          if (param_6 == param_3) {
            if (STGridAt3D(g_worldGrid, param_1, param_2 + -1, param_3).objects[0] == nullptr) {
              return (uint)(g_worldGrid.cells
                            [(int)param_2 * (int)g_worldGrid.sizeX + (int)param_1 +
                             (int)g_worldGrid.planeStride * (int)param_3 + 1].objects[0] !=
                           nullptr);
            }
            return 1;
          }
          if (sVar5 != -1) {
            return 0xffffffff;
          }
          iVar4 = (param_2 + -1) * (int)g_worldGrid.sizeX;
          iVar6 = (int)param_3 * (int)g_worldGrid.planeStride;
          iVar3 = (int)param_1;
          iVar2 = iVar3 + iVar6 + iVar4;
          if (g_worldGrid.cells[iVar2].objects[0] != nullptr) {
            return 1;
          }
          iVar8 = (int)param_2 * (int)g_worldGrid.sizeX;
          if (g_worldGrid.cells[iVar6 + iVar3 + iVar8 + 1].objects[0] != nullptr) {
            return 1;
          }
          if (g_worldGrid.cells[iVar2 + 1].objects[0] != nullptr) {
            return 1;
          }
          iVar2 = (param_3 + -1) * (int)g_worldGrid.planeStride;
          if (g_worldGrid.cells[iVar4 + iVar3 + iVar2].objects[0] != nullptr) {
            return 1;
          }
          iVar2 = iVar2 + iVar3 + iVar8;
          if (g_worldGrid.cells[iVar2 + 1].objects[0] != nullptr) {
            return 1;
          }
          goto LAB_004192c9;
        }
        iVar4 = (param_2 + -1) * (int)g_worldGrid.sizeX;
        iVar6 = (int)param_3 * (int)g_worldGrid.planeStride;
        iVar3 = (int)param_1;
        iVar2 = iVar3 + iVar6 + iVar4;
        if (g_worldGrid.cells[iVar2].objects[0] != nullptr) {
          return 1;
        }
        iVar8 = (int)param_2 * (int)g_worldGrid.sizeX;
        if (g_worldGrid.cells[iVar6 + iVar3 + iVar8 + 1].objects[0] != nullptr) {
          return 1;
        }
        if (g_worldGrid.cells[iVar2 + 1].objects[0] != nullptr) {
          return 1;
        }
        iVar2 = (param_3 + 1) * (int)g_worldGrid.planeStride;
        if (g_worldGrid.cells[iVar4 + iVar3 + iVar2].objects[0] != nullptr) {
          return 1;
        }
        iVar2 = iVar2 + iVar3 + iVar8;
        if (g_worldGrid.cells[iVar2 + 1].objects[0] != nullptr) {
          return 1;
        }
        goto LAB_00419240;
      }
      if (sVar5 != 1) {
        if (param_6 == param_3) {
          return 0;
        }
        if (sVar5 != -1) {
          return 0xffffffff;
        }
        iVar2 = (int)g_worldGrid.sizeX * (int)param_2;
        if (g_worldGrid.cells
            [(int)param_3 * (int)g_worldGrid.planeStride + (int)param_1 + iVar2 + 1].objects[0] !=
            nullptr) {
          return 1;
        }
LAB_00418fbd:
        iVar3 = param_3 + -1;
        goto LAB_00418fbe;
      }
      iVar2 = (int)g_worldGrid.sizeX * (int)param_2;
      pSVar1 = g_worldGrid.cells
               [(int)param_3 * (int)g_worldGrid.planeStride + (int)param_1 + iVar2 + 1].objects[0];
LAB_00418f58:
      if (pSVar1 != nullptr) {
        return 1;
      }
      iVar3 = param_3 + 1;
LAB_00418fbe:
      return (uint)(g_worldGrid.cells[iVar3 * g_worldGrid.planeStride + (int)param_1 + iVar2].
                    objects[0] != nullptr);
    }
    if (sVar5 == 1) {
      iVar3 = (int)param_3 * (int)g_worldGrid.planeStride;
      iVar6 = (int)param_2 * (int)g_worldGrid.sizeX;
      iVar2 = (int)param_1;
      if (g_worldGrid.cells[iVar2 + iVar3 + iVar6 + 1].objects[0] != nullptr) {
        return 1;
      }
      iVar4 = (param_2 + 1) * (int)g_worldGrid.sizeX;
      iVar3 = iVar3 + iVar4 + iVar2;
      if (g_worldGrid.cells[iVar3].objects[0] != nullptr) {
        return 1;
      }
      if (g_worldGrid.cells[iVar3 + 1].objects[0] != nullptr) {
        return 1;
      }
      iVar3 = (param_3 + 1) * (int)g_worldGrid.planeStride;
      iVar2 = iVar6 + iVar2 + iVar3;
      if (g_worldGrid.cells[iVar2 + 1].objects[0] != nullptr) {
        return 1;
      }
LAB_00418ef4:
      if (g_worldGrid.cells[iVar4 + param_1 + iVar3].objects[0] == nullptr) {
        return (uint)(g_worldGrid.cells[iVar2].objects[0] != nullptr);
      }
      return 1;
    }
    if (param_6 != param_3) {
      if (sVar5 != -1) {
        return 0xffffffff;
      }
      iVar3 = (int)param_3 * (int)g_worldGrid.planeStride;
      iVar6 = (int)param_2 * (int)g_worldGrid.sizeX;
      iVar2 = (int)param_1;
      if (g_worldGrid.cells[iVar2 + iVar3 + iVar6 + 1].objects[0] != nullptr) {
        return 1;
      }
      iVar4 = (param_2 + 1) * (int)g_worldGrid.sizeX;
      iVar3 = iVar3 + iVar4 + iVar2;
      if (g_worldGrid.cells[iVar3].objects[0] != nullptr) {
        return 1;
      }
      if (g_worldGrid.cells[iVar3 + 1].objects[0] != nullptr) {
        return 1;
      }
      iVar3 = (param_3 + -1) * (int)g_worldGrid.planeStride;
      iVar2 = iVar6 + iVar2 + iVar3;
      if (g_worldGrid.cells[iVar2 + 1].objects[0] != nullptr) {
        return 1;
      }
      goto LAB_00418ef4;
    }
    iVar2 = (int)g_worldGrid.planeStride * (int)param_3;
    if (g_worldGrid.cells[(int)param_2 * (int)g_worldGrid.sizeX + (int)param_1 + iVar2 + 1].objects
        [0] != nullptr) {
      return 1;
    }
LAB_00418e38:
    iVar3 = param_2 + 1;
LAB_00418e39:
    return (uint)(g_worldGrid.cells[iVar3 * g_worldGrid.sizeX + (int)param_1 + iVar2].objects[0] !=
                 nullptr);
  }
  if (param_4 != param_1) {
    if ((short)(param_4 - param_1) != -1) {
      return 0xffffffff;
    }
    if (sVar7 == 1) {
      if (sVar5 != 1) {
        if (param_6 != param_3) {
          if (sVar5 != -1) {
            return 0xffffffff;
          }
          iVar3 = (int)param_3 * (int)g_worldGrid.planeStride;
          iVar6 = (int)param_2 * (int)g_worldGrid.sizeX;
          iVar2 = (int)param_1;
          if (g_worldGrid.cells[iVar2 + iVar3 + iVar6 + -1].objects[0] != nullptr) {
            return 1;
          }
          iVar4 = (param_2 + 1) * (int)g_worldGrid.sizeX;
          iVar3 = iVar4 + iVar2 + iVar3;
          if (g_worldGrid.cells[iVar3].objects[0] != nullptr) {
            return 1;
          }
          if (g_worldGrid.cells[iVar3 + -1].objects[0] == nullptr) {
            iVar3 = (param_3 + -1) * (int)g_worldGrid.planeStride;
            iVar6 = iVar6 + iVar2 + iVar3;
            if (g_worldGrid.cells[iVar6 + -1].objects[0] != nullptr) {
              return 1;
            }
            if (g_worldGrid.cells[iVar4 + iVar2 + iVar3].objects[0] == nullptr) {
              return (uint)(g_worldGrid.cells[iVar6].objects[0] != nullptr);
            }
            return 1;
          }
          return 1;
        }
        iVar2 = (int)g_worldGrid.planeStride * (int)param_3;
        if (g_worldGrid.cells[(int)param_2 * (int)g_worldGrid.sizeX + (int)param_1 + iVar2 + -1].
            objects[0] != nullptr) {
          return 1;
        }
        goto LAB_00418e38;
      }
      iVar3 = (int)param_3 * (int)g_worldGrid.planeStride;
      iVar6 = (int)param_2 * (int)g_worldGrid.sizeX;
      iVar2 = (int)param_1;
      if (g_worldGrid.cells[iVar2 + iVar3 + iVar6 + -1].objects[0] != nullptr) {
        return 1;
      }
      iVar4 = (param_2 + 1) * (int)g_worldGrid.sizeX;
      iVar3 = iVar4 + iVar2 + iVar3;
      if (g_worldGrid.cells[iVar3].objects[0] != nullptr) {
        return 1;
      }
      if (g_worldGrid.cells[iVar3 + -1].objects[0] != nullptr) {
        return 1;
      }
      iVar3 = (param_3 + 1) * (int)g_worldGrid.planeStride;
      iVar6 = iVar6 + iVar2 + iVar3;
      if (g_worldGrid.cells[iVar6 + -1].objects[0] != nullptr) {
        return 1;
      }
      pSVar1 = g_worldGrid.cells[iVar4 + iVar2 + iVar3].objects[0];
    }
    else {
      if (param_5 == param_2) {
        if (sVar5 != 1) {
          if (param_6 == param_3) {
            return 0;
          }
          if (sVar5 != -1) {
            return 0xffffffff;
          }
          iVar2 = (int)g_worldGrid.sizeX * (int)param_2;
          if (g_worldGrid.cells
              [(int)param_3 * (int)g_worldGrid.planeStride + (int)param_1 + iVar2 + -1].objects[0]
              != nullptr) {
            return 1;
          }
          goto LAB_00418fbd;
        }
        iVar2 = (int)g_worldGrid.sizeX * (int)param_2;
        pSVar1 = g_worldGrid.cells
                 [(int)param_3 * (int)g_worldGrid.planeStride + (int)param_1 + iVar2 + -1].objects
                 [0];
        goto LAB_00418f58;
      }
      if (sVar7 != -1) {
        return 0xffffffff;
      }
      if (sVar5 == 1) {
        iVar3 = (int)param_3 * (int)g_worldGrid.planeStride;
        iVar6 = (int)param_2 * (int)g_worldGrid.sizeX;
        iVar2 = (int)param_1;
        if (g_worldGrid.cells[iVar2 + iVar3 + iVar6 + -1].objects[0] != nullptr) {
          return 1;
        }
        iVar4 = (param_2 + -1) * (int)g_worldGrid.sizeX;
        iVar3 = iVar3 + iVar2 + iVar4;
        if (g_worldGrid.cells[iVar3].objects[0] != nullptr) {
          return 1;
        }
        if (g_worldGrid.cells[iVar3 + -1].objects[0] != nullptr) {
          return 1;
        }
        iVar3 = (param_3 + 1) * (int)g_worldGrid.planeStride;
        iVar6 = iVar6 + iVar2 + iVar3;
        if (g_worldGrid.cells[iVar6 + -1].objects[0] != nullptr) {
          return 1;
        }
        if (g_worldGrid.cells[iVar2 + iVar4 + iVar3].objects[0] != nullptr) {
          return 1;
        }
        goto LAB_00419446;
      }
      if (param_6 == param_3) {
        iVar2 = (int)g_worldGrid.planeStride * (int)param_3;
        if (g_worldGrid.cells[(int)param_2 * (int)g_worldGrid.sizeX + (int)param_1 + iVar2 + -1].
            objects[0] != nullptr) {
          return 1;
        }
        iVar3 = param_2 + -1;
        goto LAB_00418e39;
      }
      if (sVar5 != -1) {
        return 0xffffffff;
      }
      iVar3 = (int)param_3 * (int)g_worldGrid.planeStride;
      iVar6 = (int)param_2 * (int)g_worldGrid.sizeX;
      iVar2 = (int)param_1;
      if (g_worldGrid.cells[iVar2 + iVar3 + iVar6 + -1].objects[0] != nullptr) {
        return 1;
      }
      iVar4 = (param_2 + -1) * (int)g_worldGrid.sizeX;
      iVar3 = iVar3 + iVar2 + iVar4;
      if (g_worldGrid.cells[iVar3].objects[0] != nullptr) {
        return 1;
      }
      if (g_worldGrid.cells[iVar3 + -1].objects[0] != nullptr) {
        return 1;
      }
      iVar3 = (param_3 + -1) * (int)g_worldGrid.planeStride;
      iVar6 = iVar6 + iVar2 + iVar3;
      if (g_worldGrid.cells[iVar6 + -1].objects[0] != nullptr) {
        return 1;
      }
      pSVar1 = g_worldGrid.cells[iVar2 + iVar4 + iVar3].objects[0];
    }
    if (pSVar1 != nullptr) {
      return 1;
    }
LAB_00419446:
    return (uint)(g_worldGrid.cells[iVar6].objects[0] != nullptr);
  }
  if (sVar7 == 1) {
    if (sVar5 != 1) {
      if (param_6 == param_3) {
        return 0;
      }
      if (sVar5 != -1) {
        return 0xffffffff;
      }
      iVar2 = (param_2 + 1) * (int)g_worldGrid.sizeX;
      iVar3 = (int)param_3 * (int)g_worldGrid.planeStride;
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
LAB_00419296:
      _param_4 = (int)param_3;
      if (g_worldGrid.cells[iVar3 + param_1 + iVar2].objects[0] != nullptr) {
        return 1;
      }
      iVar2 = (int)param_2 * (int)g_worldGrid.sizeX +
              (int)param_1 + (_param_4 + -1) * (int)g_worldGrid.planeStride;
LAB_004192c9:
      return (uint)(g_worldGrid.cells[iVar2].objects[0] != nullptr);
    }
    iVar2 = (param_2 + 1) * (int)g_worldGrid.sizeX;
    iVar3 = (int)param_3 * (int)g_worldGrid.planeStride;
  }
  else {
    if (param_5 == param_2) {
      return 0;
    }
    if (sVar7 != -1) {
      return 0xffffffff;
    }
    if (sVar5 != 1) {
      if (param_6 == param_3) {
        return 0;
      }
      if (sVar5 != -1) {
        return 0xffffffff;
      }
      iVar2 = (param_2 + -1) * (int)g_worldGrid.sizeX;
      iVar3 = (int)param_3 * (int)g_worldGrid.planeStride;
      goto LAB_00419296;
    }
    iVar2 = (param_2 + -1) * (int)g_worldGrid.sizeX;
    iVar3 = (int)param_3 * (int)g_worldGrid.planeStride;
  }
  _param_4 = (int)param_3;
  if (g_worldGrid.cells[iVar3 + param_1 + iVar2].objects[0] != nullptr) {
    return 1;
  }
  iVar2 = (int)param_2 * (int)g_worldGrid.sizeX +
          (int)param_1 + (_param_4 + 1) * (int)g_worldGrid.planeStride;
LAB_00419240:
  return (uint)(g_worldGrid.cells[iVar2].objects[0] != nullptr);
}

// 00419A90 FUN_00419a90
#line 4 "decomp/ST.exe/functions/00419A90/decomp.c"
undefined4 __fastcall st::fn_00419A90(STFishC *param_1)

{
  char cVar1;
  STFishC *pSVar2;
  int iVar3;
  short local_a;
  short local_8;
  short local_6;

  if (param_1->field_00E8 == 1) {
    param_1->field_00E8 = 0;
    /* ST_CALLSITE[00419AAC]: CALL 0x00405952; direct=00405952 sub_004167A0 */
    st::fn_00405952(param_1);
    return 1;
  }
  /* ST_CALLSITE[00419AC9]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
  st::fn_004018C5(param_1,&local_6,&local_8,&local_a);
  cVar1 = st::fn_0040286A(reinterpret_cast<RecoveredRecord_00416330_34920DE3 *>(param_1));
  if (cVar1 == '\0') {
    cVar1 = st::fn_00403FD0(reinterpret_cast<RecoveredRecord_00416350_3493D299 *>(param_1));
    if (cVar1 == '\0') {
      if ((((local_6 < 0) || (g_worldGrid.sizeX <= local_6)) || (local_8 < 0)) ||
         (((g_worldGrid.sizeY <= local_8 || (local_a < 0)) || (g_worldGrid.sizeZ <= local_a)))) {
        pSVar2 = nullptr;
      }
      else {
        pSVar2 = reinterpret_cast<STFishC *>(STGridAt3D(g_worldGrid, local_6, local_8, local_a).objects
                 [(byte)param_1->field_008E]);
      }
      if (pSVar2 == param_1) {
        /* ST_CALLSITE[00419B64]: CALL 0x00405952; direct=00405952 sub_004167A0 */
        st::fn_00405952(param_1);
        return 1;
      }
    }
  }

  iVar3 = st::fn_00403A44(reinterpret_cast<STJellyGunC *>(param_1));
  if (iVar3 == -1) {
    return 0xffffffff;
  }
  if (iVar3 == 2) {
    st::fn_00401352(reinterpret_cast<RecoveredRecord_004168B0_1FFF2915 *>(param_1));
  }
  return 0;
}

// 00419BF0 FUN_00419bf0
#line 4 "decomp/ST.exe/functions/00419BF0/decomp.c"
int __fastcall st::fn_00419BF0(int *param_1)

{
  int iVar1;

  /* ST_CALLSITE[00419BF5]: CALL dword ptr [EAX + 0x1c] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar1 = (**(code **)(*param_1 + 0x1c))();
  if ((iVar1 == 0) && (param_1[0x3d] == 1)) {
    /* ST_CALLSITE[00419C09]: CALL dword ptr [EDX + 0x20]; [STIndirectCallsiteApplier] exact slot 0x20; mode=structural-presentation; signature=__thiscall;/void;pointer:/void */
    STStructuralVirtualCall<void>(param_1, 0x20);
    param_1[0x3d] = 0;
    iVar1 = 1;
  }
  return iVar1;
}

// 00419C50 FUN_00419c50
#line 4 "decomp/ST.exe/functions/00419C50/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=00419C53 MOV AX,word ptr
   [EBP + 0x8]

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=6, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_00419C50(void *this,ushort param_1)

{
  STField<ushort>(this,0x32) = param_1;
  return;
}

// 00419DB0 FUN_00419db0
#line 4 "decomp/ST.exe/functions/00419DB0/decomp.c"
undefined2 st::fn_00419DB0(void)

{
  return 0;
}

// 00419DD0 FUN_00419dd0
#line 4 "decomp/ST.exe/functions/00419DD0/decomp.c"
undefined4 st::fn_00419DD0(void)

{
  return 0xffffffff;
}

// 0041AB60 FUN_0041ab60
#line 4 "decomp/ST.exe/functions/0041AB60/decomp.c"
void st::fn_0041AB60(undefined4 *param_1)

{
  int iVar1;

  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  *(undefined2 *)param_1 = 0;
  return;
}

// 0041AB90 FUN_0041ab90
#line 4 "decomp/ST.exe/functions/0041AB90/decomp.c"
void st::fn_0041AB90(undefined4 *param_1)

{
  int iVar1;

  for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}

// 0041ABC0 FUN_0041abc0
#line 4 "decomp/ST.exe/functions/0041ABC0/decomp.c"
void st::fn_0041ABC0(int *param_1)

{
  if (*param_1 != 0) {
    *(undefined4 *)(*param_1 + 0xc) = 0;
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 0xc) = 0;
  }
  return;
}

// 0041ABF0 FUN_0041abf0
#line 4 "decomp/ST.exe/functions/0041ABF0/decomp.c"
void st::fn_0041ABF0(int *param_1)

{
  if (*param_1 != 0) {
    *(undefined4 *)(*param_1 + 0xc) = 0;
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 0xc) = 0;
  }
  if (param_1[2] != 0) {
    *(undefined4 *)(param_1[2] + 0xc) = 0;
  }
  if (param_1[3] != 0) {
    *(undefined4 *)(param_1[3] + 0xc) = 0;
  }
  return;
}

// 0041AC40 FUN_0041ac40
#line 4 "decomp/ST.exe/functions/0041AC40/decomp.c"
void st::fn_0041AC40(int *param_1)

{
  if (*param_1 != 0) {
    *(undefined4 *)(*param_1 + 0xc) = 0;
  }
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 0xc) = 0;
  }
  if (param_1[2] != 0) {
    *(undefined4 *)(param_1[2] + 0xc) = 0;
  }
  if (param_1[3] != 0) {
    *(undefined4 *)(param_1[3] + 0xc) = 0;
  }
  if (param_1[4] != 0) {
    *(undefined4 *)(param_1[4] + 0xc) = 0;
  }
  return;
}

// 0041AC90 FUN_0041ac90
#line 4 "decomp/ST.exe/functions/0041AC90/decomp.c"
void st::fn_0041AC90(undefined4 *param_1)

{
  int iVar1;

  for (iVar1 = 0x4a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  *(undefined1 *)param_1 = 0;
  return;
}

// 0041ACC0 FUN_0041acc0
#line 4 "decomp/ST.exe/functions/0041ACC0/decomp.c"
void st::fn_0041ACC0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

// 0041ACF0 FUN_0041acf0
#line 4 "decomp/ST.exe/functions/0041ACF0/decomp.c"
void st::fn_0041ACF0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  STField<undefined1>(param_1,0x12) = 0;
  return;
}

// 0041AD20 FUN_0041ad20
#line 4 "decomp/ST.exe/functions/0041AD20/decomp.c"
void st::fn_0041AD20(int *param_1)

{
  if (*param_1 != 0) {
    *(undefined4 *)(*param_1 + 0xc) = 0;
  }
  return;
}

// 0041AD50 FUN_0041ad50
#line 4 "decomp/ST.exe/functions/0041AD50/decomp.c"
void st::fn_0041AD50(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

// 0041AD80 FUN_0041ad80
#line 4 "decomp/ST.exe/functions/0041AD80/decomp.c"
void st::fn_0041AD80(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  STField<undefined1>(param_1,10) = 0;
  return;
}

// 0041ADB0 FUN_0041adb0
#line 4 "decomp/ST.exe/functions/0041ADB0/decomp.c"
void st::fn_0041ADB0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  STField<undefined1>(param_1,10) = 0;
  return;
}

// 0041ADE0 FUN_0041ade0
#line 4 "decomp/ST.exe/functions/0041ADE0/decomp.c"
void st::fn_0041ADE0(undefined4 *param_1)

{
  int iVar1;

  for (iVar1 = 0x90; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}

// 0041AE10 FUN_0041ae10
#line 4 "decomp/ST.exe/functions/0041AE10/decomp.c"
void st::fn_0041AE10(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  return;
}

// 0041AE40 FUN_0041ae40
#line 4 "decomp/ST.exe/functions/0041AE40/decomp.c"
void __thiscall st::fn_0041AE40(void *this,undefined4 *param_1)

{

  memset(param_1, 0, 0x18); /* compiler bulk-zero initialization */
  *param_1 = STField<undefined4>(this,0x18);
  ((undefined1 *)param_1)[2] = 0;
  return;
}

// 0041AE80 FUN_0041ae80
#line 4 "decomp/ST.exe/functions/0041AE80/decomp.c"
undefined4 __fastcall st::fn_0041AE80(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return *(undefined4 *)(param_1 + 0x24);
}

// 0041AEA0 FUN_0041aea0
#line 4 "decomp/ST.exe/functions/0041AEA0/decomp.c"
void st::fn_0041AEA0(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}

// 0041AEC0 FUN_0041aec0
#line 1 "decomp/ST.exe/functions/0041AEC0/decomp.c"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void st::fn_0041AEC0(void)

{
  return;
}

// 0041AEE0 FUN_0041aee0
#line 1 "decomp/ST.exe/functions/0041AEE0/decomp.c"

void st::fn_0041AEE0(void)

{
  st::fn_00404C55(CASE_1,0);
  st::fn_00404C55(CASE_2,0);
  return;
}

// 0041AF10 FUN_0041af10
#line 1 "decomp/ST.exe/functions/0041AF10/decomp.c"

void st::fn_0041AF10(void)

{
  st::fn_00404C55(CASE_4,0);
  st::fn_00404C55(CASE_5,0);
  return;
}

// 0041C2C0 FUN_0041c2c0
#line 4 "decomp/ST.exe/functions/0041C2C0/decomp.c"
undefined4 st::fn_0041C2C0(void)

{
  return 1;
}

// 0041C2E0 FUN_0041c2e0
#line 4 "decomp/ST.exe/functions/0041C2E0/decomp.c"
undefined4 st::fn_0041C2E0(void)

{
  return 1;
}

// 0041C300 FUN_0041c300
#line 1 "decomp/ST.exe/functions/0041C300/decomp.c"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void st::fn_0041C300(void)

{
  return;
}

// 0041C320 FUN_0041c320
#line 1 "decomp/ST.exe/functions/0041C320/decomp.c"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void st::fn_0041C320(void)

{
  return;
}

// 0041C340 FUN_0041c340
#line 4 "decomp/ST.exe/functions/0041C340/decomp.c"
undefined4 st::fn_0041C340(void)

{
  return 0;
}

// 0041C360 FUN_0041c360
#line 1 "decomp/ST.exe/functions/0041C360/decomp.c"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void st::fn_0041C360(void)

{
  return;
}

// 0041C380 FUN_0041c380
#line 4 "decomp/ST.exe/functions/0041C380/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0041C380 -> 00568DD0 @ 0041C3BA

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0041C380 -> 00568DD0 @ 0041C3BA */

void __thiscall st::fn_0041C380(void *this,SoundPlayMode mode,int soundId)

{
  SoundPosition local_10;

  local_10.x = (int)STField<short>(this,0x47);
  local_10.y = (int)STField<short>(this,0x49);
  local_10.unknown = STField<int>(this,8);
  /* ST_CALLSITE[0041C3BA]: CALL 0x00404bd8; direct=00404BD8 SoundClassTy::PlaySound */
  st::fn_00404BD8(reinterpret_cast<SoundClassTy *>(&g_sound),mode,nullptr,soundId,&local_10,0);
  return;
}

// 0041C5A0 sub_0041C5A0
#line 4 "decomp/ST.exe/functions/0041C5A0/decomp.c"
void __thiscall st::fn_0041C5A0(void *this)

{
  uint uVar1;
  if ((g_visibleClass_00802A88 != nullptr) &&
     ((STField<byte>(this,0x1d1) & 1) == 0)) {
    /* ST_CALLSITE[0041C5DE]: CALL 0x004018f2; direct=004018F2 VisibleClassTy::sub_00559110 */
    st::fn_004018F2
              (g_visibleClass_00802A88,(int)STField<short>(this,0x5b),
               (undefined *)(int)STField<short>(this,0x5d),(int)STField<short>(this,0x5f),
               STField<uint>(this,0x24),STField<int>(this,0x101),STField<int>(this,0x18),
               0xffffffff);
    if (STField<int>(this,0x20) == 0x14) {
      /* ST_CALLSITE[0041C60F]: CALL 0x00402018; direct=00402018 VisibleClassTy::sub_00559620 */
      st::fn_00402018
                (g_visibleClass_00802A88,(int)STField<short>(this,0x5b),
                 (int)STField<short>(this,0x5d),(char)STField<undefined2>(this,0x5f),
                 STField<undefined *>(this,0x24),STField<int>(this,0x105),
                 STField<int>(this,0x18),0xffffffff);
    }
    /* ST_CALLSITE[0041C618]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
    uVar1 = STStructuralVirtualCall<undefined4>(this, 0x2C);
    switch(uVar1) {
    case 5:
    case 0x11:
    case 0x21:
      /* ST_CALLSITE[0041C661]: CALL dword ptr [EDX + 0x98]; [STIndirectCallsiteApplier] exact slot 0x98; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
      STStructuralVirtualCall<undefined4>(this, 0x98);
      break;
    case 0xb:
    case 0x23:
      /* ST_CALLSITE[0041C656]: CALL 0x00404291; direct=00404291 VisibleClassTy::sub_00559D60 */
      st::fn_00404291
                (g_visibleClass_00802A88,(int)STField<short>(this,0x5b),
                 (int)STField<short>(this,0x5d),(char)STField<undefined2>(this,0x5f),
                 STField<uint>(this,0x24),STField<int>(this,0x10d),STField<uint>(this,0x18)
                );
      return;
    }
  }
  return;
}

// 0041C6E0 FUN_0041c6e0
#line 4 "decomp/ST.exe/functions/0041C6E0/decomp.c"
void __thiscall st::fn_0041C6E0(void *this,undefined *param_1)

{
  /* ST_CALLSITE[0041C6E6]: CALL 0x0040464c; direct=0040464C sub_0041C5A0 */
  st::fn_0040464C(this);
  /* ST_CALLSITE[0041C6F1]: CALL 0x004023a1; direct=004023A1 TLOEmbryoTy::sub_0041C3F0 */
  st::fn_004023A1(static_cast<TLOEmbryoTy *>(this),param_1);
  return;
}

// 0041C710 FUN_0041c710
#line 4 "decomp/ST.exe/functions/0041C710/decomp.c"
/* [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=13,
   ignored=0, unknown=0 */

int __fastcall st::fn_0041C710(RecoveredRecordView_0041C710_A35B7121 *param_1)

{
  byte bVar1;
  VisibleClassTy *pVVar2;
  VisibleClassTy *pVVar3;
  int iVar4;
  int local_c;
  int local_8;

  pVVar2 = g_visibleClass_00802A88;
  if (param_1->field_002C == 0) {
    if (g_visibleClass_00802A88 == nullptr) {
      return 1;
    }
    iVar4 = (int)param_1->field_005F;
    if (DAT_0080874d == -1) {
      return 1;
    }
    if (g_visibleClass_00802A88->field_00F8 == 0) {
      return 1;
    }
    /* ST_CALLSITE[0041C76E]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
    st::fn_00403F53
              (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,(int)param_1->field_005B,
               (int)param_1->field_005D,&local_8,&local_c);
    if (iVar4 < 0) {
      return 1;
    }
    if (4 < iVar4) {
      return 1;
    }
    if (local_8 < 0) {
      return 1;
    }
    if (pVVar2->field_0030 <= local_8) {
      return 1;
    }
    local_c = g_centeredOffsets5[iVar4] + local_c;
    if (local_c < 0) {
      return 1;
    }
    if (pVVar2->field_0034 <= local_c) {
      return 1;
    }
    if (pVVar2->field_004C == nullptr) {
      return 1;
    }
    bVar1 = pVVar2->field_004C[local_8 + local_c * pVVar2->field_0030];
  }
  else {
    if (g_visibleClass_00802A88 == nullptr) {
      return 0;
    }
    iVar4 = (int)param_1->field_005F;
    if ((((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
          /* ST_CALLSITE[0041C815]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
          (st::fn_00403F53
                     (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                      (int)param_1->field_005B,(int)param_1->field_005D,&local_c,&local_8),
          pVVar3 = g_visibleClass_00802A88, iVar4 < 0)) || ((4 < iVar4 || (local_c < 0)))) ||
        (pVVar2->field_0030 <= local_c)) ||
       (((iVar4 = g_centeredOffsets5[iVar4] + local_8, iVar4 < 0 || (pVVar2->field_0034 <= iVar4))
        || ((pVVar2->field_004C == nullptr ||
            (pVVar2->field_004C[local_c + iVar4 * pVVar2->field_0030] != 0)))))) {
      return 1;
    }
    iVar4 = (int)param_1->field_005F;
    if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
        /* ST_CALLSITE[0041C8A2]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
        (st::fn_00403F53
                   (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                    param_1->field_005B + 1,(int)param_1->field_005D,&local_c,&local_8),
        pVVar2 = g_visibleClass_00802A88, iVar4 < 0)) ||
       (((4 < iVar4 || (local_c < 0)) ||
        ((((pVVar3->field_0030 <= local_c ||
           ((iVar4 = g_centeredOffsets5[iVar4] + local_8, iVar4 < 0 || (pVVar3->field_0034 <= iVar4)
            ))) || (pVVar3->field_004C == nullptr)) ||
         (pVVar3->field_004C[local_c + iVar4 * pVVar3->field_0030] != 0)))))) {
      return 1;
    }
    iVar4 = (int)param_1->field_005F;
    if (((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
         /* ST_CALLSITE[0041C92F]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
         (st::fn_00403F53
                    (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                     (int)param_1->field_005B,param_1->field_005D + 1,&local_c,&local_8),
         pVVar3 = g_visibleClass_00802A88, iVar4 < 0)) ||
        (((4 < iVar4 || (local_c < 0)) ||
         ((pVVar2->field_0030 <= local_c ||
          ((iVar4 = g_centeredOffsets5[iVar4] + local_8, iVar4 < 0 || (pVVar2->field_0034 <= iVar4))
          )))))) ||
       ((pVVar2->field_004C == nullptr ||
        (pVVar2->field_004C[local_c + iVar4 * pVVar2->field_0030] != 0)))) {
      return 1;
    }
    iVar4 = (int)param_1->field_005F;
    if (DAT_0080874d == -1) {
      return 1;
    }
    if (g_visibleClass_00802A88->field_00F8 == 0) {
      return 1;
    }
    /* ST_CALLSITE[0041C9BD]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
    st::fn_00403F53
              (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,param_1->field_005B + 1,
               param_1->field_005D + 1,&local_c,&local_8);
    if (iVar4 < 0) {
      return 1;
    }
    if (4 < iVar4) {
      return 1;
    }
    if (local_c < 0) {
      return 1;
    }
    if (pVVar3->field_0030 <= local_c) {
      return 1;
    }
    local_8 = g_centeredOffsets5[iVar4] + local_8;
    if (local_8 < 0) {
      return 1;
    }
    if (pVVar3->field_0034 <= local_8) {
      return 1;
    }
    if (pVVar3->field_004C == nullptr) {
      return 1;
    }
    bVar1 = pVVar3->field_004C[local_c + local_8 * pVVar3->field_0030];
  }
  if (bVar1 == 0) {
    return 0;
  }
  return 1;
}

// 0041CAF0 FUN_0041caf0
#line 4 "decomp/ST.exe/functions/0041CAF0/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (11), none consume AL/AX, and every RET path defines full EAX; sites=00480600 @ 00480689
   -> PUSH PUSH EAX | 004CBAD0 @ 004CBBA4 -> TEST TEST EAX,EAX | 004D5470 @ 004D553E -> TEST TEST
   EAX,EAX | 00579350 @ 00579440 -> CMP CMP EAX,0x1 | 0057CD70 @ 0057CDB8 -> CMP CMP EAX,0x1 |
   005825C0 @ 0058260A -> CMP CMP EAX,0x1 | 00585020 @ 00585116 -> CMP CMP EAX,0x1 | 00586AF0 @
   00586BED -> CMP CMP EAX,0x1 | 0058A9E0 @ 0058AAD6 -> CMP CMP EAX,0x1 | 0058BD90 @ 0058BE98 -> CMP
   CMP EAX,0x1 | 0058E570 @ 0058E5D0 -> CMP CMP EAX,0x1 */

int __fastcall st::fn_0041CAF0(RecoveredRecordView_0041CAF0_18493751 *param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  if (param_1->field_002C == 0) {
    if (g_visibleClass_00802A88 != nullptr) {
      iVar5 = (int)param_1->field_005D;
      iVar4 = (int)param_1->field_005B;
      if ((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) {
        if (((-1 < iVar4) &&
            (((iVar4 < g_visibleClass_00802A88->field_0020 && (-1 < iVar5)) &&
             (iVar5 < g_visibleClass_00802A88->field_0024)))) &&
           (g_visibleClass_00802A88->field_0038 != nullptr)) {
          iVar5 = g_visibleClass_00802A88->field_0020 * iVar5;
          pbVar1 = g_visibleClass_00802A88->field_0038 + (iVar5 + iVar4) * 2;
          if ((pbVar1 != nullptr) && (pbVar1[1] != 0)) {
            if (7 < param_1->field_0024) {
              return 1;
            }
            if (g_visibleClass_00802A88->field_003C[param_1->field_0024 + 6] == nullptr) {
              return 1;
            }
            if (*(char *)((int)g_visibleClass_00802A88->field_003C[param_1->field_0024 + 6] +
                         iVar4 + iVar5) == '\0') {
              return 1;
            }
          }
        }
        return 0;
      }
    }
  }
  else if (g_visibleClass_00802A88 != nullptr) {
    iVar5 = (int)param_1->field_005D;
    iVar4 = (int)param_1->field_005B;
    if ((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) {
      if (((-1 < iVar4) &&
          (((iVar4 < g_visibleClass_00802A88->field_0020 && (-1 < iVar5)) &&
           (iVar5 < g_visibleClass_00802A88->field_0024)))) &&
         (g_visibleClass_00802A88->field_0038 != nullptr)) {
        iVar2 = g_visibleClass_00802A88->field_0020 * iVar5;
        pbVar1 = g_visibleClass_00802A88->field_0038 + (iVar2 + iVar4) * 2;
        if ((pbVar1 != nullptr) && (pbVar1[1] != 0)) {
          if (7 < param_1->field_0024) {
            return 1;
          }
          if (g_visibleClass_00802A88->field_003C[param_1->field_0024 + 6] == nullptr) {
            return 1;
          }
          if (*(char *)((int)g_visibleClass_00802A88->field_003C[param_1->field_0024 + 6] +
                       iVar4 + iVar2) == '\0') {
            return 1;
          }
        }
      }
      iVar2 = iVar4 + 1;
      if (((-1 < iVar2) && (iVar2 < g_visibleClass_00802A88->field_0020)) &&
         ((-1 < iVar5 &&
          ((iVar5 < g_visibleClass_00802A88->field_0024 &&
           (g_visibleClass_00802A88->field_0038 != nullptr)))))) {
        iVar5 = g_visibleClass_00802A88->field_0020 * iVar5;
        pbVar1 = g_visibleClass_00802A88->field_0038 + (iVar5 + iVar2) * 2;
        if ((pbVar1 != nullptr) && (pbVar1[1] != 0)) {
          if (7 < param_1->field_0024) {
            return 1;
          }
          if (g_visibleClass_00802A88->field_003C[param_1->field_0024 + 6] == nullptr) {
            return 1;
          }
          if (*(char *)((int)g_visibleClass_00802A88->field_003C[param_1->field_0024 + 6] +
                       iVar2 + iVar5) == '\0') {
            return 1;
          }
        }
      }
      iVar5 = param_1->field_005D + 1;
      if ((((-1 < iVar4) && (iVar4 < g_visibleClass_00802A88->field_0020)) && (-1 < iVar5)) &&
         ((iVar5 < g_visibleClass_00802A88->field_0024 &&
          (g_visibleClass_00802A88->field_0038 != nullptr)))) {
        iVar3 = g_visibleClass_00802A88->field_0020 * iVar5;
        pbVar1 = g_visibleClass_00802A88->field_0038 + (iVar3 + iVar4) * 2;
        if ((pbVar1 != nullptr) && (pbVar1[1] != 0)) {
          if (7 < param_1->field_0024) {
            return 1;
          }
          if (g_visibleClass_00802A88->field_003C[param_1->field_0024 + 6] == nullptr) {
            return 1;
          }
          if (*(char *)((int)g_visibleClass_00802A88->field_003C[param_1->field_0024 + 6] +
                       iVar4 + iVar3) == '\0') {
            return 1;
          }
        }
      }
      /* ST_CALLSITE[0041CCEE]: CALL 0x004022c5; direct=004022C5 VisibleClassTy::sub_0041CDA0 */
      iVar5 = st::fn_004022C5
                        (g_visibleClass_00802A88,iVar2,iVar5,(int)param_1->field_005F,
                         param_1->field_0024);
      return (uint)(iVar5 != 0);
    }
  }
  return 1;
}

// 0041CE40 FUN_0041ce40
#line 4 "decomp/ST.exe/functions/0041CE40/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_0041CE40(void *this,int param_1)

{
  int iVar1;

  STField<int>(this,0x105) = param_1;
  if (g_visibleClass_00802A88 != nullptr) {
    /* ST_CALLSITE[0041CE73]: CALL 0x00402c2a; direct=00402C2A VisibleClassTy::sub_005594A0 */
    st::fn_00402C2A
              (g_visibleClass_00802A88,(int)STField<short>(this,0x5b),
               (int)STField<short>(this,0x5d),(char)STField<undefined2>(this,0x5f),
               STField<undefined *>(this,0x24),param_1,STField<uint>(this,0x18),0xffffffff);
  }
  /* ST_CALLSITE[0041CE7C]: CALL dword ptr [EAX + 0x8]; [STIndirectCallsiteApplier] exact slot 0x8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
  iVar1 = STStructuralVirtualCall<undefined4>(this, 0x8);
  if ((iVar1 == 1) && (STField<uint>(this,0x24) == (uint)DAT_0080874d)) {
    st::fn_006E6710
              (g_sT3DSMAPContext_00807598,
               (float)(int)STField<short>(this,0x41) * _DAT_007904f8 * _DAT_007904f0,
               (float)(int)STField<short>(this,0x43) * _DAT_007904f8 * _DAT_007904f0,
               (uint)((float)STField<int>(this,0x105) * _DAT_007904f8 + _DAT_007904f4),0x16,
               (STField<uint>(this,0x18) >> 0x10 & 0xff) << 0x10 |
               (uint)STField<ushort>(this,0x18));
  }
  return;
}

// 0041CF50 FUN_0041cf50
#line 4 "decomp/ST.exe/functions/0041CF50/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __fastcall st::fn_0041CF50(RecoveredRecordView_0041CF50_A204ECAD *param_1)

{
  int iVar1;

  if (g_visibleClass_00802A88 != nullptr) {
    /* ST_CALLSITE[0041CF7D]: CALL 0x00402018; direct=00402018 VisibleClassTy::sub_00559620 */
    st::fn_00402018
              (g_visibleClass_00802A88,(int)param_1->field_005B,(int)param_1->field_005D,
               (char)param_1->field_005F,*(undefined **)&param_1->field_0x24,param_1->field_0105,
               *(int *)&param_1->field_0x18,0xffffffff);
  }
  /* ST_CALLSITE[0041CF86]: CALL dword ptr [EAX + 0x8]; [STIndirectCallsiteApplier] exact slot 0x8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
  iVar1 = STStructuralVirtualCall<undefined4>(param_1, 0x8);
  if ((iVar1 == 1) && (*(uint *)&param_1->field_0x24 == (uint)DAT_0080874d)) {
    st::fn_006E6780
              (g_sT3DSMAPContext_00807598,
               (*(uint *)&param_1->field_0x18 >> 0x10 & 0xff) << 0x10 |
               (uint)*(ushort *)&param_1->field_0x18);
  }
  param_1->field_0105 = 0xffffffff;
  return;
}

// 0041CFF0 FUN_0041cff0
#line 4 "decomp/ST.exe/functions/0041CFF0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall st::fn_0041CFF0(void *this,int param_1)

{
  int iVar1;

  STField<int>(this,0x109) = param_1;
  if (g_visibleClass_00802A88 != nullptr) {
    /* ST_CALLSITE[0041D023]: CALL 0x004020e0; direct=004020E0 VisibleClassTy::SetZoneDes */
    st::fn_004020E0
              (g_visibleClass_00802A88,(int)STField<short>(this,0x5b),
               (int)STField<short>(this,0x5d),(char)STField<undefined2>(this,0x5f),
               STField<uint>(this,0x24),param_1,STField<uint>(this,0x18),0xffffffff);
  }
  /* ST_CALLSITE[0041D02C]: CALL dword ptr [EAX + 0x8]; [STIndirectCallsiteApplier] exact slot 0x8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
  iVar1 = STStructuralVirtualCall<undefined4>(this, 0x8);
  if ((iVar1 == 1) && (STField<uint>(this,0x24) == (uint)DAT_0080874d)) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    st::fn_006E6710
              (g_sT3DSMAPContext_00807598,
               (float)(int)STField<short>(this,0x41) * _DAT_007904f8 * _DAT_007904f0,
               (float)(int)STField<short>(this,0x43) * _DAT_007904f8 * _DAT_007904f0,
               (uint)((float)STField<int>(this,0x109) * _DAT_007904f8 + _DAT_007904f4),0x10,
               CONCAT22(CONCAT11(1,(char)((uint)STField<undefined4>(this,0x18) >> 0x10)),
                        STField<undefined2>(this,0x18)));
  }
  return;
}

// 0041D100 FUN_0041d100
#line 4 "decomp/ST.exe/functions/0041D100/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __fastcall st::fn_0041D100(RecoveredRecordView_0041D100_F8DD70B8 *param_1)

{
  int iVar1;

  if (g_visibleClass_00802A88 != nullptr) {
    /* ST_CALLSITE[0041D12B]: CALL 0x00401636; direct=00401636 VisibleClassTy::sub_005599D0 */
    st::fn_00401636
              (g_visibleClass_00802A88,(int)param_1->field_005B,(int)param_1->field_005D,
               (char)param_1->field_005F,*(uint *)&param_1->field_0x24,param_1->field_0109,
               *(int *)&param_1->field_0x18);
  }
  /* ST_CALLSITE[0041D134]: CALL dword ptr [EAX + 0x8]; [STIndirectCallsiteApplier] exact slot 0x8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
  iVar1 = STStructuralVirtualCall<undefined4>(param_1, 0x8);
  if ((iVar1 == 1) && (*(uint *)&param_1->field_0x24 == (uint)DAT_0080874d)) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    st::fn_006E6780
              (g_sT3DSMAPContext_00807598,
               CONCAT22(CONCAT11(1,(char)((uint)*(undefined4 *)&param_1->field_0x18 >> 0x10)),
                        *(undefined2 *)&param_1->field_0x18));
  }
  param_1->field_0109 = 0xffffffff;
  return;
}

// 0041D350 FUN_0041d350
#line 4 "decomp/ST.exe/functions/0041D350/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (5), none consume AL/AX, and every RET path defines full EAX; sites=00480600 @ 004808D4
   -> CMP CMP EAX,0x1 | 004845E0 @ 00484A2E -> DEC DEC EAX | 004845E0 @ 004858A0 -> DEC DEC EAX |
   004945C0 @ 0049477F -> CMP CMP EAX,0x1 | 00494870 @ 00494A30 -> XOR XOR EAX,EAX */

int __thiscall st::fn_0041D350(void *this,uint param_1)

{
  int iVar1;
  int iVar2;

  if (g_visibleClass_00802A88 == nullptr) {
    return 0;
  }
  iVar1 = (int)STField<short>(this,0x5b);
  iVar2 = (int)STField<short>(this,0x5d);
  if ((((-1 < iVar1) && (iVar1 < g_visibleClass_00802A88->field_0020)) && (-1 < iVar2)) &&
     (((iVar2 < g_visibleClass_00802A88->field_0024 && (param_1 < 8)) &&
      (g_visibleClass_00802A88->field_0074[param_1] != nullptr)))) {
    return (uint)(g_visibleClass_00802A88->field_0074[param_1]
                  [iVar1 + g_visibleClass_00802A88->field_0020 * iVar2] != 0);
  }
  return 0;
}

// 0041D3E0 FUN_0041d3e0
#line 4 "decomp/ST.exe/functions/0041D3E0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall st::fn_0041D3E0(void *this,int param_1)

{
  int iVar1;

  STField<int>(this,0x111) = param_1;
  if (g_visibleClass_00802A88 != nullptr) {
    /* ST_CALLSITE[0041D413]: CALL 0x00401cb7; direct=00401CB7 VisibleClassTy::SetZoneTsh */
    st::fn_00401CB7
              (g_visibleClass_00802A88,(int)STField<short>(this,0x5b),
               (int)STField<short>(this,0x5d),(char)STField<undefined2>(this,0x5f),
               STField<uint>(this,0x24),param_1,STField<uint>(this,0x18),0xffffffff);
  }
  /* ST_CALLSITE[0041D41C]: CALL dword ptr [EAX + 0x8]; [STIndirectCallsiteApplier] exact slot 0x8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
  iVar1 = STStructuralVirtualCall<undefined4>(this, 0x8);
  if ((iVar1 == 1) && (STField<uint>(this,0x24) == (uint)DAT_0080874d)) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    st::fn_006E6710
              (g_sT3DSMAPContext_00807598,
               (float)(int)STField<short>(this,0x41) * _DAT_007904f8 * _DAT_007904f0,
               (float)(int)STField<short>(this,0x43) * _DAT_007904f8 * _DAT_007904f0,
               (uint)((float)STField<int>(this,0x109) * _DAT_007904f8 + _DAT_007904f4),0x22,
               CONCAT22(CONCAT11(3,(char)((uint)STField<undefined4>(this,0x18) >> 0x10)),
                        STField<undefined2>(this,0x18)));
  }
  return;
}

// 0041D4F0 FUN_0041d4f0
#line 4 "decomp/ST.exe/functions/0041D4F0/decomp.c"
void __fastcall st::fn_0041D4F0(RecoveredRecordView_0041D4F0_86521311 *param_1)

{
  int iVar1;

  if (g_visibleClass_00802A88 != nullptr) {
    /* ST_CALLSITE[0041D51B]: CALL 0x00404de0; direct=00404DE0 VisibleClassTy::sub_0055A110 */
    st::fn_00404DE0
              (g_visibleClass_00802A88,(int)param_1->field_005B,(int)param_1->field_005D,
               (char)param_1->field_005F,*(uint *)&param_1->field_0x24,param_1->field_0111,
               *(int *)&param_1->field_0x18);
  }
  /* ST_CALLSITE[0041D524]: CALL dword ptr [EAX + 0x8]; [STIndirectCallsiteApplier] exact slot 0x8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
  iVar1 = STStructuralVirtualCall<undefined4>(param_1, 0x8);
  if ((iVar1 == 1) && (*(uint *)&param_1->field_0x24 == (uint)DAT_0080874d)) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    st::fn_006E6780
              (g_sT3DSMAPContext_00807598,
               CONCAT22(CONCAT11(3,(char)((uint)*(undefined4 *)&param_1->field_0x18 >> 0x10)),
                        *(undefined2 *)&param_1->field_0x18));
  }
  param_1->field_0111 = 0xffffffff;
  return;
}

// 0041D5E0 FUN_0041d5e0
#line 1 "decomp/ST.exe/functions/0041D5E0/decomp.c"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void st::fn_0041D5E0(void)

{
  return;
}

// 0041D600 FUN_0041d600
#line 1 "decomp/ST.exe/functions/0041D600/decomp.c"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void st::fn_0041D600(void)

{
  return;
}

// 0041D760 FUN_0041d760
#line 1 "decomp/ST.exe/functions/0041D760/decomp.c"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void st::fn_0041D760(void)

{
  return;
}

// 0041D780 FUN_0041d780
#line 1 "decomp/ST.exe/functions/0041D780/decomp.c"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void st::fn_0041D780(void)

{
  return;
}

// 0041D7A0 FUN_0041d7a0
#line 4 "decomp/ST.exe/functions/0041D7A0/decomp.c"
undefined4 st::fn_0041D7A0(void)

{
  return 1;
}

// 0041D7C0 FUN_0041d7c0
#line 4 "decomp/ST.exe/functions/0041D7C0/decomp.c"
undefined4 st::fn_0041D7C0(void)

{
  return 0;
}

// 0041D7E0 FUN_0041d7e0
#line 4 "decomp/ST.exe/functions/0041D7E0/decomp.c"
undefined4 st::fn_0041D7E0(void)

{
  return 1;
}

// 0041D800 FUN_0041d800
#line 1 "decomp/ST.exe/functions/0041D800/decomp.c"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void st::fn_0041D800(void)

{
  return;
}

// 0041D820 FUN_0041d820
#line 4 "decomp/ST.exe/functions/0041D820/decomp.c"
void __fastcall st::fn_0041D820(RecoveredRecordView_00495FF0_A2A90B23 *param_1)

{

  st::fn_00404EC1(param_1->field_005B,param_1->field_005D,param_1->field_005F,
                     param_1[1].field_0x2a,param_1);
  return;
}

// 0041D860 FUN_0041d860
#line 4 "decomp/ST.exe/functions/0041D860/decomp.c"
void __fastcall st::fn_0041D860(RecoveredRecord_DumpClassC_00495EC0 *param_1)

{
  /* ST_CALLSITE[0041D881]: CALL 0x00401325; direct=00401325 DumpClassC::WritePtr */
  st::fn_00401325
            (param_1->field_005B,param_1->field_005D,param_1->field_005F,param_1[1].field_0x2a,
             param_1);
  return;
}

// 0041D8A0 FUN_0041d8a0
#line 4 "decomp/ST.exe/functions/0041D8A0/decomp.c"
undefined4 st::fn_0041D8A0(void)

{
  return 0;
}

// 0041D8C0 FUN_0041d8c0
#line 4 "decomp/ST.exe/functions/0041D8C0/decomp.c"
undefined4 st::fn_0041D8C0(void)

{
  return 0;
}

// 0041D8E0 FUN_0041d8e0
#line 4 "decomp/ST.exe/functions/0041D8E0/decomp.c"
void __fastcall st::fn_0041D8E0(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0041d8e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*param_1 + 0x2c))();
  return;
}

// 0041D900 FUN_0041d900
#line 4 "decomp/ST.exe/functions/0041D900/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_0041D900(void *this,short param_1,short param_2,short param_3)

{
  if (STField<int>(this,0x2c) == 0) {
    /* ST_CALLSITE[0041D964]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
    st::fn_004045D9
              ((STT3DSprC *)((int)this + 0x1d5),(float)(int)param_1 * _DAT_007904f8 + _DAT_007904f4,
               (float)(int)param_2 * _DAT_007904f8 + _DAT_007904f4,
               (float)(int)param_3 * _DAT_00790504 + _DAT_00790500 + _DAT_007904fc);
    return;
  }
  /* ST_CALLSITE[0041D9BD]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
  st::fn_004045D9
            ((STT3DSprC *)((int)this + 0x1d5),(float)(param_1 + 1) * _DAT_007904f8,
             (float)(param_2 + 1) * _DAT_007904f8,
             (float)(int)param_3 * _DAT_00790504 + _DAT_00790500 + _DAT_007904fc);
  return;
}

// 0041DA10 FUN_0041da10
#line 4 "decomp/ST.exe/functions/0041DA10/decomp.c"
undefined4 __fastcall st::fn_0041DA10(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return *(undefined4 *)(param_1 + 0x219);
}

// 0041DA30 FUN_0041da30
#line 4 "decomp/ST.exe/functions/0041DA30/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall st::fn_0041DA30(RecoveredRecord_STTorpC_0041DA30 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;

  if (param_1->field_002C == 0) {
    if (DAT_0080732c == 1) {
      fVar3 = (float)(int)param_1->field_0045 * _DAT_007904f8 * _DAT_007904f0 + param_1->field_0070
              + _DAT_007904fc;
      fVar2 = (float)(int)param_1->field_0043 * _DAT_007904f8 * _DAT_007904f0;
      fVar1 = (float)(int)param_1->field_0041 * _DAT_007904f8 * _DAT_007904f0;
    }
    else {
      fVar3 = (float)(int)param_1->field_0045 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc;
      fVar2 = (float)(int)param_1->field_0043 * _DAT_007904f8 * _DAT_007904f0;
      fVar1 = (float)(int)param_1->field_0041 * _DAT_007904f8 * _DAT_007904f0;
    }
  }
  else {
    fVar3 = (float)(int)param_1->field_0045 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc;
    fVar2 = (float)(param_1->field_0049 + 1) * _DAT_007904f8;
    fVar1 = (float)(param_1->field_0047 + 1) * _DAT_007904f8;
  }
  /* ST_CALLSITE[0041DB4C]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
  st::fn_004045D9(reinterpret_cast<STT3DSprC *>(&param_1[4].field_0x5),fVar1,fVar2,fVar3);

  st::fn_004033AA(&param_1[4].field_0x5,g_playSystem_00802A38->field_00E4);
  return;
}

// 0041DBC0 FUN_0041dbc0
#line 4 "decomp/ST.exe/functions/0041DBC0/decomp.c"
undefined4 st::fn_0041DBC0(void)

{
  return 0xffffffff;
}

// 0041DBE0 FUN_0041dbe0
#line 4 "decomp/ST.exe/functions/0041DBE0/decomp.c"
undefined4
st::fn_0041DBE0(undefined4 param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4,
            undefined4 *param_5)

{
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  return 0;
}

// 0041DC20 FUN_0041dc20
#line 1 "decomp/ST.exe/functions/0041DC20/decomp.c"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void st::fn_0041DC20(void)

{
  return;
}

// 0041DC40 FUN_0041dc40
#line 4 "decomp/ST.exe/functions/0041DC40/decomp.c"
/* [STAbiConsistencyApplier] stack_parameter_width: parameter=/short Evidence: entry-use
   width=/short; unmasked_dword_reads=0; evidence=0041DC4C MOVSX EBX,word ptr [EBP + 0xc] | 0041DC87
   MOVSX EAX,word ptr [EBP + 0xc]

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0041DCA2 MOV CX,word ptr
   [EBP + 0x10]

   [STReturnSemanticsApplier] machine_eax_return.
   Evidence: every reachable RET has a full-width EAX definition established inside the callee; at
   least two direct callers consume it and no caller-use path is unresolved; machine CFG audit:
   used=60, ignored=0, unknown=0

   [STReturnSemanticsApplier] returned_pointer_parameter.
   Evidence: the complete machine CFG returns incoming pointer parameter param_1 (ordinal=0);
   restore its exact formal pointer type after the obsolete void-pointer normalization */

uint * st::fn_0041DC40(undefined4 *param_1,short param_2,ushort param_3,short param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  short in_stack_0000000a;
  uint local_c;
  iVar4 = (int)param_4;
  uVar1 = st::fn_006AFF50(iVar4);
  uVar2 = st::fn_006AFF5B(iVar4);
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  iVar3 = st::storage_bit_cast<int>(static_cast<uint32_t>(uVar1 * (int)param_2 - uVar2 * (int)in_stack_0000000a)) / DAT_007eda8c;
  uVar1 = st::fn_006AFF5B(iVar4);
  uVar2 = st::fn_006AFF50(iVar4);
  /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
  local_c = CONCAT22((short)(st::storage_bit_cast<int>(static_cast<uint32_t>(uVar2 * (int)in_stack_0000000a + uVar1 * (int)param_2)) /
                            DAT_007eda8c),(short)iVar3);
  *param_1 = local_c;
  *(ushort *)(param_1 + 1) = param_3;
  return param_1;
}

// 0041DD00 FUN_0041dd00
#line 4 "decomp/ST.exe/functions/0041DD00/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall st::fn_0041DD00(void *this,int param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_1 == STField<int>(this,0x21d)) {
    return;
  }
  STField<int>(this,0x21d) = param_1;
  if (param_1 != 1) {
    /* ST_CALLSITE[0041E115]: CALL 0x0040498a; direct=0040498A STT3DSprC::UnLoadSequence */
    st::fn_0040498A((STT3DSprC *)((int)this + 0x1d5),0);
    /* ST_CALLSITE[0041E11E]: CALL 0x0040498a; direct=0040498A STT3DSprC::UnLoadSequence */
    st::fn_0040498A((STT3DSprC *)((int)this + 0x1d5),0xf);
    if (((0 < STField<int>(this,0x105)) && (STField<uint>(this,0x24) == (uint)DAT_0080874d))
       /* ST_CALLSITE[0041E141]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
       && ((iVar3 = STStructuralVirtualCall<undefined4>(this, 0x2C), iVar3 == 0xb ||
           /* ST_CALLSITE[0041E14D]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
           ((iVar3 = STStructuralVirtualCall<undefined4>(this, 0x2C), iVar3 == 0x23 ||
            (STField<int>(this,0x20) != 0x14)))))) {
      st::fn_006E6780
                (STField<ST3DSMAPContext *>(this,0x211),
                 (STField<uint>(this,0x18) >> 0x10 & 0xff) << 0x10 |
                 (uint)STField<ushort>(this,0x18));
    }
    if ((0 < STField<int>(this,0x109)) && (STField<uint>(this,0x24) == (uint)DAT_0080874d)) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      st::fn_006E6780
                (STField<ST3DSMAPContext *>(this,0x211),
                 CONCAT22(CONCAT11(1,(char)((uint)STField<undefined4>(this,0x18) >> 0x10)),
                          STField<undefined2>(this,0x18)));
    }
    if ((0 < STField<int>(this,0x10d)) && (STField<uint>(this,0x24) == (uint)DAT_0080874d)) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      st::fn_006E6780
                (STField<ST3DSMAPContext *>(this,0x211),
                 CONCAT22(CONCAT11(2,(char)((uint)STField<undefined4>(this,0x18) >> 0x10)),
                          STField<undefined2>(this,0x18)));
    }
    if ((0 < STField<int>(this,0x111)) && (STField<uint>(this,0x24) == (uint)DAT_0080874d)) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      st::fn_006E6780
                (STField<ST3DSMAPContext *>(this,0x211),
                 CONCAT22(CONCAT11(3,(char)((uint)STField<undefined4>(this,0x18) >> 0x10)),
                          STField<undefined2>(this,0x18)));
    }
    /* ST_CALLSITE[0041E23C]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
    uVar2 = STStructuralVirtualCall<undefined4>(this, 0x2C);
    switch(uVar2) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 0x3c:
    case 0x53:
      st::fn_006E6780
                (STField<ST3DSMAPContext *>(this,0x211),
                 CONCAT22(CONCAT11(5,(char)((uint)STField<undefined4>(this,0x18) >> 0x10)),
                          STField<undefined2>(this,0x18)));
      return;
    default:
      return;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 0x43:
      st::fn_006E6780
                (STField<ST3DSMAPContext *>(this,0x211),
                 CONCAT22(CONCAT11(4,(char)((uint)STField<undefined4>(this,0x18) >> 0x10)),
                          STField<undefined2>(this,0x18)));
      return;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 0x73:
      st::fn_006E6780
                (STField<ST3DSMAPContext *>(this,0x211),
                 CONCAT22(CONCAT11(6,(char)((uint)STField<undefined4>(this,0x18) >> 0x10)),
                          STField<undefined2>(this,0x18)));
      return;
    }
  }
  /* ST_CALLSITE[0041DD26]: CALL 0x0040381e; direct=0040381E STSprGameObjC::LoadActFrame */
  st::fn_0040381E(static_cast<STSprGameObjC *>(this));
  if (((0 < STField<int>(this,0x105)) && (STField<uint>(this,0x24) == (uint)DAT_0080874d)) &&
     (STField<int>(this,0x20) != 0x14)) {
    st::fn_006E6710
              (STField<ST3DSMAPContext *>(this,0x211),
               (float)(int)STField<short>(this,0x41) * _DAT_007904f8 * _DAT_007904f0,
               (float)(int)STField<short>(this,0x43) * _DAT_007904f8 * _DAT_007904f0,
               (uint)((float)STField<int>(this,0x105) * _DAT_007904f8 + _DAT_007904f4),0x16,
               (STField<uint>(this,0x18) >> 0x10 & 0xff) << 0x10 |
               (uint)STField<ushort>(this,0x18));
  }
  if ((0 < STField<int>(this,0x109)) && (STField<uint>(this,0x24) == (uint)DAT_0080874d)) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    st::fn_006E6710
              (STField<ST3DSMAPContext *>(this,0x211),
               (float)(int)STField<short>(this,0x41) * _DAT_007904f8 * _DAT_007904f0,
               (float)(int)STField<short>(this,0x43) * _DAT_007904f8 * _DAT_007904f0,
               (uint)((float)STField<int>(this,0x109) * _DAT_007904f8 + _DAT_007904f4),0x10,
               CONCAT22(CONCAT11(1,(char)((uint)STField<undefined4>(this,0x18) >> 0x10)),
                        STField<undefined2>(this,0x18)));
  }
  if ((0 < STField<int>(this,0x10d)) && (STField<uint>(this,0x24) == (uint)DAT_0080874d)) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    st::fn_006E6710
              (STField<ST3DSMAPContext *>(this,0x211),
               (float)(int)STField<short>(this,0x41) * _DAT_007904f8 * _DAT_007904f0,
               (float)(int)STField<short>(this,0x43) * _DAT_007904f8 * _DAT_007904f0,
               (uint)((float)STField<int>(this,0x10d) * _DAT_007904f8 + _DAT_007904f4),0x28,
               CONCAT22(CONCAT11(2,(char)((uint)STField<undefined4>(this,0x18) >> 0x10)),
                        STField<undefined2>(this,0x18)));
  }
  if ((0 < STField<int>(this,0x111)) && (STField<uint>(this,0x24) == (uint)DAT_0080874d)) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    st::fn_006E6710
              (STField<ST3DSMAPContext *>(this,0x211),
               (float)(int)STField<short>(this,0x41) * _DAT_007904f8 * _DAT_007904f0,
               (float)(int)STField<short>(this,0x43) * _DAT_007904f8 * _DAT_007904f0,
               (uint)((float)STField<int>(this,0x111) * _DAT_007904f8 + _DAT_007904f4),0x22,
               CONCAT22(CONCAT11(3,(char)((uint)STField<undefined4>(this,0x18) >> 0x10)),
                        STField<undefined2>(this,0x18)));
  }
  /* ST_CALLSITE[0041DF5F]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
  uVar2 = STStructuralVirtualCall<undefined4>(this, 0x2C);
  switch(uVar2) {
  case 0x3c:
  case 0x53:
    iVar3 = st::fn_0040186B(STField<int>(this,0x24),0x42);
    if (((0 < iVar3) || (iVar3 = st::fn_0040186B(STField<int>(this,0x24),0x43), 0 < iVar3)) ||
       (iVar3 = st::fn_0040186B(STField<int>(this,0x24),99), 0 < iVar3)) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar3 = CONCAT22(CONCAT11(5,(char)((uint)STField<undefined4>(this,0x18) >> 0x10)),
                       STField<undefined2>(this,0x18));
      fVar5 = 75.0;
      fVar4 = (float)(int)STField<short>(this,0x43) * _DAT_007904f8 * _DAT_007904f0;
      fVar1 = (float)(int)STField<short>(this,0x41);
      break;
    }
  default:
    return;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  case 0x43:
    iVar3 = CONCAT22(CONCAT11(4,(char)((uint)STField<undefined4>(this,0x18) >> 0x10)),
                     STField<undefined2>(this,0x18));
    fVar5 = (float)(DAT_007950f0 / 0xc9) * _DAT_007904f8 + _DAT_007904f4;
    fVar4 = (float)(int)STField<short>(this,0x43) * _DAT_007904f8 * _DAT_007904f0;
    fVar1 = (float)(int)STField<short>(this,0x41);
    break;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  case 0x73:
    iVar3 = CONCAT22(CONCAT11(6,(char)((uint)STField<undefined4>(this,0x18) >> 0x10)),
                     STField<undefined2>(this,0x18));
    fVar5 = (float)(DAT_007951b0 / 0xc9) * _DAT_007904f8 + _DAT_007904f4;
    fVar4 = (float)(int)STField<short>(this,0x43) * _DAT_007904f8 * _DAT_007904f0;
    fVar1 = (float)(int)STField<short>(this,0x41);
  }
  st::fn_006E6710
            (STField<ST3DSMAPContext *>(this,0x211),fVar1 * _DAT_007904f8 * _DAT_007904f0,fVar4,
             (uint)fVar5,0x2e,iVar3);
  return;
}

// 0041E510 FUN_0041e510
#line 4 "decomp/ST.exe/functions/0041E510/decomp.c"
undefined4 __fastcall st::fn_0041E510(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return *(undefined4 *)(param_1 + 0x21d);
}

// 0041F310 FUN_0041f310
#line 4 "decomp/ST.exe/functions/0041F310/decomp.c"
uint __fastcall st::fn_0041F310(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return ~*(uint *)(param_1 + 0x1d1) >> 1 & 1;
}

// 0041F330 FUN_0041f330
#line 4 "decomp/ST.exe/functions/0041F330/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004BE1D0 -> 0041F330 @ 004BE1D3; TLOBaseTy::sub_004BE1D0 this */

uint __fastcall st::fn_0041F330(TLOBaseTy *param_1)

{
  return ~param_1->field_01D1 >> 4 & 1;
}

// 0041F350 FUN_0041f350
#line 4 "decomp/ST.exe/functions/0041F350/decomp.c"
undefined4 st::fn_0041F350(void)

{
  return 1;
}

// 0041F370 FUN_0041f370
#line 4 "decomp/ST.exe/functions/0041F370/decomp.c"
undefined4 st::fn_0041F370(void)

{
  return 1;
}

// 0041F390 FUN_0041f390
#line 4 "decomp/ST.exe/functions/0041F390/decomp.c"
/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void __fastcall st::fn_0041F390(RecoveredRecord_0041F390_BF8EDA78 *param_1)

{
  param_1->field_0221 = 2;
  return;
}

// 0041F3B0 FUN_0041f3b0
#line 4 "decomp/ST.exe/functions/0041F3B0/decomp.c"
void __fastcall st::fn_0041F3B0(STSprGameObjC *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  STSprGameObjC_field_0259State SVar5;

  iVar2 = param_1->field_0221;
  if (iVar2 == -1) {
    return;
  }
  if (iVar2 == 1) {
    param_1->field_0221 = 0;
    return;
  }
  if (iVar2 == 2) {
    if ((g_playSystem_00802A38->field_00E4 & 1) != 0) {
      return;
    }
    if (param_1->field_0225 == 0) {
      /* ST_CALLSITE[0041F3FC]: CALL 0x004036f7; direct=004036F7 STSprGameObjC::LoadLifeFrame */
      st::fn_004036F7(param_1);
      /* ST_CALLSITE[0041F409]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
      iVar2 = st::fn_004022AC(reinterpret_cast<STT3DSprC *>(&param_1->field_01D5),'\x01');
      param_1->field_0225 = iVar2 + -1;
    }
    /* ST_CALLSITE[0041F419]: CALL dword ptr [EDX + 0x7c] */
    uVar3 = param_1->vfunc_7C();
    if (1 < (int)uVar3) {
      uVar3 = (int)(uVar3 * param_1->field_0225) / 100;
    }
    if (uVar3 == 0) {
      uVar3 = 1;
    }
    puVar1 = &param_1->field_01D5;

    uVar4 = st::fn_004042AF(puVar1,'\x01');
    if (uVar3 != uVar4) {
      /* ST_CALLSITE[0041F45F]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
      st::fn_00401064(reinterpret_cast<STT3DSprC *>(puVar1),'\x01',uVar3);
      /* ST_CALLSITE[0041F468]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
      st::fn_004030BC(reinterpret_cast<STT3DSprC *>(puVar1),'\x01');
    }
    uVar3 = param_1->field_0020;
    if ((((uVar3 == 0x14) || (uVar3 == 1000)) || (uVar3 == 0x172)) || (uVar3 == 0x1a4)) {
      /* ST_CALLSITE[0041F4A1]: CALL dword ptr [EDX + 0x2c] */
      SVar5 = param_1->slot_2C();
    }
    else {
      if (uVar3 != 0x3e9) goto LAB_0041f51a;
      SVar5 = param_1->field_0259;
    }
    /* ST_CALLSITE[0041F4AD]: CALL dword ptr [EAX + 0xc] */
    if (((SVar5 != 0xffffffff) && (iVar2 = param_1->vfunc_0C(), iVar2 == 3)) &&
       ((param_1->field_0020 != 0x172 && (param_1->field_0020 != 0x1a4)))) {
      /* ST_CALLSITE[0041F4CA]: CALL dword ptr [EDX + 0xc4] */
      uVar3 = param_1->vfunc_C4();
      if (1 < (int)uVar3) {
        uVar3 = (int)(uVar3 * param_1->field_0225) / 100;
      }
      if (uVar3 == 0) {
        uVar3 = 1;
      }

      uVar4 = st::fn_004042AF(puVar1,'\x02');
      if (uVar3 != uVar4) {
        /* ST_CALLSITE[0041F50C]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
        st::fn_00401064(reinterpret_cast<STT3DSprC *>(puVar1),'\x02',uVar3);
        /* ST_CALLSITE[0041F515]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
        st::fn_004030BC(reinterpret_cast<STT3DSprC *>(puVar1),'\x02');
      }
    }
LAB_0041f51a:
    param_1->field_0221 = param_1->field_0221 + -1;
    return;
  }
  if (iVar2 != 0) {
    return;
  }
  puVar1 = &param_1->field_01D5;
  /* ST_CALLSITE[0041F53A]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
  st::fn_00401064(reinterpret_cast<STT3DSprC *>(puVar1),'\x01',0);
  /* ST_CALLSITE[0041F543]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
  st::fn_004030BC(reinterpret_cast<STT3DSprC *>(puVar1),'\x01');
  uVar3 = param_1->field_0020;
  if (((uVar3 == 0x14) || (uVar3 == 1000)) || ((uVar3 == 0x172 || (uVar3 == 0x1a4)))) {
    /* ST_CALLSITE[0041F578]: CALL dword ptr [EDX + 0x2c] */
    SVar5 = param_1->slot_2C();
  }
  else {
    if (uVar3 != 0x3e9) goto LAB_0041f5a0;
    SVar5 = param_1->field_0259;
  }
  /* ST_CALLSITE[0041F584]: CALL dword ptr [EAX + 0xc] */
  if ((SVar5 != 0xffffffff) && (iVar2 = param_1->vfunc_0C(), iVar2 == 3)) {
    /* ST_CALLSITE[0041F592]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    st::fn_00401064(reinterpret_cast<STT3DSprC *>(puVar1),'\x02',0);
    /* ST_CALLSITE[0041F59B]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
    st::fn_004030BC(reinterpret_cast<STT3DSprC *>(puVar1),'\x02');
  }
LAB_0041f5a0:
  param_1->field_0221 = param_1->field_0221 + -1;
  return;
}

// 0041F630 FUN_0041f630
#line 4 "decomp/ST.exe/functions/0041F630/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0, unknown=0),
   and decompilation contains no value return */

void __fastcall st::fn_0041F630(RecoveredRecordView_0041F630_FBFD9742 *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  byte local_c;
  byte local_8;
  if (7 < *(uint *)&param_1->field_0x24) {
    return;
  }
  if ((g_playSystem_00802A38 != nullptr) &&
     (7 < g_bulkInitializedRecords_008087C7[*(uint *)&param_1->field_0x24].field_0022)) {
    return;
  }
  if (param_1->field_0229 != 0) {
    return;
  }
  iVar7 = *(int *)&param_1->field_0x20;
  if (((iVar7 != 0x14) && (iVar7 != 1000)) && (iVar7 != 0x3e9)) {
    return;
  }
  bVar1 = param_1->field_0x24;
  if (DAT_00808a8f == '\0') {
    if (bVar1 == DAT_0080874d) {
LAB_0041f738:
      iVar3 = 0;
    }
    else {
      uVar5 = (uint)DAT_0080874d;
      bVar2 = g_playerRelationMatrix[bVar1][uVar5];
      if ((bVar2 == 0) && (g_playerRelationMatrix[uVar5][bVar1] == 0)) {
        iVar3 = -2;
      }
      else if ((bVar2 == 1) && (g_playerRelationMatrix[uVar5][bVar1] == 0)) {
        iVar3 = -1;
      }
      else if ((bVar2 == 0) && (g_playerRelationMatrix[uVar5][bVar1] == 1)) {
        iVar3 = 1;
      }
      else {
        if ((bVar2 != 1) || (g_playerRelationMatrix[uVar5][bVar1] != 1)) goto LAB_0041f738;
        iVar3 = 2;
      }
    }
    bVar6 = iVar3 < 0;
  }
  else {
    bVar6 = g_bulkInitializedRecords_008087C7[DAT_0080874d].field_0023 !=
            g_bulkInitializedRecords_008087C7[bVar1].field_0023;
  }
  if (!bVar6) {
    local_c = 1;
    goto LAB_0041f793;
  }
  if (iVar7 != 0x14) {
    /* ST_CALLSITE[0041F770]: CALL dword ptr [EDX + 0x2c] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar4 = (**(code **)(param_1->field_0000 + 0x2c))();
    switch(uVar4) {
    case 0x3e:
    case 0x3f:
    case 0x42:
    case 0x43:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x4a:
    case 0x4b:
    case 0x4e:
    case 0x51:
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
    case 0x70:
    case 0x71:
    case 0x72:
    case 0x73:
      goto switchD_0041f763_caseD_9;
    default:
switchD_0041f763_caseD_7:
      local_c = 2;
      goto LAB_0041f793;
    }
  }
  /* ST_CALLSITE[0041F750]: CALL dword ptr [EDX + 0x2c] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar4 = (**(code **)(param_1->field_0000 + 0x2c))();
  switch(uVar4) {
  case 7:
  case 8:
  case 0xc:
  case 0x13:
  case 0x14:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1d:
  case 0x24:
  case 0x25:
    goto switchD_0041f763_caseD_7;
  }
switchD_0041f763_caseD_9:
  local_c = 4;
LAB_0041f793:
  if (param_1->field_0211 != 0) {
    /* ST_CALLSITE[0041F7A5]: CALL dword ptr [EDX + 0x6c]; [STIndirectCallsiteApplier] exact slot 0x6C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void */
    uVar4 = STStructuralVirtualCall<undefined4>(param_1, 0x6C);
    switch(uVar4) {
    case 0:
      local_8 = 10;
      break;
    case 1:
      local_8 = 0x10;
      break;
    case 2:
      local_8 = 0x16;
      break;
    case 3:
      local_8 = 0x1c;
      break;
    case 4:
      local_8 = 0x22;
      break;
    case 5:
      local_8 = 0x28;
      break;
    case 6:
      local_8 = 0x2e;
      break;
    case 7:
      local_8 = 0x34;
      break;
    default:
      local_8 = 0xff;
    }

    st::fn_006E6630
              ((void *)param_1->field_0211,param_1->field_01ED,local_c,local_8,0);
    iVar7 = 0;

    iVar4 = st::fn_004052CC(reinterpret_cast<STT3DSprC *>(&param_1->field_0x1d5));
    st::fn_006E6870((void *)param_1->field_0211,iVar4,iVar7);
    param_1->field_0229 = 1;
  }
  return;
}
