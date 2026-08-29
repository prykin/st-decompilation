#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004d2760(TLOBaseTy *param_1)

{
  dword dVar1;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_ECX;
  DArrayTy *pDVar2;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  TLOBaseTy *extraout_EDX;
  TLOBaseTy *pTVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  TLOBaseTy *local_c;
  TLOBaseTy *local_8;

  local_8 = nullptr;
  if (*(int *)&param_1->field_0x2a0 != 0) {
    /* ST_CALLSITE[004D277E]: CALL 0x0040464c; direct=0040464C sub_0041C5A0 */
    sub_0041C5A0(param_1);
    /* ST_CALLSITE[004D279D]: CALL 0x00403297; direct=00403297 TLOBaseTy::sub_00417D30 */
    TLOBaseTy::sub_00417D30(param_1);
    if (param_1->field_002C == 0) {
      local_8 = (TLOBaseTy *)0x1;
    }
    else if (param_1->field_002C == 1) {
      local_8 = (TLOBaseTy *)0x2;
    }
    iVar4 = param_1->field_0261;
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    pTVar3 = extraout_EDX;
    if (iVar4 < (int)&local_8->vtable + iVar4) {
      do {
        iVar7 = param_1->field_025D;
        if (iVar7 < (int)&local_8->vtable + iVar7) {
          do {

            thunk_FUN_00496140((short)iVar7,(short)iVar4,(short)param_1->field_0265);
            iVar7 = iVar7 + 1;
          } while (iVar7 < (int)&local_8->vtable + param_1->field_025D);
        }
        iVar4 = iVar4 + 1;
        pTVar3 = local_8;
      } while (iVar4 < (int)&local_8->vtable + param_1->field_0261);
    }

    iVar4 = thunk_FUN_004b7520(STReplaceLowByte((uint32_t)(pTVar3), (uint8_t)(*(undefined1 *)&param_1->field_0024)),param_1->field_0259);
    if (iVar4 != 0) {
      /* ST_CALLSITE[004D2835]: CALL dword ptr [EAX + 0x2c] */
      dVar1 = param_1->vfunc_2C();
      /* ST_CALLSITE[004D2843]: CALL 0x00402f0e; direct=00402F0E STAllPlayersC::sub_004B7710 */
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      STAllPlayersC::sub_004B7710
                (g_allPlayers_007FA174,
                 STReplaceLowByte((uint32_t)(extraout_ECX), (uint8_t)(*(undefined1 *)&param_1->field_0024)),dVar1
                );
    }
    /* ST_CALLSITE[004D284A]: CALL 0x00404629; direct=00404629 TLOBaseTy::sub_0041D590 */
    TLOBaseTy::sub_0041D590(param_1);
  }
  if (99 < *(int *)&param_1->field_0x2a8) {
    param_1->field_034C = 0xfe;
  }
  /* ST_CALLSITE[004D286B]: CALL 0x0040207c; direct=0040207C TLOBaseTy::sub_00419D30 */
  TLOBaseTy::sub_00419D30(param_1,param_1->field_034C);
  if (g_array_007FA170 != nullptr) {
    dVar1 = g_array_007FA170->count;
    uVar5 = 0;
    if (0 < (int)dVar1) {
      do {

        DArrayGetElement(g_array_007FA170,uVar5,&local_c);
        if (local_c == param_1) {

          DArrayRemoveAt(g_array_007FA170,uVar5);
          break;
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)g_array_007FA170->count);
      dVar1 = g_array_007FA170->count;
    }
    if (dVar1 == 0) {
      DArrayDestroy(g_array_007FA170);
      g_array_007FA170 = nullptr;
    }
  }
  iVar4 = param_1->field_0259;
  if (iVar4 == 100) {
    pDVar2 = g_packedRecords_A62x8[(int)param_1->field_0024].field1968_0x9d6;
    if (pDVar2 != nullptr) {
      uVar5 = 0;
      if (0 < (int)pDVar2->count) {
        do {

          DArrayGetElement(pDVar2,uVar5,&local_8);
          if (local_8 == param_1) {

            DArrayRemoveAt(g_packedRecords_A62x8[(int)param_1->field_0024].field1968_0x9d6,uVar5);
            break;
          }
          uVar5 = uVar5 + 1;
          pDVar2 = g_packedRecords_A62x8[(int)param_1->field_0024].field1968_0x9d6;
        } while ((int)uVar5 < (int)pDVar2->count);
      }
      if ((g_packedRecords_A62x8[(int)param_1->field_0024].field1968_0x9d6)->count == 0) {
        DArrayDestroy(g_packedRecords_A62x8[(int)param_1->field_0024].field1968_0x9d6);
        g_packedRecords_A62x8[(int)param_1->field_0024].field1968_0x9d6 = nullptr;
      }
    }
  }
  else if (iVar4 == 0x4d) {
    pDVar2 = g_packedRecords_A62x8[(int)param_1->field_0024].field1971_0x9e2;
    if (pDVar2 != nullptr) {
      uVar5 = 0;
      if (0 < (int)pDVar2->count) {
        do {

          DArrayGetElement(pDVar2,uVar5,&local_8);
          if (local_8 == param_1) {

            DArrayRemoveAt(g_packedRecords_A62x8[(int)param_1->field_0024].field1971_0x9e2,uVar5);
            break;
          }
          uVar5 = uVar5 + 1;
          pDVar2 = g_packedRecords_A62x8[(int)param_1->field_0024].field1971_0x9e2;
        } while ((int)uVar5 < (int)pDVar2->count);
      }
      if ((g_packedRecords_A62x8[(int)param_1->field_0024].field1971_0x9e2)->count == 0) {
        DArrayDestroy(g_packedRecords_A62x8[(int)param_1->field_0024].field1971_0x9e2);
        g_packedRecords_A62x8[(int)param_1->field_0024].field1971_0x9e2 = nullptr;
      }
    }
  }
  else if (iVar4 == 0x43) {
    pDVar2 = g_packedRecords_A62x8[(int)param_1->field_0024].field1974_0x9ee;
    if (pDVar2 != nullptr) {
      uVar5 = 0;
      if (0 < (int)pDVar2->count) {
        do {

          DArrayGetElement(pDVar2,uVar5,&local_8);
          if (local_8 == param_1) {

            DArrayRemoveAt(g_packedRecords_A62x8[(int)param_1->field_0024].field1974_0x9ee,uVar5);
            break;
          }
          uVar5 = uVar5 + 1;
          pDVar2 = g_packedRecords_A62x8[(int)param_1->field_0024].field1974_0x9ee;
        } while ((int)uVar5 < (int)pDVar2->count);
      }
      if ((g_packedRecords_A62x8[(int)param_1->field_0024].field1974_0x9ee)->count == 0) {
        DArrayDestroy(g_packedRecords_A62x8[(int)param_1->field_0024].field1974_0x9ee);
        g_packedRecords_A62x8[(int)param_1->field_0024].field1974_0x9ee = nullptr;
      }
    }
  }
  else if (iVar4 == 0x73) {
    pDVar2 = g_packedRecords_A62x8[(int)param_1->field_0024].field1975_0x9f2;
    if (pDVar2 != nullptr) {
      uVar5 = 0;
      if (0 < (int)pDVar2->count) {
        do {

          DArrayGetElement(pDVar2,uVar5,&local_8);
          if (local_8 == param_1) {

            DArrayRemoveAt(g_packedRecords_A62x8[(int)param_1->field_0024].field1975_0x9f2,uVar5);
            break;
          }
          uVar5 = uVar5 + 1;
          pDVar2 = g_packedRecords_A62x8[(int)param_1->field_0024].field1975_0x9f2;
        } while ((int)uVar5 < (int)pDVar2->count);
      }
      if ((g_packedRecords_A62x8[(int)param_1->field_0024].field1975_0x9f2)->count == 0) {
        DArrayDestroy(g_packedRecords_A62x8[(int)param_1->field_0024].field1975_0x9f2);
        g_packedRecords_A62x8[(int)param_1->field_0024].field1975_0x9f2 = nullptr;
      }
    }
  }
  else if (iVar4 == 0x3a) {
    if (g_array_007FA16C != nullptr) {
      dVar1 = g_array_007FA16C->count;
      uVar5 = 0;
      if (0 < (int)dVar1) {
        do {

          DArrayGetElement((DArrayTy *)g_array_007FA16C,uVar5,&local_8);
          if (local_8 == param_1) {

            DArrayRemoveAt((DArrayTy *)g_array_007FA16C,uVar5);
            break;
          }
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < (int)g_array_007FA16C->count);
        dVar1 = g_array_007FA16C->count;
      }
      if (dVar1 == 0) {
        DArrayDestroy((DArrayTy *)g_array_007FA16C);
        g_array_007FA16C = nullptr;
      }
    }
  }
  else if (iVar4 == 0x65) {
    pDVar2 = g_packedRecords_A62x8[(int)param_1->field_0024].field1972_0x9e6;
    if (pDVar2 != nullptr) {
      uVar5 = 0;
      if (0 < (int)pDVar2->count) {
        do {

          DArrayGetElement(pDVar2,uVar5,&local_8);
          if (local_8 == param_1) {

            DArrayRemoveAt(g_packedRecords_A62x8[(int)param_1->field_0024].field1972_0x9e6,uVar5);
            break;
          }
          uVar5 = uVar5 + 1;
          pDVar2 = g_packedRecords_A62x8[(int)param_1->field_0024].field1972_0x9e6;
        } while ((int)uVar5 < (int)pDVar2->count);
      }
      if ((g_packedRecords_A62x8[(int)param_1->field_0024].field1972_0x9e6)->count == 0) {
        DArrayDestroy(g_packedRecords_A62x8[(int)param_1->field_0024].field1972_0x9e6);
        g_packedRecords_A62x8[(int)param_1->field_0024].field1972_0x9e6 = nullptr;
      }
    }
  }
  else if ((iVar4 == 0x3b) &&
          (pDVar2 = g_packedRecords_A62x8[(int)param_1->field_0024].field1973_0x9ea,
          pDVar2 != nullptr)) {
    uVar5 = 0;
    if (0 < (int)pDVar2->count) {
      do {

        DArrayGetElement(pDVar2,uVar5,&local_8);
        if (local_8 == param_1) {

          DArrayRemoveAt(g_packedRecords_A62x8[(int)param_1->field_0024].field1973_0x9ea,uVar5);
          break;
        }
        uVar5 = uVar5 + 1;
        pDVar2 = g_packedRecords_A62x8[(int)param_1->field_0024].field1973_0x9ea;
      } while ((int)uVar5 < (int)pDVar2->count);
    }
    if ((g_packedRecords_A62x8[(int)param_1->field_0024].field1973_0x9ea)->count == 0) {
      DArrayDestroy(g_packedRecords_A62x8[(int)param_1->field_0024].field1973_0x9ea);
      g_packedRecords_A62x8[(int)param_1->field_0024].field1973_0x9ea = nullptr;
    }
  }
  puVar6 = (undefined4 *)&param_1->field_0x350;
  iVar4 = 3;
  do {
    if ((STT3DSprC *)*puVar6 != nullptr) {
      thunk_FUN_004ad310((STT3DSprC *)*puVar6);
      Library::MSVCRT::FUN_0072e2b0((HoloTy *)*puVar6);
    }
    puVar6 = puVar6 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (param_1->field_035C != nullptr) {
    thunk_FUN_004ad310(param_1->field_035C);
    Library::MSVCRT::FUN_0072e2b0((HoloTy *)param_1->field_035C);
  }
  thunk_FUN_004ad310((STT3DSprC *)&param_1->field_01D5);
  return 0;
}

