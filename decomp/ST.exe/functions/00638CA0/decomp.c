#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_00638ca0(void *this,STMessage *param_1)

{
  STT3DSprC *this_00;
  byte bVar1;
  STMessageId SVar2;
  short sVar3;
  VisibleClassTy *pVVar4;
  int iVar5;
  uint uVar6;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *puVar9;
  byte *puVar10;
  uint uVar11;
  uint uVar12;
  int local_10;
  int local_c;
  byte *local_8;

  /* ST_CALLSITE[00638CAE]: CALL 0x00404f07; direct=00404F07 STSprGameObjC::GetMessage */
  iVar5 = STSprGameObjC::GetMessage(this,param_1);
  if (iVar5 == 0xffff) {
    return 0xffff;
  }
  SVar2 = param_1->id;
  if (MESS_SHARED_0003 < SVar2) {
    if (SVar2 != MESS_SHARED_010F) {
      return 0;
    }
    local_8 = Library::DKW::LIB::MemAlloc(0x7a);
    thunk_FUN_00639bf0(this,(undefined4 *)local_8);
    /* ST_CALLSITE[00639292]: CALL 0x004025f9; direct=004025F9 STPlaySystemC::SaveObjData */
    STPlaySystemC::SaveObjData(g_playSystem_00802A38,STField<int *>(this,0x18),local_8,0x7a);
    FreeAndNull(&local_8);
    return 0;
  }
  if (SVar2 == MESS_SHARED_0003) {
    thunk_FUN_004ad310((STT3DSprC *)((int)this + 0x1d5));
    return 0;
  }
  if (SVar2 != MESS_ID_NONE) {
    if (SVar2 != MESS_ID_CREATE) {
      return 0;
    }
    puVar9 = (byte *)((param_1->arg0).ptr);
    if (puVar9[3] == 2) {
      thunk_FUN_00639c40(this,puVar9);
      puVar9 = (byte *)((int)this + 0x2ab);
      memset(puVar9, 0, 0x2d); /* compiler bulk-zero initialization */
      puVar9 = (byte *)((byte *)puVar9 + 0x2c);
      iVar8 = 0;
      if (STField<char>(this,0x26f) == '\x02') {
        STField<undefined1>(this,0x26f) = 3;
      }
    }
    else {
      puVar10 = (byte *)((int)this + 0x231);
      memmove(puVar10, puVar9, 0x2e); /* compiler REP MOVS byte copy */
      thunk_FUN_00639500(this,g_playSystem_00802A38->field_00E4);
    }
    if (STField<char>(this,0x270) == '\0') {
      return 0;
    }
    if (STField<char>(this,0x26f) == '\x01') {
      return 0;
    }
    thunk_FUN_00639990(this);
    return 0;
  }
  switch(STField<undefined1>(this,0x26f)) {
  case 0:
    if (STField<char>(this,0x270) == '\0') {
      thunk_FUN_00639990(this);
    }
    uVar6 = thunk_FUN_00639670(this,g_playSystem_00802A38->field_00E4);
    if (0 < (int)uVar6) {
      iVar8 = STField<int>(this,0x2bf);
      if (iVar8 != 0) {
        if (STField<int>(this,0x2c7) == 0) {
          Library::Ourlib::ST3DSMAP::SprSetLevBefore
                    (STField<void *>(this,0x211),STField<uint>(this,0x1ed),
                     *(int *)(iVar8 + 0x1ed));
        }
        else {
          Library::Ourlib::ST3DSMAP::SprSetLevAfter
                    (STField<void *>(this,0x211),STField<uint>(this,0x1ed),
                     *(int *)(iVar8 + 0x1ed));
        }
      }
      uVar12 = 0x53;
      uVar11 = 0x5a;
      iVar8 = 1;
      uVar5 = thunk_FUN_004ad650((STT3DSprC *)((int)this + 0x1d5));
      Library::Ourlib::ST3DSMAP::SprSetLevBeforeLand
                (STField<void *>(this,0x211),uVar5,iVar8,uVar11,uVar12);
      STField<undefined1>(this,0x26f) = 2;
      thunk_FUN_00639990(this);
      return 0;
    }
    if (STField<char>(this,0x270) == '\0') {
      return 0;
    }
    /* ST_CALLSITE[00638EB5]: CALL 0x00403107; direct=00403107 sub_00416240 */
    sub_00416240(this,STField<ushort>(this,0x27a),STField<short>(this,0x27e),
                 STField<ushort>(this,0x282));
    /* ST_CALLSITE[00638EBE]: CALL dword ptr [EAX + 0xd8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)this + 0xd8))();
    pVVar4 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 == nullptr) {
      return 0;
    }
    iVar8 = STField<int>(this,0x282);
    sVar3 = (short)(iVar8 >> 0x1f);
    if (iVar8 < 0) {
      param_1 = (STMessage *)
                ((short)(((short)(iVar8 / 200) + sVar3) -
                        (short)((longlong)iVar8 * 0x51eb851f >> 0x3f)) + -1);
    }
    else {
      param_1 = (STMessage *)
                (int)(short)(((short)(iVar8 / 200) + sVar3) -
                            (short)((longlong)iVar8 * 0x51eb851f >> 0x3f));
    }
    iVar8 = STField<int>(this,0x27e);
    iVar8 = STBiasedDiv16(iVar8, 0xc9); /* exact signed 16-bit grid-index division */
    iVar6 = STField<int>(this,0x27a);
    iVar6 = STBiasedDiv16(iVar6, 0xc9); /* exact signed 16-bit grid-index division */
    if (((((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) &&
         /* ST_CALLSITE[00638F8A]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
         (VisibleClassTy::sub_00558C00
                    (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar6,iVar8,
                     &local_c,&local_10), -1 < (int)param_1)) &&
        ((((int)param_1 < 5 && (-1 < local_c)) &&
         ((local_c < (int)pVVar4->field_0030 &&
          ((local_10 = local_10 + g_centeredOffsets5[(int)param_1], -1 < local_10 &&
           (local_10 < pVVar4->field_0034)))))))) && (pVVar4->field_004C != nullptr)) {
      bVar1 = pVVar4->field_004C[local_c + local_10 * pVVar4->field_0030];
joined_r0x00639236:
      if (bVar1 == 0) {
        if (STField<char>(this,0x271) == '\0') {
          return 0;
        }
        thunk_FUN_004ad430((STT3DSprC *)((int)this + 0x1d5));
        STField<undefined1>(this,0x271) = 0;
        return 0;
      }
    }
    break;
  case 1:
    if (g_playSystem_00802A38->field_00E4 - STField<int>(this,0x2a3) <
        STField<uint>(this,0x251)) {
      return 0;
    }
    STField<undefined1>(this,0x26f) = 0;
    uVar5 = g_playSystem_00802A38->field_00E4;
    STField<undefined4>(this,0x251) = 0;
    STField<uint>(this,0x2a3) = uVar5;
    if (STField<char>(this,0x270) == '\0') {
      return 0;
    }
    thunk_FUN_00639990(this);
    return 0;
  case 2:
    if (STField<char>(this,0x270) == '\0') {
      STField<undefined1>(this,0x26f) = 3;
      return 0;
    }
    this_00 = (STT3DSprC *)((int)this + 0x1d5);
    iVar8 = thunk_FUN_004ac910(this_00,'\r');
    if (STField<char>(this,0x2a2) != '\0') {
      /* ST_CALLSITE[00639069]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
      iVar6 = STT3DSprC::sub_004ACD30(this_00,'\x0e');
      iVar7 = thunk_FUN_004ac910(this_00,'\x0e');
      if ((iVar6 + -1 <= iVar7) && (STField<char>(this,0x270) != '\0')) {
        /* ST_CALLSITE[0063908C]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
        STT3DSprC::StopShow(this_00,0xe);
      }
    }
    if ((iVar8 == 0x17) && (STField<char>(this,0x270) != '\0')) {
      /* ST_CALLSITE[006390B2]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
      STT3DSprC::StartShow(this_00,0xf,g_playSystem_00802A38->field_00E4);
    }
    /* ST_CALLSITE[006390BB]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
    iVar8 = STT3DSprC::sub_004ACD30(this_00,'\r');
    iVar6 = thunk_FUN_004ac910(this_00,'\r');
    if (iVar8 + -1 == iVar6) {
      /* ST_CALLSITE[006390D4]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      STT3DSprC::StopShow(this_00,0xd);
    }
    /* ST_CALLSITE[006390DD]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
    iVar8 = STT3DSprC::sub_004ACD30(this_00,'\x0f');
    iVar6 = thunk_FUN_004ac910(this_00,'\x0f');
    if (iVar8 + -1 == iVar6) {
      STField<undefined1>(this,0x26f) = 3;
    }
    /* ST_CALLSITE[006390FD]: CALL dword ptr [EDX + 0xd8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)this + 0xd8))();
    pVVar4 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 == nullptr) {
      return 0;
    }
    iVar8 = STField<int>(this,0x282);
    sVar3 = (short)(iVar8 >> 0x1f);
    if (iVar8 < 0) {
      param_1 = (STMessage *)
                ((short)(((short)(iVar8 / 200) + sVar3) -
                        (short)((longlong)iVar8 * 0x51eb851f >> 0x3f)) + -1);
    }
    else {
      param_1 = (STMessage *)
                (int)(short)(((short)(iVar8 / 200) + sVar3) -
                            (short)((longlong)iVar8 * 0x51eb851f >> 0x3f));
    }
    iVar8 = STField<int>(this,0x27e);
    iVar8 = STBiasedDiv16(iVar8, 0xc9); /* exact signed 16-bit grid-index division */
    iVar6 = STField<int>(this,0x27a);
    iVar6 = STBiasedDiv16(iVar6, 0xc9); /* exact signed 16-bit grid-index division */
    if ((((((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) &&
          /* ST_CALLSITE[006391D1]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
          (VisibleClassTy::sub_00558C00
                     (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar6,iVar8,
                      &local_10,&local_c), -1 < (int)param_1)) &&
         (((int)param_1 < 5 && (-1 < local_10)))) &&
        ((local_10 < (int)pVVar4->field_0030 &&
         ((local_c = local_c + g_centeredOffsets5[(int)param_1], -1 < local_c &&
          (local_c < pVVar4->field_0034)))))) && (pVVar4->field_004C != nullptr)) {
      bVar1 = pVVar4->field_004C[local_10 + local_c * pVVar4->field_0030];
      goto joined_r0x00639236;
    }
    break;
  case 3:
    thunk_FUN_00639630(this);
    return 0;
  default:
    goto switchD_00638d7a_default;
  }
  if (STField<char>(this,0x271) == '\0') {
    thunk_FUN_004ad460((void *)((int)this + 0x1d5),0);
    STField<undefined1>(this,0x271) = 1;
    return 0;
  }
switchD_00638d7a_default:
  return 0;
}

