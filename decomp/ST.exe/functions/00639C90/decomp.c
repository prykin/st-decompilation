#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00639c90(void *this,STMessage *param_1)

{
  STT3DSprC *pSVar1;
  byte bVar2;
  short sVar3;
  STMessageId SVar4;
  short sVar5;
  ushort uVar6;
  STMessage *pSVar7;
  int local_EAX_15;
  uint local_EAX_450;
  int local_EAX_2002;
  uint uVar10;
  uint local_EAX_3399;
  uint local_EAX_3570;
  int iVar9;
  int iVar8;
  int local_EAX_5501;
  int local_EAX_5979;
  int iVar10;
  uint uVar11;
  VisibleClassTy *pVVar12;
  uint uVar13;
  byte *puVar14;
  byte *puVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int local_1c;
  int local_18;
  undefined4 *local_14;
  int local_10;
  uint local_c;
  AnonPointee_TLOBaseTy_0607 *local_8;

  pSVar7 = param_1;
  /* ST_CALLSITE[00639C9F]: CALL 0x00404f07; direct=00404F07 STSprGameObjC::GetMessage */
  local_EAX_15 = STSprGameObjC::GetMessage(this,param_1);
  if (local_EAX_15 == 0xffff) {
    return 0xffff;
  }
  SVar4 = pSVar7->id;
  if (MESS_SHARED_0003 < SVar4) {
    if (SVar4 == MESS_SHARED_010F) {
      local_8 = (AnonPointee_TLOBaseTy_0607 *)thunk_FUN_0063cff0(this,&local_10);
      /* ST_CALLSITE[0063B7BF]: CALL 0x004018d4; direct=004018D4 STT3DSprC::SaveSpr */
      local_14 = STT3DSprC::SaveSpr((STT3DSprC *)((int)this + 0x1d5),(uint *)&param_1);
      if (param_1 != nullptr) {
        local_8 = Library::DKW::LIB::MemRealloc(local_8,(int)&param_1->unknown_00 + local_10);
        puVar14 = (byte *)(local_14);
        puVar15 = (byte *)((int)&local_8->field_0000 + local_10);
        for (uVar11 = (uint)param_1 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *puVar15 = *puVar14;
          puVar14 = (byte *)(puVar14 + 1);
          puVar15 = (byte *)(puVar15 + 1);
        }
        for (uVar11 = (uint)param_1 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined1 *)puVar15 = *(undefined1 *)puVar14;
          puVar14 = (byte *)((int)puVar14 + 1);
          puVar15 = (byte *)((int)puVar15 + 1);
        }
      }
      /* ST_CALLSITE[0063B811]: CALL 0x004025f9; direct=004025F9 STPlaySystemC::SaveObjData */
      STPlaySystemC::SaveObjData
                (g_playSystem_00802A38,STField<int *>(this,0x18),(byte *)local_8,
                 (int)&param_1->unknown_00 + local_10);
      FreeAndNull(&local_8);
      FreeAndNull(&local_14);
      return 0;
    }
    if (SVar4 != MESS_HITKILL) {
      return 0;
    }
    thunk_FUN_004ad430((STT3DSprC *)((int)this + 0x1d5));
switchD_00639e3d_caseD_d:
    thunk_FUN_0063cc10(this);
    return 0;
  }
  if (SVar4 == MESS_SHARED_0003) {
    thunk_FUN_004ad310((STT3DSprC *)((int)this + 0x1d5));
    if (-1 < (int)STField<uint>(this,0x33a)) {
      Library::Ourlib::ST3DSMAP::SprClose
                (STField<void *>(this,0x211),STField<uint>(this,0x33a));
      STField<undefined4>(this,0x33a) = 0xffffffff;
    }
    if (-1 < (int)STField<uint>(this,0x353)) {
      Library::Ourlib::ST3DSMAP::SprClose
                (STField<void *>(this,0x211),STField<uint>(this,0x353));
      STField<undefined4>(this,0x353) = 0xffffffff;
    }
    thunk_FUN_0063e660(this);
    thunk_FUN_00640130(this);
    return 0;
  }
  if (SVar4 != MESS_ID_NONE) {
    if (SVar4 != MESS_ID_CREATE) {
      return 0;
    }
    puVar14 = (byte *)((pSVar7->arg0).ptr);
    if (puVar14[3] == 2) {
      thunk_FUN_0063d100(this,puVar14);
      memset((void *)((int)this + 899), 0, 0x2d); /* compiler bulk-zero initialization */
      return 0;
    }
    puVar15 = (byte *)((int)this + 0x231);
    memmove(puVar15, puVar14, 0x34); /* compiler REP MOVS byte copy */
    thunk_FUN_0063c030(this,g_playSystem_00802A38->field_00E4);
    if (STField<uint>(this,0x245) < 2) {
      /* ST_CALLSITE[00639D79]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
      iVar10 = STT3DSprC::LoadSequence
                         ((STT3DSprC *)((int)this + 0x1d5),0xd,PTR_00806774,"trmmine",
                          CASE_1D);
      if (iVar10 != 0) {
        return 0xffff;
      }
      thunk_FUN_004abce0((STT3DSprC *)((int)this + 0x1d5),0xd,0x28,0x3b,'\0');
      iVar10 = 0x461;
    }
    else {
      if (STField<uint>(this,0x245) != 2) goto LAB_00639dab;
      /* ST_CALLSITE[00639D35]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
      iVar10 = STT3DSprC::LoadSequence
                         ((STT3DSprC *)((int)this + 0x1d5),0xd,PTR_00806774,"vacmine",
                          CASE_1D);
      if (iVar10 != 0) {
        return 0xffff;
      }
      thunk_FUN_004abce0((STT3DSprC *)((int)this + 0x1d5),0xd,0,9,'\0');
      iVar10 = 0x49a;
    }
    thunk_FUN_0063de20(this,iVar10);
LAB_00639dab:
    /* ST_CALLSITE[00639DC5]: CALL 0x00403107; direct=00403107 sub_00416240 */
    sub_00416240(this,STField<ushort>(this,0x266),STField<short>(this,0x26a),
                 STField<ushort>(this,0x26e));
    thunk_FUN_004ac660((STT3DSprC *)((int)this + 0x1d5),'\r');
    /* ST_CALLSITE[00639DEA]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow((STT3DSprC *)((int)this + 0x1d5),0xd,g_playSystem_00802A38->field_00E4);
    STField<undefined1>(this,0x29f) = 1;
    STField<undefined1>(this,0x265) = 1;
    return 0;
  }
  switch(STField<undefined1>(this,0x265)) {
  case 1:
    local_EAX_450 = thunk_FUN_0063c170(this,g_playSystem_00802A38->field_00E4);
    if (0 < (int)local_EAX_450) {
      if (local_EAX_450 != 2) {
        thunk_FUN_004ad430((STT3DSprC *)((int)this + 0x1d5));
        STField<undefined1>(this,0x29f) = 0;
        STField<uint>(this,0x28e) = g_playSystem_00802A38->field_00E4;
        STField<undefined1>(this,0x265) = 2;
        return 0;
      }
      pSVar1 = (STT3DSprC *)((int)this + 0x1d5);
      /* ST_CALLSITE[00639E80]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
      iVar10 = STT3DSprC::LoadSequence(pSVar1,0xd,PTR_00806774,"exptme",CASE_1D);
      if (iVar10 == 0) {
        /* ST_CALLSITE[00639EA8]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        iVar10 = STT3DSprC::LoadSequence(pSVar1,0xf,PTR_00806764,"expl_s0",CASE_1D);
        if (iVar10 == 0) {
          thunk_FUN_004ac700(pSVar1,'\x0f');
          /* ST_CALLSITE[00639ED9]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
          STT3DSprC::StartShow(pSVar1,0xd,g_playSystem_00802A38->field_00E4);
          STField<undefined1>(this,0x29f) = 1;
          thunk_FUN_0062b990(STField<undefined4>(this,0x266),STField<undefined4>(this,0x26a),
                             STField<undefined4>(this,0x26e),0,(int)this,0,0);
          /* ST_CALLSITE[00639F25]: CALL 0x00403107; direct=00403107 sub_00416240 */
          sub_00416240(this,STField<ushort>(this,0x266),STField<short>(this,0x26a),
                       STField<ushort>(this,0x26e));
          if ((STField<int>(this,0x397) != 0) && (STField<int>(this,0x39f) == 0)) {
            Library::Ourlib::ST3DSMAP::SprSetLevBefore
                      (STField<void *>(this,0x211),STField<uint>(this,0x1ed),
                       *(int *)(STField<int>(this,0x397) + 0x1ed));
          }
          STField<undefined1>(this,0x265) = 8;
          return 0;
        }
        return 0xffff;
      }
      return 0xffff;
    }
    /* ST_CALLSITE[00639FB9]: CALL 0x00403107; direct=00403107 sub_00416240 */
    sub_00416240(this,STField<ushort>(this,0x266),STField<short>(this,0x26a),
                 STField<ushort>(this,0x26e));
    if ((STField<uint>(this,0x245) < 2) || (iVar10 = 0x50, STField<uint>(this,0x245) != 2)) {
      iVar10 = 0x78;
    }
    uVar11 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar11;
    /* ST_CALLSITE[0063A024]: CALL 0x00401433; direct=00401433 TraksClassTy::TraksCreate */
    TraksClassTy::TraksCreate
              (g_traksClass_00802A7C,0,1,uVar11 >> 0x10 & 1,STField<int>(this,0x266),
               STField<int>(this,0x26a),STField<int>(this,0x26e) - iVar10,0,0,0,0,0,0,-1,0,0);
    /* ST_CALLSITE[0063A02D]: CALL dword ptr [EAX + 0xd8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)this + 0xd8))();
    pVVar12 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 == nullptr) {
      return 0;
    }
    iVar10 = STField<int>(this,0x26e);
    sVar3 = (short)(iVar10 >> 0x1f);
    if (iVar10 < 0) {
      local_c = (short)(((short)(iVar10 / 200) + sVar3) -
                       (short)((longlong)iVar10 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      local_c = (uint)(short)(((short)(iVar10 / 200) + sVar3) -
                             (short)((longlong)iVar10 * 0x51eb851f >> 0x3f));
    }
    iVar10 = STField<int>(this,0x26a);
    iVar10 = STBiasedDiv16(iVar10, 0xc9); /* exact signed 16-bit grid-index division */
    iVar9 = STField<int>(this,0x266);
    iVar9 = STBiasedDiv16(iVar9, 0xc9); /* exact signed 16-bit grid-index division */
    if ((((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) &&
        /* ST_CALLSITE[0063A0F9]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
        (VisibleClassTy::sub_00558C00
                   (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar9,iVar10,
                    &local_18,&local_1c), -1 < (int)local_c)) &&
       (((((int)local_c < 5 && (-1 < local_18)) &&
         ((local_18 < pVVar12->field_0030 &&
          ((local_1c = local_1c + g_centeredOffsets5[local_c], -1 < local_1c &&
           (local_1c < pVVar12->field_0034)))))) && (pVVar12->field_004C != nullptr)))) {
      bVar2 = pVVar12->field_004C[local_18 + local_1c * pVVar12->field_0030];
joined_r0x0063a754:
      if (bVar2 == 0) {
        if (STField<char>(this,0x29f) == '\0') {
          return 0;
        }
        thunk_FUN_004ad430((STT3DSprC *)((int)this + 0x1d5));
        STField<undefined1>(this,0x29f) = 0;
        return 0;
      }
    }
    break;
  case 2:
    if (g_playSystem_00802A38->field_00E4 - STField<int>(this,0x28e) < 0x1f) {
      return 0;
    }
    sVar3 = STField<short>(this,0x255);
    STField<short>(this,0x24f) = sVar3;
    STField<undefined2>(this,0x251) = 0x1333;
    iVar9 = (int)sVar3;
    STField<short>(this,0x24d) = STField<short>(this,0x253);
    STField<int>(this,0x266) = (int)STField<short>(this,0x253);
    STField<int>(this,0x26a) = iVar9;
    iVar10 = STField<int>(this,0x266);
    iVar10 = STBiasedDiv16(iVar10, 0xc9); /* exact signed 16-bit grid-index division */
    STField<int>(this,0x286) = iVar10;
    if (iVar9 < 0) {
      iVar10 = (short)((sVar3 / 0xc9 + (sVar3 >> 0xf)) -
                      (short)((longlong)iVar9 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar10 = (short)((sVar3 / 0xc9 + (sVar3 >> 0xf)) -
                           (short)((longlong)iVar9 * 0x28c1979 >> 0x3f));
    }
    STField<int>(this,0x28a) = iVar10;
    if (STField<uint>(this,0x245) < 2) {
      iVar9 = 0;
      iVar10 = 0;
    }
    else {
      if (STField<uint>(this,0x245) != 2) goto LAB_0063a27d;
      iVar9 = 10;
      iVar10 = 10;
    }
    thunk_FUN_004abce0((void *)((int)this + 0x1d5),0xd,iVar10,iVar9,'\0');
LAB_0063a27d:
    STField<undefined1>(this,0x29e) = 4;
    /* ST_CALLSITE[0063A29B]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    STT3DSprC::StartShow((STT3DSprC *)((int)this + 0x1d5),0xd,g_playSystem_00802A38->field_00E4);
    thunk_FUN_004ad460((STT3DSprC *)((int)this + 0x1d5),0);
    STField<undefined1>(this,0x29f) = 1;
    STField<uint>(this,0x28e) = g_playSystem_00802A38->field_00E4;
    /* ST_CALLSITE[0063A2DB]: CALL 0x00403107; direct=00403107 sub_00416240 */
    sub_00416240(this,STField<ushort>(this,0x266),STField<short>(this,0x26a),
                 STField<ushort>(this,0x26e));
    /* ST_CALLSITE[0063A2E4]: CALL dword ptr [EDX + 0xd8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)this + 0xd8))();
    pVVar12 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 != nullptr) {
      iVar10 = STField<int>(this,0x26e);
      sVar3 = (short)(iVar10 >> 0x1f);
      if (iVar10 < 0) {
        local_c = (short)(((short)(iVar10 / 200) + sVar3) -
                         (short)((longlong)iVar10 * 0x51eb851f >> 0x3f)) + -1;
      }
      else {
        local_c = (uint)(short)(((short)(iVar10 / 200) + sVar3) -
                               (short)((longlong)iVar10 * 0x51eb851f >> 0x3f));
      }
      iVar10 = STField<int>(this,0x26a);
      iVar10 = STBiasedDiv16(iVar10, 0xc9); /* exact signed 16-bit grid-index division */
      iVar9 = STField<int>(this,0x266);
      iVar9 = STBiasedDiv16(iVar9, 0xc9); /* exact signed 16-bit grid-index division */
      if (((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
           /* ST_CALLSITE[0063A3B0]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
           (VisibleClassTy::sub_00558C00
                      (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar9,iVar10,
                       &local_1c,&local_18), (int)local_c < 0)) ||
          (((4 < (int)local_c || (local_1c < 0)) ||
           ((pVVar12->field_0030 <= local_1c ||
            ((local_18 = local_18 + g_centeredOffsets5[local_c], local_18 < 0 ||
             (pVVar12->field_0034 <= local_18)))))))) ||
         ((pVVar12->field_004C == nullptr ||
          (pVVar12->field_004C[local_1c + local_18 * pVVar12->field_0030] != 0)))) {
        if (STField<char>(this,0x29f) == '\0') {
          thunk_FUN_004ad460((void *)((int)this + 0x1d5),0);
          STField<undefined1>(this,0x29f) = 1;
        }
      }
      else if (STField<char>(this,0x29f) != '\0') {
        thunk_FUN_004ad430((STT3DSprC *)((int)this + 0x1d5));
        STField<undefined1>(this,0x29f) = 0;
      }
    }
    STField<undefined1>(this,0x265) = 3;
    STField<undefined4>(this,0x292) = 0x13;
    return 0;
  case 3:
    local_EAX_2002 = thunk_FUN_0063c4a0(this,g_playSystem_00802A38->field_00E4);
    if (0 < local_EAX_2002) {
      STField<uint>(this,0x28e) = g_playSystem_00802A38->field_00E4;
      STField<undefined1>(this,0x265) = 4;
      if (g_visibleClass_00802A88 != nullptr) {
        iVar10 = STField<int>(this,0x26a);
        iVar10 = STBiasedDiv16(iVar10, 0xc9); /* exact signed 16-bit grid-index division */
        iVar9 = STField<int>(this,0x266);
        iVar9 = STBiasedDiv16(iVar9, 0xc9); /* exact signed 16-bit grid-index division */
        /* ST_CALLSITE[0063A503]: CALL 0x00401fd2; direct=00401FD2 VisibleClassTy::VisHoleCreate */
        VisibleClassTy::VisHoleCreate
                  (g_visibleClass_00802A88,iVar9,iVar10,nullptr,
                   STField<uint>(this,0x259),(undefined *)0x5,0x271);
      }
      if (STField<short>(this,0x263) != -1) {
        thunk_FUN_006404b0(this,(int)STField<short>(this,0x253),
                           (int)STField<short>(this,0x255),(int)STField<short>(this,0x263));
      }
      STField<undefined4>(this,0x292) = 0x41;
      STField<undefined2>(this,0x251) = STField<undefined2>(this,0x26e);
      iVar10 = STField<int>(this,0x245);
      if (((iVar10 == 1) || (iVar10 == 0)) || (iVar10 == 2)) {
        STField<undefined1>(this,0x265) = 5;
        STField<undefined4>(this,0x292) = 0x13;
      }
    }
    if ((g_playSystem_00802A38->field_00E4 & 1) == 0) {
      iVar10 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<int>(this,0x1c) = iVar10;
      iVar10 = iVar10 * 0x41c64e6d + 0x3039;
      STField<int>(this,0x1c) = iVar10;
      uVar11 = iVar10 * 0x41c64e6d + 0x3039;
      uVar6 = (ushort)(uVar11 >> 0x10);
      STField<uint>(this,0x1c) = uVar11;
      /* ST_CALLSITE[0063A5F3]: CALL 0x00401433; direct=00401433 TraksClassTy::TraksCreate */
      TraksClassTy::TraksCreate
                (g_traksClass_00802A7C,1,1,uVar11 >> 0x10 & 1,STField<int>(this,0x266),
                 STField<int>(this,0x26a),STField<int>(this,0x26e),uVar6 & 1,uVar6 & 1,0,0,0,0
                 ,-1,0,0);
    }
    /* ST_CALLSITE[0063A612]: CALL 0x00403107; direct=00403107 sub_00416240 */
    sub_00416240(this,STField<ushort>(this,0x266),STField<short>(this,0x26a),
                 STField<ushort>(this,0x26e));
    /* ST_CALLSITE[0063A61B]: CALL dword ptr [EAX + 0xd8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)this + 0xd8))();
    pVVar12 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 == nullptr) {
      return 0;
    }
    iVar10 = STField<int>(this,0x26e);
    sVar3 = (short)(iVar10 >> 0x1f);
    if (iVar10 < 0) {
      local_c = (short)(((short)(iVar10 / 200) + sVar3) -
                       (short)((longlong)iVar10 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      local_c = (uint)(short)(((short)(iVar10 / 200) + sVar3) -
                             (short)((longlong)iVar10 * 0x51eb851f >> 0x3f));
    }
    iVar10 = STField<int>(this,0x26a);
    iVar10 = STBiasedDiv16(iVar10, 0xc9); /* exact signed 16-bit grid-index division */
    iVar9 = STField<int>(this,0x266);
    iVar9 = STBiasedDiv16(iVar9, 0xc9); /* exact signed 16-bit grid-index division */
    if (((((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) &&
         /* ST_CALLSITE[0063A6EF]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
         (VisibleClassTy::sub_00558C00
                    (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar9,iVar10,
                     &local_1c,&local_18), -1 < (int)local_c)) &&
        (((int)local_c < 5 && (-1 < local_1c)))) &&
       (iVar10 = pVVar12->field_0030, local_1c < iVar10)) {
      iVar9 = g_centeredOffsets5[local_c];
LAB_0063a728:
      iVar9 = iVar9 + local_18;
      if (((-1 < iVar9) && (iVar9 < pVVar12->field_0034)) && (pVVar12->field_004C != nullptr)) {
        bVar2 = pVVar12->field_004C[iVar9 * iVar10 + local_1c];
        goto joined_r0x0063a754;
      }
    }
    break;
  case 4:
    local_EAX_5501 = thunk_FUN_0063c510(this,g_playSystem_00802A38->field_00E4);
    if (0 < local_EAX_5501) {
      return 0;
    }
    /* ST_CALLSITE[0063B234]: CALL 0x00403107; direct=00403107 sub_00416240 */
    sub_00416240(this,STField<ushort>(this,0x266),STField<short>(this,0x26a),
                 STField<ushort>(this,0x26e));
    if ((g_playSystem_00802A38->field_00E4 & 1) == 0) {
      iVar10 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<int>(this,0x1c) = iVar10;
      iVar10 = iVar10 * 0x41c64e6d + 0x3039;
      STField<int>(this,0x1c) = iVar10;
      uVar11 = iVar10 * 0x41c64e6d + 0x3039;
      uVar6 = (ushort)(uVar11 >> 0x10);
      STField<uint>(this,0x1c) = uVar11;
      /* ST_CALLSITE[0063B2C1]: CALL 0x00401433; direct=00401433 TraksClassTy::TraksCreate */
      TraksClassTy::TraksCreate
                (g_traksClass_00802A7C,1,1,uVar11 >> 0x10 & 1,STField<int>(this,0x266),
                 STField<int>(this,0x26a),STField<int>(this,0x26e),uVar6 & 1,uVar6 & 1,0,0,0,0
                 ,-1,0,0);
    }
    /* ST_CALLSITE[0063B2CA]: CALL dword ptr [EAX + 0xd8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)this + 0xd8))();
    pVVar12 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 == nullptr) {
      return 0;
    }
    iVar10 = STField<int>(this,0x26e);
    sVar3 = (short)(iVar10 >> 0x1f);
    if (iVar10 < 0) {
      local_c = (short)(((short)(iVar10 / 200) + sVar3) -
                       (short)((longlong)iVar10 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      local_c = (uint)(short)(((short)(iVar10 / 200) + sVar3) -
                             (short)((longlong)iVar10 * 0x51eb851f >> 0x3f));
    }
    iVar10 = STField<int>(this,0x26a);
    iVar10 = STBiasedDiv16(iVar10, 0xc9); /* exact signed 16-bit grid-index division */
    iVar9 = STField<int>(this,0x266);
    iVar9 = STBiasedDiv16(iVar9, 0xc9); /* exact signed 16-bit grid-index division */
    if ((((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) &&
        /* ST_CALLSITE[0063B39E]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
        (VisibleClassTy::sub_00558C00
                   (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar9,iVar10,
                    &local_1c,&local_18), -1 < (int)local_c)) &&
       ((((int)local_c < 5 && (-1 < local_1c)) && (iVar10 = pVVar12->field_0030, local_1c < iVar10))
       )) {
      iVar9 = g_centeredOffsets5[local_c];
      goto LAB_0063a728;
    }
    break;
  case 5:
    uVar10 = thunk_FUN_0063c380(this,g_playSystem_00802A38->field_00E4);
    if (uVar10 == 0) {
      /* ST_CALLSITE[0063A795]: CALL 0x00403107; direct=00403107 sub_00416240 */
      sub_00416240(this,STField<ushort>(this,0x266),STField<short>(this,0x26a),
                   STField<ushort>(this,0x26e));
      /* ST_CALLSITE[0063A79E]: CALL dword ptr [EDX + 0xd8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*(int *)this + 0xd8))();
      pVVar12 = g_visibleClass_00802A88;
      if (g_visibleClass_00802A88 != nullptr) {
        iVar10 = STField<int>(this,0x26e);
        sVar3 = (short)(iVar10 >> 0x1f);
        if (iVar10 < 0) {
          local_c = (short)(((short)(iVar10 / 200) + sVar3) -
                                (short)((longlong)iVar10 * 0x51eb851f >> 0x3f)) - 1;
        }
        else {
          local_c = (uint)(short)(((short)(iVar10 / 200) + sVar3) -
                                 (short)((longlong)iVar10 * 0x51eb851f >> 0x3f));
        }
        iVar10 = STField<int>(this,0x26a);
        iVar10 = STBiasedDiv16(iVar10, 0xc9); /* exact signed 16-bit grid-index division */
        iVar9 = STField<int>(this,0x266);
        iVar9 = STBiasedDiv16(iVar9, 0xc9); /* exact signed 16-bit grid-index division */
        if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
            /* ST_CALLSITE[0063A86A]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
            ((VisibleClassTy::sub_00558C00
                        (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar9,iVar10,
                         &local_1c,&local_18), (int)local_c < 0 ||
             (((4 < (int)local_c || (local_1c < 0)) || (pVVar12->field_0030 <= local_1c)))))) ||
           (((local_18 = g_centeredOffsets5[local_c] + local_18, local_18 < 0 ||
             (pVVar12->field_0034 <= local_18)) ||
            ((pVVar12->field_004C == nullptr ||
             (pVVar12->field_004C[local_18 * pVVar12->field_0030 + local_1c] != 0)))))) {
          if (STField<char>(this,0x29f) == '\0') {
            thunk_FUN_004ad460((void *)((int)this + 0x1d5),0);
            STField<undefined1>(this,0x29f) = 1;
          }
        }
        else if (STField<char>(this,0x29f) != '\0') {
          thunk_FUN_004ad430((STT3DSprC *)((int)this + 0x1d5));
          STField<undefined1>(this,0x29f) = 0;
        }
      }
      iVar10 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<int>(this,0x1c) = iVar10;
      iVar10 = iVar10 * 0x41c64e6d + 0x3039;
      STField<int>(this,0x1c) = iVar10;
      uVar11 = iVar10 * 0x41c64e6d + 0x3039;
      uVar6 = (ushort)(uVar11 >> 0x10);
      STField<uint>(this,0x1c) = uVar11;
      /* ST_CALLSITE[0063A96A]: CALL 0x00401433; direct=00401433 TraksClassTy::TraksCreate */
      TraksClassTy::TraksCreate
                (g_traksClass_00802A7C,1,1,uVar11 >> 0x10 & 1,STField<int>(this,0x266),
                 STField<int>(this,0x26a),STField<int>(this,0x26e),uVar6 & 1,uVar6 & 1,0,0,0,0
                 ,-1,0,0);
      thunk_FUN_0063f340(this);
      return 0;
    }
    STField<int>(this,0x26e) = STField<int>(this,0x27a) + 100;
    /* ST_CALLSITE[0063A998]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
    STT3DSprC::StopShow((STT3DSprC *)((int)this + 0x1d5),0xd);
    if (STField<uint>(this,0x245) < 2) {
      /* ST_CALLSITE[0063AA64]: CALL 0x00402e78; direct=00402E78 STTmMineC::LoadImagNuclear */
      iVar10 = STTmMineC::LoadImagNuclear(this,1);
      if (iVar10 == 0) {
        /* ST_CALLSITE[0063AA82]: CALL 0x00405aa1; direct=00405AA1 STTmMineC::CreatePart */
        local_EAX_3570 = STTmMineC::CreatePart(this,500);
        if (-1 < (int)local_EAX_3570) {
          thunk_FUN_0063d460(this,STField<undefined4>(this,0x266),
                             STField<undefined4>(this,0x26a),STField<int>(this,0x26e),10);
          thunk_FUN_0063d660(this,'\n');
          STTmMineC::thunk_FUN_0063ddb0(this,1);
        }
        STField<undefined1>(this,0x265) = 9;
        return 0;
      }
      return 0xffff;
    }
    if (STField<uint>(this,0x245) != 2) {
      return 0;
    }
    /* ST_CALLSITE[0063A9B9]: CALL 0x004050b5; direct=004050B5 STTmMineC::LoadImagVacuum */
    iVar10 = STTmMineC::LoadImagVacuum(this,1);
    if (iVar10 == 0) {
      /* ST_CALLSITE[0063A9D7]: CALL 0x00405aa1; direct=00405AA1 STTmMineC::CreatePart */
      local_EAX_3399 = STTmMineC::CreatePart(this,0x168);
      if (-1 < (int)local_EAX_3399) {
        thunk_FUN_0063d460(this,STField<undefined4>(this,0x266),
                           STField<undefined4>(this,0x26a),STField<int>(this,0x26e),0xb);
        thunk_FUN_0063d660(this,'\v');
        STTmMineC::thunk_FUN_0063ddb0(this,1);
      }
      if ((-1 < (int)STField<uint>(this,0x33a)) && (STField<char>(this,0x346) == '\0')) {
        Library::Ourlib::ST3DSMAP::SprShow
                  (STField<void *>(this,0x211),STField<uint>(this,0x33a),0);
        STField<undefined1>(this,0x346) = 1;
        thunk_FUN_00640390(this,1);
      }
      STField<undefined1>(this,0x265) = 10;
      thunk_FUN_0063de20(this,0x49b);
      return 0;
    }
    return 0xffff;
  case 6:
    local_EAX_5979 = thunk_FUN_0063c510(this,g_playSystem_00802A38->field_00E4);
    if (local_EAX_5979 == 4) {
      pSVar1 = (STT3DSprC *)((int)this + 0x1d5);
      thunk_FUN_004abce0(pSVar1,0xd,0x10,0x13,'\0');
      thunk_FUN_004ac660(pSVar1,'\r');
      /* ST_CALLSITE[0063B424]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      STT3DSprC::StartShow(pSVar1,0xd,g_playSystem_00802A38->field_00E4);
      STField<undefined1>(this,0x29f) = 1;
      STField<undefined1>(this,0x29e) = 3;
      STField<undefined1>(this,0x265) = 7;
      STField<uint>(this,0x28e) = g_playSystem_00802A38->field_00E4;
    }
    iVar10 = thunk_FUN_004ac910((void *)((int)this + 0x1d5),'\r');
    if (iVar10 % 7 == 0) {
      thunk_FUN_0063cc50(this,iVar10 / 7);
    }
    /* ST_CALLSITE[0063B49F]: CALL 0x00403107; direct=00403107 sub_00416240 */
    sub_00416240(this,STField<ushort>(this,0x266),STField<short>(this,0x26a),
                 STField<ushort>(this,0x26e));
    /* ST_CALLSITE[0063B4A8]: CALL dword ptr [EDX + 0xd8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)this + 0xd8))();
    pVVar12 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 == nullptr) {
      return 0;
    }
    iVar10 = STField<int>(this,0x26e);
    sVar3 = (short)(iVar10 >> 0x1f);
    if (iVar10 < 0) {
      local_c = (short)(((short)(iVar10 / 200) + sVar3) -
                       (short)((longlong)iVar10 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      local_c = (uint)(short)(((short)(iVar10 / 200) + sVar3) -
                             (short)((longlong)iVar10 * 0x51eb851f >> 0x3f));
    }
    iVar10 = STField<int>(this,0x26a);
    iVar10 = STBiasedDiv16(iVar10, 0xc9); /* exact signed 16-bit grid-index division */
    iVar9 = STField<int>(this,0x266);
    iVar9 = STBiasedDiv16(iVar9, 0xc9); /* exact signed 16-bit grid-index division */
    if (((((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) &&
         /* ST_CALLSITE[0063B57C]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
         (VisibleClassTy::sub_00558C00
                    (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar9,iVar10,
                     &local_1c,&local_18), -1 < (int)local_c)) &&
        (((int)local_c < 5 && (-1 < local_1c)))) &&
       (iVar10 = pVVar12->field_0030, local_1c < iVar10)) {
      iVar9 = g_centeredOffsets5[local_c];
      goto LAB_0063a728;
    }
    break;
  case 7:
    pSVar1 = (STT3DSprC *)((int)this + 0x1d5);
    /* ST_CALLSITE[0063B5D2]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar10 = STT3DSprC::LoadSequence(pSVar1,0xd,PTR_00806774,"exptme",CASE_1D);
    if (iVar10 != 0) {
      return 0xffff;
    }
    /* ST_CALLSITE[0063B5FA]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar10 = STT3DSprC::LoadSequence(pSVar1,0xf,PTR_00806764,"expl_s0",CASE_1D);
    if (iVar10 == 0) {
      thunk_FUN_004ac700(pSVar1,'\x0f');
      thunk_FUN_004ac700(pSVar1,'\r');
      /* ST_CALLSITE[0063B634]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      STT3DSprC::StartShow(pSVar1,0xd,g_playSystem_00802A38->field_00E4);
      STField<undefined1>(this,0x29f) = 1;
      /* ST_CALLSITE[0063B65A]: CALL 0x00403107; direct=00403107 sub_00416240 */
      sub_00416240(this,STField<ushort>(this,0x266),STField<short>(this,0x26a),
                   STField<ushort>(this,0x26e));
      STField<undefined1>(this,0x265) = 8;
      /* ST_CALLSITE[0063B680]: CALL 0x00403107; direct=00403107 sub_00416240 */
      sub_00416240(this,STField<ushort>(this,0x266),STField<short>(this,0x26a),
                   STField<ushort>(this,0x26e));
      /* ST_CALLSITE[0063B689]: CALL dword ptr [EAX + 0xd8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*(int *)this + 0xd8))();
      return 0;
    }
    return 0xffff;
  case 8:
    pSVar1 = (STT3DSprC *)((int)this + 0x1d5);
    iVar10 = thunk_FUN_004ac910(pSVar1,'\r');
    if (iVar10 == 0x17) {
      /* ST_CALLSITE[0063B6BF]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      STT3DSprC::StartShow(pSVar1,0xf,g_playSystem_00802A38->field_00E4);
    }
    /* ST_CALLSITE[0063B6C8]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
    iVar10 = STT3DSprC::sub_004ACD30(pSVar1,'\r');
    iVar9 = thunk_FUN_004ac910(pSVar1,'\r');
    if (iVar10 + -1 == iVar9) {
      /* ST_CALLSITE[0063B6E1]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      STT3DSprC::StopShow(pSVar1,0xd);
    }
    /* ST_CALLSITE[0063B6EA]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
    iVar10 = STT3DSprC::sub_004ACD30(pSVar1,'\x0f');
    iVar9 = thunk_FUN_004ac910(pSVar1,'\x0f');
    if (iVar10 + -1 == iVar9) {
      STField<undefined1>(this,0x265) = 0xd;
    }
    /* ST_CALLSITE[0063B70A]: CALL dword ptr [EAX + 0xd8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)this + 0xd8))();
    return 0;
  case 9:
    if (STField<int>(this,0x34b) != 0) {
      iVar10 = STField<int>(this,0x34f);
      if (iVar10 < 2) {
        iVar10 = *(int *)(&DAT_007d1fd4 + iVar10 * 4);
        fVar22 = (float)STField<int>(this,0x26e) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc;
        fVar21 = (float)STField<int>(this,0x26a) * _DAT_007904f8 * _DAT_007904f0;
        uVar17 = **(undefined4 **)(STField<int>(this,0x34b) + 0x21);
        fVar20 = (float)STField<int>(this,0x266) * _DAT_007904f8 * _DAT_007904f0;
        uVar19 = 0xf7;
        uVar18 = 0x108;
      }
      else {
        iVar10 = *(int *)(&DAT_007d1fd4 + iVar10 * 4);
        fVar22 = 0.0;
        fVar21 = 0.0;
        fVar20 = 0.0;
        uVar19 = 0;
        uVar18 = 0;
        uVar17 = 0;
      }
      FUN_006ead40(STField<void *>(this,0x211),PTR_008032cc + iVar10 * 0x80,uVar17,uVar18,uVar19,
                   fVar20,fVar21,fVar22);
      if (STField<int>(this,0x34f) == 2) {
        iVar10 = STField<int>(this,0x26a);
        iVar10 = STBiasedDiv16(iVar10, 0xc9); /* exact signed 16-bit grid-index division */
        iVar9 = STField<int>(this,0x266);
        iVar9 = STBiasedDiv16(iVar9, 0xc9); /* exact signed 16-bit grid-index division */
        thunk_FUN_0063e700(this,iVar9,iVar10,2);
        thunk_FUN_0063de20(this,0x462);
      }
      if ((STField<int>(this,0x34f) == 3) && (-1 < (int)STField<uint>(this,0x33a))) {
        Library::Ourlib::ST3DSMAP::SprShow
                  (STField<void *>(this,0x211),STField<uint>(this,0x33a),0);
      }
      iVar10 = STField<int>(this,0x34f) + 1;
      STField<int>(this,0x34f) = iVar10;
      if (iVar10 == 7) {
        Library::DKW::DDX::FUN_006c83b0((int *)g_ddxContext_008075A8,2,3,(int *)&DAT_007d1ff8);
      }
      if (8 < STField<int>(this,0x34f)) {
        FUN_006ead40(STField<void *>(this,0x211),0,0,0x108,0xf7,
                     (float)STField<int>(this,0x266) * _DAT_007904f8 * _DAT_007904f0,
                     (float)STField<int>(this,0x26a) * _DAT_007904f8 * _DAT_007904f0,
                     (float)STField<int>(this,0x26e) * _DAT_007904f8 * _DAT_007904f0 +
                     _DAT_007904fc);
        STField<undefined4>(this,0x34b) = 0;
      }
      if (STField<int>(this,0x34f) < 3) {
        return 0;
      }
    }
    uVar11 = STField<uint>(this,0x33a);
    if ((-1 < (int)uVar11) && ((g_playSystem_00802A38->field_00E4 & 1) == 0)) {
      uVar13 = STField<int>(this,0x33e) + 1;
      STField<uint>(this,0x33e) = uVar13;
      if ((int)uVar13 < STField<int>(this,0x342)) {
        ST3DSMAPContext::sub_006EA270(STField<ST3DSMAPContext *>(this,0x211),uVar11,0,uVar13);
      }
      else {
        Library::Ourlib::ST3DSMAP::SprClose(STField<void *>(this,0x211),uVar11);
        STField<undefined4>(this,0x33a) = 0xffffffff;
      }
    }
    uVar11 = STField<uint>(this,0x353);
    if ((-1 < (int)uVar11) && ((g_playSystem_00802A38->field_00E4 & 1) == 0)) {
      uVar13 = STField<int>(this,0x357) + 1;
      STField<uint>(this,0x357) = uVar13;
      if ((int)uVar13 < STField<int>(this,0x35b)) {
        ST3DSMAPContext::sub_006EA270(STField<ST3DSMAPContext *>(this,0x211),uVar11,0,uVar13);
      }
      else {
        Library::Ourlib::ST3DSMAP::SprClose(STField<void *>(this,0x211),uVar11);
        STField<undefined4>(this,0x353) = 0xffffffff;
      }
    }
    if ((STField<int>(this,0x353) == -1) && (STField<int>(this,0x33a) == -1)) {
      STField<undefined1>(this,0x265) = 0xd;
      return 0;
    }
    if (STField<int>(this,0x336) == 0) {
      return 0;
    }
    thunk_FUN_0063e9c0(this,10);
    thunk_FUN_0063e410(this);
    iVar10 = STField<int>(this,0x2c0) * 10;
    if (iVar10 - STField<int>(this,0x2b0) == 0 || iVar10 < STField<int>(this,0x2b0)) {
      return 0;
    }
    thunk_FUN_0063e660(this);
    return 0;
  case 10:
    uVar11 = local_c >> 8;
    local_c = local_c & 0xffffff00;
    if (-1 < STField<int>(this,0x363)) {
      if (STField<int>(this,0x367) == 0) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_c = CONCAT31((int3)uVar11,1);
        iVar10 = (STField<ST3DSMAPContext *>(this,0x211))->field_0380;
        ST3DSMAPContext::sub_006E3210
                  (STField<ST3DSMAPContext *>(this,0x211),
                   (STField<int>(this,0x2a4) * iVar10) / 0xc9,
                   (STField<int>(this,0x2a8) * iVar10) / 0xc9);
        lVar16 = Library::MSVCRT::__ftol();
        param_1 = (STMessage *)((short)lVar16 + 0x2d);
      }
      uVar11 = STField<int>(this,0x367) + 1;
      STField<uint>(this,0x367) = uVar11;
      if ((int)uVar11 < STField<int>(this,0x36b)) {
        ST3DSMAPContext::sub_006EA270
                  (STField<ST3DSMAPContext *>(this,0x211),STField<uint>(this,0x363),0,uVar11);
      }
      else {
        Library::Ourlib::ST3DSMAP::SprClose
                  (STField<void *>(this,0x211),STField<uint>(this,0x363));
        STField<undefined4>(this,0x363) = 0xffffffff;
      }
    }
    iVar8 = thunk_FUN_0063f790(this);
    if (iVar8 != 0) {
      if (-1 < iVar8) {
        thunk_FUN_0063d460(this,STField<undefined4>(this,0x266),
                           STField<undefined4>(this,0x26a),STField<int>(this,0x26e),0xc);
        thunk_FUN_0063d660(this,'\f');
        STTmMineC::thunk_FUN_0063ddb0(this,0);
        iVar10 = STField<int>(this,0x37f);
        if (iVar10 != 0) {
          if ((g_playSystem_00802A38->field_00E4 & 1) == 0) {
            ((char *)iVar10)[0x15] = STField<char>(iVar10,0x15) + -1;
            uVar11 = *STField<uint *>(this,0x37f);
            if (-1 < (int)uVar11) {
              Library::Ourlib::ST3DSMAP::FUN_006e9720
                        (STField<void *>(this,0x211),uVar11,
                         (uint)(PTR_008032b8 +
                               (uint)*(byte *)((int)STField<uint *>(this,0x37f) + 0x15) * 0x80));
              Library::Ourlib::ST3DSMAP::FUN_006e96d0
                        (STField<void *>(this,0x211),*STField<uint *>(this,0x37f));
            }
          }
          else {
            thunk_FUN_00640130(this);
          }
        }
        if (STField<int>(this,0x34b) != 0) {
          fVar22 = STField<float>(this,0x332) + _DAT_007904fc;
          iVar10 = STField<int>(this,0x34f) + 1;
          STField<int>(this,0x34f) = iVar10;
          FUN_006ead40(STField<void *>(this,0x211),
                       PTR_008032cc + *(int *)(&DAT_007d1fd4 + iVar10 * 4) * 0x80,
                       **(undefined4 **)(STField<int>(this,0x34b) + 0x21),0x108,0xf7,
                       (float)STField<int>(this,0x2a4) * _DAT_007904f8 * _DAT_007904f0,
                       (float)STField<int>(this,0x2a8) * _DAT_007904f8 * _DAT_007904f0,fVar22);
          STField<int>(this,0x34f) = STField<int>(this,0x34f) + 1;
        }
        STField<undefined1>(this,0x265) = 0xb;
        thunk_FUN_00640390(this,0);
        return 0;
      }
      STField<undefined1>(this,0x265) = 0xd;
      thunk_FUN_00640390(this,0);
      return 0;
    }
    thunk_FUN_0063fe70(this,(char)local_c);
    thunk_FUN_00640390(this,0);
    return 0;
  case 0xb:
    if (STField<int>(this,0x34b) != 0) {
      iVar10 = STField<int>(this,0x34f);
      if (iVar10 < 2) {
        fVar22 = STField<float>(this,0x332) + _DAT_007904fc;
        fVar21 = (float)STField<int>(this,0x2a8) * _DAT_007904f8 * _DAT_007904f0;
        uVar17 = **(undefined4 **)(STField<int>(this,0x34b) + 0x21);
        iVar10 = *(int *)(&DAT_007d1fd4 + iVar10 * 4);
        fVar20 = (float)STField<int>(this,0x2a4) * _DAT_007904f8 * _DAT_007904f0;
        uVar19 = 0xf7;
        uVar18 = 0x108;
      }
      else {
        iVar10 = *(int *)(&DAT_007d1fd4 + iVar10 * 4);
        fVar22 = 0.0;
        fVar21 = 0.0;
        fVar20 = 0.0;
        uVar19 = 0;
        uVar18 = 0;
        uVar17 = 0;
      }
      FUN_006ead40(STField<void *>(this,0x211),PTR_008032cc + iVar10 * 0x80,uVar17,uVar18,uVar19,
                   fVar20,fVar21,fVar22);
      iVar10 = STField<int>(this,0x34f) + 1;
      STField<int>(this,0x34f) = iVar10;
      if (iVar10 == 7) {
        Library::DKW::DDX::FUN_006c83b0((int *)g_ddxContext_008075A8,2,3,(int *)&DAT_007d1ff8);
      }
      if (8 < STField<int>(this,0x34f)) {
        FUN_006ead40(STField<void *>(this,0x211),0,0,0x108,0xf7,
                     (float)STField<int>(this,0x2a4) * _DAT_007904f8 * _DAT_007904f0,
                     (float)STField<int>(this,0x2a8) * _DAT_007904f8 * _DAT_007904f0,
                     STField<float>(this,0x332) + _DAT_007904fc);
        STField<undefined4>(this,0x34b) = 0;
      }
    }
    iVar10 = STField<int>(this,0x37f);
    if (iVar10 != 0) {
      if ((g_playSystem_00802A38->field_00E4 & 1) == 0) {
        ((char *)iVar10)[0x15] = STField<char>(iVar10,0x15) + -1;
        uVar11 = *STField<uint *>(this,0x37f);
        if (-1 < (int)uVar11) {
          Library::Ourlib::ST3DSMAP::FUN_006e9720
                    (STField<void *>(this,0x211),uVar11,
                     (uint)(PTR_008032b8 +
                           (uint)*(byte *)((int)STField<uint *>(this,0x37f) + 0x15) * 0x80));
          Library::Ourlib::ST3DSMAP::FUN_006e96d0
                    (STField<void *>(this,0x211),*STField<uint *>(this,0x37f));
        }
      }
      else {
        thunk_FUN_00640130(this);
      }
    }
    thunk_FUN_0063e9c0(this,0xc);
    thunk_FUN_0063e410(this);
    if (STField<int>(this,0x2b8) < STField<int>(this,0x2b0)) {
      thunk_FUN_0063e660(this);
      STField<undefined1>(this,0x265) = 0xd;
    }
    thunk_FUN_00640390(this,0);
    return 0;
  default:
    goto switchD_00639e3d_caseD_c;
  case 0xd:
    goto switchD_00639e3d_caseD_d;
  }
  if (STField<char>(this,0x29f) == '\0') {
    thunk_FUN_004ad460((void *)((int)this + 0x1d5),0);
    STField<undefined1>(this,0x29f) = 1;
    return 0;
  }
switchD_00639e3d_caseD_c:
  return 0;
}

