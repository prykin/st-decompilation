#include "../../pseudocode_runtime.h"


void __thiscall FUN_00494160(void *this,int param_1)

{
  STT3DSprC *pSVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  bool bVar7;

  iVar5 = *(int *)((int)this + 0x6f7);
  if (iVar5 != 0x16) {
    if (iVar5 == 0x23) {
      if (param_1 == *(int *)((int)this + 0x72e)) {
        return;
      }
      if (param_1 == 1) {
        if (*(int *)((int)this + 0x722) < 1) {
          return;
        }
        *(undefined4 *)((int)this + 0x72e) = 1;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*(int *)this + 0x90))(3,0x16c);
        return;
      }
      *(undefined4 *)((int)this + 0x72e) = 0;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0x90))(3,0x16d);
      return;
    }
    if (iVar5 != 0x25) {
      return;
    }
  }
  if (param_1 == *(int *)((int)this + 0x732)) {
    return;
  }
  if (param_1 != 1) {
    *(undefined4 *)((int)this + 0x732) = 0;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)this + 0x90))(3,0x16d);
    return;
  }
  if (*(int *)((int)this + 0x726) < 1) {
    return;
  }
  *(undefined4 *)((int)this + 0x732) = 1;
  memset((void *)((int)this + 0x74e), 0, 0x20); /* compiler bulk-zero initialization */
  thunk_FUN_004945c0(this);
  bVar2 = *(byte *)((int)this + 0x24);
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
    bVar7 = (&DAT_008087ea)[(uint)bVar2 * 0x51] != (&DAT_008087ea)[(uint)DAT_0080874d * 0x51];
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
      bVar7 = (&DAT_008087ea)[(uint)DAT_0080874d * 0x51] != (&DAT_008087ea)[(uint)bVar2 * 0x51];
    }
    if (!bVar7) {
      pSVar1 = (STT3DSprC *)((int)this + 0x1d5);
      STT3DSprC::sub_004ACE60(pSVar1,'\x0e');
      STT3DSprC::sub_004ACE60(pSVar1,'\r');
      STT3DSprC::sub_004ACE60(pSVar1,'\f');
      thunk_FUN_004aceb0(pSVar1,'\x01');
      thunk_FUN_004aceb0(pSVar1,'\x02');
      thunk_FUN_004aceb0(pSVar1,'\0');
      thunk_FUN_004aceb0(pSVar1,'\x0f');
      thunk_FUN_004aceb0(pSVar1,'\v');
      thunk_FUN_004aceb0(pSVar1,'\n');
      thunk_FUN_004aceb0(pSVar1,'\t');
      thunk_FUN_004aceb0(pSVar1,'\b');
      *(undefined4 *)((int)this + 0x746) = 0;
      goto LAB_00494498;
    }
  }
  pSVar1 = (STT3DSprC *)((int)this + 0x1d5);
  STT3DSprC::sub_004ACE60(pSVar1,'\x0e');
  STT3DSprC::sub_004ACE60(pSVar1,'\r');
  STT3DSprC::sub_004ACE60(pSVar1,'\f');
  STT3DSprC::sub_004ACE60(pSVar1,'\x01');
  STT3DSprC::sub_004ACE60(pSVar1,'\x02');
  STT3DSprC::sub_004ACE60(pSVar1,'\0');
  STT3DSprC::sub_004ACE60(pSVar1,'\x0f');
  STT3DSprC::sub_004ACE60(pSVar1,'\v');
  STT3DSprC::sub_004ACE60(pSVar1,'\n');
  STT3DSprC::sub_004ACE60(pSVar1,'\t');
  STT3DSprC::sub_004ACE60(pSVar1,'\b');
  *(undefined4 *)((int)this + 0x746) = 1;
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_00494498:
  (**(code **)(*(int *)this + 0x90))(3,0x16c);
  return;
}

