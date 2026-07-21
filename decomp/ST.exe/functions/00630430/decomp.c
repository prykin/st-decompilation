#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_ruinm.cpp
   STManRuinC::GetMessage */

undefined4 __thiscall STManRuinC::GetMessage(STManRuinC *this,AnonShape_00630430_1F5C6718 *param_1)

{
  uint uVar1;
  code *pcVar2;
  STJellyGunC *this_00;
  int iVar3;
  undefined4 *puVar4;
  ushort *puVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  AnonNested_00630430_0014_3EDE47A6 *pAVar9;
  InternalExceptionFrame local_58;
  byte *local_14;
  uint local_10;
  STJellyGunC *local_c;
  ushort *local_8;

  local_8 = (ushort *)0x0;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_c = (STJellyGunC *)this;
  iVar3 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  this_00 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar6 = ReportDebugMessage(s_E____titans_nick_to_ruinm_cpp_007d19f8,0x94,0,iVar3,&DAT_007a4ccc,
                               s_STManRuinC__GetMessage_007d1a1c);
    if (iVar6 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_nick_to_ruinm_cpp_007d19f8,0x96);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  uVar1 = param_1->field_0010;
  if (3 < uVar1) {
    if (uVar1 != 0x10f) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    local_14 = (byte *)thunk_FUN_00631220(local_c,(int *)&local_10);
    STPlaySystemC::SaveObjData(PTR_00802a38,PTR_DAT_0079d198,local_14,local_10,0xc);
    FreeAndNull(&local_14);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (uVar1 == 3) {
    thunk_FUN_00631560((int)local_c);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (uVar1 == 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((*(int *)&local_c->field_003C != 0) &&
       (uVar1 = *(uint *)(*(int *)&local_c->field_003C + 0xc), uVar1 != 0)) {
      while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
        iVar3 = *(int *)&this_00->field_003C;
        if (uVar1 < *(uint *)(iVar3 + 0xc)) {
          puVar4 = (undefined4 *)(*(int *)(iVar3 + 8) * uVar1 + *(int *)(iVar3 + 0x1c));
        }
        else {
          puVar4 = (undefined4 *)0x0;
        }
        if (puVar4 != (undefined4 *)0x0) {
          if ((puVar4[1] == 1) && (puVar4[2] == 0)) {
            iVar3 = thunk_FUN_00630ff0();
            puVar4[2] = iVar3;
            if (iVar3 != 0) {
              puVar5 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006308F0::
                       thunk_FUN_00630c50((AnonReceiver_006308F0 *)this_00,*puVar4,puVar4[3],1,1,0);
              if (puVar5 == (ushort *)0x0) {
                puVar4[2] = 0;
              }
              else {
                puVar4[1] = 2;
              }
            }
          }
          iVar3 = puVar4[1];
          if ((iVar3 == 2) || (iVar3 == 1)) {
            if ((puVar4[2] != 0) || (iVar3 == 2)) {
              FUN_006e9350(PTR_00807598,*(uint *)((int)puVar4 + 0x21),
                           *(uint *)(DAT_00806724 + 0x30 + (uint)*(byte *)(puVar4 + 8) * 4),
                           (int)*(short *)(DAT_00806724 + 0x2c));
            }
            if ((uint)PTR_00802a38->field_00E4 % 6 == 0) {
              *(char *)(puVar4 + 8) = *(char *)(puVar4 + 8) + '\x01';
            }
            if (*(short *)(DAT_00806724 + 0x23) <= (short)(ushort)*(byte *)(puVar4 + 8)) {
              FUN_006e8ba0(PTR_00807598,*(uint *)((int)puVar4 + 0x21));
              FUN_006b0c70(*(DArrayTy **)&this_00->field_003C,uVar1);
            }
          }
        }
      }
    }
    thunk_FUN_00631010((AnonShape_00631010_DBA5BE90 *)this_00);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (uVar1 != 2) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  *(int *)&local_c->field_0x71 = local_c->field_0018 * DAT_00808754;
  if (g_cMf32_00806754 != (cMf32 *)0x0) {
    local_8 = Library::Ourlib::MFAOBJ::mfAObjLoad(g_cMf32_00806754,PTR_DAT_0079d198,0,0);
  }
  if (local_8 == (ushort *)0x0) {
LAB_006304e7:
    *(undefined4 *)&this_00->field_0x1c = 0;
    *(undefined4 *)&this_00->field_0x20 = 0xff;
    *(undefined4 *)&this_00->field_0x24 = 1;
    *(undefined4 *)&this_00->field_0x28 = 1;
  }
  else {
    if (*(int *)(local_8 + 6) == 2) {
      thunk_FUN_00631390(this_00,(undefined4 *)local_8);
      *(undefined4 *)&this_00->field_0x71 = *(undefined4 *)((int)&this_00->field_0064 + 1);
      thunk_FUN_00631450((AnonShape_00631450_C4E92303 *)this_00);
      goto LAB_00630558;
    }
    if (local_8 == (ushort *)0x0) goto LAB_006304e7;
    pAVar9 = param_1->field_0014;
    puVar4 = (undefined4 *)&this_00->field_0x1c;
    for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = pAVar9->field_0000;
      pAVar9 = (AnonNested_00630430_0014_3EDE47A6 *)&pAVar9->field_0004;
      puVar4 = puVar4 + 1;
    }
  }
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  iVar3._0_2_ = this_00->field_0034;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  iVar3._2_2_ = this_00->field_0036;
  if (iVar3 == 0) {
    uVar1 = (int)g_worldGrid.sizeX * (int)g_worldGrid.sizeY * 5;
    puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(uVar1);
    *(undefined4 **)&this_00->field_0034 = puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      thunk_FUN_006308b0(this_00);
    }
    else {
      for (uVar8 = uVar1 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      for (uVar8 = uVar1 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar4 = 0;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      *(uint *)&this_00->field_0x30 = uVar1;
    }
  }
LAB_00630558:
  if ((local_8 != (ushort *)0x0) && (g_cMf32_00806754 != (cMf32 *)0x0)) {
    cMf32::RecMemFree(g_cMf32_00806754,(uint *)&local_8);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

