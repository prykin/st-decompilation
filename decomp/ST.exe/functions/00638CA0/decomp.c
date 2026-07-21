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
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int local_10;
  int local_c;
  byte *local_8;

  iVar5 = STSprGameObjC::GetMessage(this,param_1);
  if (iVar5 == 0xffff) {
    return 0xffff;
  }
  SVar2 = param_1->id;
  if (MESS_SHARED_0003 < SVar2) {
    if (SVar2 != MESS_SHARED_010F) {
      return 0;
    }
    local_8 = (byte *)Library::DKW::LIB::FUN_006aac70(0x7a);
    thunk_FUN_00639bf0(this,(undefined4 *)local_8);
    STPlaySystemC::SaveObjData
              (PTR_00802a38,*(undefined4 *)((int)this + 0x18),local_8,
               (AnonShape_0060EA30_DCEB68AD *)0x7a);
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
    puVar9 = (param_1->arg0).ptr;
    if (puVar9[3] == 2) {
      thunk_FUN_00639c40(this,puVar9);
      puVar9 = (undefined4 *)((int)this + 0x2ab);
      memset(puVar9, 0, 0x2d); /* compiler bulk-zero initialization */
      puVar9 = (undefined4 *)((byte *)puVar9 + 0x2c);
      iVar5 = 0;
      if (*(char *)((int)this + 0x26f) == '\x02') {
        *(undefined1 *)((int)this + 0x26f) = 3;
      }
    }
    else {
      puVar10 = (undefined4 *)((int)this + 0x231);
      for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      *(undefined2 *)puVar10 = *(undefined2 *)puVar9;
      thunk_FUN_00639500(this,PTR_00802a38->field_00E4);
    }
    if (*(char *)((int)this + 0x270) == '\0') {
      return 0;
    }
    if (*(char *)((int)this + 0x26f) == '\x01') {
      return 0;
    }
    thunk_FUN_00639990(this);
    return 0;
  }
  switch(*(undefined1 *)((int)this + 0x26f)) {
  case 0:
    if (*(char *)((int)this + 0x270) == '\0') {
      thunk_FUN_00639990(this);
    }
    uVar6 = thunk_FUN_00639670(this,PTR_00802a38->field_00E4);
    if (0 < (int)uVar6) {
      iVar5 = *(int *)((int)this + 0x2bf);
      if (iVar5 != 0) {
        if (*(int *)((int)this + 0x2c7) == 0) {
          FUN_006ea460(*(void **)((int)this + 0x211),*(uint *)((int)this + 0x1ed),
                       *(int *)(iVar5 + 0x1ed));
        }
        else {
          FUN_006ea3e0(*(void **)((int)this + 0x211),*(uint *)((int)this + 0x1ed),
                       *(int *)(iVar5 + 0x1ed));
        }
      }
      uVar12 = 0x53;
      uVar11 = 0x5a;
      iVar5 = 1;
      uVar6 = thunk_FUN_004ad650((int)this + 0x1d5);
      FUN_006ea4e0(*(void **)((int)this + 0x211),uVar6,iVar5,uVar11,uVar12);
      *(undefined1 *)((int)this + 0x26f) = 2;
      thunk_FUN_00639990(this);
      return 0;
    }
    if (*(char *)((int)this + 0x270) == '\0') {
      return 0;
    }
    thunk_FUN_00416240(this,*(undefined2 *)((int)this + 0x27a),*(undefined2 *)((int)this + 0x27e),
                       *(undefined2 *)((int)this + 0x282));
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)this + 0xd8))();
    pVVar4 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 == (VisibleClassTy *)0x0) {
      return 0;
    }
    iVar5 = *(int *)((int)this + 0x282);
    sVar3 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      param_1 = (STMessage *)
                ((short)(((short)(iVar5 / 200) + sVar3) -
                        (short)((longlong)iVar5 * 0x51eb851f >> 0x3f)) + -1);
    }
    else {
      param_1 = (STMessage *)
                (int)(short)(((short)(iVar5 / 200) + sVar3) -
                            (short)((longlong)iVar5 * 0x51eb851f >> 0x3f));
    }
    iVar5 = *(int *)((int)this + 0x27e);
    sVar3 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar3) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar3) -
                          (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
    }
    iVar7 = *(int *)((int)this + 0x27a);
    sVar3 = (short)(iVar7 >> 0x1f);
    if (iVar7 < 0) {
      iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar3) - (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar3) -
                          (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
    }
    if (((((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) &&
         (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar7,iVar5
                             ,&local_c,&local_10), -1 < (int)param_1)) &&
        ((((int)param_1 < 5 && (-1 < local_c)) &&
         ((local_c < pVVar4->field_0030 &&
          ((local_10 = local_10 + g_centeredOffsets5[(int)param_1], -1 < local_10 &&
           (local_10 < pVVar4->field_0034)))))))) && (pVVar4->field_004C != (byte *)0x0)) {
      bVar1 = pVVar4->field_004C[local_c + local_10 * pVVar4->field_0030];
joined_r0x00639236:
      if (bVar1 == 0) {
        if (*(char *)((int)this + 0x271) == '\0') {
          return 0;
        }
        thunk_FUN_004ad430((int)this + 0x1d5);
        *(undefined1 *)((int)this + 0x271) = 0;
        return 0;
      }
    }
    break;
  case 1:
    if (PTR_00802a38->field_00E4 - *(int *)((int)this + 0x2a3) < *(uint *)((int)this + 0x251)) {
      return 0;
    }
    *(undefined1 *)((int)this + 0x26f) = 0;
    uVar6 = PTR_00802a38->field_00E4;
    *(undefined4 *)((int)this + 0x251) = 0;
    *(uint *)((int)this + 0x2a3) = uVar6;
    if (*(char *)((int)this + 0x270) == '\0') {
      return 0;
    }
    thunk_FUN_00639990(this);
    return 0;
  case 2:
    if (*(char *)((int)this + 0x270) == '\0') {
      *(undefined1 *)((int)this + 0x26f) = 3;
      return 0;
    }
    this_00 = (STT3DSprC *)((int)this + 0x1d5);
    iVar5 = thunk_FUN_004ac910(this_00,'\r');
    if (*(char *)((int)this + 0x2a2) != '\0') {
      iVar7 = thunk_FUN_004acd30(this_00,'\x0e');
      iVar8 = thunk_FUN_004ac910(this_00,'\x0e');
      if ((iVar7 + -1 <= iVar8) && (*(char *)((int)this + 0x270) != '\0')) {
        STT3DSprC::StopShow(this_00,0xe);
      }
    }
    if ((iVar5 == 0x17) && (*(char *)((int)this + 0x270) != '\0')) {
      STT3DSprC::StartShow(this_00,0xf,PTR_00802a38->field_00E4);
    }
    iVar5 = thunk_FUN_004acd30(this_00,'\r');
    iVar7 = thunk_FUN_004ac910(this_00,'\r');
    if (iVar5 + -1 == iVar7) {
      STT3DSprC::StopShow(this_00,0xd);
    }
    iVar5 = thunk_FUN_004acd30(this_00,'\x0f');
    iVar7 = thunk_FUN_004ac910(this_00,'\x0f');
    if (iVar5 + -1 == iVar7) {
      *(undefined1 *)((int)this + 0x26f) = 3;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)this + 0xd8))();
    pVVar4 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 == (VisibleClassTy *)0x0) {
      return 0;
    }
    iVar5 = *(int *)((int)this + 0x282);
    sVar3 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      param_1 = (STMessage *)
                ((short)(((short)(iVar5 / 200) + sVar3) -
                        (short)((longlong)iVar5 * 0x51eb851f >> 0x3f)) + -1);
    }
    else {
      param_1 = (STMessage *)
                (int)(short)(((short)(iVar5 / 200) + sVar3) -
                            (short)((longlong)iVar5 * 0x51eb851f >> 0x3f));
    }
    iVar5 = *(int *)((int)this + 0x27e);
    sVar3 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar3) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar3) -
                          (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
    }
    iVar7 = *(int *)((int)this + 0x27a);
    sVar3 = (short)(iVar7 >> 0x1f);
    if (iVar7 < 0) {
      iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar3) - (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar3) -
                          (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
    }
    if ((((((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) &&
          (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar7,
                              iVar5,&local_10,&local_c), -1 < (int)param_1)) &&
         (((int)param_1 < 5 && (-1 < local_10)))) &&
        ((local_10 < pVVar4->field_0030 &&
         ((local_c = local_c + g_centeredOffsets5[(int)param_1], -1 < local_c &&
          (local_c < pVVar4->field_0034)))))) && (pVVar4->field_004C != (byte *)0x0)) {
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
  if (*(char *)((int)this + 0x271) == '\0') {
    thunk_FUN_004ad460((void *)((int)this + 0x1d5),0);
    *(undefined1 *)((int)this + 0x271) = 1;
    return 0;
  }
switchD_00638d7a_default:
  return 0;
}

