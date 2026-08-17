#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004df3b0(TLOBaseTy *param_1)

{
  TLOBaseTy_field_04D0State TVar1;
  uint uVar2;
  int iVar3;
  dword dVar4;
  int iVar5;

  TVar1 = param_1->field_04D0;
  if (TVar1 == CASE_0) {
    if ((param_1->field_04E0[0] != 0) || (param_1->field_04D4 == 1)) {
      param_1->field_04D0 = CASE_1;
      param_1->field_04D4 = 0;
      /* ST_CALLSITE[004DF62C]: CALL 0x00402cf7; direct=00402CF7 TLOBaseTy::RotateSpr */
      TLOBaseTy::RotateSpr(param_1,0);
      thunk_FUN_004c2c10((AnonShape_004C2C10_59B6D93C *)param_1);
    }
  }
  else if (TVar1 == CASE_1) {
    if ((param_1->field_04D8 == 0) || (param_1->field_04D4 == 2)) {
      iVar3 = thunk_FUN_004ac910(&param_1->field_01D5,'\x0e');
      if (iVar3 == param_1->field_01F5->field_020C) {
        param_1->field_04D0 = CASE_2;
        uVar2 = g_playSystem_00802A38->field_00E4;
        param_1->field_04D4 = 0;
        param_1->field_04DC = uVar2;
        /* ST_CALLSITE[004DF5AE]: CALL 0x00402cf7; direct=00402CF7 TLOBaseTy::RotateSpr */
        TLOBaseTy::RotateSpr(param_1,0);
        /* ST_CALLSITE[004DF5B7]: CALL dword ptr [EDX + 0x2c] */
        dVar4 = param_1->slot_2C();
        thunk_FUN_004b76d0(STReplaceLowByte((uint32_t)(dVar4), (uint8_t)(*(undefined1 *)&param_1->field_0024)),dVar4);
        if (param_1->field_0024 == (byte *)(uint)(byte)param_1->field_0010->field_112D) {
          thunk_FUN_004d8b70((char)param_1->field_0024);
        }
        thunk_FUN_004c2d40((AnonShape_004C2D40_7C578146 *)param_1);
        /* ST_CALLSITE[004DF5FA]: CALL dword ptr [EDX + 0x90] */
        param_1->vfunc_90(3,0x26c);
        return 0;
      }
    }
    else {
      if (param_1->field_0408 == 0) {
        thunk_FUN_004c2c10((AnonShape_004C2C10_59B6D93C *)param_1);
        /* ST_CALLSITE[004DF52F]: CALL dword ptr [EDX + 0x90] */
        param_1->vfunc_90(3,0x26b);
      }
      if (param_1->field_04DC + 7 <= g_playSystem_00802A38->field_00E4) {
        param_1->field_04DC = g_playSystem_00802A38->field_00E4;
        thunk_FUN_004df370(param_1,param_1->field_04D8 + -100);
        return 0;
      }
    }
  }
  else if (TVar1 == CASE_2) {
    iVar5 = 0xf;
    iVar3 = thunk_FUN_004b79c0(*(char *)&param_1->field_0024,(int)param_1->field_0018);
    if (iVar3 == 0) {
      iVar5 = 0x3c;
    }
    if (param_1->field_04DC + iVar5 <= g_playSystem_00802A38->field_00E4) {
      iVar3 = param_1->field_04D8 + 100;
      param_1->field_04D8 = iVar3;
      if (9999 < iVar3) {
        param_1->field_04D8 = 10000;
        param_1->field_04D0 = CASE_0;
        /* ST_CALLSITE[004DF434]: CALL 0x00402cf7; direct=00402CF7 TLOBaseTy::RotateSpr */
        TLOBaseTy::RotateSpr(param_1,0);
        /* ST_CALLSITE[004DF43D]: CALL dword ptr [EDX + 0x2c] */
        dVar4 = param_1->slot_2C();
        thunk_FUN_004b7710(STReplaceLowByte((uint32_t)(dVar4), (uint8_t)(*(undefined1 *)&param_1->field_0024)),dVar4);
        if (param_1->field_0024 == (byte *)(uint)(byte)param_1->field_0010->field_112D) {
          thunk_FUN_004d8b70((char)param_1->field_0024);
        }
      }
      param_1->field_04DC = g_playSystem_00802A38->field_00E4;
    }
    if (param_1->field_04D4 == 1) {
      param_1->field_04D0 = CASE_1;
      param_1->field_04D4 = 0;
      /* ST_CALLSITE[004DF4A2]: CALL 0x00402cf7; direct=00402CF7 TLOBaseTy::RotateSpr */
      TLOBaseTy::RotateSpr(param_1,0);
      thunk_FUN_004c2c10((AnonShape_004C2C10_59B6D93C *)param_1);
      /* ST_CALLSITE[004DF4B9]: CALL dword ptr [EAX + 0x90] */
      param_1->vfunc_90(3,0x26b);
      /* ST_CALLSITE[004DF4C3]: CALL dword ptr [EDX + 0x2c] */
      dVar4 = param_1->slot_2C();
      thunk_FUN_004b7710(STReplaceLowByte((uint32_t)(dVar4), (uint8_t)(*(undefined1 *)&param_1->field_0024)),dVar4);
      if (param_1->field_0024 == (byte *)(uint)(byte)param_1->field_0010->field_112D) {
        thunk_FUN_004d8b70((char)param_1->field_0024);
        return 0;
      }
    }
  }
  return 0;
}

