#include "../../pseudocode_runtime.h"


void __thiscall FUN_00494160(void *this,int param_1)

{
  STT3DSprC *pSVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  bool bVar7;

  iVar5 = STField<int>(this,0x6f7);
  if (iVar5 != 0x16) {
    if (iVar5 == 0x23) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if (param_1 == STField<int>(this,0x72e)) {
        return;
      }
      if (param_1 == 1) {
        if (STField<int>(this,0x722) < 1) {
          return;
        }
        STField<undefined4>(this,0x72e) = 1;
        /* ST_CALLSITE[004941BC]: CALL dword ptr [EAX + 0x90] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*(int *)this + 0x90))(3,0x16c);
        return;
      }
      STField<undefined4>(this,0x72e) = 0;
      /* ST_CALLSITE[004941DE]: CALL dword ptr [EDX + 0x90] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*(int *)this + 0x90))(3,0x16d);
      return;
    }
    if (iVar5 != 0x25) {
      return;
    }
  }
  if (param_1 == STField<int>(this,0x732)) {
    return;
  }
  if (param_1 != 1) {
    STField<undefined4>(this,0x732) = 0;
    /* ST_CALLSITE[004944C7]: CALL dword ptr [EAX + 0x90] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)this + 0x90))(3,0x16d);
    return;
  }
  if (STField<int>(this,0x726) < 1) {
    return;
  }
  STField<undefined4>(this,0x732) = 1;
  memset((void *)((int)this + 0x74e), 0, 0x20); /* compiler bulk-zero initialization */
  thunk_FUN_004945c0(this);
  bVar2 = STField<byte>(this,0x24);
  if (DAT_00808a8f == '\0') {
    if (DAT_0080874d == bVar2) {
LAB_004942e7:
      iVar5 = 0;
    }
    else {
      uVar4 = (uint)DAT_0080874d;
      bVar3 = g_playerRelationMatrix[uVar4][bVar2];
      if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][uVar4] == 0)) {
        iVar5 = -2;
      }
      else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar2][uVar4] == 0)) {
        iVar5 = -1;
      }
      else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][uVar4] == 1)) {
        iVar5 = 1;
      }
      else {
        if ((bVar3 != 1) || (g_playerRelationMatrix[bVar2][uVar4] != 1)) goto LAB_004942e7;
        iVar5 = 2;
      }
    }
    bVar7 = iVar5 < 0;
  }
  else {
    bVar7 = g_bulkInitializedRecords_008087C7[bVar2].field_0023 !=
            g_bulkInitializedRecords_008087C7[DAT_0080874d].field_0023;
  }
  if (!bVar7) {
    if (DAT_00808a8f == '\0') {
      if (bVar2 == DAT_0080874d) {
LAB_004943a0:
        iVar5 = 0;
      }
      else {
        uVar4 = (uint)DAT_0080874d;
        bVar3 = g_playerRelationMatrix[bVar2][uVar4];
        if ((bVar3 == 0) && (g_playerRelationMatrix[uVar4][bVar2] == 0)) {
          iVar5 = -2;
        }
        else if ((bVar3 == 1) && (g_playerRelationMatrix[uVar4][bVar2] == 0)) {
          iVar5 = -1;
        }
        else if ((bVar3 == 0) && (g_playerRelationMatrix[uVar4][bVar2] == 1)) {
          iVar5 = 1;
        }
        else {
          if ((bVar3 != 1) || (g_playerRelationMatrix[uVar4][bVar2] != 1)) goto LAB_004943a0;
          iVar5 = 2;
        }
      }
      bVar7 = iVar5 < 0;
    }
    else {
      bVar7 = g_bulkInitializedRecords_008087C7[DAT_0080874d].field_0023 !=
              g_bulkInitializedRecords_008087C7[bVar2].field_0023;
    }
    if (!bVar7) {
      pSVar1 = (STT3DSprC *)((int)this + 0x1d5);
      /* ST_CALLSITE[004943BA]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
      STT3DSprC::sub_004ACE60(pSVar1,'\x0e');
      /* ST_CALLSITE[004943C3]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
      STT3DSprC::sub_004ACE60(pSVar1,'\r');
      /* ST_CALLSITE[004943CC]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
      STT3DSprC::sub_004ACE60(pSVar1,'\f');
      thunk_FUN_004aceb0(pSVar1,'\x01');
      thunk_FUN_004aceb0(pSVar1,'\x02');
      thunk_FUN_004aceb0(pSVar1,'\0');
      thunk_FUN_004aceb0(pSVar1,'\x0f');
      thunk_FUN_004aceb0(pSVar1,'\v');
      thunk_FUN_004aceb0(pSVar1,'\n');
      thunk_FUN_004aceb0(pSVar1,'\t');
      thunk_FUN_004aceb0(pSVar1,'\b');
      STField<undefined4>(this,0x746) = 0;
      goto LAB_00494498;
    }
  }
  pSVar1 = (STT3DSprC *)((int)this + 0x1d5);
  /* ST_CALLSITE[0049442F]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
  STT3DSprC::sub_004ACE60(pSVar1,'\x0e');
  /* ST_CALLSITE[00494438]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
  STT3DSprC::sub_004ACE60(pSVar1,'\r');
  /* ST_CALLSITE[00494441]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
  STT3DSprC::sub_004ACE60(pSVar1,'\f');
  /* ST_CALLSITE[0049444A]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
  STT3DSprC::sub_004ACE60(pSVar1,'\x01');
  /* ST_CALLSITE[00494453]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
  STT3DSprC::sub_004ACE60(pSVar1,'\x02');
  /* ST_CALLSITE[0049445C]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
  STT3DSprC::sub_004ACE60(pSVar1,'\0');
  /* ST_CALLSITE[00494465]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
  STT3DSprC::sub_004ACE60(pSVar1,'\x0f');
  /* ST_CALLSITE[0049446E]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
  STT3DSprC::sub_004ACE60(pSVar1,'\v');
  /* ST_CALLSITE[00494477]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
  STT3DSprC::sub_004ACE60(pSVar1,'\n');
  /* ST_CALLSITE[00494480]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
  STT3DSprC::sub_004ACE60(pSVar1,'\t');
  /* ST_CALLSITE[00494489]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
  STT3DSprC::sub_004ACE60(pSVar1,'\b');
  STField<undefined4>(this,0x746) = 1;
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
LAB_00494498:
  /* ST_CALLSITE[004944A3]: CALL dword ptr [EDX + 0x90] */
  (**(code **)(*(int *)this + 0x90))(3,0x16c);
  return;
}

