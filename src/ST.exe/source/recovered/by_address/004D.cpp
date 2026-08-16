#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/004D.cpp

// 004D0670 FUN_004d0670
#line 4 "decomp/ST.exe/functions/004D0670/decomp.c"
undefined4 __fastcall st::fn_004D0670(int param_1)

{
  char cVar1;
  int iVar3;
  int iVar2;
  uint uVar4;
  uint uVar5;
  char *pcVar6;

  uVar5 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)(param_1 + 0x4d0) == 3) || (*(int *)(param_1 + 0x4d0) == 2)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(*(int *)(param_1 + 0x1f5) + 0x154) < *(int *)(*(int *)(param_1 + 0x1f5) + 0x158)) {
      iVar3 = st::fn_004042AF((void *)(param_1 + 0x1d5),'\t');
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (iVar3 < *(int *)(*(int *)(param_1 + 0x1f5) + 0x154) + 2) {
        return 0;
      }
    }
    else {
      iVar3 = st::fn_004042AF((void *)(param_1 + 0x1d5),'\t');
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)(*(int *)(param_1 + 0x1f5) + 0x154) + -2 < iVar3) {
        return 0;
      }
    }
    iVar2 = st::fn_0040581C();
    uVar4 = 0;
    switch(iVar2) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case 0:
      uVar5 = *(uint *)(&DAT_007a90b8 + *(int *)(param_1 + 0x369) * 0x10);
      uVar4 = DAT_007a9438;
      break;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case 1:
      uVar5 = *(uint *)(&DAT_007a90bc + *(int *)(param_1 + 0x369) * 0x10);
      uVar4 = DAT_007a943c;
      break;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case 2:
      uVar5 = *(uint *)(&DAT_007a90c0 + *(int *)(param_1 + 0x369) * 0x10);
      uVar4 = DAT_007a9440;
      break;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case 3:
      uVar5 = *(uint *)(&DAT_007a90c4 + *(int *)(param_1 + 0x369) * 0x10);
      uVar4 = DAT_007a9444;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_00401EBA(*(void **)(param_1 + 0x5ff),0xe,uVar5,uVar5,'\0');
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_00401EBA(*(void **)(param_1 + 0x5ff),0xc,uVar5,uVar5,'\0');
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_00401064(*(STT3DSprC **)(param_1 + 0x5ff),'\x0e',uVar5);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_00401064(*(STT3DSprC **)(param_1 + 0x5ff),'\f',uVar5);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_00405240(*(STT3DSprC **)(param_1 + 0x5ff),0xe,g_playSystem_00802A38->field_00E4);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_00405240(*(STT3DSprC **)(param_1 + 0x5ff),0xc,g_playSystem_00802A38->field_00E4);
    iVar3 = -1;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    pcVar6 = (char *)((int)&DAT_007a9440 + *(int *)(param_1 + 0x369) * 6 + 2);
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if (iVar3 != -2) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      st::fn_00401EBA(*(void **)(param_1 + 0x5ff),0xd,uVar4,uVar4,'\0');
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      st::fn_00401064(*(STT3DSprC **)(param_1 + 0x5ff),'\r',uVar4);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      st::fn_00405240(*(STT3DSprC **)(param_1 + 0x5ff),0xd,g_playSystem_00802A38->field_00E4);
    }
  }
  return 0;
}

// 004D08C0 FUN_004d08c0
#line 4 "decomp/ST.exe/functions/004D08C0/decomp.c"
undefined4 st::fn_004D08C0(void)

{
  return 0;
}

// 004D08E0 FUN_004d08e0
#line 4 "decomp/ST.exe/functions/004D08E0/decomp.c"
undefined4 st::fn_004D08E0(void)

{
  return 1;
}

// 004D0900 FUN_004d0900
#line 4 "decomp/ST.exe/functions/004D0900/decomp.c"
undefined4 st::fn_004D0900(void)

{
  return 1;
}

// 004D0ED0 CreateTLOFake
#line 4 "decomp/ST.exe/functions/004D0ED0/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA7F4>0040382D

   [STObjectFactoryApplier] Central object factory for 0x0202 (ST_OBJECT_TLO_FAKE).
   Evidence: registry[26] at 007CA7F0 stores type 0x0202 and executable pointer 0040382D; allocation
   size 593 uniquely matches /TLOFakeTy */

TLOFakeTy * __cdecl st::fn_004D0ED0(void)

{
  TLOFakeTy *pTVar1;

  pTVar1 = (TLOFakeTy *)st::fn_006B04D0(0x251);
  if (pTVar1 != nullptr) {
    pTVar1 = st::fn_004047D2(pTVar1);
    return pTVar1;
  }
  return nullptr;
}

// 004D0F00 FUN_004d0f00
#line 4 "decomp/ST.exe/functions/004D0F00/decomp.c"
undefined4 st::fn_004D0F00(void)

{
  undefined4 local_20 [7];

  memset(local_20, 0, 0x1c); /* compiler bulk-zero initialization */
  local_20[4] = 0;
  local_20[3] = 1;
  local_20[2] = 2;
  local_20[1] = 0xff;
  local_20[0] = 0x3ea;
  st::fn_00401BC2(g_playSystem_00802A38,0x3ea,0,0,st::machine_word_boundary_cast<undefined4>(local_20),0);
  return 0;
}

// 004D0F80 FUN_004d0f80
#line 4 "decomp/ST.exe/functions/004D0F80/decomp.c"
undefined4 st::fn_004D0F80(void)

{
  return 0;
}

// 004D0FA0 FUN_004d0fa0
#line 4 "decomp/ST.exe/functions/004D0FA0/decomp.c"
undefined4 st::fn_004D0FA0(void)

{
  return 0;
}

// 004D2760 FUN_004d2760
#line 4 "decomp/ST.exe/functions/004D2760/decomp.c"
undefined4 __fastcall st::fn_004D2760(TLOBaseTy *param_1)

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
  undefined4 *puVar6;
  int iVar7;
  TLOBaseTy *local_c;
  TLOBaseTy *local_8;

  local_8 = nullptr;
  if (*(int *)&param_1->field_0x2a0 != 0) {
    st::fn_0040464C(param_1);
    st::fn_00403297(param_1);
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
            st::fn_0040232E((short)iVar7,(short)iVar4,*(short *)&param_1->field_0265);
            iVar7 = iVar7 + 1;
          } while (iVar7 < (int)&local_8->vtable + param_1->field_025D);
        }
        iVar4 = iVar4 + 1;
        pTVar3 = local_8;
      } while (iVar4 < (int)&local_8->vtable + param_1->field_0261);
    }
    iVar4 = st::fn_00402077(STReplaceLowByte((uint32_t)(pTVar3), (uint8_t)(*(undefined1 *)&param_1->field_0024)),param_1->field_0259);
    if (iVar4 != 0) {
      dVar1 = param_1->slot_2C();
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      st::fn_00402F0E(STReplaceLowByte((uint32_t)(extraout_ECX), (uint8_t)(*(undefined1 *)&param_1->field_0024)),dVar1);
    }
    st::fn_00404629(param_1);
  }
  if (99 < *(int *)&param_1->field_0x2a8) {
    param_1->field_034C = 0xfe;
  }
  st::fn_0040207C(param_1,param_1->field_034C);
  if (g_array_007FA170 != nullptr) {
    dVar1 = g_array_007FA170->count;
    uVar5 = 0;
    if (0 < (int)dVar1) {
      do {
        st::fn_006ACC70(g_array_007FA170,uVar5,&local_c);
        if (local_c == param_1) {
          st::fn_006B0C70(g_array_007FA170,uVar5);
          break;
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)g_array_007FA170->count);
      dVar1 = g_array_007FA170->count;
    }
    if (dVar1 == 0) {
      st::fn_006AE110(g_array_007FA170);
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
          st::fn_006ACC70(pDVar2,uVar5,&local_8);
          if (local_8 == param_1) {
            st::fn_006B0C70(g_packedRecords_A62x8[(int)param_1->field_0024].field1968_0x9d6,uVar5);
            break;
          }
          uVar5 = uVar5 + 1;
          pDVar2 = g_packedRecords_A62x8[(int)param_1->field_0024].field1968_0x9d6;
        } while ((int)uVar5 < (int)pDVar2->count);
      }
      if ((g_packedRecords_A62x8[(int)param_1->field_0024].field1968_0x9d6)->count == 0) {
        st::fn_006AE110(g_packedRecords_A62x8[(int)param_1->field_0024].field1968_0x9d6);
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
          st::fn_006ACC70(pDVar2,uVar5,&local_8);
          if (local_8 == param_1) {
            st::fn_006B0C70(g_packedRecords_A62x8[(int)param_1->field_0024].field1971_0x9e2,uVar5);
            break;
          }
          uVar5 = uVar5 + 1;
          pDVar2 = g_packedRecords_A62x8[(int)param_1->field_0024].field1971_0x9e2;
        } while ((int)uVar5 < (int)pDVar2->count);
      }
      if ((g_packedRecords_A62x8[(int)param_1->field_0024].field1971_0x9e2)->count == 0) {
        st::fn_006AE110(g_packedRecords_A62x8[(int)param_1->field_0024].field1971_0x9e2);
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
          st::fn_006ACC70(pDVar2,uVar5,&local_8);
          if (local_8 == param_1) {
            st::fn_006B0C70(g_packedRecords_A62x8[(int)param_1->field_0024].field1974_0x9ee,uVar5);
            break;
          }
          uVar5 = uVar5 + 1;
          pDVar2 = g_packedRecords_A62x8[(int)param_1->field_0024].field1974_0x9ee;
        } while ((int)uVar5 < (int)pDVar2->count);
      }
      if ((g_packedRecords_A62x8[(int)param_1->field_0024].field1974_0x9ee)->count == 0) {
        st::fn_006AE110(g_packedRecords_A62x8[(int)param_1->field_0024].field1974_0x9ee);
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
          st::fn_006ACC70(pDVar2,uVar5,&local_8);
          if (local_8 == param_1) {
            st::fn_006B0C70(g_packedRecords_A62x8[(int)param_1->field_0024].field1975_0x9f2,uVar5);
            break;
          }
          uVar5 = uVar5 + 1;
          pDVar2 = g_packedRecords_A62x8[(int)param_1->field_0024].field1975_0x9f2;
        } while ((int)uVar5 < (int)pDVar2->count);
      }
      if ((g_packedRecords_A62x8[(int)param_1->field_0024].field1975_0x9f2)->count == 0) {
        st::fn_006AE110(g_packedRecords_A62x8[(int)param_1->field_0024].field1975_0x9f2);
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
          st::fn_006ACC70(g_array_007FA16C,uVar5,&local_8);
          if (local_8 == param_1) {
            st::fn_006B0C70(g_array_007FA16C,uVar5);
            break;
          }
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < (int)g_array_007FA16C->count);
        dVar1 = g_array_007FA16C->count;
      }
      if (dVar1 == 0) {
        st::fn_006AE110(g_array_007FA16C);
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
          st::fn_006ACC70(pDVar2,uVar5,&local_8);
          if (local_8 == param_1) {
            st::fn_006B0C70(g_packedRecords_A62x8[(int)param_1->field_0024].field1972_0x9e6,uVar5);
            break;
          }
          uVar5 = uVar5 + 1;
          pDVar2 = g_packedRecords_A62x8[(int)param_1->field_0024].field1972_0x9e6;
        } while ((int)uVar5 < (int)pDVar2->count);
      }
      if ((g_packedRecords_A62x8[(int)param_1->field_0024].field1972_0x9e6)->count == 0) {
        st::fn_006AE110(g_packedRecords_A62x8[(int)param_1->field_0024].field1972_0x9e6);
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
        st::fn_006ACC70(pDVar2,uVar5,&local_8);
        if (local_8 == param_1) {
          st::fn_006B0C70(g_packedRecords_A62x8[(int)param_1->field_0024].field1973_0x9ea,uVar5);
          break;
        }
        uVar5 = uVar5 + 1;
        pDVar2 = g_packedRecords_A62x8[(int)param_1->field_0024].field1973_0x9ea;
      } while ((int)uVar5 < (int)pDVar2->count);
    }
    if ((g_packedRecords_A62x8[(int)param_1->field_0024].field1973_0x9ea)->count == 0) {
      st::fn_006AE110(g_packedRecords_A62x8[(int)param_1->field_0024].field1973_0x9ea);
      g_packedRecords_A62x8[(int)param_1->field_0024].field1973_0x9ea = nullptr;
    }
  }
  puVar6 = (undefined4 *)&param_1->field_0x350;
  iVar4 = 3;
  do {
    if ((STT3DSprC *)*puVar6 != nullptr) {
      st::fn_004021D5((STT3DSprC *)*puVar6);
      st::fn_0072E2B0((HoloTy *)*puVar6);
    }
    puVar6 = puVar6 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (param_1->field_035C != nullptr) {
    st::fn_004021D5(param_1->field_035C);
    st::fn_0072E2B0((HoloTy *)param_1->field_035C);
  }
  st::fn_004021D5((STT3DSprC *)&param_1->field_01D5);
  return 0;
}

// 004D2FD0 FUN_004d2fd0
#line 4 "decomp/ST.exe/functions/004D2FD0/decomp.c"
undefined4 __fastcall st::fn_004D2FD0(int param_1)

{
  byte *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte **slotStorage;
  byte *puVar6;
  byte *pbVar7;
  undefined4 local_17c;
  undefined4 local_170;
  undefined4 local_10d [44];
  uint local_5d;
  int local_59;
  uint local_55;
  int local_51;
  uint local_4d;
  int local_49;
  uint local_45 [6];
  byte *local_2c [5];
  int local_18;
  byte *local_14;
  byte *local_10;
  AnonShape_0060EA30_DCEB68AD *local_c;
  byte *local_8;

  local_2c[3] = nullptr;
  local_10 = nullptr;
  local_14 = nullptr;
  if (param_1 == 0) {
    puVar1 = nullptr;
  }
  else {
    puVar1 = (byte *)(param_1 + 0x231);
  }
  puVar6 = (byte *)(&local_17c);
  memmove(puVar6, puVar1, 0x6f); /* compiler REP MOVS byte copy */
  iVar2 = 0;
  local_170 = 2;
  if (param_1 == 0) {
    puVar1 = nullptr;
  }
  else {
    puVar1 = (byte *)(param_1 + 0x2a0);
  }
  puVar6 = (byte *)(local_10d);
  memmove(puVar6, puVar1, 0xb0); /* compiler REP MOVS byte copy */
  local_2c[3] = (byte *)st::fn_0040119A((STAllPlayersC *)param_1,(int *)&local_5d);
  local_59 = 0x14f;
  local_10 = (byte *)st::fn_004018D4((STT3DSprC *)(param_1 + 0x1d5),&local_55);
  local_51 = local_5d + local_59;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_14 = (byte *)st::fn_004018D4(*(STT3DSprC **)(param_1 + 0x35c),&local_4d);
  local_49 = local_55 + local_51;
  iVar2 = 0;
  local_c = (AnonShape_0060EA30_DCEB68AD *)(local_4d + local_49);
  local_18 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x370) == 0) {
    local_2c[4] = (byte *)(param_1 + 0x350);
    do {
      puVar1 = (byte *)(st::fn_004018D4(*(STT3DSprC **)local_2c[4],(uint *)((int)local_45 + iVar2)));
      *(undefined4 **)((int)local_2c + iVar2) = st::pointer_boundary_cast<undefined4 *>(puVar1);
      *(AnonShape_0060EA30_DCEB68AD **)((int)local_45 + iVar2 + 0xc) = local_c;
      uVar3 = *(uint *)((int)local_45 + iVar2);
      iVar2 = iVar2 + 4;
      local_c = (AnonShape_0060EA30_DCEB68AD *)(&local_c->field_0x0 + uVar3);
      local_2c[4] = (byte *)((int)local_2c[4] + 4);
      local_18 = local_18 + uVar3;
    } while (iVar2 < 0xc);
  }
  local_c = (AnonShape_0060EA30_DCEB68AD *)(local_18 + local_4d + local_55 + 0x14f + local_5d);
  local_8 = st::pointer_boundary_cast<byte *>(st::fn_006AAC70((uint)local_c));
  puVar1 = (byte *)(&local_17c);
  pbVar5 = local_8;
  memmove(pbVar5, puVar1, 0x14f); /* compiler REP MOVS byte copy */
  pbVar5 = local_2c[3];
  pbVar7 = local_8 + local_59;
  memmove(pbVar7, pbVar5, local_5d); /* compiler REP MOVS byte copy */
  uVar3 = 0;
  pbVar5 = local_10;
  pbVar7 = local_8 + local_51;
  memmove(pbVar7, pbVar5, local_55); /* compiler REP MOVS byte copy */
  uVar3 = 0;
  pbVar5 = local_14;
  pbVar7 = local_8 + local_49;
  memmove(pbVar7, pbVar5, local_4d); /* compiler REP MOVS byte copy */
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x370) == 0) {
    iVar2 = 0;
    do {
      uVar3 = *(uint *)((int)local_45 + iVar2);
      pbVar5 = *(byte **)((int)local_2c + iVar2);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pbVar7 = local_8 + *(int *)((int)local_45 + iVar2 + 0xc);
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pbVar7 = *(undefined4 *)pbVar5;
        pbVar5 = pbVar5 + 4;
        pbVar7 = pbVar7 + 4;
      }
      iVar2 = iVar2 + 4;
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pbVar7 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        pbVar7 = pbVar7 + 1;
      }
    } while (iVar2 < 0xc);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  st::fn_004025F9(g_playSystem_00802A38,*(int **)(param_1 + 0x18),local_8,(uint)local_c);
  st::fn_006AB060(&local_8);
  st::fn_006AB060(local_2c + 3);
  st::fn_006AB060(&local_10);
  st::fn_006AB060(&local_14);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x370) == 0) {
    slotStorage = local_2c;
    iVar2 = 3;
    do {
      st::fn_006AB060(slotStorage);
      slotStorage = slotStorage + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

// 004D3290 FUN_004d3290
#line 4 "decomp/ST.exe/functions/004D3290/decomp.c"
void __fastcall st::fn_004D3290(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  st::fn_00402E87(*(int **)(param_1 + 0x24),*(int *)(param_1 + 0x18));
  return;
}

// 004D5470 FUN_004d5470
#line 4 "decomp/ST.exe/functions/004D5470/decomp.c"
undefined4 __fastcall st::fn_004D5470(int param_1)

{
  int iVar2;
  uint uVar3;
  int iVar1;
  undefined4 *puVar4;
  int iVar5;

  iVar2 = st::fn_00401A3C((AnonShape_0041C710_C4D46939 *)param_1);
  if (iVar2 == 0) {
    iVar2 = 0;
    uVar3 = st::fn_004052CC((STT3DSprC *)(param_1 + 0x1d5));
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_006EABF0(*(void **)(param_1 + 0x211),uVar3,iVar2);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(STT3DSprC **)(param_1 + 0x35c) != nullptr) {
      iVar2 = 0;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar3 = st::fn_004052CC(*(STT3DSprC **)(param_1 + 0x35c));
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      st::fn_006EABF0(*(void **)(param_1 + 0x211),uVar3,iVar2);
    }
    puVar4 = (undefined4 *)(param_1 + 0x350);
    iVar2 = 3;
    do {
      if ((STT3DSprC *)*puVar4 != nullptr) {
        iVar5 = 0;
        uVar3 = st::fn_004052CC((STT3DSprC *)*puVar4);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        st::fn_006EABF0(*(void **)(param_1 + 0x211),uVar3,iVar5);
      }
      puVar4 = puVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar1 = st::fn_004050D8((AnonShape_0041CAF0_1630B9E0 *)param_1);
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = 1;
    }
  }
  else {
    iVar2 = 1;
    uVar3 = st::fn_004052CC((STT3DSprC *)(param_1 + 0x1d5));
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_006EABF0(*(void **)(param_1 + 0x211),uVar3,iVar2);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(STT3DSprC **)(param_1 + 0x35c) != nullptr) {
      iVar2 = 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar3 = st::fn_004052CC(*(STT3DSprC **)(param_1 + 0x35c));
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      st::fn_006EABF0(*(void **)(param_1 + 0x211),uVar3,iVar2);
    }
    puVar4 = (undefined4 *)(param_1 + 0x350);
    iVar2 = 3;
    do {
      if ((STT3DSprC *)*puVar4 != nullptr) {
        iVar5 = 1;
        uVar3 = st::fn_004052CC((STT3DSprC *)*puVar4);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        st::fn_006EABF0(*(void **)(param_1 + 0x211),uVar3,iVar5);
      }
      puVar4 = puVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = 1;
  }
  iVar5 = st::fn_004052CC((STT3DSprC *)(param_1 + 0x1d5));
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  st::fn_006E6870(*(void **)(param_1 + 0x211),iVar5,iVar2);
  return 0;
}

// 004D6360 FUN_004d6360
#line 4 "decomp/ST.exe/functions/004D6360/decomp.c"
int __thiscall st::fn_004D6360(void *this,short param_1,short param_2,short param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_18;
  int local_8;

  iVar5 = STField<int>(this,0x265);
  iVar4 = STField<int>(this,0x261);
  iVar1 = STField<int>(this,0x25d);
  iVar7 = 2 - (uint)(STField<int>(this,0x2c) != 1);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar3 = (**(code **)(*(int *)this + 0xf8))();
  if (iVar3 != 0) {
    iVar3 = iVar1 * 0xc9;
    if ((iVar3 <= param_1) && ((int)param_1 < (iVar7 + iVar1) * 0xc9)) {
      iVar1 = iVar4 * 0xc9;
      if ((iVar1 <= param_2) && ((int)param_2 < (iVar4 + iVar7) * 0xc9)) {
        iVar6 = (int)param_3;
        iVar4 = iVar5 * 200;
        if ((iVar4 <= iVar6) && (iVar6 < (iVar5 * 5 + 5) * 0x28)) {
          piVar2 = STField<int *>(this,0x360);
          local_18 = 0;
          local_8 = 1;
          iVar7 = (iVar7 * 0xc9) / 2;
          iVar8 = (piVar2[1] - (int)param_2) + iVar7 + iVar1;
          iVar9 = (iVar7 - param_1) + iVar3 + *piVar2;
          iVar5 = (piVar2[2] - iVar6) + iVar4;
          iVar5 = iVar5 * iVar5 + iVar9 * iVar9 + iVar8 * iVar8;
          while( true ) {
            iVar6 = piVar2[3];
            if (((iVar6 == 0) && (piVar2[4] == 0)) && (piVar2[5] == 0)) break;
            iVar8 = iVar1 + (piVar2[4] - (int)param_2) + iVar7;
            iVar6 = (iVar6 - param_1) + iVar7 + iVar3;
            iVar9 = iVar4 + (piVar2[5] - (int)param_3);
            iVar6 = iVar8 * iVar8 + iVar9 * iVar9 + iVar6 * iVar6;
            if (iVar6 < iVar5) {
              local_18 = local_8;
              iVar5 = iVar6;
            }
            local_8 = local_8 + 1;
            piVar2 = piVar2 + 3;
          }
          return local_18;
        }
      }
    }
  }
  return -1;
}

// 004D6590 FUN_004d6590
#line 4 "decomp/ST.exe/functions/004D6590/decomp.c"
undefined4 __thiscall
st::fn_004D6590(void *this,float param_1,short *param_2,short *param_3,short *param_4,
            undefined4 *param_5)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  short *psVar6;
  short *psVar7;
  int iVar8;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0;
  longlong lVar9;

  psVar7 = param_4;
  psVar6 = param_3;
  uVar2 = STField<undefined4>(this,0x265);
  uVar3 = STField<undefined4>(this,0x261);
  iVar8 = (int)param_1 * 0xc;
  param_1 = (float)((int)((2 - (uint)(STField<int>(this,0x2c) != 1)) * 0xc9) / 2);
  *param_2 = *(short *)(iVar8 + STField<int>(this,0x360)) +
             (short)STField<undefined4>(this,0x25d) * 0xc9 + SUB42(param_1,0);
  *param_3 = *(short *)(iVar8 + 4 + STField<int>(this,0x360)) + (short)uVar3 * 0xc9 +
             SUB42(param_1,0);
  *param_4 = *(short *)(iVar8 + 8 + STField<int>(this,0x360)) + (short)uVar2 * 200;
  *param_5 = 0;
  st::fn_006DD530
            (STField<ST3DSMAPContext *>(this,0x211),&param_1,(float *)&param_3,(float *)&param_4);
  lVar9 = st::fn_0072E288();
  param_1 = (float)(int)(short)lVar9;
  lVar9 = st::fn_0072E288();
  param_1 = (float)(int)(short)lVar9;
  lVar9 = st::fn_0072E288();
  fVar4 = (float)(int)STField<short>(this,0x43) - param_1;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  fVar1 = (float)((float10)(int)STField<short>(this,0x41) - extraout_ST0);
  fVar5 = (float)(int)*psVar7 - (float)(int)(short)lVar9;
  fVar5 = fVar5 * fVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  if (((float10)(int)*param_2 - extraout_ST0) * ((float10)(int)*param_2 - extraout_ST0) +
      ((float10)(int)*psVar6 - (float10)param_1) * ((float10)(int)*psVar6 - (float10)param_1) +
      (float10)fVar5 <
      (float10)fVar4 * (float10)fVar4 + (float10)fVar1 * (float10)fVar1 + (float10)fVar5) {
    *param_5 = 0;
    return 0;
  }
  *param_5 = 1;
  return 0;
}

// 004D6890 FUN_004d6890
#line 4 "decomp/ST.exe/functions/004D6890/decomp.c"
void __thiscall st::fn_004D6890(void *this,AnonShape_004D6890_0C7826D6 *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  AnonShape_004D6890_0C7826D6 *pAVar5;

  pAVar5 = param_1;
  for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pAVar5 = 0;
    pAVar5 = (AnonShape_004D6890_0C7826D6 *)((int)&pAVar5->field_0003 + 1);
  }
  *(undefined2 *)pAVar5 = 0;
  bVar2 = st::fn_004049B7(STField<char>(this,0x24));
  param_1->field_0007 = bVar2;
  *(undefined1 *)param_1 = 1;
  uVar3 = STField<undefined1>(this,0x21d);
  param_1->field_0002 = 2;
  param_1->field_0001 = uVar3;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar3 = (**(code **)(*(int *)this + 0x7c))();
  param_1->field_001B = uVar3;
  param_1->field_0003 = STField<undefined4>(this,0x259);
  uVar1 = STField<undefined4>(this,0x18);
  param_1->field_0008 = (short)uVar1;
  param_1->field_000A = (short)((uint)uVar1 >> 0x10);
  param_1->field_001E = 0;
  param_1->field_0026 = 0xffff;
  *(undefined2 *)&param_1->field_0x20 = 0;
  *(undefined2 *)(param_1 + 1) = 0xffff;
  *(undefined1 *)((int)param_1 + (0x2e - STField<int>(this,0x265))) = 1;
  return;
}

// 004D6930 FUN_004d6930
#line 4 "decomp/ST.exe/functions/004D6930/decomp.c"
void __thiscall st::fn_004D6930(void *this,AnonShape_004D6930_FDF7B020 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  byte bVar4;
  short sVar5;
  int iVar6;
  short sVar7;

  *(undefined4 *)param_1 = STField<undefined4>(this,0x259);
  param_1->field_0006 = 2;
  param_1->field_0005 =
       ((STField<uint>(this,0x24) != (uint)*(byte *)(STField<int>(this,0x10) + 0x112d)) - 1U &
       0xfe) + 3;
  bVar4 = st::fn_004049B7(STField<char>(this,0x24));
  param_1->field_0x4 = bVar4;
  puVar1 = st::pointer_boundary_cast<undefined1 *>(&param_1->field_0x9);
  param_1->field_0007 = ~(byte)(STField<uint>(this,0x1d1) >> 2) & 1;
  *(undefined4 *)puVar1 = 0;
  param_1->field_000D = 0;
  puVar2 = st::pointer_boundary_cast<undefined1 *>(&param_1->field_0xf);
  *(undefined4 *)puVar2 = 0;
  param_1->field_0013 = 0;
  if (STField<int>(this,0x2a4) == 0) {
    *puVar1 = 0x50;
    if (((STField<int>(this,0x2ec) == 2) && (0 < STField<int>(this,0x2a8))) &&
       (STField<int>(this,0x2a8) < 0x65)) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    *puVar2 = uVar3;
  }
  else {
    *puVar1 = 0x51;
    *puVar2 = 1;
  }
  param_1->field_001D = STField<undefined4>(this,0x259);
  bVar4 = st::fn_004049B7(STField<char>(this,0x24));
  if (bVar4 == 3) {
    sVar5 = (short)*(undefined4 *)
                    (&DAT_007e3160 +
                    (STField<int>(this,0x368) * 3 + STField<int>(this,0x36c)) * 4);
    sVar7 = (short)STField<undefined4>(this,0x2d8);
  }
  else {
    sVar7 = (short)STField<undefined4>(this,0x2d4);
    sVar5 = (short)*(undefined4 *)
                    (&DAT_007e24fc +
                    (STField<int>(this,0x368) * 3 + STField<int>(this,0x36c)) * 4);
  }
  param_1->field_0027 = sVar5 - sVar7;
  param_1->field_002B =
       *(short *)(&DAT_007e1c50 +
                 (STField<int>(this,0x368) * 3 + STField<int>(this,0x36c)) * 4) -
       STField<short>(this,0x2d0);
  param_1->field_002F = STField<undefined1>(this,0x2a8);
  bVar4 = st::fn_004049B7(STField<char>(this,0x24));
  param_1->field_0025 = bVar4;
  if (STField<int>(this,0x2a4) != 0) {
    *(undefined4 *)((int)&param_1[1].field_0027 + 1) = 0xbde;
    return;
  }
  if (STField<int>(this,0x2b8) == 0) {
    *(undefined4 *)((int)&param_1[1].field_0027 + 1) = 0xbb9;
    return;
  }
  iVar6 = st::fn_00402815(STField<int>(this,0x24));
  if (iVar6 == 0) {
    *(undefined4 *)((int)&param_1[1].field_0027 + 1) = 0xbdf;
    return;
  }
  if (STField<int>(this,0x2b4) != 0) {
    *(undefined4 *)((int)&param_1[1].field_0027 + 1) = 3000;
    return;
  }
  if (STField<int>(this,700) == 0) {
    *(undefined4 *)((int)&param_1[1].field_0027 + 1) = 0xbba;
    return;
  }
  if (STField<int>(this,0x2c0) == 0) {
    *(undefined4 *)((int)&param_1[1].field_0027 + 1) = 0xbbb;
    return;
  }
  if (STField<int>(this,0x2c4) == 0) {
    *(undefined4 *)((int)&param_1[1].field_0027 + 1) = 0xbbc;
    return;
  }
  if (STField<int>(this,0x2c8) == 0) {
    *(undefined4 *)((int)&param_1[1].field_0027 + 1) = 0xbd3;
  }
  return;
}

// 004D6BE0 FUN_004d6be0
#line 4 "decomp/ST.exe/functions/004D6BE0/decomp.c"
undefined4 st::fn_004D6BE0(void)

{
  return 0x78;
}

// 004D6C20 FUN_004d6c20
#line 4 "decomp/ST.exe/functions/004D6C20/decomp.c"
undefined4 __fastcall st::fn_004D6C20(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)(param_1 + 0x2a0) == 0) && (*(int *)(param_1 + 0x2e4) == 0)) {
    return 1;
  }
  return 0;
}

// 004D6C70 FUN_004d6c70
#line 4 "decomp/ST.exe/functions/004D6C70/decomp.c"
undefined4 st::fn_004D6C70(void)

{
  return 100;
}

// 004D6C90 FUN_004d6c90
#line 4 "decomp/ST.exe/functions/004D6C90/decomp.c"
undefined4 __thiscall st::fn_004D6C90(void *this,undefined4 param_1,int *param_2)

{
  int iVar1;

  if (param_2 == this) {
    return 4;
  }
  if ((param_2 != nullptr) && (param_2[9] == STField<int>(this,0x24))) {
    this = (void *)param_2[8];
    if (this == (void *)0x14) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar1 = (**(code **)(*param_2 + 0xec))();
      this = nullptr;
      if (iVar1 != 0) {
        return 3;
      }
    }
    else if ((this == (void *)0x3e8) || (this == (void *)0x3e9)) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar1 = (**(code **)(*param_2 + 0xec))();
      this = nullptr;
      if (iVar1 != 0) {
        return 4;
      }
    }
  }
  return (uint)this & 0xffff0000;
}

// 004D6D30 FUN_004d6d30
#line 4 "decomp/ST.exe/functions/004D6D30/decomp.c"
void __fastcall st::fn_004D6D30(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004d6d32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*param_1 + 0xf8))();
  return;
}

// 004D6D50 FUN_004d6d50
#line 4 "decomp/ST.exe/functions/004D6D50/decomp.c"
void __thiscall st::fn_004D6D50(void *this,undefined4 *param_1)

{
  byte bVar1;

  *param_1 = STField<undefined4>(this,0x18);
  param_1[1] = STField<undefined4>(this,0x259);
  bVar1 = st::fn_004049B7(STField<char>(this,0x24));
  *(byte *)(param_1 + 2) = bVar1;
  st::fn_0072E340((char *)((int)param_1 + 9),(char *)((int)this + 0x271),0xe);
  return;
}

// 004D6DC0 CreateTLOEmbryo
#line 4 "decomp/ST.exe/functions/004D6DC0/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA7E4>00405498

   [STObjectFactoryApplier] Central object factory for 0x0200 (ST_OBJECT_TLO_EMBRYO).
   Evidence: registry[24] at 007CA7E0 stores type 0x0200 and executable pointer 00405498; allocation
   size 884 uniquely matches /TLOEmbryoTy */

TLOEmbryoTy * __cdecl st::fn_004D6DC0(void)

{
  TLOEmbryoTy *pTVar1;

  pTVar1 = (TLOEmbryoTy *)st::fn_006B04D0(0x374);
  if (pTVar1 != nullptr) {
    pTVar1 = st::fn_00404110(pTVar1);
    return pTVar1;
  }
  return nullptr;
}

// 004D6EB0 FUN_004d6eb0
#line 4 "decomp/ST.exe/functions/004D6EB0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_004D6EB0(void *this,int param_1)

{
  int iVar1;
  int iVar2;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar1 = (**(code **)(*(int *)this + 0x2c))();
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  if ((iVar1 < 0x32) || (iVar1 = (**(code **)(*(int *)this + 0x2c))(), 0x73 < iVar1)) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar1 = (**(code **)(*(int *)this + 0x2c))();
    if (iVar1 < 1) {
      return;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar1 = (**(code **)(*(int *)this + 0x2c))();
    if (0x28 < iVar1) {
      return;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar1 = (**(code **)(*(int *)this + 0x2c))();
    iVar1 = *(int *)(&DAT_007e061c + iVar1 * 4);
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar1 = (**(code **)(*(int *)this + 0x2c))();
    iVar1 = *(int *)(&DAT_007e22f8 + iVar1 * 4);
  }
  if (iVar1 != 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar2 = (**(code **)(*(int *)this + 0xc4))();
    iVar2 = iVar2 + (param_1 * 100) / iVar1;
    if (100 < iVar2) {
      iVar2 = 100;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)this + 200))(iVar2);
  }
  return;
}

// 004D6F70 FUN_004d6f70
#line 4 "decomp/ST.exe/functions/004D6F70/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (6), none consume AL/AX, and every RET path defines full EAX; sites=00478640 @ 00478724
   -> CMP CMP EAX,0x1 | 00478640 @ 004788C5 -> CMP CMP EAX,0x1 | 00478640 @ 00478A39 -> CMP CMP
   EAX,0x1 | 00478640 @ 00478D6D -> CMP CMP EAX,0x1 | 00478640 @ 00478F28 -> CMP CMP EAX,0x1 |
   00478640 @ 00479106 -> CMP CMP EAX,0x1 */

int __fastcall st::fn_004D6F70(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;

  uVar1 = st::fn_00403594((TLOBaseTy *)param_1);
  uVar2 = st::fn_004036A7(param_1[9]);
  if ((int)uVar2 < (int)uVar1) {
    uVar1 = st::fn_004036A7(param_1[9]);
  }
  st::fn_004043F9(param_1[9],uVar1);
  st::fn_00403D6E(param_1,uVar1);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (param_1[9] == (uint)*(byte *)(param_1[4] + 0x112d)) {
    st::fn_00404B8D((char)param_1[9]);
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar3 = (**(code **)(*param_1 + 0xc4))();
  return (uint)(99 < iVar3);
}

// 004D7010 FUN_004d7010
#line 4 "decomp/ST.exe/functions/004D7010/decomp.c"
undefined4 __fastcall st::fn_004D7010(int param_1)

{
  uint uVar1;

  uVar1 = g_playSystem_00802A38->field_00E4;
  *(uint *)(param_1 + 0x119) = uVar1;
  *(uint *)(param_1 + 0x115) = uVar1;
  return 0;
}

// 004D7040 FUN_004d7040
#line 4 "decomp/ST.exe/functions/004D7040/decomp.c"
undefined4 __fastcall st::fn_004D7040(int *param_1)

{
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar1;
  longlong lVar6;
  int local_8;

  iVar2 = st::fn_0040186B(param_1[9],0x4e);
  if (3 < iVar2) {
    iVar2 = 3;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar3 = (**(code **)(*param_1 + 0x2c))();
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  if ((iVar3 < 0x32) || (iVar3 = (**(code **)(*param_1 + 0x2c))(), 0x73 < iVar3)) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar3 = (**(code **)(*param_1 + 0x2c))();
    if (iVar3 < 1) {
      return 0;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar3 = (**(code **)(*param_1 + 0x2c))();
    if (0x28 < iVar3) {
      return 0;
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar3 = (**(code **)(*param_1 + 0x2c))();
    local_8 = *(int *)(&DAT_007e0a90 + (iVar2 + iVar3 * 4) * 4);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar2 = (**(code **)(*param_1 + 0x2c))();
    iVar2 = *(int *)(&DAT_007e06dc + iVar2 * 4);
  }
  else {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar3 = (**(code **)(*param_1 + 0x2c))();
    local_8 = *(int *)(&DAT_007e3518 + (iVar2 + -200 + iVar3 * 4) * 4);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar2 = (**(code **)(*param_1 + 0x2c))();
    iVar2 = *(int *)(&DAT_007e27ec + iVar2 * 4);
  }
  local_8 = local_8 / 0x5dc;
  if ((local_8 != 0) && (iVar2 != 0)) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar3 = (**(code **)(*param_1 + 0xc4))();
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    if ((iVar3 != 0) && (iVar4 = (**(code **)(*param_1 + 0x7c))(), iVar4 < 100)) {
      iVar4 = st::fn_0040186B(param_1[9],0x66);
      if (iVar4 != 0) {
        iVar2 = iVar2 + (uint)(iVar2 * 10) / 100;
      }
      lVar6 = st::fn_006B12CC(100);
      iVar4 = (int)lVar6;
      lVar6 = st::fn_006B12CC(iVar3);
      iVar5 = (int)lVar6;
      lVar6 = st::fn_006B12CC(iVar2);
      iVar2 = st::fn_006B12BC((int)lVar6,iVar5,iVar4);
      lVar6 = st::fn_006B12CC(0x5dc);
      iVar2 = st::fn_006B12A8((int)lVar6,iVar2);
      iVar1 = st::fn_006B1280(iVar2);
      if ((uint)(STField<int>(param_1,0x119) + iVar1) < g_playSystem_00802A38->field_00E4) {
        iVar2 = *param_1;
        STField<uint>(param_1,0x119) = g_playSystem_00802A38->field_00E4;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        iVar4 = (**(code **)(iVar2 + 0x78))();
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(iVar2 + 0x80))(iVar4 + local_8);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*param_1 + 200))(iVar3 + -1);
      }
    }
    return 0;
  }
  return 0;
}

// 004D7270 FUN_004d7270
#line 4 "decomp/ST.exe/functions/004D7270/decomp.c"
undefined4 __fastcall st::fn_004D7270(AnonShape_004D7270_8F0A3C37 *param_1)

{
  AnonNested_AnonShape_004D7270_8F0A3C37_0000_431532FF *pAVar1;
  int iVar2;
  int iVar3;
  int local_EAX_94;
  int uVar3;
  int local_EAX_171;
  uint uVar4;

  if (param_1->field_0245 == 0) {
    iVar2 = st::fn_00405330(*(int *)&param_1->field_0x24);
    if (iVar2 != 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar2 = (*(code *)param_1->field_0000->field_00C4)();
      st::fn_0040231A((int *)param_1);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar3 = (*(code *)param_1->field_0000->field_00C4)();
      if (iVar2 < iVar3) {
        iVar2 = 0;
        uVar4 = (uint)(*(int *)&param_1->field_0x2c == 1);
        local_EAX_94 = st::fn_004052CC((STT3DSprC *)&param_1->field_0x1d5);
        st::fn_004010EB(local_EAX_94,uVar4,iVar2);
      }
      uVar3 = st::fn_004049B7(param_1->field_023D);
      if (*(int *)(&DAT_00796230 + ((uint)(byte)uVar3 + param_1->field_0235 * 3) * 4) != 0) {
        pAVar1 = param_1->field_0000;
        local_EAX_171 = st::fn_004049B7(param_1->field_023D);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (*(code *)pAVar1->field_0090)
                  (3,*(undefined4 *)
                      (&DAT_00796230 + ((uint)(byte)local_EAX_171 + param_1->field_0235 * 3) * 4));
      }
    }
  }
  return 0;
}

// 004D7390 FUN_004d7390
#line 4 "decomp/ST.exe/functions/004D7390/decomp.c"
undefined4 __fastcall st::fn_004D7390(int *param_1)

{
  st::fn_0040167C(param_1);
  return 0;
}

// 004D73B0 FUN_004d73b0
#line 4 "decomp/ST.exe/functions/004D73B0/decomp.c"
undefined4 st::fn_004D73B0(char param_1)

{
  int iVar1;
  DArrayTy *array;

  array = (DArrayTy *)&g_packedRecords_A62x8[param_1].field_0x7ee;
  memset(&g_packedRecords_A62x8[param_1].field1601_0x7da, 0, 0x198); /* compiler bulk-zero initialization */
  iVar1 = 6;
  do {
    array[-1].count = 100;
    st::fn_006AE290(array,10,0x14,10);
    array = (DArrayTy *)&array[2].iteratorIndex;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0;
}

// 004D7430 FUN_004d7430
#line 1 "decomp/ST.exe/functions/004D7430/decomp.c"

/* [STPrototypeApplier] Propagated return.
   Evidence: 004D7430 returns zeroed full register at 004D7460 @ 004D7464 */

uint st::fn_004D7430(char param_1)

{
  DArrayTy *array;
  int iVar1;

  iVar1 = 6;
  array = (DArrayTy *)&g_packedRecords_A62x8[param_1].field_0x7ee;
  do {
    st::fn_006AE110(array);
    array = (DArrayTy *)&array[2].iteratorIndex;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0;
}

// 004D7480 FUN_004d7480
#line 4 "decomp/ST.exe/functions/004D7480/decomp.c"
undefined4
st::fn_004D7480(char param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  int iVar1;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_18 = param_3;
  local_8 = param_7;
  iVar1 = (int)param_1;
  local_c = param_6;
  local_10 = param_5;
  local_14 = param_4;
  st::fn_006AE1C0
            ((DArrayTy *)(&g_packedRecords_A62x8[iVar1].field_0x7ee + param_2 * 0x44),&local_18);
  (&g_packedRecords_A62x8[iVar1].field1626_0x80e)[param_2 * 0x11] =
       (&g_packedRecords_A62x8[iVar1].field1626_0x80e)[param_2 * 0x11] + param_4;
  (&g_packedRecords_A62x8[iVar1].field1627_0x812)[param_2 * 0x11] =
       (&g_packedRecords_A62x8[iVar1].field1627_0x812)[param_2 * 0x11] + param_5;
  (&g_packedRecords_A62x8[iVar1].field1628_0x816)[param_2 * 0x11] =
       (&g_packedRecords_A62x8[iVar1].field1628_0x816)[param_2 * 0x11] + param_6;
  (&g_packedRecords_A62x8[iVar1].field1629_0x81a)[param_2 * 0x11] =
       (&g_packedRecords_A62x8[iVar1].field1629_0x81a)[param_2 * 0x11] + param_7;
  st::fn_004028F6(param_1);
  return 0;
}

// 004D7570 FUN_004d7570
#line 4 "decomp/ST.exe/functions/004D7570/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004749C0 -> 004D7570 @ 0047525A; /STBoatC+0x18 | 004C7460 -> 004D7570 @ 004C74A4;
   /TLOBaseTy+0x18 */

undefined4 st::fn_004D7570(char param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;

  iVar2 = (int)param_1;
  (&g_packedRecords_A62x8[iVar2].field1610_0x7f2)[param_2 * 0x11] = 0;
  do {
    uVar1 = (&g_packedRecords_A62x8[iVar2].field1610_0x7f2)[param_2 * 0x11];
    if ((&g_packedRecords_A62x8[iVar2].field1612_0x7fa)[param_2 * 0x11] <= uVar1)
    goto cf_common_exit_004D766D;
    piVar3 = (int *)((&g_packedRecords_A62x8[iVar2].field1611_0x7f6)[param_2 * 0x11] * uVar1 +
                    (&g_packedRecords_A62x8[iVar2].field1625_0x80a)[param_2 * 0x11]);
    (&g_packedRecords_A62x8[iVar2].field1610_0x7f2)[param_2 * 0x11] = uVar1 + 1;
    if (piVar3 == nullptr) goto cf_common_exit_004D766D;
  } while ((int *)*piVar3 != param_3);
  (&g_packedRecords_A62x8[iVar2].field1626_0x80e)[param_2 * 0x11] =
       (&g_packedRecords_A62x8[iVar2].field1626_0x80e)[param_2 * 0x11] - piVar3[1];
  (&g_packedRecords_A62x8[iVar2].field1627_0x812)[param_2 * 0x11] =
       (&g_packedRecords_A62x8[iVar2].field1627_0x812)[param_2 * 0x11] - piVar3[2];
  (&g_packedRecords_A62x8[iVar2].field1628_0x816)[param_2 * 0x11] =
       (&g_packedRecords_A62x8[iVar2].field1628_0x816)[param_2 * 0x11] - piVar3[3];
  (&g_packedRecords_A62x8[iVar2].field1629_0x81a)[param_2 * 0x11] =
       (&g_packedRecords_A62x8[iVar2].field1629_0x81a)[param_2 * 0x11] - piVar3[4];
  if ((&g_packedRecords_A62x8[iVar2].field1626_0x80e)[param_2 * 0x11] < 0) {
    (&g_packedRecords_A62x8[iVar2].field1626_0x80e)[param_2 * 0x11] = 0;
  }
  if ((&g_packedRecords_A62x8[iVar2].field1627_0x812)[param_2 * 0x11] < 0) {
    (&g_packedRecords_A62x8[iVar2].field1627_0x812)[param_2 * 0x11] = 0;
  }
  if ((&g_packedRecords_A62x8[iVar2].field1628_0x816)[param_2 * 0x11] < 0) {
    (&g_packedRecords_A62x8[iVar2].field1628_0x816)[param_2 * 0x11] = 0;
  }
  if ((&g_packedRecords_A62x8[iVar2].field1629_0x81a)[param_2 * 0x11] < 0) {
    (&g_packedRecords_A62x8[iVar2].field1629_0x81a)[param_2 * 0x11] = 0;
  }
  st::fn_006B0C70((DArrayTy *)(&g_packedRecords_A62x8[iVar2].field_0x7ee + param_2 * 0x44),
                 (&g_packedRecords_A62x8[iVar2].field1610_0x7f2)[param_2 * 0x11] - 1);
cf_common_exit_004D766D:
  st::fn_004028F6(param_1);
  return 0;
}

// 004D76E0 FUN_004d76e0
#line 4 "decomp/ST.exe/functions/004D76E0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004C7460 -> 004D76E0 @ 004C7688; /TLOBaseTy+0x18 */

undefined4
st::fn_004D76E0(char param_1,int param_2,int *param_3,int param_4,int param_5,int param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  int *piVar3;

  iVar2 = (int)param_1;
  (&g_packedRecords_A62x8[iVar2].field1610_0x7f2)[param_2 * 0x11] = 0;
  while (uVar1 = (&g_packedRecords_A62x8[iVar2].field1610_0x7f2)[param_2 * 0x11],
        uVar1 < (&g_packedRecords_A62x8[iVar2].field1612_0x7fa)[param_2 * 0x11]) {
    piVar3 = (int *)((&g_packedRecords_A62x8[iVar2].field1611_0x7f6)[param_2 * 0x11] * uVar1 +
                    (&g_packedRecords_A62x8[iVar2].field1625_0x80a)[param_2 * 0x11]);
    (&g_packedRecords_A62x8[iVar2].field1610_0x7f2)[param_2 * 0x11] = uVar1 + 1;
    if (piVar3 == nullptr) break;
    if ((int *)*piVar3 == param_3) {
      (&g_packedRecords_A62x8[iVar2].field1626_0x80e)[param_2 * 0x11] =
           (&g_packedRecords_A62x8[iVar2].field1626_0x80e)[param_2 * 0x11] - piVar3[1];
      (&g_packedRecords_A62x8[iVar2].field1627_0x812)[param_2 * 0x11] =
           (&g_packedRecords_A62x8[iVar2].field1627_0x812)[param_2 * 0x11] - piVar3[2];
      (&g_packedRecords_A62x8[iVar2].field1628_0x816)[param_2 * 0x11] =
           (&g_packedRecords_A62x8[iVar2].field1628_0x816)[param_2 * 0x11] - piVar3[3];
      (&g_packedRecords_A62x8[iVar2].field1629_0x81a)[param_2 * 0x11] =
           (&g_packedRecords_A62x8[iVar2].field1629_0x81a)[param_2 * 0x11] - piVar3[4];
      if ((&g_packedRecords_A62x8[iVar2].field1626_0x80e)[param_2 * 0x11] < 0) {
        (&g_packedRecords_A62x8[iVar2].field1626_0x80e)[param_2 * 0x11] = 0;
      }
      if ((&g_packedRecords_A62x8[iVar2].field1627_0x812)[param_2 * 0x11] < 0) {
        (&g_packedRecords_A62x8[iVar2].field1627_0x812)[param_2 * 0x11] = 0;
      }
      if ((&g_packedRecords_A62x8[iVar2].field1628_0x816)[param_2 * 0x11] < 0) {
        (&g_packedRecords_A62x8[iVar2].field1628_0x816)[param_2 * 0x11] = 0;
      }
      if ((&g_packedRecords_A62x8[iVar2].field1629_0x81a)[param_2 * 0x11] < 0) {
        (&g_packedRecords_A62x8[iVar2].field1629_0x81a)[param_2 * 0x11] = 0;
      }
      piVar3[2] = param_5;
      piVar3[3] = param_6;
      piVar3[1] = param_4;
      piVar3[4] = param_7;
      (&g_packedRecords_A62x8[iVar2].field1626_0x80e)[param_2 * 0x11] =
           (&g_packedRecords_A62x8[iVar2].field1626_0x80e)[param_2 * 0x11] + param_4;
      (&g_packedRecords_A62x8[iVar2].field1627_0x812)[param_2 * 0x11] =
           (&g_packedRecords_A62x8[iVar2].field1627_0x812)[param_2 * 0x11] + piVar3[2];
      (&g_packedRecords_A62x8[iVar2].field1628_0x816)[param_2 * 0x11] =
           (&g_packedRecords_A62x8[iVar2].field1628_0x816)[param_2 * 0x11] + piVar3[3];
      (&g_packedRecords_A62x8[iVar2].field1629_0x81a)[param_2 * 0x11] =
           (&g_packedRecords_A62x8[iVar2].field1629_0x81a)[param_2 * 0x11] + piVar3[4];
      st::fn_004028F6(param_1);
      return 0;
    }
  }
  st::fn_00405556(param_1,param_2,st::machine_word_boundary_cast<undefined4>(param_3),param_4,param_5,param_6,param_7);
  return 0;
}

// 004D78E0 FUN_004d78e0
#line 4 "decomp/ST.exe/functions/004D78E0/decomp.c"
undefined4 st::fn_004D78E0(char param_1)

{
  int _param_1 = static_cast<int>(param_1);

  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_1c;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  iVar1 = (int)param_1;
  if (iVar1 == 0xff) {
    return 0;
  }
  iVar4 = 0;
  iVar5 = 0;
  local_c = 0;
  local_8 = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  auto _param_1 = 0;
  iVar3 = 6;
  piVar2 = st::pointer_boundary_cast<int *>(&g_packedRecords_A62x8[iVar1].field1601_0x7da);
  do {
    if (piVar2[8] != 0) {
      iVar4 = iVar4 + *piVar2;
      iVar5 = iVar5 + piVar2[0xd];
      _param_1 = _param_1 + piVar2[0xe];
      local_8 = local_8 + piVar2[0xf];
      local_c = local_c + piVar2[0x10];
    }
    piVar2 = piVar2 + 0x11;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_10 = g_packedRecords_A62x8[iVar1].field17_0x27;
  local_14 = g_packedRecords_A62x8[iVar1].field1951_0x99e;
  iVar3 = g_packedRecords_A62x8[iVar1].field16_0x23;
  iVar6 = g_packedRecords_A62x8[iVar1].field15_0x1f;
  piVar2 = &g_packedRecords_A62x8[iVar1].field1626_0x80e;
  local_1c = 6;
  do {
    if (piVar2[-5] != 0) {
      if (*piVar2 == 0) {
        piVar2[-0xc] = 0;
      }
      else {
        piVar2[-0xc] = (piVar2[-0xd] * iVar6) / iVar4;
      }
      if (piVar2[1] == 0) {
        piVar2[-0xb] = 0;
      }
      else {
        piVar2[-0xb] = (piVar2[-0xd] * iVar3) / iVar4;
      }
      if (piVar2[2] == 0) {
        piVar2[-10] = 0;
      }
      else {
        piVar2[-10] = (piVar2[-0xd] * local_10) / iVar4;
      }
      if (piVar2[3] == 0) {
        piVar2[-9] = 0;
      }
      else {
        piVar2[-9] = (piVar2[-0xd] * local_14) / iVar4;
      }
      iVar1 = *piVar2;
      if ((iVar1 < piVar2[-0xc]) || (iVar5 == iVar1)) {
        piVar2[-0xc] = iVar1;
      }
      iVar1 = piVar2[1];
      if ((iVar1 < piVar2[-0xb]) || (_param_1 == iVar1)) {
        piVar2[-0xb] = iVar1;
      }
      iVar1 = piVar2[2];
      if ((iVar1 < piVar2[-10]) || (local_8 == iVar1)) {
        piVar2[-10] = iVar1;
      }
      iVar1 = piVar2[3];
      if ((iVar1 < piVar2[-9]) || (local_c == iVar1)) {
        piVar2[-9] = iVar1;
      }
      if (iVar6 < piVar2[-0xc]) {
        piVar2[-0xc] = iVar6;
      }
      if (iVar3 < piVar2[-0xb]) {
        piVar2[-0xb] = iVar3;
      }
      if (local_10 < piVar2[-10]) {
        piVar2[-10] = local_10;
      }
      if (local_14 < piVar2[-9]) {
        piVar2[-9] = local_14;
      }
      local_10 = local_10 - piVar2[-10];
      iVar4 = iVar4 - piVar2[-0xd];
      iVar6 = iVar6 - piVar2[-0xc];
      iVar3 = iVar3 - piVar2[-0xb];
      local_14 = local_14 - piVar2[-9];
    }
    piVar2 = piVar2 + 0x11;
    local_1c = local_1c + -1;
  } while (local_1c != 0);
  return 0;
}

// 004D7B10 FUN_004d7b10
#line 4 "decomp/ST.exe/functions/004D7B10/decomp.c"
undefined4 st::fn_004D7B10(char param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 0x44 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x7DE));
}

// 004D7B50 FUN_004d7b50
#line 4 "decomp/ST.exe/functions/004D7B50/decomp.c"
undefined4 st::fn_004D7B50(char param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 0x44 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x7E2));
}

// 004D7B90 FUN_004d7b90
#line 4 "decomp/ST.exe/functions/004D7B90/decomp.c"
undefined4 st::fn_004D7B90(char param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 0x44 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x7E6));
}

// 004D7BD0 FUN_004d7bd0
#line 4 "decomp/ST.exe/functions/004D7BD0/decomp.c"
undefined4 st::fn_004D7BD0(char param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 0x44 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x7EA));
}

// 004D7C10 FUN_004d7c10
#line 4 "decomp/ST.exe/functions/004D7C10/decomp.c"
undefined4 st::fn_004D7C10(char param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;

  iVar2 = (int)param_1;
  uVar3 = 0;
  if (param_4 <= (&g_packedRecords_A62x8[iVar2].field1602_0x7de)[param_2 * 0x11]) {
    (&g_packedRecords_A62x8[iVar2].field1610_0x7f2)[param_2 * 0x11] = 0;
    do {
      uVar1 = (&g_packedRecords_A62x8[iVar2].field1610_0x7f2)[param_2 * 0x11];
      if ((&g_packedRecords_A62x8[iVar2].field1612_0x7fa)[param_2 * 0x11] <= uVar1) {
        return 0;
      }
      piVar4 = (int *)((&g_packedRecords_A62x8[iVar2].field1611_0x7f6)[param_2 * 0x11] * uVar1 +
                      (&g_packedRecords_A62x8[iVar2].field1625_0x80a)[param_2 * 0x11]);
      (&g_packedRecords_A62x8[iVar2].field1610_0x7f2)[param_2 * 0x11] = uVar1 + 1;
      if (piVar4 == nullptr) {
        return 0;
      }
    } while (*piVar4 != param_3);
    st::fn_00403166(param_1,param_4);
    (&g_packedRecords_A62x8[iVar2].field1602_0x7de)[param_2 * 0x11] =
         (&g_packedRecords_A62x8[iVar2].field1602_0x7de)[param_2 * 0x11] - param_4;
    (&g_packedRecords_A62x8[iVar2].field1626_0x80e)[param_2 * 0x11] =
         (&g_packedRecords_A62x8[iVar2].field1626_0x80e)[param_2 * 0x11] - param_4;
    piVar4[1] = st::machine_word_boundary_cast<int>(piVar4[1] - param_4);
    uVar3 = 1;
    if ((&g_packedRecords_A62x8[iVar2].field1602_0x7de)[param_2 * 0x11] == 0) {
      st::fn_004028F6(param_1);
    }
  }
  return uVar3;
}

// 004D7D30 FUN_004d7d30
#line 4 "decomp/ST.exe/functions/004D7D30/decomp.c"
undefined4 st::fn_004D7D30(char param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;

  iVar2 = (int)param_1;
  uVar3 = 0;
  if (param_4 <= (&g_packedRecords_A62x8[iVar2].field1603_0x7e2)[param_2 * 0x11]) {
    (&g_packedRecords_A62x8[iVar2].field1610_0x7f2)[param_2 * 0x11] = 0;
    do {
      uVar1 = (&g_packedRecords_A62x8[iVar2].field1610_0x7f2)[param_2 * 0x11];
      if ((&g_packedRecords_A62x8[iVar2].field1612_0x7fa)[param_2 * 0x11] <= uVar1) {
        return 0;
      }
      piVar4 = (int *)((&g_packedRecords_A62x8[iVar2].field1611_0x7f6)[param_2 * 0x11] * uVar1 +
                      (&g_packedRecords_A62x8[iVar2].field1625_0x80a)[param_2 * 0x11]);
      (&g_packedRecords_A62x8[iVar2].field1610_0x7f2)[param_2 * 0x11] = uVar1 + 1;
      if (piVar4 == nullptr) {
        return 0;
      }
    } while (*piVar4 != param_3);
    st::fn_00403418(param_1,param_4);
    (&g_packedRecords_A62x8[iVar2].field1603_0x7e2)[param_2 * 0x11] =
         (&g_packedRecords_A62x8[iVar2].field1603_0x7e2)[param_2 * 0x11] - param_4;
    (&g_packedRecords_A62x8[iVar2].field1627_0x812)[param_2 * 0x11] =
         (&g_packedRecords_A62x8[iVar2].field1627_0x812)[param_2 * 0x11] - param_4;
    piVar4[2] = st::machine_word_boundary_cast<int>(piVar4[2] - param_4);
    uVar3 = 1;
    if ((&g_packedRecords_A62x8[iVar2].field1603_0x7e2)[param_2 * 0x11] == 0) {
      st::fn_004028F6(param_1);
    }
  }
  return uVar3;
}

// 004D7E50 FUN_004d7e50
#line 4 "decomp/ST.exe/functions/004D7E50/decomp.c"
undefined4 st::fn_004D7E50(char param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;

  iVar2 = (int)param_1;
  uVar3 = 0;
  if (param_4 <= (&g_packedRecords_A62x8[iVar2].field1604_0x7e6)[param_2 * 0x11]) {
    (&g_packedRecords_A62x8[iVar2].field1610_0x7f2)[param_2 * 0x11] = 0;
    do {
      uVar1 = (&g_packedRecords_A62x8[iVar2].field1610_0x7f2)[param_2 * 0x11];
      if ((&g_packedRecords_A62x8[iVar2].field1612_0x7fa)[param_2 * 0x11] <= uVar1) {
        return 0;
      }
      piVar4 = (int *)((&g_packedRecords_A62x8[iVar2].field1611_0x7f6)[param_2 * 0x11] * uVar1 +
                      (&g_packedRecords_A62x8[iVar2].field1625_0x80a)[param_2 * 0x11]);
      (&g_packedRecords_A62x8[iVar2].field1610_0x7f2)[param_2 * 0x11] = uVar1 + 1;
      if (piVar4 == nullptr) {
        return 0;
      }
    } while (*piVar4 != param_3);
    st::fn_00405367(param_1,param_4);
    (&g_packedRecords_A62x8[iVar2].field1604_0x7e6)[param_2 * 0x11] =
         (&g_packedRecords_A62x8[iVar2].field1604_0x7e6)[param_2 * 0x11] - param_4;
    (&g_packedRecords_A62x8[iVar2].field1628_0x816)[param_2 * 0x11] =
         (&g_packedRecords_A62x8[iVar2].field1628_0x816)[param_2 * 0x11] - param_4;
    piVar4[3] = st::machine_word_boundary_cast<int>(piVar4[3] - param_4);
    uVar3 = 1;
    if ((&g_packedRecords_A62x8[iVar2].field1604_0x7e6)[param_2 * 0x11] == 0) {
      st::fn_004028F6(param_1);
    }
  }
  return uVar3;
}

// 004D7F70 FUN_004d7f70
#line 4 "decomp/ST.exe/functions/004D7F70/decomp.c"
undefined4 st::fn_004D7F70(char param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;

  iVar2 = (int)param_1;
  uVar3 = 0;
  if (param_4 <= (&g_packedRecords_A62x8[iVar2].field1605_0x7ea)[param_2 * 0x11]) {
    (&g_packedRecords_A62x8[iVar2].field1610_0x7f2)[param_2 * 0x11] = 0;
    do {
      uVar1 = (&g_packedRecords_A62x8[iVar2].field1610_0x7f2)[param_2 * 0x11];
      if ((&g_packedRecords_A62x8[iVar2].field1612_0x7fa)[param_2 * 0x11] <= uVar1) {
        return 0;
      }
      piVar4 = (int *)((&g_packedRecords_A62x8[iVar2].field1611_0x7f6)[param_2 * 0x11] * uVar1 +
                      (&g_packedRecords_A62x8[iVar2].field1625_0x80a)[param_2 * 0x11]);
      (&g_packedRecords_A62x8[iVar2].field1610_0x7f2)[param_2 * 0x11] = uVar1 + 1;
      if (piVar4 == nullptr) {
        return 0;
      }
    } while (*piVar4 != param_3);
    st::fn_00403814(iVar2,param_4);
    (&g_packedRecords_A62x8[iVar2].field1605_0x7ea)[param_2 * 0x11] =
         (&g_packedRecords_A62x8[iVar2].field1605_0x7ea)[param_2 * 0x11] - param_4;
    (&g_packedRecords_A62x8[iVar2].field1629_0x81a)[param_2 * 0x11] =
         (&g_packedRecords_A62x8[iVar2].field1629_0x81a)[param_2 * 0x11] - param_4;
    piVar4[4] = st::machine_word_boundary_cast<int>(piVar4[4] - param_4);
    uVar3 = 1;
    if ((&g_packedRecords_A62x8[iVar2].field1605_0x7ea)[param_2 * 0x11] == 0) {
      st::fn_004028F6(param_1);
    }
  }
  return uVar3;
}

// 004D8080 FUN_004d8080
#line 4 "decomp/ST.exe/functions/004D8080/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 004D8080 returns zeroed full register at 004D80B7 @ 004D80BB */

uint st::fn_004D8080(char param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 * 0x44 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x7DA)) = param_3;
  st::fn_004028F6(param_1);
  return 0;
}

// 004D80D0 FUN_004d80d0
#line 4 "decomp/ST.exe/functions/004D80D0/decomp.c"
undefined4 st::fn_004D80D0(char param_1,int param_2)

{
  return *(undefined4 *)(param_2 * 0x44 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x7DA));
}

// 004D8110 FUN_004d8110
#line 4 "decomp/ST.exe/functions/004D8110/decomp.c"
undefined4 st::fn_004D8110(undefined4 param_1)

{
  DAT_007fa138 = param_1;
  DAT_007fa13c = param_1;
  DAT_007fa140 = (int)g_worldGrid.sizeZ * (int)g_worldGrid.planeStride;
  st::fn_00404912();
  DAT_007fa148 = st::fn_00401267();
  DAT_007fa14c = g_playSystem_00802A38->field_00E4;
  return 0;
}

// 004D8190 FUN_004d8190
#line 4 "decomp/ST.exe/functions/004D8190/decomp.c"
void st::fn_004D8190(void)

{
  int iVar2;
  int iVar3;
  int iVar1;
  longlong lVar4;
  longlong lVar5;

  if (DAT_007fa13c != 0) {
    lVar4 = st::fn_006B12CC(DAT_007fa140);
    lVar5 = st::fn_006B12CC(DAT_007fa13c);
    iVar2 = st::fn_006B12A8((int)lVar4,(int)lVar5);
    iVar3 = st::fn_006B1280(iVar2);
    if (iVar3 < 0x1c2) {
      iVar2 = st::fn_006B12DC(iVar2,iVar2);
      lVar4 = st::fn_006B12CC(0x19);
      iVar2 = st::fn_006B12DC((int)lVar4,iVar2);
      iVar1 = st::fn_006B1280(iVar2);
      DAT_007fa144 = iVar1 << 1;
      return;
    }
  }
  DAT_007fa144 = 0xfffffff;
  return;
}

// 004D8230 FUN_004d8230
#line 4 "decomp/ST.exe/functions/004D8230/decomp.c"
undefined4 st::fn_004D8230(void)

{
  return DAT_007fa144;
}

// 004D8250 FUN_004d8250
#line 1 "decomp/ST.exe/functions/004D8250/decomp.c"

int st::fn_004D8250(void)

{
  int iVar1;

  if ((DAT_007fa138 == 0) || (iVar1 = (DAT_007fa13c * 0xf) / DAT_007fa138, iVar1 < 0)) {
    iVar1 = 0;
  }
  return iVar1;
}

// 004D8280 FUN_004d8280
#line 1 "decomp/ST.exe/functions/004D8280/decomp.c"

int st::fn_004D8280(void)

{
  int iVar1;

  if ((DAT_007fa144 == 0) || (iVar1 = (DAT_007fa148 * 0xf) / DAT_007fa144, iVar1 < 0)) {
    iVar1 = 0;
  }
  return iVar1;
}

// 004D82B0 FUN_004d82b0
#line 1 "decomp/ST.exe/functions/004D82B0/decomp.c"

int st::fn_004D82B0(int param_1)

{
  if ((DAT_007fa140 / 100 <= DAT_007fa13c) && (param_1 != 0)) {
    DAT_007fa13c = DAT_007fa13c - param_1;
    if (DAT_007fa13c < 0) {
      DAT_007fa13c = 0;
    }
    st::fn_00404912();
  }
  return DAT_007fa13c;
}

// 004D8320 FUN_004d8320
#line 4 "decomp/ST.exe/functions/004D8320/decomp.c"
undefined4 st::fn_004D8320(undefined4 param_1)

{
  DAT_007fa138 = param_1;
  DAT_007fa13c = param_1;
  st::fn_00404912();
  DAT_007fa148 = st::fn_00401267();
  return 0;
}

// 004D8360 FUN_004d8360
#line 4 "decomp/ST.exe/functions/004D8360/decomp.c"
undefined4 st::fn_004D8360(void)

{
  if (DAT_007fa13c < DAT_007fa138) {
    if (DAT_007fa14c + DAT_007fa144 * 5 <= g_playSystem_00802A38->field_00E4) {
      DAT_007fa13c = DAT_007fa13c + 2;
      DAT_007fa14c = g_playSystem_00802A38->field_00E4;
      st::fn_00404912();
    }
  }
  return 0;
}

// 004D83D0 FUN_004d83d0
#line 4 "decomp/ST.exe/functions/004D83D0/decomp.c"
undefined4 st::fn_004D83D0(undefined1 param_1,int param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;

  if (DAT_007fa168 == nullptr) {
    DAT_007fa168 = st::machine_word_boundary_cast<undefined4>(st::fn_006AAC70((int)g_worldGrid.planeStride));
  }
  if (param_2 < 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = 0;
  }
  if (param_3 < 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = 0;
  }
  if ((int)g_worldGrid.sizeX < (int)(param_4 + param_2)) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = g_worldGrid.sizeX - param_2;
  }
  if ((int)g_worldGrid.sizeY < param_3 + param_5) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_5 = g_worldGrid.sizeY - param_3;
  }
  iVar1 = param_3 + param_5;
  if (iVar1 <= param_3) {
    return 0;
  }
  do {
    puVar3 = (undefined4 *)((int)DAT_007fa168 + param_2 + g_worldGrid.sizeX * param_3);
    for (uVar2 = param_4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = CONCAT22(CONCAT11(param_1,param_1),CONCAT11(param_1,param_1));
      puVar3 = puVar3 + 1;
    }
    param_3 = param_3 + 1;
    for (uVar2 = param_4 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar3 = param_1;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  } while (param_3 < iVar1);
  return 0;
}

// 004D84E0 FUN_004d84e0
#line 1 "decomp/ST.exe/functions/004D84E0/decomp.c"

uint st::fn_004D84E0(int param_1)

{
  uint uVar1;

  uVar1 = 0xffffffff;
  if (param_1 != 0) {
    if (g_array_007FA150 == nullptr) {
      g_array_007FA150 = st::fn_006AE290(nullptr,0x14,4,0x14);
    }
    uVar1 = st::fn_006AE1C0(g_array_007FA150,&param_1);
  }
  return uVar1;
}

// 004D8530 FUN_004d8530
#line 1 "decomp/ST.exe/functions/004D8530/decomp.c"

/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 00580D30 -> 004D8530 @ 00580D75 */

void st::fn_004D8530(STResourceC *param_1)

{
  int iVar1;
  STResourceC *local_8;

  if (g_array_007FA150 != nullptr) {
    g_array_007FA150->iteratorIndex = 0;
    iVar1 = st::fn_006B1190(g_array_007FA150,(byte *)&local_8);
    if (-1 < iVar1) {
      while (local_8 != param_1) {
        iVar1 = st::fn_006B1190(g_array_007FA150,(byte *)&local_8);
        if (iVar1 < 0) {
          return;
        }
      }
      st::fn_006B0C70(g_array_007FA150,st::machine_word_boundary_cast<uint>(g_array_007FA150->iteratorIndex - 1));
    }
  }
  return;
}

// 004D85B0 FUN_004d85b0
#line 1 "decomp/ST.exe/functions/004D85B0/decomp.c"

void st::fn_004D85B0(uint param_1)

{
  if (g_array_007FA150 != nullptr) {
    st::fn_006B0C70(g_array_007FA150,param_1);
  }
  return;
}

// 004D85E0 FUN_004d85e0
#line 1 "decomp/ST.exe/functions/004D85E0/decomp.c"

/* [STAbiConsistencyApplier] pointer_return_element_width target=return:-1: return=/uint *32
   Evidence: generic returned address is dereferenced with one consistent machine width across
   callers; width=4, sites=004AE0B0 @ 004AE463 MOV EDX,dword ptr [EAX] | 004E0040 @ 004E0099 MOV
   EAX,dword ptr [EDI] | 004E0040 @ 004E00F7 MOV EAX,dword ptr [EDI + 0x259] | 004E0250 @ 004E028D
   MOV EAX,dword ptr [EDI] | 004E0250 @ 004E02EE MOV EAX,dword ptr [EDI + 0x259] */

uint * st::fn_004D85E0(int param_1,int param_2,int param_3)

{
  int iVar1;
  STFishC *local_10;
  short local_a;
  short local_8;
  short local_6;

  if (g_array_007FA150 != nullptr) {
    g_array_007FA150->iteratorIndex = 0;
    iVar1 = st::fn_006B1190(g_array_007FA150,(byte *)&local_10);
    while (-1 < iVar1) {
      if ((((local_10 != nullptr) &&
           (st::fn_004018C5(local_10,&local_6,&local_8,&local_a), local_6 == param_1)) &&
          (local_8 == param_2)) && (local_a == param_3)) {
        return (uint *)local_10;
      }
      iVar1 = st::fn_006B1190(g_array_007FA150,(byte *)&local_10);
    }
  }
  return nullptr;
}

// 004D86A0 FUN_004d86a0
#line 4 "decomp/ST.exe/functions/004D86A0/decomp.c"
undefined4 st::fn_004D86A0(uint param_1,int param_2)

{
  undefined4 uVar1;

  g_packedRecords_A62x8[param_1].field15_0x1f = *(undefined4 *)(&DAT_007bf558 + param_2 * 4);
  g_packedRecords_A62x8[param_1].field16_0x23 = *(undefined4 *)(&DAT_007bf570 + param_2 * 4);
  if (g_packedRecords_A62x8[param_1].field0_0x0 == '\x03') {
    uVar1 = *(undefined4 *)(&DAT_007bf564 + param_2 * 4);
    g_packedRecords_A62x8[param_1].field1951_0x99e = *(undefined4 *)(&DAT_007bf588 + param_2 * 4);
    g_packedRecords_A62x8[param_1].field1949_0x996 = uVar1;
  }
  else {
    g_packedRecords_A62x8[param_1].field17_0x27 = *(undefined4 *)(&DAT_007bf57c + param_2 * 4);
  }
  if (param_1 == DAT_0080874d) {
    st::fn_00404B8D((char)param_1);
  }
  return 0;
}

// 004D8760 FUN_004d8760
#line 1 "decomp/ST.exe/functions/004D8760/decomp.c"

/* [STPrototypeApplier] Propagated return.
   Evidence: 004D8760 returns zeroed full register at 004D8798 @ 004D879B */

uint st::fn_004D8760(int param_1)

{
  st::fn_00403364((*(int *)(&DAT_007bf594 + param_1 * 4) * (int)g_worldGrid.sizeZ *
                     (int)g_worldGrid.planeStride) / 10);
  return 0;
}

// 004D87B0 FUN_004d87b0
#line 1 "decomp/ST.exe/functions/004D87B0/decomp.c"

int st::fn_004D87B0(char param_1,int param_2)

{
  int iVar1;
  int iVar2;

  iVar1 = (int)param_1;
  if (iVar1 == 0xff) {
    return 0;
  }
  iVar2 = g_packedRecords_A62x8[iVar1].field15_0x1f + param_2;
  g_packedRecords_A62x8[iVar1].field15_0x1f = iVar2;
  return iVar2;
}

// 004D8800 FUN_004d8800
#line 1 "decomp/ST.exe/functions/004D8800/decomp.c"

int st::fn_004D8800(char param_1,int param_2)

{
  int iVar1;
  int iVar2;

  iVar1 = (int)param_1;
  if (iVar1 == 0xff) {
    return 0;
  }
  if ((int)g_packedRecords_A62x8[iVar1].field15_0x1f < param_2) {
    return -1;
  }
  iVar2 = g_packedRecords_A62x8[iVar1].field15_0x1f - param_2;
  g_packedRecords_A62x8[iVar1].field15_0x1f = iVar2;
  return iVar2;
}

// 004D8870 FUN_004d8870
#line 4 "decomp/ST.exe/functions/004D8870/decomp.c"
undefined4 st::fn_004D8870(char param_1)

{
  if (param_1 == 0xff) {
    return 0;
  }
  return g_packedRecords_A62x8[param_1].field15_0x1f;
}

// 004D88B0 FUN_004d88b0
#line 4 "decomp/ST.exe/functions/004D88B0/decomp.c"
undefined4 st::fn_004D88B0(char param_1,undefined4 param_2)

{
  if (param_1 == 0xff) {
    return 0;
  }
  g_packedRecords_A62x8[param_1].field15_0x1f = param_2;
  return param_2;
}

// 004D88F0 FUN_004d88f0
#line 1 "decomp/ST.exe/functions/004D88F0/decomp.c"

int st::fn_004D88F0(char param_1,int param_2)

{
  int iVar1;
  int iVar2;

  iVar1 = (int)param_1;
  if (iVar1 == 0xff) {
    return 0;
  }
  iVar2 = g_packedRecords_A62x8[iVar1].field16_0x23 + param_2;
  g_packedRecords_A62x8[iVar1].field16_0x23 = iVar2;
  return iVar2;
}

// 004D8940 FUN_004d8940
#line 1 "decomp/ST.exe/functions/004D8940/decomp.c"

int st::fn_004D8940(char param_1,int param_2)

{
  int iVar1;
  int iVar2;

  iVar1 = (int)param_1;
  if (iVar1 == 0xff) {
    return 0;
  }
  if ((int)g_packedRecords_A62x8[iVar1].field16_0x23 < param_2) {
    return -1;
  }
  iVar2 = g_packedRecords_A62x8[iVar1].field16_0x23 - param_2;
  g_packedRecords_A62x8[iVar1].field16_0x23 = iVar2;
  return iVar2;
}

// 004D89B0 FUN_004d89b0
#line 4 "decomp/ST.exe/functions/004D89B0/decomp.c"
undefined4 st::fn_004D89B0(char param_1)

{
  if (param_1 == 0xff) {
    return 0;
  }
  return g_packedRecords_A62x8[param_1].field16_0x23;
}

// 004D89F0 FUN_004d89f0
#line 4 "decomp/ST.exe/functions/004D89F0/decomp.c"
undefined4 st::fn_004D89F0(char param_1,undefined4 param_2)

{
  if (param_1 == 0xff) {
    return 0;
  }
  g_packedRecords_A62x8[param_1].field16_0x23 = param_2;
  return param_2;
}

// 004D8A30 FUN_004d8a30
#line 1 "decomp/ST.exe/functions/004D8A30/decomp.c"

int st::fn_004D8A30(char param_1,int param_2)

{
  int iVar1;
  int iVar2;

  iVar1 = (int)param_1;
  if (iVar1 == 0xff) {
    return 0;
  }
  iVar2 = g_packedRecords_A62x8[iVar1].field17_0x27 + param_2;
  g_packedRecords_A62x8[iVar1].field17_0x27 = iVar2;
  return iVar2;
}

// 004D8A80 FUN_004d8a80
#line 1 "decomp/ST.exe/functions/004D8A80/decomp.c"

int st::fn_004D8A80(char param_1,int param_2)

{
  int iVar1;
  int iVar2;

  iVar1 = (int)param_1;
  if (iVar1 == 0xff) {
    return 0;
  }
  if ((int)g_packedRecords_A62x8[iVar1].field17_0x27 < param_2) {
    return -1;
  }
  iVar2 = g_packedRecords_A62x8[iVar1].field17_0x27 - param_2;
  g_packedRecords_A62x8[iVar1].field17_0x27 = iVar2;
  return iVar2;
}

// 004D8AF0 FUN_004d8af0
#line 4 "decomp/ST.exe/functions/004D8AF0/decomp.c"
undefined4 st::fn_004D8AF0(char param_1)

{
  if (param_1 == 0xff) {
    return 0;
  }
  return g_packedRecords_A62x8[param_1].field17_0x27;
}

// 004D8B30 FUN_004d8b30
#line 4 "decomp/ST.exe/functions/004D8B30/decomp.c"
undefined4 st::fn_004D8B30(char param_1,undefined4 param_2)

{
  if (param_1 == 0xff) {
    return 0;
  }
  g_packedRecords_A62x8[param_1].field17_0x27 = param_2;
  return param_2;
}

// 004D8B70 FUN_004d8b70
#line 4 "decomp/ST.exe/functions/004D8B70/decomp.c"
undefined4 st::fn_004D8B70(char param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar2;
  uint uVar5;
  int iVar4;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;

  uVar6 = (uint)param_1;
  if (uVar6 == 0xff) {
    return 0;
  }
  if ((uVar6 == DAT_0080874d) && (g_money_008016D4 != nullptr)) {
    if (g_packedRecords_A62x8[uVar6].field0_0x0 == '\x03') {
      uVar2 = st::fn_004036A7(uVar6);
      iVar3 = st::fn_00405D80(uVar6);
      iVar2 = (int)(uVar2 * 0x14) / iVar3;
      if (0x14 < iVar2) {
        iVar2 = 0x14;
      }
      bVar1 = (byte)iVar2;
      uVar7 = g_packedRecords_A62x8[uVar6].field16_0x23;
      iVar2 = 0;
      bVar9 = 1;
      uVar8 = g_packedRecords_A62x8[uVar6].field1951_0x99e;
      uVar5 = st::fn_004036A7(uVar6);
      st::fn_00401E83(g_money_008016D4,uVar5,uVar7,uVar8,bVar1,bVar9,iVar2);
      return 0;
    }
    iVar2 = g_packedRecords_A62x8[uVar6].field1940_0x972;
    iVar4 = iVar2 - g_packedRecords_A62x8[uVar6].field1941_0x976;
    if (iVar4 < 0) {
      st::fn_00401E83
                (g_money_008016D4,g_packedRecords_A62x8[uVar6].field15_0x1f,
                 g_packedRecords_A62x8[uVar6].field16_0x23,g_packedRecords_A62x8[uVar6].field17_0x27
                 ,0xd,0,0);
      return 0;
    }
    if (((iVar2 != 0) && (iVar4 != 0)) && (iVar4 = (iVar4 * 0xd) / iVar2, 0xd < iVar4)) {
      iVar4 = 0xd;
    }
    st::fn_00401E83
              (g_money_008016D4,g_packedRecords_A62x8[uVar6].field15_0x1f,
               g_packedRecords_A62x8[uVar6].field16_0x23,g_packedRecords_A62x8[uVar6].field17_0x27,
               (byte)iVar4,1,0);
  }
  return 0;
}

// 004D8D00 FUN_004d8d00
#line 4 "decomp/ST.exe/functions/004D8D00/decomp.c"
undefined4 __fastcall st::fn_004D8D00(AnonShape_004D8D00_A9D3F7D4 *param_1)

{
  param_1->field_04D0 = 0;
  param_1->field_04F0 = 0;
  param_1->field_04EC = 0;
  param_1->field_0261 = 0;
  param_1->field_04F4 = g_playSystem_00802A38->field_00E4;
  return 0;
}

// 004D8D40 FUN_004d8d40
#line 4 "decomp/ST.exe/functions/004D8D40/decomp.c"
undefined4 __fastcall st::fn_004D8D40(int param_1)

{
  int iVar1;
  STJellyGunC *local_8;

  local_8 = nullptr;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(AnonShape_005EFAE0_B406B78B **)(param_1 + 0x4f0) != nullptr) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar1 = st::fn_006E62D0
                      (g_playSystem_00802A38,*(AnonShape_005EFAE0_B406B78B **)(param_1 + 0x4f0),
                       (int *)&local_8);
    if (iVar1 == 0) {
      st::fn_004058B2(local_8);
      return 0;
    }
    *(undefined4 *)(param_1 + 0x4f0) = 0;
  }
  return 0;
}

// 004D8DB0 FUN_004d8db0
#line 4 "decomp/ST.exe/functions/004D8DB0/decomp.c"
undefined4 __fastcall st::fn_004D8DB0(AnonShape_004D8DB0_597A2A4F *param_1)

{
  switch(param_1->field_0245) {
  case 0:
  case 5:
    if (param_1->field_04F0 != 0) {
      if (99 < param_1->field_04EC) {
        return 0;
      }
      param_1->field_0261 = 0;
      return 0;
    }
    break;
  case 1:
  case 6:
    param_1->field_04D0 = 0;
    break;
  default:
    goto switchD_004d8dbb_caseD_2;
  }
  param_1->field_0261 = 0;
switchD_004d8dbb_caseD_2:
  return 0;
}

// 004D8E30 FUN_004d8e30
#line 4 "decomp/ST.exe/functions/004D8E30/decomp.c"
undefined4 __fastcall st::fn_004D8E30(TLOBaseTy *param_1)

{
  if (param_1->field_04D0 == CASE_0) {
    param_1->field_04D0 = CASE_1;
    st::fn_00401A0F(param_1);
    st::fn_00402CF7(param_1,0);
  }
  return 1;
}

// 004D8E70 FUN_004d8e70
#line 4 "decomp/ST.exe/functions/004D8E70/decomp.c"
undefined4 __thiscall st::fn_004D8E70(void *this,int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  void *local_8;

  local_8 = nullptr;
  if (99 < STField<int>(this,0x4ec)) {
    if (STField<AnonShape_005EFAE0_B406B78B *>(this,0x4f0) == nullptr)
    {
      STField<undefined4>(this,0x4d0) = 1;
      STField<undefined4>(this,0x261) = 1;
      STField<uint>(this,0x265) = STField<uint>(this,0x265) | 2;
      STField<int>(this,0x2a5) = param_1;
      STField<int>(this,0x2a9) = param_2;
      STField<undefined4>(this,0x2ad) = param_3;
      return 0;
    }
    iVar1 = st::fn_006E62D0
                      (g_playSystem_00802A38,STField<AnonShape_005EFAE0_B406B78B *>(this,0x4f0),
                       (int *)&local_8);
    if (iVar1 == 0) {
      st::fn_004021F3(local_8,param_1,param_2);
      STField<undefined4>(this,0x4ec) = 0;
      STField<uint>(this,0x4d8) = g_playSystem_00802A38->field_00E4;
      STField<undefined4>(this,0x261) = 0;
      return 0;
    }
    STField<undefined4>(this,0x4f0) = 0;
    STField<undefined4>(this,0x261) = 0;
  }
  return 0;
}

// 004D8F80 FUN_004d8f80
#line 4 "decomp/ST.exe/functions/004D8F80/decomp.c"
undefined4 __fastcall st::fn_004D8F80(AnonShape_004D8F80_1255A4D6 *param_1)

{
  int iVar1;

  if ((int)param_1->field_04EC < 100) {
    if (param_1->field_04D8 + 0x4b <= g_playSystem_00802A38->field_00E4) {
      iVar1 = st::machine_word_boundary_cast<int>(param_1->field_04EC + 1);
      param_1->field_04D8 = g_playSystem_00802A38->field_00E4;
      param_1->field_04EC = iVar1;
      if ((99 < iVar1) && (param_1->field_04EC = 100, param_1->field_04F0 != 0)) {
        param_1->field_0261 = 1;
      }
    }
  }
  return 0;
}

// 004D9350 FUN_004d9350
#line 4 "decomp/ST.exe/functions/004D9350/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall st::fn_004D9350(TLOBaseTy *param_1)

{
  uint uVar1;
  short sVar2;
  TLOBaseTy_field_04D0State TVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;

  TVar3 = param_1->field_04D0;
  if ((TVar3 == CASE_3) || (TVar3 == CASE_5)) {
    iVar4 = st::fn_004042AF(&param_1->field_01D5,'\f');
    if (iVar4 != param_1->field_01F5->field_01C4) {
      return 0;
    }
    st::fn_00402B17((AnonShape_004D9000_7AA66E43 *)param_1);
  }
  else {
    if (TVar3 != CASE_4) {
      return 0;
    }
    if (DAT_00798de0 < 2) {
      return 0;
    }
    if (DAT_00798de0 <= param_1->field_04D4) {
      return 0;
    }
    if (g_playSystem_00802A38->field_00E4 < param_1->field_04DC + param_1->field_04D8) {
      return 0;
    }
    iVar7 = st::machine_word_boundary_cast<int>(param_1->field_04D4 + 1);
    param_1->field_04D8 = g_playSystem_00802A38->field_00E4;
    param_1->field_04D4 = iVar7;
    iVar4 = ((_UNK_00798e58 - _UNK_00798e4c) * iVar7) / DAT_00798de0 + _UNK_00798e4c;
    iVar5 = ((_UNK_00798e5c - _UNK_00798e50) * iVar7) / DAT_00798de0 + _UNK_00798e50;
    param_1->field_04E0[0] =st::machine_word_boundary_cast<uint>(
         param_1->field_0041 + 100 +
         _UNK_00798e48 + ((_UNK_00798e54 - _UNK_00798e48) * iVar7) / DAT_00798de0);
    sVar2 = param_1->field_0045;
    uVar1 = st::machine_word_boundary_cast<uint>(param_1->field_0043 + 100 + iVar4);
    param_1->field_04E0[1] = uVar1;
    uVar6 = iVar5 + sVar2;
    param_1->field_04E0[2] = uVar6;
    st::fn_004045D9
              ((STT3DSprC *)param_1->field_05FF,
               (float)(int)param_1->field_04E0[0] * _DAT_007904f8 * _DAT_007904f0,
               (float)(int)uVar1 * _DAT_007904f8 * _DAT_007904f0,
               (float)(int)uVar6 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    if (param_1->field_04D4 < *(int *)(&DAT_00798dd0 + param_1->field_04D0 * 4)) {
      return 0;
    }
    if (param_1->field_04D0 == CASE_4) {
      st::fn_00403EFE(param_1,nullptr);
      st::fn_00402CF7(param_1,0);
      return 0;
    }
  }
  st::fn_00402CF7(param_1,0);
  return 0;
}

// 004D96B0 FUN_004d96b0
#line 4 "decomp/ST.exe/functions/004D96B0/decomp.c"
undefined4 st::fn_004D96B0(void)

{
  undefined1 local_8 [4];

  if (g_array_007FA16C == nullptr) {
    g_array_007FA16C = st::fn_006AE290(nullptr,10,4,10);
  }
  st::fn_006AE1C0(g_array_007FA16C,local_8);
  return 0;
}

// 004D9700 FUN_004d9700
#line 4 "decomp/ST.exe/functions/004D9700/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004B9A40 -> 004D9700 @ 004B9B20; TLOBaseTy::sub_004B9A40 this; stable alias ESI */

undefined4 __fastcall st::fn_004D9700(TLOBaseTy *param_1)

{
  uint index;
  TLOBaseTy *local_8;

  if (g_array_007FA16C != nullptr) {
    index = 0;
    local_8 = param_1;
    if (0 < (int)g_array_007FA16C->count) {
      do {
        st::fn_006ACC70(g_array_007FA16C,index,&local_8);
        if (local_8 == param_1) {
          st::fn_006B0C70(g_array_007FA16C,index);
          break;
        }
        index = index + 1;
      } while ((int)index < (int)g_array_007FA16C->count);
    }
    if (g_array_007FA16C->count == 0) {
      st::fn_006AE110(g_array_007FA16C);
      g_array_007FA16C = nullptr;
    }
  }
  return 0;
}

// 004D9790 FUN_004d9790
#line 4 "decomp/ST.exe/functions/004D9790/decomp.c"
undefined4 __fastcall st::fn_004D9790(AnonShape_004D9790_FC54D6B0 *param_1)

{
  uint uVar1;
  uint uVar2;

  param_1->field_04D0 = 0;
  param_1->field_04D4 = g_playSystem_00802A38->field_00E4;
  uVar2 = st::machine_word_boundary_cast<uint>(param_1->field_001C * 0x41c64e6d + 0x3039);
  param_1->field_001C = uVar2;
  uVar1 = g_playSystem_00802A38->field_00E4;
  param_1->field_04DC = 0;
  param_1->field_04E0 = 0;
  param_1->field_04E4 = 0;
  param_1->field_04D8 = (uVar2 >> 0x10) % 0x4c + uVar1;
  return 0;
}

// 004D9820 FUN_004d9820
#line 4 "decomp/ST.exe/functions/004D9820/decomp.c"
undefined4 __fastcall st::fn_004D9820(int *param_1)

{
  STWorldObject *this;
  short sVar1;
  int iVar3;
  int iVar2;
  int iVar6;
  short sVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  longlong lVar10;
  int local_8;

  if (param_1[0x136] + 0x4bU <= g_playSystem_00802A38->field_00E4) {
    param_1[0x136] = g_playSystem_00802A38->field_00E4;
    param_1[0x137] = 0;
    param_1[0x138] = 0;
    iVar7 = st::machine_word_boundary_cast<int>(param_1[0x16d] + -0xd);
    if (iVar7 < param_1[0x16d] + 0xd) {
      do {
        if (((-1 < iVar7) && (iVar7 < g_worldGrid.sizeY)) &&
           (iVar9 = st::machine_word_boundary_cast<int>(param_1[0x16c] + -0xd), sVar4 = g_worldGrid.sizeX, sVar5 = g_worldGrid.sizeZ,
           iVar9 < param_1[0x16c] + 0xd)) {
          do {
            if (((-1 < iVar9) && (iVar9 < sVar4)) && (local_8 = 0, 0 < sVar5)) {
              do {
                sVar8 = (short)iVar9;
                if ((((-1 < sVar8) && (sVar8 < sVar4)) &&
                    (((sVar6 = (short)iVar7, -1 < sVar6 &&
                      ((((sVar6 < g_worldGrid.sizeY && (sVar1 = (short)local_8, -1 < sVar1)) &&
                        (sVar1 < sVar5)) &&
                       ((this = g_worldGrid.cells
                                [(int)sVar6 * (int)sVar4 + (int)sVar1 * (int)g_worldGrid.planeStride
                                 + (int)sVar8].objects[0], this != nullptr &&
                        (this != (STWorldObject *)param_1)))))) &&
                     (iVar3 = this->GetObjectTypeId(), iVar3 == 0x3a)))) &&
                   (iVar2 = st::fn_006ACED8(iVar9,iVar7,param_1[0x16c],param_1[0x16d]), iVar2 < 0xe)) {
                  param_1[0x137] = st::machine_word_boundary_cast<int>(param_1[0x137] + 1);
                  param_1[0x138] = st::machine_word_boundary_cast<int>(param_1[0x138] + iVar2);
                }
                local_8 = local_8 + 1;
                sVar4 = g_worldGrid.sizeX;
                sVar5 = g_worldGrid.sizeZ;
              } while (local_8 < g_worldGrid.sizeZ);
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < param_1[0x16c] + 0xd);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < param_1[0x16d] + 0xd);
    }
  }
  iVar7 = st::machine_word_boundary_cast<int>(param_1[0x137] * 0xd - param_1[0x138]);
  if (iVar7 < 0) {
    iVar7 = 0;
  }
  if (param_1[0x137] == 0) {
    iVar6 = st::fn_00401267();
  }
  else {
    lVar10 = st::fn_006B12CC(0xd);
    iVar9 = (int)lVar10;
    lVar10 = st::fn_006B12CC(iVar7);
    iVar7 = st::fn_006B12A8((int)lVar10,iVar9);
    iVar7 = iVar7 + DAT_007eda8c;
    iVar9 = st::fn_00401267();
    lVar10 = st::fn_006B12CC(iVar9);
    iVar7 = st::fn_006B12DC((int)lVar10,iVar7);
    iVar6 = st::fn_006B1280(iVar7);
  }
  param_1[0x139] = iVar6;
  if ((uint)(param_1[0x139] + param_1[0x135]) <= g_playSystem_00802A38->field_00E4) {
    param_1[0x135] = g_playSystem_00802A38->field_00E4;
    param_1[0x134] = st::machine_word_boundary_cast<int>(param_1[0x134] + 2);
    st::fn_00401177(2);
    if (99 < param_1[0x134]) {
      st::fn_00404D9F((int)param_1);
    }
  }
  return 0;
}

// 004D9B20 FUN_004d9b20
#line 4 "decomp/ST.exe/functions/004D9B20/decomp.c"
undefined4 __fastcall st::fn_004D9B20(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x4d0) != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_00404336(*(char *)(param_1 + 0x24),*(int *)(param_1 + 0x4d0));
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_004028F6(*(char *)(param_1 + 0x24));
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(uint *)(param_1 + 0x24) == (uint)*(byte *)(*(int *)(param_1 + 0x10) + 0x112d)) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      st::fn_00404B8D((char)*(uint *)(param_1 + 0x24));
    }
    *(undefined4 *)(param_1 + 0x4d0) = 0;
    *(uint *)(param_1 + 0x4d4) = g_playSystem_00802A38->field_00E4;
  }
  return 0;
}

// 004D9BB0 FUN_004d9bb0
#line 4 "decomp/ST.exe/functions/004D9BB0/decomp.c"
void __fastcall st::fn_004D9BB0(int param_1)

{
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  *(undefined4 *)(param_1 + 0x261) = 0;
  return;
}

// 004D9BD0 FUN_004d9bd0
#line 4 "decomp/ST.exe/functions/004D9BD0/decomp.c"
undefined4 __fastcall st::fn_004D9BD0(AnonShape_004D9BD0_B3B50583 *param_1)

{
  int iVar1;

  iVar1 = param_1->field_0245;
  if (iVar1 == 0) {
    if (param_1->field_04D0 != 0) {
      if (param_1->field_04D0 != 1) {
        return 0;
      }
      param_1->field_0261 = 1;
      return 0;
    }
  }
  else {
    if ((iVar1 != 1) && (iVar1 != 6)) {
      return 0;
    }
    param_1->field_04D0 = 0;
  }
  param_1->field_0261 = 0;
  return 0;
}

// 004D9C20 FUN_004d9c20
#line 4 "decomp/ST.exe/functions/004D9C20/decomp.c"
undefined4 __fastcall st::fn_004D9C20(TLOBaseTy *param_1)

{
  if (param_1->field_04D0 == CASE_0) {
    param_1->field_04D0 = CASE_1;
    st::fn_00401A0F(param_1);
    st::fn_00402CF7(param_1,0);
  }
  return 1;
}

// 004D9C60 FUN_004d9c60
#line 4 "decomp/ST.exe/functions/004D9C60/decomp.c"
undefined4 st::fn_004D9C60(void)

{
  return 0;
}

// 004D9FE0 FUN_004d9fe0
#line 4 "decomp/ST.exe/functions/004D9FE0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall st::fn_004D9FE0(TLOBaseTy *param_1)

{
  uint uVar1;
  short sVar2;
  TLOBaseTy_field_04D0State TVar3;
  int iVar4;
  uint uVar5;
  int iVar6;

  TVar3 = param_1->field_04D0;
  if ((TVar3 == CASE_3) || (TVar3 == CASE_5)) {
    iVar4 = st::fn_004042AF(&param_1->field_01D5,'\f');
    if (iVar4 != param_1->field_01F5->field_01C4) {
      return 0;
    }
    st::fn_00405BA5((AnonShape_004D9C80_80F657D3 *)param_1);
  }
  else {
    if (TVar3 != CASE_4) {
      return 0;
    }
    if (DAT_00798eb0 < 2) {
      return 0;
    }
    if (DAT_00798eb0 <= param_1->field_04D4) {
      return 0;
    }
    if (g_playSystem_00802A38->field_00E4 < param_1->field_04DC + param_1->field_04D8) {
      return 0;
    }
    iVar6 = st::machine_word_boundary_cast<int>(param_1->field_04D4 + 1);
    param_1->field_04D8 = g_playSystem_00802A38->field_00E4;
    param_1->field_04D4 = iVar6;
    iVar4 = ((_UNK_00798f2c - _UNK_00798f20) * iVar6) / DAT_00798eb0 + _UNK_00798f20;
    uVar5 = ((_UNK_00798f28 - _UNK_00798f1c) * iVar6) / DAT_00798eb0 + _UNK_00798f1c +
            (int)param_1->field_0043;
    param_1->field_04E0[0] =
         (int)param_1->field_0041 +
         _UNK_00798f18 + ((_UNK_00798f24 - _UNK_00798f18) * iVar6) / DAT_00798eb0;
    sVar2 = param_1->field_0045;
    param_1->field_04E0[1] = uVar5;
    uVar1 = sVar2 + iVar4;
    param_1->field_04E0[2] = uVar1;
    st::fn_004045D9
              ((STT3DSprC *)param_1->field_05FF,
               (float)(int)param_1->field_04E0[0] * _DAT_007904f8 * _DAT_007904f0,
               (float)(int)uVar5 * _DAT_007904f8 * _DAT_007904f0,
               (float)(int)uVar1 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    if (param_1->field_04D4 < *(int *)(&DAT_00798ea0 + param_1->field_04D0 * 4)) {
      return 0;
    }
    if (param_1->field_04D0 == CASE_4) {
      st::fn_00403EFE(param_1,nullptr);
      st::fn_00402CF7(param_1,0);
      return 0;
    }
  }
  st::fn_00402CF7(param_1,0);
  return 0;
}

// 004DA340 FUN_004da340
#line 4 "decomp/ST.exe/functions/004DA340/decomp.c"
void __thiscall st::fn_004DA340(void *this,byte *param_1)

{
  param_1[1] = 0xff;
  param_1[2] = 0xff;
  param_1[3] = 0xff;
  param_1[4] = 0xff;
  param_1[5] = 0xff;
  param_1[6] = 0xff;
  param_1[7] = 0xff;
  param_1[8] = 0xff;
  *param_1 = 0;
  if ((STField<int>(this,0x5ac) == 0x3c) || (STField<int>(this,0x5ac) == 0x53)) {
    st::fn_00404048(g_allPlayers_007FA174,STField<uint>(this,0x24),param_1,1);
  }
  return;
}

// 004DA390 FUN_004da390
#line 4 "decomp/ST.exe/functions/004DA390/decomp.c"
undefined4 __thiscall st::fn_004DA390(void *this,uint param_1,byte *param_2,int param_3)

{
  byte bVar2;
  byte *pbVar3;
  byte bVar4;
  short sVar5;
  int uVar5;
  int iVar7;
  byte *pbVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar10;
  int iVar6;
  byte *puVar11;
  int iVar12;
  byte recordIndex;
  uint uVar13;
  byte *puVar14;
  bool bVar15;
  undefined4 local_280 [78];
  undefined4 local_148 [3];
  undefined2 local_13c;
  int local_138;
  int local_134;
  undefined4 local_130;
  undefined2 local_12c;
  byte local_10;
  undefined3 uStack_f;
  void *local_c;
  byte *local_8;
  char bVar1;

  pbVar3 = param_2;
  param_2[1] = 0xff;
  param_2[2] = 0xff;
  param_2[3] = 0xff;
  param_2[4] = 0xff;
  local_8 = &g_bulkInitializedRecords_008087C7[0].field_0022;
  param_2[5] = 0xff;
  param_2[6] = 0xff;
  param_2[7] = 0xff;
  param_2[8] = 0xff;
  *param_2 = 0;
  local_c = this;
  do {
    pbVar8 = local_8;
    recordIndex = (byte)param_1;
    if (*local_8 != 0xff) {
      uVar5 = st::fn_004049B7(*local_8);
      uVar5 = (int)(byte)uVar5;
      if (uVar5 == 1) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = (byte *)0x3d;
      }
      else if (uVar5 == 2) {
        param_2 = (byte *)0x8d;
      }
      else if (uVar5 == 3) {
        param_2 = (byte *)0x49;
      }
      else {
        param_2 = nullptr;
      }
      bVar4 = *pbVar8;
      if (((bVar4 != 0xff) && (bVar4 != param_1)) && (pbVar8[-1] != 0)) {
        if (param_3 != 0) {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          auto _local_10 = CONCAT31(uStack_f,bVar4);
          if (DAT_00808a8f == '\0') {
            if (bVar4 == recordIndex) {
LAB_004da4d3:
              iVar7 = 0;
            }
            else {
              uVar13 = param_1 & 0xff;
              bVar2 = g_playerRelationMatrix[bVar4][uVar13];
              if ((bVar2 == 0) && (g_playerRelationMatrix[uVar13][bVar4] == 0)) {
                iVar7 = -2;
              }
              else if ((bVar2 == 1) && (g_playerRelationMatrix[uVar13][bVar4] == 0)) {
                iVar7 = -1;
              }
              else if ((bVar2 == 0) && (g_playerRelationMatrix[uVar13][bVar4] == 1)) {
                iVar7 = 1;
              }
              else {
                if ((bVar2 != 1) || (g_playerRelationMatrix[uVar13][bVar4] != 1)) goto LAB_004da4d3;
                iVar7 = 2;
              }
            }
            bVar15 = iVar7 < 0;
          }
          else {
            bVar15 = g_bulkInitializedRecords_008087C7[param_1 & 0xff].field_0023 !=
                     g_bulkInitializedRecords_008087C7[bVar4].field_0023;
          }
          if ((bVar15) &&
             ((g_packedRecords_A62x8[param_1].field1982_0xa0e != 3 ||
              (iVar7 = st::fn_0040186B((uint)bVar4,(int)param_2),
              (uint)((&DAT_00798f74)[iVar7] + g_packedRecords_A62x8[param_1].field1985_0xa1a) <=
              g_playSystem_00802A38->field_00E4)))) goto LAB_004da71f;
        }
        bVar1 = *local_8;
        pbVar8 = (byte *)(uint)(byte)bVar1;
        uVar9 = st::fn_004016E0(bVar1);
        *(undefined4 *)(pbVar3 + (uint)*pbVar3 * 0x10 + 9) = uVar9;
        uVar9 = st::fn_00403954(bVar1);
        *(undefined4 *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0xd) = uVar9;
        bVar4 = st::fn_004049B7(bVar1);
        if (bVar4 == 3) {
          uVar9 = st::fn_00401E6A(pbVar8);
        }
        else {
          uVar9 = st::fn_00402284(bVar1);
        }
        *(undefined4 *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x11) = uVar9;
        bVar4 = st::fn_004049B7(bVar1);
        if (bVar4 == 3) {
          uVar10 = st::fn_004036A7(param_1);
          iVar6 = st::fn_00405D80(param_1);
          iVar7 = (int)(uVar10 * 0x14) / iVar6;
          if (0x14 < iVar7) {
            iVar7 = 0x14;
          }
        }
        else {
          iVar12 = g_packedRecords_A62x8[(int)pbVar8].field1940_0x972;
          iVar10 = iVar12 - g_packedRecords_A62x8[(int)pbVar8].field1941_0x976;
          iVar7 = 0;
          if (iVar10 != 0) {
            if (iVar12 == 0) {
              iVar7 = -0xd;
            }
            else {
              iVar7 = (iVar10 * 0xd) / iVar12;
            }
          }
        }
        *(int *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x15) = iVar7;
        puVar11 = (byte *)(st::fn_004044E4(local_280,bVar1));
        puVar14 = (byte *)(local_148);
        memmove(puVar14, puVar11, 0x138); /* compiler REP MOVS byte copy */
        sVar5 = (short)local_148[1] + (short)local_148[0];
        *(short *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x89) = sVar5 + (short)local_148[2];
        *(short *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x8b) = sVar5;
        *(short *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x8d) = (short)local_148[2];
        *(undefined2 *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x8f) = local_13c;
        sVar5 = (short)local_134 + (short)local_138;
        *(short *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x91) = sVar5 + (short)local_130;
        *(short *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x93) = sVar5;
        *(short *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x95) = (short)local_130;
        *(undefined2 *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x97) = local_12c;
        pbVar3[*pbVar3 + 1] = bVar1;
        *pbVar3 = *pbVar3 + 1;
      }
    }
LAB_004da71f:
    local_8 = local_8 + 0x51;
    if (0x808a70 < (int)local_8) {
      uVar9 = st::fn_004016E0(recordIndex);
      *(undefined4 *)(pbVar3 + 0x79) = uVar9;
      uVar9 = st::fn_00403954(recordIndex);
      *(undefined4 *)(pbVar3 + 0x7d) = uVar9;
      bVar4 = st::fn_004049B7(recordIndex);
      if (bVar4 == 3) {
        uVar9 = st::fn_00401E6A((byte *)param_1);
      }
      else {
        uVar9 = st::fn_00402284(recordIndex);
      }
      *(undefined4 *)(pbVar3 + 0x81) = uVar9;
      iVar7 = g_packedRecords_A62x8[param_1].field1940_0x972;
      iVar10 = iVar7 - g_packedRecords_A62x8[param_1].field1941_0x976;
      iVar12 = 0;
      if (iVar10 != 0) {
        if (iVar7 == 0) {
          iVar12 = -0xd;
        }
        else {
          iVar12 = (iVar10 * 0xd) / iVar7;
        }
      }
      *(int *)(pbVar3 + 0x85) = iVar12;
      puVar11 = (byte *)(st::fn_004044E4(local_280,recordIndex));
      puVar14 = (byte *)(local_148);
      memmove(puVar14, puVar11, 0x138); /* compiler REP MOVS byte copy */
      sVar5 = (short)local_148[1] + (short)local_148[0];
      *(short *)(pbVar3 + 0xfb) = sVar5;
      *(short *)(pbVar3 + 0xfd) = (short)local_148[2];
      *(short *)(pbVar3 + 0xf9) = sVar5 + (short)local_148[2];
      *(undefined2 *)(pbVar3 + 0xff) = local_13c;
      sVar5 = (short)(local_134 + local_138);
      *(short *)(pbVar3 + 0x103) = sVar5;
      *(short *)(pbVar3 + 0x105) = (short)local_130;
      *(short *)(pbVar3 + 0x101) = sVar5 + (short)local_130;
      *(undefined2 *)(pbVar3 + 0x107) = local_12c;
      pbVar3[8] = recordIndex;
      return 0;
    }
  } while( true );
}

// 004DA9C0 FUN_004da9c0
#line 4 "decomp/ST.exe/functions/004DA9C0/decomp.c"
undefined4 __fastcall st::fn_004DA9C0(undefined4 param_1)

{
  byte bVar1;
  byte bVar2;
  int local_EAX_54;
  int iVar3;
  int iVar4;
  int local_EAX_206;
  int uVar3;
  int local_EAX_798;
  int uVar6;
  int local_EAX_1149;
  undefined4 uVar5;
  uint uVar7;
  byte recordIndex;
  uint uVar8;
  byte *pbVar9;
  STMessage *pSVar10;
  int *piVar11;
  bool bVar12;
  int local_2bc [155];
  STMessage local_50;
  int local_30;
  byte local_2c;
  undefined3 uStack_2b;
  uint local_28;
  int local_24;
  uint *local_20;
  int *local_1c;
  undefined4 local_18;
  uint local_14;
  int *local_10;
  byte *local_c;
  int *local_8;

  local_28 = 0;
  local_14 = 0;
  local_1c = st::pointer_boundary_cast<int *>(&g_packedRecords_A62x8[0].field1982_0xa0e);
  local_18 = param_1;
  do {
    uVar8 = local_14;
    piVar11 = local_1c;
    recordIndex = (byte)local_14;
    if (*local_1c == 1) {
      local_EAX_54 = st::fn_004049B7(recordIndex);
      local_EAX_54 = (int)(byte)local_EAX_54;
      if (local_EAX_54 == 1) {
        iVar3 = 0x3d;
      }
      else if (local_EAX_54 == 2) {
        iVar3 = 0x8d;
      }
      else if (local_EAX_54 == 3) {
        iVar3 = 0x49;
      }
      else {
        iVar3 = 0;
      }
      iVar4 = st::fn_0040186B(uVar8,iVar3);
      iVar3 = DAT_00798f74;
      if ((uint)(*(int *)(&DAT_00798f6c + iVar4 * 4) + piVar11[3]) <=
          g_playSystem_00802A38->field_00E4) {
        if ((uint)piVar11[1] % 3 == 1) {
          *piVar11 = 0;
          piVar11[2] = 1;
        }
        else {
          uVar7 = (uint)DAT_0080874d;
          *piVar11 = 2;
          piVar11[4] = iVar3;
          if (uVar8 == uVar7) {
            local_EAX_206 = st::fn_004049B7(recordIndex);
            local_EAX_206 = (int)(byte)local_EAX_206;
            if (local_EAX_206 == 1) {
              st::fn_00404BD8
                        ((SoundClassTy *)&g_sound,SOUND_MODE_6,nullptr,0x71,nullptr
                         ,0);
            }
            else if (local_EAX_206 == 2) {
              st::fn_00404BD8
                        ((SoundClassTy *)&g_sound,SOUND_MODE_6,nullptr,0x72,nullptr
                         ,0);
            }
            else if (local_EAX_206 == 3) {
              st::fn_00404BD8
                        ((SoundClassTy *)&g_sound,SOUND_MODE_6,nullptr,0x73,nullptr
                         ,0);
            }
          }
        }
      }
    }
    else if (*local_1c == 3) {
      local_c = &g_bulkInitializedRecords_008087C7[0].field_0022;
      local_10 = nullptr;
      local_8 = nullptr;
      do {
        uVar3 = st::fn_004049B7(recordIndex);
        uVar3 = (int)(byte)uVar3;
        if (uVar3 == 1) {
          iVar3 = 0x3f;
        }
        else if (uVar3 == 2) {
          iVar3 = 0x8e;
        }
        else if (uVar3 == 3) {
          iVar3 = 0x47;
        }
        else {
          iVar3 = 0;
        }
        if (((local_8 != (int *)uVar8) && (bVar1 = *local_c, bVar1 != 0xff)) && (local_c[-1] != 0))
        {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          auto _local_2c = CONCAT31(uStack_2b,bVar1);
          if (DAT_00808a8f == '\0') {
            if (bVar1 == recordIndex) {
LAB_004dabff:
              iVar4 = 0;
            }
            else {
              uVar7 = uVar8 & 0xff;
              bVar2 = g_playerRelationMatrix[bVar1][uVar7];
              if ((bVar2 == 0) && (g_playerRelationMatrix[uVar7][bVar1] == 0)) {
                iVar4 = -2;
              }
              else if ((bVar2 == 1) && (g_playerRelationMatrix[uVar7][bVar1] == 0)) {
                iVar4 = -1;
              }
              else if ((bVar2 == 0) && (g_playerRelationMatrix[uVar7][bVar1] == 1)) {
                iVar4 = 1;
              }
              else {
                if ((bVar2 != 1) || (g_playerRelationMatrix[uVar7][bVar1] != 1)) goto LAB_004dabff;
                iVar4 = 2;
              }
            }
            bVar12 = iVar4 < 0;
          }
          else {
            bVar12 = g_bulkInitializedRecords_008087C7[uVar8 & 0xff].field_0023 !=
                     g_bulkInitializedRecords_008087C7[bVar1].field_0023;
          }
          if (bVar12) {
            iVar3 = st::fn_0040186B((int)local_8,iVar3);
            uVar7 = (&DAT_00798f74)[iVar3];
            if ((g_playSystem_00802A38->field_00E4 < piVar11[3] + uVar7) &&
               (local_10 = (int *)0x1, local_28 < uVar7)) {
              local_28 = uVar7;
            }
          }
        }
        local_c = local_c + 0x51;
        local_8 = (int *)((int)local_8 + 1);
      } while ((int)local_c < 0x808a71);
      if (local_10 == nullptr) {
        *piVar11 = 0;
      }
      else {
        piVar11[4] = (piVar11[3] - g_playSystem_00802A38->field_00E4) + local_28;
      }
    }
    local_8 = piVar11 + 0xd;
    local_c = nullptr;
    do {
      if (((local_c != (byte *)uVar8) && (g_playSystem_00802A38->field_00E4 == local_8[-8])) &&
         (*local_8 == 0)) {
        if (uVar8 == DAT_0080874d) {
          *local_8 = 1;
          local_EAX_798 = st::fn_004049B7((char)uVar8);
          local_EAX_798 = (int)(byte)local_EAX_798;
          if (local_EAX_798 == 1) {
            iVar3 = 0x77;
          }
          else if (local_EAX_798 == 2) {
            iVar3 = 0x78;
          }
          else {
            if (local_EAX_798 != 3) goto LAB_004dad15;
            iVar3 = 0x79;
          }
          st::fn_00404BD8
                    ((SoundClassTy *)&g_sound,SOUND_MODE_6,nullptr,iVar3,nullptr,0);
        }
LAB_004dad15:
        iVar3 = 0;
        local_24 = 0;
        piVar11 = local_2bc;
        for (iVar4 = 0x9b; local_10 = local_2bc, iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar11 = 0;
          piVar11 = piVar11 + 1;
        }
        do {
          uVar6 = st::fn_004049B7((char)local_14);
          uVar6 = (int)(byte)uVar6;
          if ((*(char *)(*(int *)(&DAT_007bfc00 + uVar6 * 4) + iVar3) == '\0') &&
             ((&DAT_007e53bc)[iVar3] != '\0')) {
            uVar8 = 0;
            local_20 = (uint *)(local_1c + 5);
            pbVar9 = &g_bulkInitializedRecords_008087C7[0].field_0022;
            do {
              if (((local_c != (byte *)uVar8) && (local_14 != uVar8)) &&
                 (((int)pbVar9 < 0x808a71 &&
                  (((g_playSystem_00802A38 == nullptr || (*pbVar9 < 8)) &&
                   (g_playSystem_00802A38->field_00E4 <= *local_20)))))) {
                local_30 = st::fn_0040186B(local_14,iVar3);
                local_30 = local_30 + 1;
                iVar4 = st::fn_0040186B(uVar8,iVar3);
                iVar3 = local_24;
                if (local_30 <= iVar4) {
                  *local_10 = 1;
                  break;
                }
              }
              pbVar9 = pbVar9 + 0x51;
              uVar8 = uVar8 + 1;
              local_20 = local_20 + 1;
            } while ((int)pbVar9 < 0x808a71);
          }
          uVar7 = local_14;
          iVar3 = iVar3 + 1;
          local_10 = local_10 + 1;
          local_24 = iVar3;
        } while (iVar3 < 0x9b);
        uVar8 = local_14;
        if (g_aiBossClass_008117BC != nullptr) {
          pSVar10 = &local_50;
          for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
            pSVar10->unknown_00 = 0;
            pSVar10 = (STMessage *)&pSVar10->unknown_04;
          }
          local_50.id = 0x5dea;
          local_50.arg0.words.low = (word)uVar7;
          iVar3 = 0;
          piVar11 = local_2bc;
          do {
            local_EAX_1149 = st::fn_004049B7((char)local_c);
            local_EAX_1149 = (int)(byte)local_EAX_1149;
            if ((*(char *)(*(int *)(&DAT_007bfc00 + local_EAX_1149 * 4) + iVar3) == '\0') &&
               (*piVar11 == 0)) {
              local_50.arg1.words.low = (word)iVar3;
              uVar5 = st::fn_0040186B(uVar7,iVar3);
              local_50.arg1.words.high = (short)uVar5 + 1;
              g_aiBossClass_008117BC->GetMessage(&local_50);
            }
            iVar3 = iVar3 + 1;
            piVar11 = piVar11 + 1;
            uVar8 = local_14;
          } while (iVar3 < 0x9b);
        }
      }
      local_c = (byte *)((int)local_c + 1);
      local_8 = local_8 + 1;
    } while ((int)local_c < 8);
    local_14 = uVar8 + 1;
    /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
    local_1c = (int *)((int)local_1c + 0xa62);
    if (0x7fab3d < (int)local_1c) {
      return 0;
    }
  } while( true );
}

// 004DB020 FUN_004db020
#line 4 "decomp/ST.exe/functions/004DB020/decomp.c"
undefined4 st::fn_004DB020(int param_1,undefined4 param_2)

{
  STPlaySystemC *pSVar1;

  pSVar1 = g_playSystem_00802A38;
  if (g_packedRecords_A62x8[param_1].field1982_0xa0e == 0) {
    g_packedRecords_A62x8[param_1].field1982_0xa0e = 1;
    g_packedRecords_A62x8[param_1].field1983_0xa12 = param_2;
    g_packedRecords_A62x8[param_1].field1984_0xa16 = 0;
    g_packedRecords_A62x8[param_1].field1985_0xa1a = pSVar1->field_00E4;
  }
  return 0;
}

// 004DB0A0 FUN_004db0a0
#line 4 "decomp/ST.exe/functions/004DB0A0/decomp.c"
undefined4 st::fn_004DB0A0(int param_1)

{
  if (g_packedRecords_A62x8[param_1].field1982_0xa0e == 1) {
    g_packedRecords_A62x8[param_1].field1982_0xa0e = 0;
  }
  return 0;
}

// 004DB0F0 FUN_004db0f0
#line 4 "decomp/ST.exe/functions/004DB0F0/decomp.c"
undefined4 st::fn_004DB0F0(int param_1)

{
  STPlaySystemC *pSVar1;

  pSVar1 = g_playSystem_00802A38;
  if (g_packedRecords_A62x8[param_1].field1982_0xa0e == 2) {
    g_packedRecords_A62x8[param_1].field1982_0xa0e = 3;
    g_packedRecords_A62x8[param_1].field1985_0xa1a = pSVar1->field_00E4;
  }
  return 0;
}

// 004DB980 FUN_004db980
#line 4 "decomp/ST.exe/functions/004DB980/decomp.c"
/* [STAbiConsistencyApplier] stack_parameter_width target=parameter:3: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=004DB9D9 MOV EAX,dword ptr [EBP + 0x14];
   first-use mask */

STWorldObject * st::fn_004DB980(short param_1,short param_2,short param_3,byte param_4)

{
  if ((((-1 < param_1) && (param_1 < g_worldGrid.sizeX)) && (-1 < param_2)) &&
     (((param_2 < g_worldGrid.sizeY && (-1 < param_3)) && (param_3 < g_worldGrid.sizeZ)))) {
    return STGridAt3D(g_worldGrid, param_1, param_2, param_3).objects[param_4];
  }
  return (STWorldObject *)0;
}

// 004DBA20 FUN_004dba20
#line 4 "decomp/ST.exe/functions/004DBA20/decomp.c"
void __fastcall st::fn_004DBA20(AnonShape_004DBA20_8FF87D0F *param_1)

{
  param_1->field_04D0 = 0;
  param_1->field_04D4 = 0;
  param_1->field_04D8 = 0;
  param_1->field_04DC = 0;
  param_1->field_04E0 = 0;
  param_1->field_04E4 = 0;
  param_1->field_04E8 = 0;
  param_1->field_04EC = 0;
  return;
}

// 004DBA70 FUN_004dba70
#line 4 "decomp/ST.exe/functions/004DBA70/decomp.c"
undefined4 __fastcall st::fn_004DBA70(int param_1)

{
  AnonShape_004DBA70_007C3C4C *pAVar1;
  int iVar2;
  undefined4 *puVar3;
  AnonShape_004DBA70_007C3C4C *local_c;
  int local_8;

  puVar3 = (undefined4 *)(param_1 + 0x4d0);
  local_8 = 2;
  do {
    if (((AnonShape_005EFAE0_B406B78B *)*puVar3 != nullptr) &&
       (puVar3[6] != 0)) {
      iVar2 = st::fn_006E62D0
                        (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)*puVar3,
                         (int *)&local_c);
      pAVar1 = local_c;
      if (iVar2 == 0) {
        local_c->field_04C0 = 0;
        if (local_c->field_061F != nullptr) {
          st::fn_004049EE(local_c->field_061F);
          st::fn_0072E2B0((HoloTy *)pAVar1->field_061F);
          pAVar1->field_061F = nullptr;
        }
      }
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return 0;
}

// 004DBB10 FUN_004dbb10
#line 4 "decomp/ST.exe/functions/004DBB10/decomp.c"
undefined4 __thiscall st::fn_004DBB10(void *this,int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (((*(int *)(param_1 + 0x4c0) == 0) && (*(int *)(param_1 + 0x5ac) != 0x6d)) &&
     ((STField<int>(this,0x4d0) == 0 || (STField<int>(this,0x4d4) == 0)))) {
    return 1;
  }
  return 0;
}

// 004DBB60 FUN_004dbb60
#line 4 "decomp/ST.exe/functions/004DBB60/decomp.c"
undefined4 __thiscall st::fn_004DBB60(void *this,int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;

  piVar2 = param_1;
  iVar5 = 0;
  piVar3 = (int *)((int)this + 0x4d0);
  do {
    if (*piVar3 == 0) {
      *(int *)((int)this + iVar5 * 4 + 0x4d0) = param_1[6];
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      uVar4 = (**(code **)(*param_1 + 0x2c))();
      *(undefined4 *)((int)this + iVar5 * 4 + 0x4d8) = uVar4;
      *(int *)((int)this + iVar5 * 4 + 0x4e0) = param_2;
      if (100 < param_2) {
        *(undefined4 *)((int)this + iVar5 * 4 + 0x4e0) = 100;
      }
      if (*(int *)((int)this + iVar5 * 4 + 0x4e0) < 0) {
        *(undefined4 *)((int)this + iVar5 * 4 + 0x4e0) = 0;
      }
      *(undefined4 *)((int)this + iVar5 * 4 + 0x4e8) = 1;
      iVar1 = *(int *)((int)this + iVar5 * 4 + 0x4e0);
      piVar2[0x131] = STField<int>(this,0x18);
      piVar2[0x130] = iVar1;
      if (*(int *)((int)this + (0x135 - iVar5) * 4) != 0) {
        piVar3 = (int *)((int)this + (0x139 - iVar5) * 4);
        *piVar3 = 100 - *(int *)((int)this + iVar5 * 4 + 0x4e0);
        if (*(int *)((int)this + (0x13b - iVar5) * 4) != 0) {
          iVar5 = st::fn_006E62D0
                            (g_playSystem_00802A38,
                             *(AnonShape_005EFAE0_B406B78B **)((int)this + (0x135 - iVar5) * 4),
                             (int *)&param_1);
          if ((iVar5 == 0) && (param_1[0x131] == STField<int>(this,0x18))) {
            param_1[0x130] = *piVar3;
          }
        }
      }
      return 0;
    }
    iVar5 = iVar5 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar5 < 2);
  return 0;
}

// 004DBCC0 FUN_004dbcc0
#line 4 "decomp/ST.exe/functions/004DBCC0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004DBCC0 -> 006E62D0 @ 004DBD2B | 004DBCC0 -> 006E62D0 @ 004DBD92 */

undefined4 __thiscall st::fn_004DBCC0(void *this,int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;

  piVar2 = param_1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)((int)this + (int)param_1 * 4 + 0x4d0) != 0) &&
     (*(int *)((int)this + (int)param_1 * 4 + 0x4e8) != 0)) {
    *(int *)((int)this + (int)param_1 * 4 + 0x4e0) = param_2;
    if (100 < param_2) {
      *(undefined4 *)((int)this + (int)param_1 * 4 + 0x4e0) = 100;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)((int)this + (int)param_1 * 4 + 0x4e0) < 0) {
      *(undefined4 *)((int)this + (int)param_1 * 4 + 0x4e0) = 0;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar3 = st::fn_006E62D0
                      (g_playSystem_00802A38,
                       *(AnonShape_005EFAE0_B406B78B **)((int)this + (int)param_1 * 4 + 0x4d0),
                       (int *)&param_1);
    if (iVar3 == 0) {
      iVar3 = STField<int>(this,0x18);
      param_1[0x130] = *(int *)((int)this + (int)piVar2 * 4 + 0x4e0);
      param_1[0x131] = iVar3;
    }
    if (*(int *)((int)this + (0x135 - (int)piVar2) * 4) != 0) {
      piVar1 = (int *)((int)this + (0x139 - (int)piVar2) * 4);
      *piVar1 = 100 - *(int *)((int)this + (int)piVar2 * 4 + 0x4e0);
      if (*(int *)((int)this + (0x13b - (int)piVar2) * 4) != 0) {
        iVar3 = st::fn_006E62D0
                          (g_playSystem_00802A38,
                           *(AnonShape_005EFAE0_B406B78B **)((int)this + (0x135 - (int)piVar2) * 4),
                           (int *)&param_1);
        if ((iVar3 == 0) && (param_1[0x131] == STField<int>(this,0x18))) {
          param_1[0x130] = *piVar1;
        }
      }
    }
  }
  return 0;
}

// 004DBE00 FUN_004dbe00
#line 4 "decomp/ST.exe/functions/004DBE00/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004DBE00 -> 006E62D0 @ 004DBE3B | 004DBE00 -> 006E62D0 @ 004DBEC1 */

undefined4 __thiscall st::fn_004DBE00(void *this,int *param_1)

{
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar1;

  iVar4 = 0;
  piVar2 = (int *)((int)this + 0x4d0);
  do {
    if ((int *)*piVar2 == param_1) {
      iVar3 = st::fn_006E62D0
                        (g_playSystem_00802A38,
                         *(AnonShape_005EFAE0_B406B78B **)((int)this + iVar4 * 4 + 0x4d0),
                         (int *)&param_1);
      piVar1 = param_1;
      if (iVar3 == 0) {
        param_1[0x130] = 0;
        if (STField<int *>(param_1,0x61f) != nullptr) {
          st::fn_004049EE(STField<int *>(param_1,0x61f));
          st::fn_0072E2B0(STField<HoloTy *>(piVar1,0x61f));
          STField<undefined4>(piVar1,0x61f) = 0;
        }
      }
      *(undefined4 *)((int)this + iVar4 * 4 + 0x4d0) = 0;
      *(undefined4 *)((int)this + iVar4 * 4 + 0x4e0) = 0;
      if (*(int *)((int)this + (0x135 - iVar4) * 4) != 0) {
        piVar2 = (int *)((int)this + (0x139 - iVar4) * 4);
        *piVar2 = 100;
        if (*(int *)((int)this + (0x13b - iVar4) * 4) != 0) {
          iVar4 = st::fn_006E62D0
                            (g_playSystem_00802A38,
                             *(AnonShape_005EFAE0_B406B78B **)((int)this + (0x135 - iVar4) * 4),
                             (int *)&param_1);
          if ((iVar4 == 0) && (param_1[0x131] == STField<int>(this,0x18))) {
            param_1[0x130] = *piVar2;
          }
        }
      }
      return 0;
    }
    iVar4 = iVar4 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar4 < 2);
  return 0;
}

// 004DBF30 FUN_004dbf30
#line 4 "decomp/ST.exe/functions/004DBF30/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004DBF30 -> 006E62D0 @ 004DBF76 | 004DBF30 -> 006E62D0 @ 004DBFF3 | 004DBF30 ->
   006E62D0 @ 004DC042 | 004DBF30 -> 006E62D0 @ 004DC0AD */

undefined4 __thiscall st::fn_004DBF30(void *this,int *param_1)

{
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar1;

  piVar3 = param_1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)((int)this + (int)param_1 * 4 + 0x4d0) != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)((int)this + (int)param_1 * 4 + 0x4e8) == 0) {
      *(undefined4 *)((int)this + (int)param_1 * 4 + 0x4e8) = 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar4 = st::fn_006E62D0
                        (g_playSystem_00802A38,
                         *(AnonShape_005EFAE0_B406B78B **)((int)this + (int)param_1 * 4 + 0x4d0),
                         (int *)&param_1);
      if ((iVar4 == 0) && (param_1[0x131] == STField<int>(this,0x18))) {
        param_1[0x130] = *(int *)((int)this + (int)piVar3 * 4 + 0x4e0);
      }
      if ((*(int *)((int)this + (0x135 - (int)piVar3) * 4) != 0) &&
         (*(int *)((int)this + (0x13b - (int)piVar3) * 4) != 0)) {
        piVar2 = (int *)((int)this + (0x139 - (int)piVar3) * 4);
        *piVar2 = 100 - *(int *)((int)this + (int)piVar3 * 4 + 0x4e0);
        iVar4 = st::fn_006E62D0
                          (g_playSystem_00802A38,
                           *(AnonShape_005EFAE0_B406B78B **)((int)this + (0x135 - (int)piVar3) * 4),
                           (int *)&param_1);
        if ((iVar4 == 0) && (param_1[0x131] == STField<int>(this,0x18))) {
          param_1[0x130] = *piVar2;
        }
      }
    }
    else {
      *(undefined4 *)((int)this + (int)param_1 * 4 + 0x4e8) = 0;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar4 = st::fn_006E62D0
                        (g_playSystem_00802A38,
                         *(AnonShape_005EFAE0_B406B78B **)((int)this + (int)param_1 * 4 + 0x4d0),
                         (int *)&param_1);
      piVar1 = param_1;
      if (iVar4 == 0) {
        param_1[0x130] = 0;
        if (STField<int *>(param_1,0x61f) != nullptr) {
          st::fn_004049EE(STField<int *>(param_1,0x61f));
          st::fn_0072E2B0(STField<HoloTy *>(piVar1,0x61f));
          STField<undefined4>(piVar1,0x61f) = 0;
        }
      }
      if ((*(int *)((int)this + (0x135 - (int)piVar3) * 4) != 0) &&
         (*(int *)((int)this + (0x13b - (int)piVar3) * 4) != 0)) {
        piVar2 = (int *)((int)this + (0x139 - (int)piVar3) * 4);
        *piVar2 = 100;
        iVar4 = st::fn_006E62D0
                          (g_playSystem_00802A38,
                           *(AnonShape_005EFAE0_B406B78B **)((int)this + (0x135 - (int)piVar3) * 4),
                           (int *)&param_1);
        if ((iVar4 == 0) && (param_1[0x131] == STField<int>(this,0x18))) {
          param_1[0x130] = *piVar2;
          return 0;
        }
      }
    }
  }
  return 0;
}

// 004DC1E0 FUN_004dc1e0
#line 4 "decomp/ST.exe/functions/004DC1E0/decomp.c"
void __fastcall st::fn_004DC1E0(AnonShape_004DC1E0_5260A589 *param_1)

{
  param_1->field_04D0 = 0;
  param_1->field_04D4 = 0;
  param_1->field_04D8 = g_playSystem_00802A38->field_00E4;
  param_1->field_0261 = 0;
  return;
}

// 004DC220 FUN_004dc220
#line 4 "decomp/ST.exe/functions/004DC220/decomp.c"
undefined4 st::fn_004DC220(void)

{
  return 0;
}

// 004DC240 FUN_004dc240
#line 4 "decomp/ST.exe/functions/004DC240/decomp.c"
undefined4 st::fn_004DC240(void)

{
  return 0;
}

// 004DC260 FUN_004dc260
#line 4 "decomp/ST.exe/functions/004DC260/decomp.c"
undefined4 __fastcall st::fn_004DC260(TLOBaseTy *param_1)

{
  uint uVar1;
  int iVar2;

  iVar2 = st::fn_004042AF(&param_1->field_01D5,'\x0e');
  if (iVar2 == param_1->field_01F5->field_020C) {
    if (param_1->field_04D0 == CASE_2) {
      param_1->field_04D0 = CASE_1;
      param_1->field_0261 = 1;
      st::fn_00402CF7(param_1,0);
    }
    else if (param_1->field_04D0 == CASE_3) {
      param_1->field_04D0 = CASE_0;
      param_1->field_0261 = 0;
      st::fn_00402CF7(param_1,0);
    }
  }
  if (param_1->field_04D0 == CASE_0) {
    if ((param_1->field_04D8 + 0xf <= g_playSystem_00802A38->field_00E4) &&
       (param_1->field_04D4 < 200)) {
      param_1->field_04D8 = g_playSystem_00802A38->field_00E4;
      iVar2 = st::machine_word_boundary_cast<int>(param_1->field_04D4 + 2);
      param_1->field_04D4 = iVar2;
      if (199 < iVar2) {
        param_1->field_04D4 = 200;
      }
    }
    uVar1 = g_playSystem_00802A38->field_00E4;
    iVar2 = st::fn_00404309((int)param_1->field_0024,param_1->field_0235,0);
    if ((iVar2 + param_1->field_0271 <= uVar1) && (199 < param_1->field_04D4)) {
      param_1->field_0271 = uVar1;
      st::fn_0040239C(param_1,0,0);
      if (param_1->field_028D != nullptr) {
        param_1->field_04D0 = CASE_2;
        st::fn_00402CF7(param_1,0);
        return 0;
      }
    }
  }
  else if (param_1->field_04D0 == CASE_1) {
    if (param_1->field_04D4 < 1) {
      param_1->field_04D0 = CASE_3;
      param_1->field_04D4 = 0;
      param_1->field_0261 = 0;
      st::fn_00402CF7(param_1,0);
      return 0;
    }
    if (param_1->field_0295 + 0x465 <= g_playSystem_00802A38->field_00E4) {
      param_1->field_04D0 = CASE_3;
      param_1->field_0261 = 0;
      st::fn_00402CF7(param_1,0);
    }
  }
  return 0;
}

// 004DC470 FUN_004dc470
#line 4 "decomp/ST.exe/functions/004DC470/decomp.c"
undefined4 __fastcall st::fn_004DC470(AnonShape_004DC470_71C75079 *param_1)

{
  if (((param_1->field_0245 == 0) && (param_1->field_04D0 == 0)) && (param_1->field_04D4 < 200)) {
    param_1->field_0261 = 0;
  }
  return 0;
}

// 004DC4B0 FUN_004dc4b0
#line 4 "decomp/ST.exe/functions/004DC4B0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 004CAFC0 -> 004DC4B0 @ 004CB15D

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 004CAFC0 -> 004DC4B0 @ 004CB15D

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 004CAFC0 -> 004DC4B0 @ 004CB15D */

void __thiscall
st::fn_004DC4B0(void *this,TLOBaseTy_sub_004CAFC0_param_1Enum param_1,int param_2,uint *param_3,
            uint *param_4)

{
  int iVar1;
  uint uVar3;
  int uVar2;
  int iVar4;

  uVar2 = st::fn_004049B7(STField<char>(this,0x23d));
  uVar2 = (int)(byte)uVar2;
  iVar1 = STField<int>(this,0x245);
  iVar4 = uVar2 + -1;
  if ((0xc < (int)param_1) && ((int)param_1 < 0xf)) {
    switch(STField<undefined4>(this,0x4d0)) {
    case 0:
      uVar3 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                       (param_2 + (iVar4 + STField<int>(this,0x235) * 3) * 4) * 8);
      *param_4 = uVar3;
      *param_3 = uVar3;
      return;
    case 1:
      uVar3 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                       (param_2 + (iVar4 + STField<int>(this,0x235) * 3) * 4) * 8 + 4);
      *param_4 = uVar3;
      *param_3 = uVar3;
      return;
    case 2:
      *param_3 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                          (param_2 + (iVar4 + STField<int>(this,0x235) * 3) * 4) * 8);
      *param_4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                          (param_2 + (iVar4 + STField<int>(this,0x235) * 3) * 4) * 8 + 4);
      return;
    case 3:
      *param_3 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                          (param_2 + (iVar4 + STField<int>(this,0x235) * 3) * 4) * 8 + 4);
      *param_4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                          (param_2 + (iVar4 + STField<int>(this,0x235) * 3) * 4) * 8);
    }
  }
  return;
}

// 004DC660 FUN_004dc660
#line 4 "decomp/ST.exe/functions/004DC660/decomp.c"
undefined4 __fastcall st::fn_004DC660(AnonShape_004DC660_217FA9F0 *param_1)

{
  uint uVar1;

  if (*(char *)(g_bulkInitializedRecords_008087C7 + param_1->field_0024) == '\x01') {
    param_1->field_04D0 = 2;
    param_1->field_04D8 = 0;
    param_1->field_04D4 = 0;
    uVar1 = g_playSystem_00802A38->field_00E4;
    param_1->field_04E0 = 1;
    param_1->field_04DC = uVar1;
    return 0;
  }
  param_1->field_04D0 = 2;
  param_1->field_04D8 = 0;
  param_1->field_04D4 = 0;
  uVar1 = g_playSystem_00802A38->field_00E4;
  param_1->field_04E0 = 0;
  param_1->field_04DC = uVar1;
  return 0;
}

// 004DC700 FUN_004dc700
#line 4 "decomp/ST.exe/functions/004DC700/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 004DC700 returns zeroed full register at 004DC705 @ 004DC707 */

uint __fastcall st::fn_004DC700(int param_1)

{
  st::fn_00405A33((AnonShape_004C2D40_7C578146 *)param_1);
  return 0;
}

// 004DC720 FUN_004dc720
#line 4 "decomp/ST.exe/functions/004DC720/decomp.c"
undefined4 __thiscall st::fn_004DC720(void *this,int param_1)

{
  STField<int>(this,0x4d8) = param_1;
  if ((param_1 < 1) && (STField<int>(this,0x4d0) == 1)) {
    STField<undefined4>(this,0x4d8) = 0;
  }
  return 0;
}

// 004DC760 FUN_004dc760
#line 4 "decomp/ST.exe/functions/004DC760/decomp.c"
undefined4 __fastcall st::fn_004DC760(TLOBaseTy *param_1)

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
      st::fn_00402CF7(param_1,0);
      st::fn_00401B4A((AnonShape_004C2C10_59B6D93C *)param_1);
      param_1->vfunc_90(4,0x339);
    }
  }
  else if (TVar1 == CASE_1) {
    if ((param_1->field_04D8 == 0) || (param_1->field_04D4 == 2)) {
      iVar3 = st::fn_004042AF(&param_1->field_01D5,'\x0e');
      if (iVar3 == param_1->field_01F5->field_020C) {
        param_1->field_04D0 = CASE_2;
        uVar2 = g_playSystem_00802A38->field_00E4;
        param_1->field_04D4 = 0;
        param_1->field_04DC = uVar2;
        st::fn_00402CF7(param_1,0);
        dVar4 = param_1->slot_2C();
        st::fn_00405E39(STReplaceLowByte((uint32_t)(dVar4), (uint8_t)(*(undefined1 *)&param_1->field_0024)),dVar4);
        if (param_1->field_0024 == (byte *)(uint)(byte)param_1->field_0010->field_112D) {
          st::fn_00404B8D((char)param_1->field_0024);
        }
        st::fn_00405A33((AnonShape_004C2D40_7C578146 *)param_1);
        return 0;
      }
    }
    else {
      if (param_1->field_0408 == 0) {
        st::fn_00401B4A((AnonShape_004C2C10_59B6D93C *)param_1);
        param_1->vfunc_90(4,0x339);
      }
      if (param_1->field_04DC + 0x2d <= g_playSystem_00802A38->field_00E4) {
        param_1->field_04DC = g_playSystem_00802A38->field_00E4;
        st::fn_004054E8(param_1,st::machine_word_boundary_cast<int>(param_1->field_04D8 + -100));
        return 0;
      }
    }
  }
  else if (TVar1 == CASE_2) {
    iVar5 = 0x1e;
    iVar3 = st::fn_00402C98(*(char *)&param_1->field_0024,(int)param_1->field_0018);
    if (iVar3 == 0) {
      iVar5 = 0x78;
    }
    if (param_1->field_04DC + iVar5 <= g_playSystem_00802A38->field_00E4) {
      iVar3 = st::machine_word_boundary_cast<int>(param_1->field_04D8 + 100);
      param_1->field_04D8 = iVar3;
      if (9999 < iVar3) {
        param_1->field_04D8 = 10000;
        param_1->field_04D0 = CASE_0;
        st::fn_00402CF7(param_1,0);
        dVar4 = param_1->slot_2C();
        st::fn_00402F0E(STReplaceLowByte((uint32_t)(dVar4), (uint8_t)(*(undefined1 *)&param_1->field_0024)),dVar4);
        if (param_1->field_0024 == (byte *)(uint)(byte)param_1->field_0010->field_112D) {
          st::fn_00404B8D((char)param_1->field_0024);
        }
      }
      param_1->field_04DC = g_playSystem_00802A38->field_00E4;
    }
    if (param_1->field_04D4 == 1) {
      param_1->field_04D0 = CASE_1;
      param_1->field_04D4 = 0;
      st::fn_00402CF7(param_1,0);
      st::fn_00401B4A((AnonShape_004C2C10_59B6D93C *)param_1);
      param_1->vfunc_90(4,0x339);
      dVar4 = param_1->slot_2C();
      st::fn_00402F0E(STReplaceLowByte((uint32_t)(dVar4), (uint8_t)(*(undefined1 *)&param_1->field_0024)),dVar4);
      if (param_1->field_0024 == (byte *)(uint)(byte)param_1->field_0010->field_112D) {
        st::fn_00404B8D((char)param_1->field_0024);
        return 0;
      }
    }
  }
  return 0;
}

// 004DCAA0 FUN_004dcaa0
#line 4 "decomp/ST.exe/functions/004DCAA0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 004CAFC0 -> 004DCAA0 @ 004CB0AE

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 004CAFC0 -> 004DCAA0 @ 004CB0AE

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 004CAFC0 -> 004DCAA0 @ 004CB0AE */

void __thiscall
st::fn_004DCAA0(void *this,TLOBaseTy_sub_004CAFC0_param_1Enum param_1,int param_2,uint *param_3,
            uint *param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;

  bVar3 = st::fn_004049B7(STField<char>(this,0x23d));
  iVar1 = STField<int>(this,0x245);
  iVar2 = STField<int>(this,0x4d0);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      *param_3 = 0;
      *param_4 = 0x27;
      return;
    }
    if (iVar2 != 2) {
      return;
    }
  }
  *param_3 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                      (param_2 + ((bVar3 - 1) + STField<int>(this,0x235) * 3) * 4) * 8);
  *param_4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                      (param_2 + ((bVar3 - 1) + STField<int>(this,0x235) * 3) * 4) * 8 + 4);
  return;
}

// 004DCB70 FUN_004dcb70
#line 4 "decomp/ST.exe/functions/004DCB70/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 004DCB70 returns zeroed full register at 004DCBA3 @ 004DCBA5 */

uint __fastcall st::fn_004DCB70(AnonShape_004DCB70_1032D92F *param_1)

{
  param_1->field_02D1 = 7;
  param_1->field_04D0 = 0;
  param_1->field_04EC = 0;
  param_1->field_02CD = 0;
  if ((param_1->field_0231 == 1) || (param_1->field_0231 == 3)) {
    st::fn_00402FC2((AnonShape_004DCCF0_FF75E3FE *)param_1);
  }
  return 0;
}

// 004DCBC0 FUN_004dcbc0
#line 4 "decomp/ST.exe/functions/004DCBC0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 004DCBC0 returns zeroed full register at 004DCBCF @ 004DCBD1 */

uint __fastcall st::fn_004DCBC0(AnonShape_004DCCF0_FF75E3FE *param_1)

{
  if (*(int *)&param_1->field_0x231 == 0) {
    st::fn_00402FC2(param_1);
  }
  return 0;
}

// 004DCBF0 FUN_004dcbf0
#line 4 "decomp/ST.exe/functions/004DCBF0/decomp.c"
undefined4 __fastcall st::fn_004DCBF0(AnonShape_004DCBF0_C6A0E7DA *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_8;

  local_8 = 0;
  if ((uint)param_1->field_04F0 <= g_playSystem_00802A38->field_00E4) {
    iVar1 = st::fn_006E62D0
                      (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)param_1->field_04EC,
                       &local_8);
    if (iVar1 == 0) {
      uVar2 = st::fn_00401E24(local_8);
      param_1->field_02CD = uVar2;
    }
    param_1->field_04F0 = st::machine_word_boundary_cast<undefined4>(g_playSystem_00802A38->field_00E4 + 0x19);
  }
  return 0;
}

// 004DCC80 FUN_004dcc80
#line 4 "decomp/ST.exe/functions/004DCC80/decomp.c"
undefined4 __fastcall st::fn_004DCC80(int param_1)

{
  int iVar1;
  STJellyGunC *local_8;

  local_8 = nullptr;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(AnonShape_005EFAE0_B406B78B **)(param_1 + 0x4ec) != nullptr) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar1 = st::fn_006E62D0
                      (g_playSystem_00802A38,*(AnonShape_005EFAE0_B406B78B **)(param_1 + 0x4ec),
                       (int *)&local_8);
    if (iVar1 == 0) {
      st::fn_00402B08(local_8);
    }
    *(undefined4 *)(param_1 + 0x4ec) = 0;
  }
  return 0;
}

// 004DCCF0 FUN_004dccf0
#line 4 "decomp/ST.exe/functions/004DCCF0/decomp.c"
undefined4 __fastcall st::fn_004DCCF0(AnonShape_004DCCF0_FF75E3FE *param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 *puVar4;
  undefined4 local_48 [7];
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  int local_8;

  puVar4 = local_48;
  memset(puVar4, 0, 0x3e); /* compiler bulk-zero initialization */
  puVar4 = (undefined4 *)((byte *)puVar4 + 0x3c);
  uVar2 = param_1->field_0018;
  uVar1 = param_1->field_0032;
  local_2c = param_1->field_05B4;
  local_48[3] = 1;
  local_48[2] = 1;
  local_48[1] = param_1->field_0024;
  local_48[6] = param_1->field_05B0;
  local_24 = (int)param_1->field_0041;
  local_20 = (int)param_1->field_0043;
  local_28 = param_1->field_05B8;
  local_1c = st::machine_word_boundary_cast<int>(param_1->field_0045 + 0x4b);
  local_8 = 0;
  local_48[4] = 0;
  local_48[0] = 0x186;
  local_48[5] = 7;
  local_14 = 100;
  local_18 = 0xf;
  local_10 = uVar2;
  local_c = uVar1;
  st::fn_00401BC2(g_playSystem_00802A38,0x186,0,st::machine_word_boundary_cast<undefined4>(&local_8),st::machine_word_boundary_cast<undefined4>(local_48),0);
  if (local_8 != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    param_1->field_04EC = *(undefined4 *)(local_8 + 0x18);
  }
  return 0;
}

// 004DD070 FUN_004dd070
#line 4 "decomp/ST.exe/functions/004DD070/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall st::fn_004DD070(AnonShape_004DD070_62E18556 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;

  if ((((param_1->field_04D0 == 1) && (1 < DAT_00798f84)) && (param_1->field_04D4 < DAT_00798f84))
     && ((uint)(param_1->field_04DC + param_1->field_04D8) <= g_playSystem_00802A38->field_00E4)) {
    param_1->field_04D8 = g_playSystem_00802A38->field_00E4;
    iVar1 = st::fn_004042AF(&param_1->field_0x1d5,'\x0e');
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar2 = iVar1 - *(int *)(param_1->field_01F5 + 0x208);
    uVar5 = (int)uVar2 >> 0x1f;
    iVar4 = (uVar2 ^ uVar5) - uVar5;
    param_1->field_04D4 = iVar4;
    iVar3 = ((param_1->field_02AD - (int)param_1->field_0045) * iVar4) / DAT_00798f84;
    iVar1 = ((param_1->field_02A5 - (int)param_1->field_0041) * iVar4) / DAT_00798f84;
    iVar4 = (int)param_1->field_0043 +
            ((param_1->field_02A9 - (int)param_1->field_0043) * iVar4) / DAT_00798f84;
    param_1->field_04E4 = iVar4;
    param_1->field_04E0 = iVar1 + param_1->field_0041;
    iVar3 = st::machine_word_boundary_cast<int>(param_1->field_0045 + iVar3);
    param_1->field_04E8 = iVar3;
    st::fn_004045D9
              (st::pointer_boundary_cast<STT3DSprC *>(param_1->field_05FF),(float)param_1->field_04E0 * _DAT_007904f8 * _DAT_007904f0,
               (float)iVar4 * _DAT_007904f8 * _DAT_007904f0,
               (float)iVar3 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    if ((*(int *)(&DAT_00798f80 + param_1->field_04D0 * 4) + -1 <= param_1->field_04D4) &&
       (param_1->field_04D0 == 1)) {
      st::fn_00403EFE((TLOBaseTy *)param_1,nullptr);
    }
  }
  return 0;
}

// 004DD240 FUN_004dd240
#line 4 "decomp/ST.exe/functions/004DD240/decomp.c"
undefined4 st::fn_004DD240(void)

{
  return 1;
}

// 004DD260 FUN_004dd260
#line 4 "decomp/ST.exe/functions/004DD260/decomp.c"
undefined4 __fastcall st::fn_004DD260(int param_1)

{
  int iVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)(param_1 + 0x4d0) == 1) &&
     (iVar1 = st::fn_004042AF((void *)(param_1 + 0x1d5),'\x0e'),
     iVar1 == *(int *)(*(int *)(param_1 + 0x1f5) + 0x20c))) {
    return 1;
  }
  return 0;
}

// 004DD2B0 FUN_004dd2b0
#line 4 "decomp/ST.exe/functions/004DD2B0/decomp.c"
undefined4 __fastcall st::fn_004DD2B0(int param_1)

{
  DArrayTy *pDVar1;
  int local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (g_packedRecords_A62x8[*(int *)(param_1 + 0x24)].field1970_0x9de == nullptr) {
    local_8 = param_1;
    pDVar1 = st::fn_006AE290(nullptr,10,4,10);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    g_packedRecords_A62x8[*(int *)(param_1 + 0x24)].field1970_0x9de = pDVar1;
  }
  local_8 = param_1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  st::fn_006AE1C0
            (g_packedRecords_A62x8[*(int *)(param_1 + 0x24)].field1970_0x9de,&local_8);
  return 0;
}

// 004DD350 FUN_004dd350
#line 4 "decomp/ST.exe/functions/004DD350/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004B9A40 -> 004DD350 @ 004B9AE0; TLOBaseTy::sub_004B9A40 this; stable alias ESI */

undefined4 __fastcall st::fn_004DD350(TLOBaseTy *param_1)

{
  DArrayTy *array;
  uint index;
  TLOBaseTy *local_8;

  array = g_packedRecords_A62x8[(int)param_1->field_0024].field1970_0x9de;
  if (array != nullptr) {
    index = 0;
    local_8 = param_1;
    if (0 < (int)array->count) {
      do {
        st::fn_006ACC70(array,index,&local_8);
        if (local_8 == param_1) {
          st::fn_006B0C70(g_packedRecords_A62x8[(int)param_1->field_0024].field1970_0x9de,index);
          break;
        }
        index = index + 1;
        array = g_packedRecords_A62x8[(int)param_1->field_0024].field1970_0x9de;
      } while ((int)index < (int)array->count);
    }
    if ((g_packedRecords_A62x8[(int)param_1->field_0024].field1970_0x9de)->count == 0) {
      st::fn_006AE110(g_packedRecords_A62x8[(int)param_1->field_0024].field1970_0x9de);
      g_packedRecords_A62x8[(int)param_1->field_0024].field1970_0x9de = nullptr;
    }
  }
  return 0;
}

// 004DD460 FUN_004dd460
#line 4 "decomp/ST.exe/functions/004DD460/decomp.c"
undefined4 __fastcall st::fn_004DD460(AnonShape_004DD460_CCB31E51 *param_1)

{

  param_1->field_04D0 = 0;
  param_1->field_04D4 = 0;
  param_1->field_04D8 = 0;
  memset(&param_1->field_0x4e0, 0, 0xa0); /* compiler bulk-zero initialization */
  if ((param_1->field_0231 != 0) && (g_manRub3_008117A4 != nullptr)) {
    st::fn_0040302B(param_1->field_0024,(short)param_1->field_05B0,(short)param_1->field_05B4,
                       (short)param_1->field_05B8,param_1->field_0018,
                       STReplaceLowWord((uint32_t)(param_1->field_0231), (uint16_t)(param_1->field_0032)));
  }
  return 0;
}

// 004DD500 FUN_004dd500
#line 4 "decomp/ST.exe/functions/004DD500/decomp.c"
undefined4 __fastcall st::fn_004DD500(AnonShape_004DD500_8D93FB74 *param_1,undefined4 param_2)

{
  if ((param_1->field_0231 == 0) && (g_manRub3_008117A4 != nullptr)) {
    st::fn_0040302B(param_1->field_0024,(short)param_1->field_05B0,(short)param_1->field_05B4,
                       (short)param_1->field_05B8,param_1->field_0018,
                       STReplaceLowWord((uint32_t)(param_2), (uint16_t)(param_1->field_0032)));
  }
  return 0;
}

// 004DD570 FUN_004dd570
#line 4 "decomp/ST.exe/functions/004DD570/decomp.c"
undefined4 __fastcall st::fn_004DD570(TLOBaseTy *param_1)

{
  int iVar1;

  iVar1 = st::fn_004042AF(&param_1->field_01D5,'\x0e');
  if (iVar1 == param_1->field_01F5->field_020C) {
    if (param_1->field_04D0 == CASE_1) {
      param_1->field_04D0 = CASE_2;
    }
    else {
      if (param_1->field_04D0 != CASE_3) goto LAB_004dd5bb;
      param_1->field_04D0 = CASE_0;
    }
    st::fn_00402CF7(param_1,0);
  }
LAB_004dd5bb:
  if ((g_manRub3_008117A4 != nullptr) && (param_1->field_04D0 == CASE_0)) {
    iVar1 = st::fn_004051BE(g_manRub3_008117A4,(int)param_1->field_0024,(int)param_1->field_0018);
    if (iVar1 == 0) {
      if (param_1->field_04D8 == 0) {
        param_1->field_04D8 = 1;
        param_1->field_04DC = g_playSystem_00802A38->field_00E4;
        return 0;
      }
      if (param_1->field_04DC + 0x2ee <= g_playSystem_00802A38->field_00E4) {
        iVar1 = st::fn_004034D1(g_manRub3_008117A4,(int)param_1->field_0024,
                                   (int)param_1->field_0018);
        param_1->field_04D8 = (uint)(iVar1 == 0);
      }
    }
  }
  return 0;
}

// 004DD690 FUN_004dd690
#line 4 "decomp/ST.exe/functions/004DD690/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 004DD690 returns zeroed full register at 004DD6A9 @ 004DD6AB */

uint __fastcall st::fn_004DD690(int param_1)

{
  if (g_manRub3_008117A4 != nullptr) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_00401E2E(g_manRub3_008117A4,*(int *)(param_1 + 0x24),*(int *)(param_1 + 0x18));
  }
  return 0;
}

// 004DD6C0 FUN_004dd6c0
#line 4 "decomp/ST.exe/functions/004DD6C0/decomp.c"
undefined4 __thiscall st::fn_004DD6C0(void *this,undefined4 param_1)

{
  if (STField<int>(this,0x4d4) == 0) {
    STField<undefined4>(this,0x4d4) = param_1;
    return 1;
  }
  return 0;
}

// 004DD700 FUN_004dd700
#line 4 "decomp/ST.exe/functions/004DD700/decomp.c"
undefined4 __thiscall st::fn_004DD700(void *this,int param_1)

{
  if (STField<int>(this,0x4d4) == param_1) {
    STField<undefined4>(this,0x4d4) = 0;
    return 1;
  }
  return 0;
}

// 004DD740 FUN_004dd740
#line 4 "decomp/ST.exe/functions/004DD740/decomp.c"
undefined4 __fastcall st::fn_004DD740(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)(param_1 + 0x4d4) == 0) && (*(int *)(param_1 + 0x4d0) == 0)) {
    return 0;
  }
  return 1;
}

// 004DD770 FUN_004dd770
#line 4 "decomp/ST.exe/functions/004DD770/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 004DD770 returns zeroed full register at 004DD7A7 @ 004DD7AB */

uint __thiscall st::fn_004DD770(void *this,int param_1)

{
  if (STField<int>(this,0x4d4) == param_1) {
    STField<undefined4>(this,0x4d0) = 1;
    st::fn_00402CF7(st::pointer_boundary_cast<TLOBaseTy *>(this),0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)this + 0x90))(3,0x415);
  }
  return 0;
}

// 004DD7C0 FUN_004dd7c0
#line 4 "decomp/ST.exe/functions/004DD7C0/decomp.c"
undefined4 __thiscall st::fn_004DD7C0(void *this,int param_1,int param_2)

{
  int *piVar1;

  if (((STField<int>(this,0x4d4) == param_1) && (0 < param_2)) && (param_2 < 0x29)) {
    piVar1 = (int *)((int)this + param_2 * 4 + 0x4dc);
    *piVar1 = *piVar1 + 1;
  }
  return 0;
}

// 004DD800 FUN_004dd800
#line 4 "decomp/ST.exe/functions/004DD800/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 004DD800 returns zeroed full register at 004DD837 @ 004DD83B */

uint __thiscall st::fn_004DD800(void *this,int param_1)

{
  if (STField<int>(this,0x4d4) == param_1) {
    STField<undefined4>(this,0x4d0) = 3;
    st::fn_00402CF7(st::pointer_boundary_cast<TLOBaseTy *>(this),0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)this + 0x90))(3,0x416);
  }
  return 0;
}

// 004DD850 FUN_004dd850
#line 4 "decomp/ST.exe/functions/004DD850/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 004DD850 returns zeroed full register at 004DD86A @ 004DD86D */

uint __fastcall st::fn_004DD850(int param_1)

{
  int iVar1;
  undefined4 *puVar2;

  puVar2 = (undefined4 *)(param_1 + 0x4d0);
  for (iVar1 = 0x37; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 1;
  }
  st::fn_004031AC((AnonShape_004DDCC0_33DEB43E *)param_1);
  return 0;
}

// 004DD880 FUN_004dd880
#line 4 "decomp/ST.exe/functions/004DD880/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 004E51B0 -> 004DD880 @ 004E569A */

undefined4 __fastcall st::fn_004DD880(AnonShape_004DDCC0_33DEB43E *param_1)

{
  AnonShape_004DDCC0_33DEB43E *pAVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int local_104 [4];
  undefined4 local_f4 [51];
  int local_28;
  int local_24;
  AnonShape_004DDCC0_33DEB43E *local_20;
  int *local_1c;
  int *local_18;
  undefined4 *local_14;
  int *local_10;
  uint *local_c;
  int *local_8;

  local_20 = param_1;
  st::fn_004049B7(param_1->field_0024);
  piVar8 = local_104;
  for (iVar6 = 0x37; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar8 = -1;
    piVar8 = piVar8 + 1;
  }
  if (*(int *)&param_1->field_0024 != *(int *)&param_1->field_0x23d) {
    bVar2 = st::fn_004049B7((char)*(int *)&param_1->field_0x23d);
    iVar6 = *(int *)&param_1->field_0x235;
    bVar3 = st::fn_004049B7(param_1->field_0024);
    if ((&DAT_007e1984)[(uint)bVar3 + ((uint)bVar2 + iVar6 * 3) * 3] == '\0') goto LAB_004dda3a;
  }
  if (*(int *)&param_1[1].field_0xd8 == 0x34) {
    local_24 = 1;
  }
  else {
    local_24 = (-(uint)(*(int *)&param_1[1].field_0xd8 != 0x5b) & 0xfffffffe) + 2;
  }
  local_14 = local_f4;
  local_8 = local_104 + 2;
  local_28 = 0x96;
  local_c = (uint *)(local_104 + 3);
  local_1c = st::pointer_boundary_cast<int *>(&DAT_007e6024);
  local_10 = local_104 + 1;
  piVar8 = local_104;
  local_18 = st::pointer_boundary_cast<int *>(&DAT_007bf67c);
  do {
    pAVar1 = local_20;
    iVar6 = local_28;
    if (local_18[-1] == local_24) {
      iVar4 = *local_18;
      if (((iVar4 < 0) || (iVar4 == 0)) ||
         (iVar4 = st::fn_0040186B(*(int *)&local_20->field_0024,iVar4), local_18[1] <= iVar4)) {
        iVar4 = pAVar1->field_04D0;
        piVar7 = &pAVar1->field_04D0;
        iVar5 = 0;
        if (-1 < iVar4) {
LAB_004dd9b3:
          if (iVar4 != iVar6) goto code_r0x004dd9bb;
          piVar7 = &pAVar1->field_04D0 + iVar5 * 5;
          piVar9 = piVar8;
          memmove(piVar9, piVar7, 0x14); /* compiler REP MOVS byte copy */
          piVar8 = piVar8 + 5;
          local_10 = local_10 + 5;
          local_8 = local_8 + 5;
          local_c = local_c + 5;
          local_14 = local_14 + 5;
          iVar6 = local_28;
          goto LAB_004dda13;
        }
LAB_004dd9c6:
        iVar4 = *local_1c;
        *piVar8 = iVar6;
        *local_10 = 0;
        *local_8 = 0;
        *local_c = (uint)(iVar4 < 10);
        piVar8 = piVar8 + 5;
        *local_14 = 0;
        local_10 = local_10 + 5;
        local_8 = local_8 + 5;
        local_c = local_c + 5;
        local_14 = local_14 + 5;
      }
    }
LAB_004dda13:
    local_18 = local_18 + 3;
    local_1c = local_1c + 5;
    local_28 = iVar6 + 1;
    param_1 = local_20;
  } while (iVar6 + -0x95 < 0x2d);
LAB_004dda3a:
  piVar8 = local_104;
  piVar7 = &param_1->field_04D0;
  memmove(piVar7, piVar8, 0xdc); /* compiler REP MOVS byte copy */
  st::fn_00403F49(param_1);
  return 0;
code_r0x004dd9bb:
  iVar4 = piVar7[5];
  piVar7 = piVar7 + 5;
  iVar5 = iVar5 + 1;
  if (iVar4 < 0) goto LAB_004dd9c6;
  goto LAB_004dd9b3;
}

// 004DDB30 FUN_004ddb30
#line 4 "decomp/ST.exe/functions/004DDB30/decomp.c"
undefined4 __thiscall st::fn_004DDB30(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar2 = STField<int>(this,0x4d0);
  iVar3 = (int)this + 0x4d0;
  uVar1 = 0;
  iVar4 = 0;
  if (-1 < iVar2) {
    while (iVar2 != param_1) {
      iVar2 = *(int *)(iVar3 + 0x14);
      iVar3 = iVar3 + 0x14;
      iVar4 = iVar4 + 1;
      if (iVar2 < 0) {
        return uVar1;
      }
    }
    uVar1 = *(undefined4 *)((int)this + iVar4 * 0x14 + 0x4d4);
  }
  return uVar1;
}

// 004DDBA0 FUN_004ddba0
#line 4 "decomp/ST.exe/functions/004DDBA0/decomp.c"
undefined4 __thiscall st::fn_004DDBA0(void *this,int param_1)

{
  int uVar1;
  int iVar1;

  uVar1 = st::fn_004049B7(STField<char>(this,0x24));
  uVar1 = (int)(byte)uVar1;
  if (uVar1 == 1) {
    iVar1 = 0x17;
  }
  else if (uVar1 == 2) {
    iVar1 = 0x88;
  }
  else if (uVar1 == 3) {
    iVar1 = 0x78;
  }
  else {
    iVar1 = 0;
  }
  iVar1 = st::fn_0040186B(STField<int>(this,0x24),iVar1);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return *(undefined4 *)(&DAT_007e601c + (iVar1 + param_1 * 5 + -0x2ee) * 4);
}

// 004DDC30 FUN_004ddc30
#line 4 "decomp/ST.exe/functions/004DDC30/decomp.c"
undefined4 __thiscall st::fn_004DDC30(void *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar2 = STField<int>(this,0x4d0);
  iVar3 = (int)this + 0x4d0;
  iVar4 = 0;
  if (-1 < iVar2) {
    while (iVar2 != param_1) {
      iVar2 = *(int *)(iVar3 + 0x14);
      iVar3 = iVar3 + 0x14;
      iVar4 = iVar4 + 1;
      if (iVar2 < 0) {
        st::fn_00403F49(st::pointer_boundary_cast<AnonShape_004DDCC0_33DEB43E *>(this));
        return 0;
      }
    }
    piVar1 = (int *)((int)this + iVar4 * 0x14 + 0x4d4);
    iVar3 = *(int *)((int)this + iVar4 * 0x14 + 0x4d4) - param_2;
    *piVar1 = iVar3;
    if (iVar3 < 0) {
      *piVar1 = 0;
    }
  }
  st::fn_00403F49(st::pointer_boundary_cast<AnonShape_004DDCC0_33DEB43E *>(this));
  return 0;
}

// 004DDCC0 FUN_004ddcc0
#line 4 "decomp/ST.exe/functions/004DDCC0/decomp.c"
undefined4 __fastcall st::fn_004DDCC0(AnonShape_004DDCC0_33DEB43E *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;

  piVar3 = &param_1->field_04D0;
  iVar4 = 0;
  iVar2 = param_1->field_04D0;
  while (-1 < iVar2) {
    if (piVar3[2] != 0) {
      iVar4 = iVar4 + (*(int *)(&DAT_007e6028 + (*piVar3 + -0x96) * 0x14) - piVar3[1]) *
                      (&DAT_007e6024)[(*piVar3 + -0x96) * 5];
    }
    piVar1 = piVar3 + 5;
    piVar3 = piVar3 + 5;
    iVar2 = *piVar1;
  }
  st::fn_0040497B(param_1->field_0024,3,(int *)param_1->field_0018,0,iVar4,0,0);
  return 0;
}

// 004DDD50 FUN_004ddd50
#line 4 "decomp/ST.exe/functions/004DDD50/decomp.c"
undefined4 __fastcall st::fn_004DDD50(int *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  int uVar4;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int local_c;
  int local_8;

  bVar3 = false;
  bVar2 = false;
  uVar4 = st::fn_004049B7((char)param_1[9]);
  uVar4 = (int)(byte)uVar4;
  if (uVar4 == 1) {
    local_8 = 0x17;
  }
  else if (uVar4 == 2) {
    local_8 = 0x88;
  }
  else if (uVar4 == 3) {
    local_8 = 0x78;
  }
  else {
    local_8 = 0;
  }
  if (-1 < param_1[0x134]) {
    piVar4 = param_1;
    piVar8 = param_1 + 0x136;
    do {
      if (piVar4[0x137] != 0) {
        if (*piVar8 == 0) {
          if (piVar8[-1] < *(int *)(&DAT_007e6028 + (piVar8[-2] + -0x96) * 0x14)) {
            *piVar8 = 1;
            bVar2 = true;
            piVar8[2] = g_playSystem_00802A38->field_00E4;
          }
        }
        else {
          iVar7 = st::machine_word_boundary_cast<int>(piVar8[-2] + -0x96);
          iVar5 = st::fn_0040186B(param_1[9],local_8);
          local_c = *(int *)(&DAT_007e601c + (iVar5 + iVar7 * 5) * 4);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          iVar5 = (**(code **)(*param_1 + 0x2c))();
          iVar5 = st::fn_00402897((char)param_1[9],iVar5);
          if (iVar5 != 0) {
            iVar5 = st::fn_00402C98((char)param_1[9],param_1[6]);
            if (iVar5 == 0) {
              local_c = local_c * 4;
              if (g_sndUnderAttMeneg_00811798 != nullptr) {
                st::fn_00402AF4(g_sndUnderAttMeneg_00811798,(byte *)param_1[9],5);
              }
            }
          }
          if ((uint)(piVar8[2] + local_c) <= g_playSystem_00802A38->field_00E4) {
            iVar5 = (&DAT_007e6024)[iVar7 * 5];
            iVar6 = st::fn_00405E5C((char)param_1[9],3);
            if (iVar5 <= iVar6) {
              st::fn_00402C0C((char)param_1[9],3,param_1[6],iVar5);
              iVar5 = piVar8[-1];
              bVar3 = true;
              piVar8[-1] = iVar5 + 1;
              if (*(int *)(&DAT_007e6028 + iVar7 * 0x14) <= iVar5 + 1) {
                *piVar8 = 0;
                bVar2 = true;
              }
              piVar8[2] = g_playSystem_00802A38->field_00E4;
            }
          }
        }
      }
      piVar1 = piVar8 + 3;
      piVar4 = piVar8 + -0x131;
      piVar8 = piVar8 + 5;
    } while (-1 < *piVar1);
    if (bVar2) {
      st::fn_00403F49((AnonShape_004DDCC0_33DEB43E *)param_1);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((bVar3) && (param_1[9] == (uint)*(byte *)(param_1[4] + 0x112d))) {
      st::fn_00404B8D((char)param_1[9]);
    }
  }
  return 0;
}

// 004DE000 FUN_004de000
#line 4 "decomp/ST.exe/functions/004DE000/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 004DE000 returns zeroed full register at 004DE015 @ 004DE017 */

uint __fastcall st::fn_004DE000(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  st::fn_004051EB(*(char *)(param_1 + 0x24),3,*(int **)(param_1 + 0x18));
  return 0;
}

// 004DE030 FUN_004de030
#line 4 "decomp/ST.exe/functions/004DE030/decomp.c"
undefined4 __fastcall st::fn_004DE030(int param_1)

{
  DArrayTy *pDVar1;
  int local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (g_packedRecords_A62x8[*(int *)(param_1 + 0x24)].field1966_0x9ce == nullptr) {
    local_8 = param_1;
    pDVar1 = st::fn_006AE290(nullptr,10,4,10);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    g_packedRecords_A62x8[*(int *)(param_1 + 0x24)].field1966_0x9ce = pDVar1;
  }
  local_8 = param_1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  st::fn_006AE1C0
            (g_packedRecords_A62x8[*(int *)(param_1 + 0x24)].field1966_0x9ce,&local_8);
  return 0;
}

// 004DE0D0 FUN_004de0d0
#line 4 "decomp/ST.exe/functions/004DE0D0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004B9A40 -> 004DE0D0 @ 004B9B50; TLOBaseTy::sub_004B9A40 this; stable alias ESI */

undefined4 __fastcall st::fn_004DE0D0(TLOBaseTy *param_1)

{
  DArrayTy *array;
  uint index;
  TLOBaseTy *local_8;

  array = g_packedRecords_A62x8[(int)param_1->field_0024].field1966_0x9ce;
  if (array != nullptr) {
    index = 0;
    local_8 = param_1;
    if (0 < (int)array->count) {
      do {
        st::fn_006ACC70(array,index,&local_8);
        if (local_8 == param_1) {
          st::fn_006B0C70(g_packedRecords_A62x8[(int)param_1->field_0024].field1966_0x9ce,index);
          break;
        }
        index = index + 1;
        array = g_packedRecords_A62x8[(int)param_1->field_0024].field1966_0x9ce;
      } while ((int)index < (int)array->count);
    }
    if ((g_packedRecords_A62x8[(int)param_1->field_0024].field1966_0x9ce)->count == 0) {
      st::fn_006AE110(g_packedRecords_A62x8[(int)param_1->field_0024].field1966_0x9ce);
      g_packedRecords_A62x8[(int)param_1->field_0024].field1966_0x9ce = nullptr;
    }
  }
  return 0;
}

// 004DE1E0 FUN_004de1e0
#line 4 "decomp/ST.exe/functions/004DE1E0/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004DE1E0_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9 */

undefined4 __thiscall st::fn_004DE1E0(void *this,Global_sub_004DE1E0_param_1Enum param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;

  uVar4 = 0;
  switch(param_1) {
  case CASE_0:
    uVar4 = 0x96;
    break;
  case CASE_1:
    uVar4 = 0x97;
    break;
  case CASE_2:
    uVar4 = 0x98;
    break;
  case CASE_3:
    uVar4 = 0x99;
    break;
  case CASE_4:
    uVar4 = 0x9a;
    break;
  case CASE_5:
    uVar4 = 0xa6;
    break;
  case CASE_6:
    uVar4 = 0xa9;
    break;
  case CASE_7:
    uVar4 = 0xa7;
    break;
  case CASE_8:
    uVar4 = 0xab;
    break;
  case CASE_9:
    uVar4 = 0xac;
  }
  puVar2 = (uint *)((int)this + 0x4d0);
  if (STField<int>(this,0x4d0) < 0) {
    return 0;
  }
  puVar3 = (uint *)((int)this + 0x4dc);
  do {
    if (*puVar2 == uVar4) {
      *puVar3 = (uint)(*puVar3 == 0);
      puVar3[1] = g_playSystem_00802A38->field_00E4;
      st::fn_00403F49(st::pointer_boundary_cast<AnonShape_004DDCC0_33DEB43E *>(this));
    }
    puVar1 = puVar3 + 2;
    puVar2 = puVar3 + 2;
    puVar3 = puVar3 + 5;
  } while (-1 < (int)*puVar1);
  return 0;
}

// 004DE300 FUN_004de300
#line 4 "decomp/ST.exe/functions/004DE300/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004DE300_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7 */

undefined4 __thiscall st::fn_004DE300(void *this,Global_sub_004DE300_param_1Enum param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;

  uVar3 = 0;
  switch(param_1) {
  case CASE_0:
    uVar3 = 0xbc;
    break;
  case CASE_1:
    uVar3 = 0xb3;
    break;
  case CASE_2:
    uVar3 = 0xb5;
    break;
  case CASE_3:
    uVar3 = 0xbd;
    break;
  case CASE_4:
    uVar3 = 0xad;
    break;
  case CASE_5:
    uVar3 = 0xb8;
    break;
  case CASE_6:
    uVar3 = 0xae;
    break;
  case CASE_7:
    uVar3 = 0xbe;
  }
  puVar2 = (uint *)((int)this + 0x4d0);
  if (STField<int>(this,0x4d0) < 0) {
    return 0;
  }
  puVar4 = (uint *)((int)this + 0x4dc);
  do {
    if (*puVar2 == uVar3) {
      *puVar4 = (uint)(*puVar4 == 0);
      puVar4[1] = g_playSystem_00802A38->field_00E4;
      st::fn_00403F49(st::pointer_boundary_cast<AnonShape_004DDCC0_33DEB43E *>(this));
    }
    puVar1 = puVar4 + 2;
    puVar2 = puVar4 + 2;
    puVar4 = puVar4 + 5;
  } while (-1 < (int)*puVar1);
  return 0;
}

// 004DE410 FUN_004de410
#line 1 "decomp/ST.exe/functions/004DE410/decomp.c"

int st::fn_004DE410(void *param_1,int param_2,int param_3)

{
  PackedRecord_A62x8 *pPVar1;
  int iVar2;
  int iVar3;
  DArrayTy *array;
  uint index;
  int local_8;

  iVar2 = param_2;
  local_8 = 0;
  pPVar1 = g_packedRecords_A62x8 + (int)param_1;
  array = pPVar1->field1966_0x9ce;
  if ((array != nullptr) && (index = 0, 0 < (int)array->count)) {
    do {
      st::fn_006ACC70(array,index,&param_1);
      iVar3 = st::fn_00402B4E(param_1,iVar2);
      if (iVar3 != 0) {
        if (param_3 - local_8 <= iVar3) {
          st::fn_00401861(param_1,iVar2,param_3 - local_8);
          return param_3;
        }
        st::fn_00401861(param_1,iVar2,iVar3);
        local_8 = local_8 + iVar3;
      }
      index = index + 1;
      array = pPVar1->field1966_0x9ce;
    } while ((int)index < (int)array->count);
    return local_8;
  }
  return 0;
}

// 004DE4F0 FUN_004de4f0
#line 4 "decomp/ST.exe/functions/004DE4F0/decomp.c"
int __thiscall st::fn_004DE4F0(void *this,int param_1)

{
  STAllPlayersC_GetBoatWeaponInfo_param_1Enum SVar1;
  int iVar2;
  int iVar3;
  DArrayTy *pDVar4;
  uint uVar5;
  int *piVar6;
  int aiStackY_3e4 [45];
  int aiStackY_330 [97];
  undefined4 uStackY_1ac;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int local_18c [45];
  int local_d8 [45];
  undefined4 local_24;
  void *local_20;
  void *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;

  iVar3 = param_1;
  local_20 = this;
  local_10 = 0;
  local_c = 0;
  local_18 = 0;
  /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
  local_14 = param_1 * 0xa62;
  pDVar4 = (DArrayTy *)g_packedRecords_A62x8[param_1].field3_0x9;
  iVar2 = 0;
  if (pDVar4 != nullptr) {
    memset(local_18c, 0, 0xb4); /* compiler bulk-zero initialization */
    uVar5 = 0;
    /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
    iVar2 = param_1 * 0xa62;
    if (pDVar4->count != 0) {
      do {
        st::fn_006ACC70(pDVar4,uVar5,&local_8);
        if (local_8 != nullptr) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = 0;
          if (local_8[8] == 0x14) {
            puVar8 = &local_24;
            piVar6 = &local_c;
            piVar7 = &param_1;
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            SVar1 = (**(code **)(*local_8 + 0x2c))();
            uStackY_1ac = 0x4de587;
            iVar2 = st::fn_00403995(SVar1,st::pointer_boundary_cast<undefined4 *>(piVar7),st::pointer_boundary_cast<undefined4 *>(piVar6),puVar8);
            if (iVar2 == 1) {
LAB_004de602:
              if (param_1 != 0) {
                local_18 = 1;
                aiStackY_3e4[param_1] = st::machine_word_boundary_cast<int>(aiStackY_3e4[param_1] + (int)(0x5dc / (longlong)local_c));
              }
            }
            else {
              param_1 = 0;
            }
          }
          else if (local_8[8] == 1000) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            iVar2 = (**(code **)(*local_8 + 0x2c))();
            if (*(int *)(&DAT_007926b0 + iVar2 * 4) != 0) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
              iVar2 = (**(code **)(*local_8 + 0x2c))();
              if (*(int *)(&DAT_00793c98 + iVar2 * 8) == 1) {
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
                iVar2 = (**(code **)(*local_8 + 0x2c))();
                iVar9 = 0;
                param_1 = (&DAT_00792ca0)[(iVar2 + -0x32) * 6];
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
                iVar2 = (**(code **)(*local_8 + 0x2c))();
                local_c = st::fn_00404309(iVar3,iVar2 + -0x32,iVar9);
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
                iVar2 = (**(code **)(*local_8 + 0x2c))();
                local_24 = *(undefined4 *)(&DAT_00793ea8 + iVar2 * 8);
              }
            }
            goto LAB_004de602;
          }
        }
        uVar5 = uVar5 + 1;
        pDVar4 = *(DArrayTy **)((int)&g_packedRecords_A62x8[0].field3_0x9 + local_14);
        iVar2 = local_14;
      } while (uVar5 < pDVar4->count);
    }
    memset(local_d8, 0, 0xb4); /* compiler bulk-zero initialization */
    pDVar4 = *(DArrayTy **)((int)&g_packedRecords_A62x8[0].field1966_0x9ce + iVar2);
    if (pDVar4 != nullptr) {
      uVar5 = 0;
      if (pDVar4->count != 0) {
        do {
          st::fn_006ACC70(pDVar4,uVar5,&local_1c);
          param_1 = 0x96;
          do {
            local_c = st::fn_00403E0E(local_1c,param_1);
            if (local_c != 0) {
              aiStackY_330[param_1] = st::machine_word_boundary_cast<int>(aiStackY_330[param_1] + (int)(0x5dc / (longlong)local_c));
            }
            param_1 = param_1 + 1;
          } while (param_1 < 0xc3);
          uVar5 = uVar5 + 1;
          pDVar4 = *(DArrayTy **)((int)&g_packedRecords_A62x8[0].field1966_0x9ce + local_14);
        } while (uVar5 < pDVar4->count);
      }
      iVar3 = 0;
      do {
        iVar2 = *(int *)((int)local_d8 + iVar3);
        if ((iVar2 != 0) && (iVar2 < *(int *)((int)local_18c + iVar3))) {
          iVar2 = (*(int *)((int)local_18c + iVar3) / iVar2) / 0x1e;
          if (local_10 < iVar2) {
            local_10 = iVar2;
          }
        }
        iVar3 = iVar3 + 4;
      } while (iVar3 < 0xb4);
      return local_10;
    }
    iVar2 = 1;
    if (local_18 == 0) {
      iVar2 = local_10;
    }
  }
  return iVar2;
}

// 004DE7B0 FUN_004de7b0
#line 4 "decomp/ST.exe/functions/004DE7B0/decomp.c"
undefined4 __fastcall st::fn_004DE7B0(int param_1)

{
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  return 0;
}

// 004DE820 FUN_004de820
#line 4 "decomp/ST.exe/functions/004DE820/decomp.c"
undefined4 __fastcall st::fn_004DE820(AnonShape_004DE820_615D04DD *param_1)

{
  bool bVar1;
  int iVar3;
  STGroupBoatC *this;
  DArrayTy *array;
  int iVar2;
  STGameObjC *this_00;
  int local_EAX_212;
  int local_EAX_229;
  int local_EAX_250;
  int local_EAX_267;
  undefined4 local_8;

  iVar3 = st::fn_004042AF(&param_1->field_0x1d5,'\f');
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (iVar3 != *(int *)(param_1->field_01F5 + 0x1c4)) {
    return 0;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(param_1->field_0000 + 0x90))(3,0x273);
  bVar1 = false;
  this = st::fn_00405CF9(param_1->field_0x24,*(ushort *)&param_1->field_0x30);
  if (((this != nullptr) &&
      (array = (DArrayTy *)st::fn_00402DB5((STGroupC *)this), array != nullptr))
     && (array->count != 0)) {
    array->iteratorIndex = 0;
    iVar2 = st::fn_006B1190(array,(byte *)&local_8);
    while (-1 < iVar2) {
      this_00 = st::fn_004028BA
                          (g_allPlayers_007FA174,param_1->field_0x24,(ushort)local_8,CASE_1);
      if (((this_00 != nullptr) &&
          (iVar3 = this_00->vfunc_2C(), iVar3 == 0x45)) &&
         ((this_00->field_04D0 == 0 &&
          ((local_EAX_212 = st::fn_00405ACE((TLOBaseTy *)this_00,3,0,1,1,1),
           local_EAX_212 != 0 &&
           (local_EAX_229 = st::fn_0040283D((TLOBaseTy *)this_00), local_EAX_229 != 0)))))) {
        local_EAX_250 = st::fn_00405ACE((TLOBaseTy *)this_00,3,0,1,1,1);
        if ((local_EAX_250 != 0) &&
           (local_EAX_267 = st::fn_0040283D((TLOBaseTy *)this_00), local_EAX_267 != 0)) {
          st::fn_00405759((TLOBaseTy *)this_00,3,0,1,0,0xffffffff,0,0xff,nullptr);
          this_00->field_04D0 = 2;
          st::fn_00402CF7((TLOBaseTy *)this_00,0);
        }
        bVar1 = true;
      }
      iVar2 = st::fn_006B1190(array,(byte *)&local_8);
    }
    st::fn_006AE110(array);
    if (bVar1) {
      return 1;
    }
  }
  iVar3 = *(int *)&param_1->field_0x24;
  *(int *)&param_1[2].field_0xde = *(int *)&param_1[2].field_0xde + 1;
  g_packedRecords_A62x8[iVar3].field1600_0x7d6 = g_packedRecords_A62x8[iVar3].field1600_0x7d6 + 1;
  return 1;
}

// 004DEA40 FUN_004dea40
#line 4 "decomp/ST.exe/functions/004DEA40/decomp.c"
void __fastcall st::fn_004DEA40(AnonShape_004DEA40_61E7A6D4 *param_1)

{
  if (param_1->field_04D0 != 0) {
    param_1->field_04D0 = st::machine_word_boundary_cast<int>(param_1->field_04D0 + -1);
    g_packedRecords_A62x8[param_1->field_0024].field1600_0x7d6 =
         g_packedRecords_A62x8[param_1->field_0024].field1600_0x7d6 + -1;
  }
  return;
}

// 004DEA90 FUN_004dea90
#line 4 "decomp/ST.exe/functions/004DEA90/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 004CAFC0 -> 004DEA90 @ 004CB0F4 */

void __thiscall
st::fn_004DEA90(void *this,TLOBaseTy_sub_004CAFC0_param_1Enum param_1,int param_2,int *param_3,
            int *param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;

  bVar2 = st::fn_004049B7(STField<char>(this,0x23d));
  iVar1 = STField<int>(this,0x245);
  iVar3 = bVar2 - 1;
  if (param_1 == CASE_E) {
    if (STField<int>(this,0x361) != 6) {
      iVar1 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                      (param_2 + (iVar3 + STField<int>(this,0x235) * 3) * 4) * 8);
      *param_4 = iVar1;
      *param_3 = iVar1;
      return;
    }
    iVar4 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                    (param_2 + (iVar3 + STField<int>(this,0x235) * 3) * 4) * 8) + 1;
  }
  else {
    iVar4 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                    (param_2 + (iVar3 + STField<int>(this,0x235) * 3) * 4) * 8);
  }
  *param_3 = iVar4;
  *param_4 = *(int *)((&PTR_DAT_007b5170)[iVar1] +
                     (param_2 + (iVar3 + STField<int>(this,0x235) * 3) * 4) * 8 + 4);
  return;
}

// 004DEBA0 FUN_004deba0
#line 4 "decomp/ST.exe/functions/004DEBA0/decomp.c"
undefined4 __fastcall st::fn_004DEBA0(int param_1)

{
  *(undefined4 *)(param_1 + 0x4d4) = 5000;
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  return 0;
}

// 004DEBD0 FUN_004debd0
#line 4 "decomp/ST.exe/functions/004DEBD0/decomp.c"
undefined4 __thiscall st::fn_004DEBD0(void *this,int param_1)

{
  STField<int>(this,0x4d4) = param_1;
  if ((param_1 < 1) && (STField<int>(this,0x4d0) == 1)) {
    STField<undefined4>(this,0x4d4) = 0;
  }
  return 0;
}

// 004DEC10 FUN_004dec10
#line 4 "decomp/ST.exe/functions/004DEC10/decomp.c"
/* [STSwitchEnumApplier] Switch target field_04D0 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_04D0State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6

   [STSwitchEnumApplier] Switch target field_04D0 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_04D0State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_32=50;CASE_40=64;CASE_49=73;CASE_5C=92
    */

undefined4 __fastcall st::fn_004DEC10(TLOBaseTy *param_1)

{
  int iVar1;
  dword dVar2;
  int iVar3;

  switch(param_1->field_04D0) {
  case CASE_0:
    iVar1 = st::fn_004042AF(&param_1->field_01D5,'\x0e');
    if (iVar1 == param_1->field_01F5->field_020C) {
      param_1->field_04D0 = CASE_1;
      st::fn_00402CF7(param_1,0);
      st::fn_00401B4A((AnonShape_004C2C10_59B6D93C *)param_1);
      param_1->vfunc_90(4,0x340);
      return 0;
    }
    break;
  case CASE_1:
    if ((param_1->field_04D4 == 0) &&
       (iVar1 = st::fn_004042AF(&param_1->field_01D5,'\x0e'),
       iVar1 == param_1->field_01F5->field_020C)) {
      param_1->field_04D0 = CASE_3;
      st::fn_00402CF7(param_1,0);
      st::fn_00405A33((AnonShape_004C2D40_7C578146 *)param_1);
      param_1->vfunc_90(4,0x341);
      return 0;
    }
    break;
  case CASE_2:
    iVar3 = 0x2d;
    iVar1 = st::fn_00402C98(*(char *)&param_1->field_0024,(int)param_1->field_0018);
    if (iVar1 == 0) {
      iVar3 = 0xb4;
    }
    if ((uint)(param_1->field_04D8 + iVar3) <= g_playSystem_00802A38->field_00E4) {
      iVar1 = st::machine_word_boundary_cast<int>(param_1->field_04D4 + 0x32);
      param_1->field_04D4 = iVar1;
      if (4999 < iVar1) {
        param_1->field_04D4 = 5000;
        param_1->field_04D0 = CASE_0;
        st::fn_00402CF7(param_1,0);
        dVar2 = param_1->slot_2C();
        st::fn_00402F0E(STReplaceLowByte((uint32_t)(dVar2), (uint8_t)(*(undefined1 *)&param_1->field_0024)),dVar2);
        if (param_1->field_0024 == (byte *)(uint)(byte)param_1->field_0010->field_112D) {
          st::fn_00404B8D((char)param_1->field_0024);
        }
      }
      param_1->field_04D8 = g_playSystem_00802A38->field_00E4;
      return 0;
    }
    break;
  case CASE_3:
    iVar1 = st::fn_004042AF(&param_1->field_01D5,'\x0e');
    if (iVar1 == param_1->field_01F5->field_020C) {
      param_1->field_04D0 = CASE_2;
      st::fn_00402CF7(param_1,0);
      param_1->field_04D8 = g_playSystem_00802A38->field_00E4;
      dVar2 = param_1->slot_2C();
      st::fn_00405E39(STReplaceLowByte((uint32_t)(dVar2), (uint8_t)(*(undefined1 *)&param_1->field_0024)),dVar2);
      if (param_1->field_0024 == (byte *)(uint)(byte)param_1->field_0010->field_112D) {
        st::fn_00404B8D((char)param_1->field_0024);
      }
    }
  }
  return 0;
}

// 004DEEB0 FUN_004deeb0
#line 4 "decomp/ST.exe/functions/004DEEB0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 004CAFC0 -> 004DEEB0 @ 004CB08B

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 004CAFC0 -> 004DEEB0 @ 004CB08B

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 004CAFC0 -> 004DEEB0 @ 004CB08B

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004CAFC0 -> 004DEEB0 @ 004CB08B; TLOBaseTy::sub_004CAFC0 parameter param_2 */

void __thiscall
st::fn_004DEEB0(void *this,TLOBaseTy_sub_004CAFC0_param_1Enum param_1,int param_2,uint *param_3,
            uint *param_4)

{
  switch(STField<undefined4>(this,0x4d0)) {
  case 0:
    *param_3 = 0;
    *param_4 = 0xe;
    return;
  case 1:
    *param_3 = 0xf;
    *param_4 = 0x1d;
    return;
  case 2:
    *param_3 = 0x2d;
    *param_4 = 0x2d;
    return;
  case 3:
    *param_3 = 0x1e;
    *param_4 = 0x2d;
  }
  return;
}

// 004DEF50 FUN_004def50
#line 4 "decomp/ST.exe/functions/004DEF50/decomp.c"
undefined4 __fastcall st::fn_004DEF50(int param_1)

{
  DArrayTy *pDVar1;
  int local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (g_packedRecords_A62x8[*(int *)(param_1 + 0x24)].field1971_0x9e2 == nullptr) {
    local_8 = param_1;
    pDVar1 = st::fn_006AE290(nullptr,10,4,10);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    g_packedRecords_A62x8[*(int *)(param_1 + 0x24)].field1971_0x9e2 = pDVar1;
  }
  local_8 = param_1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  st::fn_006AE1C0
            (g_packedRecords_A62x8[*(int *)(param_1 + 0x24)].field1971_0x9e2,&local_8);
  return 0;
}

// 004DEFF0 FUN_004deff0
#line 4 "decomp/ST.exe/functions/004DEFF0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004B9A40 -> 004DEFF0 @ 004B9AF0; TLOBaseTy::sub_004B9A40 this; stable alias ESI */

undefined4 __fastcall st::fn_004DEFF0(TLOBaseTy *param_1)

{
  DArrayTy *array;
  uint index;
  TLOBaseTy *local_8;

  array = g_packedRecords_A62x8[(int)param_1->field_0024].field1971_0x9e2;
  if (array != nullptr) {
    index = 0;
    local_8 = param_1;
    if (0 < (int)array->count) {
      do {
        st::fn_006ACC70(array,index,&local_8);
        if (local_8 == param_1) {
          st::fn_006B0C70(g_packedRecords_A62x8[(int)param_1->field_0024].field1971_0x9e2,index);
          break;
        }
        index = index + 1;
        array = g_packedRecords_A62x8[(int)param_1->field_0024].field1971_0x9e2;
      } while ((int)index < (int)array->count);
    }
    if ((g_packedRecords_A62x8[(int)param_1->field_0024].field1971_0x9e2)->count == 0) {
      st::fn_006AE110(g_packedRecords_A62x8[(int)param_1->field_0024].field1971_0x9e2);
      g_packedRecords_A62x8[(int)param_1->field_0024].field1971_0x9e2 = nullptr;
    }
  }
  return 0;
}

// 004DF100 FUN_004df100
#line 4 "decomp/ST.exe/functions/004DF100/decomp.c"
undefined4 __fastcall st::fn_004DF100(int param_1)

{
  DArrayTy *pDVar1;
  int local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (g_packedRecords_A62x8[*(int *)(param_1 + 0x24)].field1974_0x9ee == nullptr) {
    local_8 = param_1;
    pDVar1 = st::fn_006AE290(nullptr,10,4,10);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    g_packedRecords_A62x8[*(int *)(param_1 + 0x24)].field1974_0x9ee = pDVar1;
  }
  local_8 = param_1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  st::fn_006AE1C0
            (g_packedRecords_A62x8[*(int *)(param_1 + 0x24)].field1974_0x9ee,&local_8);
  return 0;
}

// 004DF1A0 FUN_004df1a0
#line 4 "decomp/ST.exe/functions/004DF1A0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004B9A40 -> 004DF1A0 @ 004B9B00; TLOBaseTy::sub_004B9A40 this; stable alias ESI */

undefined4 __fastcall st::fn_004DF1A0(TLOBaseTy *param_1)

{
  DArrayTy *array;
  uint index;
  TLOBaseTy *local_8;

  array = g_packedRecords_A62x8[(int)param_1->field_0024].field1974_0x9ee;
  if (array != nullptr) {
    index = 0;
    local_8 = param_1;
    if (0 < (int)array->count) {
      do {
        st::fn_006ACC70(array,index,&local_8);
        if (local_8 == param_1) {
          st::fn_006B0C70(g_packedRecords_A62x8[(int)param_1->field_0024].field1974_0x9ee,index);
          break;
        }
        index = index + 1;
        array = g_packedRecords_A62x8[(int)param_1->field_0024].field1974_0x9ee;
      } while ((int)index < (int)array->count);
    }
    if ((g_packedRecords_A62x8[(int)param_1->field_0024].field1974_0x9ee)->count == 0) {
      st::fn_006AE110(g_packedRecords_A62x8[(int)param_1->field_0024].field1974_0x9ee);
      g_packedRecords_A62x8[(int)param_1->field_0024].field1974_0x9ee = nullptr;
    }
  }
  return 0;
}

// 004DF2B0 FUN_004df2b0
#line 4 "decomp/ST.exe/functions/004DF2B0/decomp.c"
undefined4 __fastcall st::fn_004DF2B0(AnonShape_004DC660_217FA9F0 *param_1)

{
  uint uVar1;

  if (*(char *)(g_bulkInitializedRecords_008087C7 + param_1->field_0024) == '\x01') {
    param_1->field_04D8 = 10000;
    param_1->field_04D0 = 2;
    param_1->field_04D4 = 0;
    uVar1 = g_playSystem_00802A38->field_00E4;
    param_1->field_04E0 = 1;
    param_1->field_04DC = uVar1;
    return 0;
  }
  param_1->field_04D0 = 2;
  param_1->field_04D8 = 0;
  param_1->field_04D4 = 0;
  uVar1 = g_playSystem_00802A38->field_00E4;
  param_1->field_04E0 = 0;
  param_1->field_04DC = uVar1;
  return 0;
}

// 004DF370 FUN_004df370
#line 4 "decomp/ST.exe/functions/004DF370/decomp.c"
undefined4 __thiscall st::fn_004DF370(void *this,int param_1)

{
  STField<int>(this,0x4d8) = param_1;
  if ((param_1 < 1) && (STField<int>(this,0x4d0) == 1)) {
    STField<undefined4>(this,0x4d8) = 0;
  }
  return 0;
}

// 004DF3B0 FUN_004df3b0
#line 4 "decomp/ST.exe/functions/004DF3B0/decomp.c"
undefined4 __fastcall st::fn_004DF3B0(TLOBaseTy *param_1)

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
      st::fn_00402CF7(param_1,0);
      st::fn_00401B4A((AnonShape_004C2C10_59B6D93C *)param_1);
    }
  }
  else if (TVar1 == CASE_1) {
    if ((param_1->field_04D8 == 0) || (param_1->field_04D4 == 2)) {
      iVar3 = st::fn_004042AF(&param_1->field_01D5,'\x0e');
      if (iVar3 == param_1->field_01F5->field_020C) {
        param_1->field_04D0 = CASE_2;
        uVar2 = g_playSystem_00802A38->field_00E4;
        param_1->field_04D4 = 0;
        param_1->field_04DC = uVar2;
        st::fn_00402CF7(param_1,0);
        dVar4 = param_1->slot_2C();
        st::fn_00405E39(STReplaceLowByte((uint32_t)(dVar4), (uint8_t)(*(undefined1 *)&param_1->field_0024)),dVar4);
        if (param_1->field_0024 == (byte *)(uint)(byte)param_1->field_0010->field_112D) {
          st::fn_00404B8D((char)param_1->field_0024);
        }
        st::fn_00405A33((AnonShape_004C2D40_7C578146 *)param_1);
        param_1->vfunc_90(3,0x26c);
        return 0;
      }
    }
    else {
      if (param_1->field_0408 == 0) {
        st::fn_00401B4A((AnonShape_004C2C10_59B6D93C *)param_1);
        param_1->vfunc_90(3,0x26b);
      }
      if (param_1->field_04DC + 7 <= g_playSystem_00802A38->field_00E4) {
        param_1->field_04DC = g_playSystem_00802A38->field_00E4;
        st::fn_00401EA6(param_1,st::machine_word_boundary_cast<int>(param_1->field_04D8 + -100));
        return 0;
      }
    }
  }
  else if (TVar1 == CASE_2) {
    iVar5 = 0xf;
    iVar3 = st::fn_00402C98(*(char *)&param_1->field_0024,(int)param_1->field_0018);
    if (iVar3 == 0) {
      iVar5 = 0x3c;
    }
    if (param_1->field_04DC + iVar5 <= g_playSystem_00802A38->field_00E4) {
      iVar3 = st::machine_word_boundary_cast<int>(param_1->field_04D8 + 100);
      param_1->field_04D8 = iVar3;
      if (9999 < iVar3) {
        param_1->field_04D8 = 10000;
        param_1->field_04D0 = CASE_0;
        st::fn_00402CF7(param_1,0);
        dVar4 = param_1->slot_2C();
        st::fn_00402F0E(STReplaceLowByte((uint32_t)(dVar4), (uint8_t)(*(undefined1 *)&param_1->field_0024)),dVar4);
        if (param_1->field_0024 == (byte *)(uint)(byte)param_1->field_0010->field_112D) {
          st::fn_00404B8D((char)param_1->field_0024);
        }
      }
      param_1->field_04DC = g_playSystem_00802A38->field_00E4;
    }
    if (param_1->field_04D4 == 1) {
      param_1->field_04D0 = CASE_1;
      param_1->field_04D4 = 0;
      st::fn_00402CF7(param_1,0);
      st::fn_00401B4A((AnonShape_004C2C10_59B6D93C *)param_1);
      param_1->vfunc_90(3,0x26b);
      dVar4 = param_1->slot_2C();
      st::fn_00402F0E(STReplaceLowByte((uint32_t)(dVar4), (uint8_t)(*(undefined1 *)&param_1->field_0024)),dVar4);
      if (param_1->field_0024 == (byte *)(uint)(byte)param_1->field_0010->field_112D) {
        st::fn_00404B8D((char)param_1->field_0024);
        return 0;
      }
    }
  }
  return 0;
}

// 004DF6F0 FUN_004df6f0
#line 4 "decomp/ST.exe/functions/004DF6F0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 004CAFC0 -> 004DF6F0 @ 004CB0D1

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 004CAFC0 -> 004DF6F0 @ 004CB0D1

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 004CAFC0 -> 004DF6F0 @ 004CB0D1 */

void __thiscall
st::fn_004DF6F0(void *this,TLOBaseTy_sub_004CAFC0_param_1Enum param_1,int param_2,uint *param_3,
            uint *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar4;
  int uVar3;
  int iVar5;

  uVar3 = st::fn_004049B7(STField<char>(this,0x23d));
  uVar3 = (int)(byte)uVar3;
  iVar1 = STField<int>(this,0x245);
  iVar5 = uVar3 + -1;
  if (param_1 == CASE_C) {
    iVar2 = STField<int>(this,0x4d0);
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        *param_3 = *(uint *)((&PTR_DAT_007b8310)[iVar1] +
                            (param_2 + (iVar5 + STField<int>(this,0x235) * 3) * 4) * 8);
        *param_4 = *(uint *)((&PTR_DAT_007b8310)[iVar1] +
                            (param_2 + (iVar5 + STField<int>(this,0x235) * 3) * 4) * 8 + 4);
        return;
      }
      if (iVar2 != 2) {
        return;
      }
    }
    *param_4 = 0xffffffff;
    *param_3 = 0xffffffff;
    return;
  }
  if (((int)param_1 < 0xd) || (0xe < (int)param_1)) {
    *param_3 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                        (param_2 + (iVar5 + STField<int>(this,0x235) * 3) * 4) * 8);
    *param_4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                        (param_2 + (iVar5 + STField<int>(this,0x235) * 3) * 4) * 8 + 4);
    return;
  }
  iVar2 = STField<int>(this,0x4d0);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      uVar4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                       (param_2 + (iVar5 + STField<int>(this,0x235) * 3) * 4) * 8 + 4);
      *param_4 = uVar4;
      *param_3 = uVar4;
      return;
    }
    if (iVar2 != 2) {
      return;
    }
  }
  uVar4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                   (param_2 + (iVar5 + STField<int>(this,0x235) * 3) * 4) * 8);
  *param_4 = uVar4;
  *param_3 = uVar4;
  return;
}

// 004DF8C0 FUN_004df8c0
#line 4 "decomp/ST.exe/functions/004DF8C0/decomp.c"
undefined4 __fastcall st::fn_004DF8C0(int param_1)

{
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  *(uint *)(param_1 + 0x4d4) = g_playSystem_00802A38->field_00E4;
  return 0;
}

// 004DF8F0 FUN_004df8f0
#line 4 "decomp/ST.exe/functions/004DF8F0/decomp.c"
undefined4 st::fn_004DF8F0(void)

{
  return 0;
}

// 004DF910 FUN_004df910
#line 4 "decomp/ST.exe/functions/004DF910/decomp.c"
undefined4 __fastcall st::fn_004DF910(int param_1)

{
  int iVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = st::fn_0040186B(*(int *)(param_1 + 0x24),0x2f);
  if (iVar1 != 0) {
    return DAT_00798f90;
  }
  return DAT_00798f8c;
}

// 004DF950 FUN_004df950
#line 4 "decomp/ST.exe/functions/004DF950/decomp.c"
undefined4 __fastcall st::fn_004DF950(int param_1)

{
  DArrayTy *pDVar1;
  int local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (g_packedRecords_A62x8[*(int *)(param_1 + 0x24)].field1967_0x9d2 == nullptr) {
    local_8 = param_1;
    pDVar1 = st::fn_006AE290(nullptr,10,4,10);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    g_packedRecords_A62x8[*(int *)(param_1 + 0x24)].field1967_0x9d2 = pDVar1;
  }
  local_8 = param_1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  st::fn_006AE1C0
            (g_packedRecords_A62x8[*(int *)(param_1 + 0x24)].field1967_0x9d2,&local_8);
  return 0;
}

// 004DFB00 FUN_004dfb00
#line 4 "decomp/ST.exe/functions/004DFB00/decomp.c"
undefined4 __fastcall st::fn_004DFB00(AnonShape_004DFB00_599AF150 *param_1)

{
  uint uVar1;
  int iVar2;

  if ((int)param_1->field_04D0 < 500) {
    uVar1 = st::fn_00402AB8((int)param_1);
    if (uVar1 / 100 + param_1->field_04D4 <= g_playSystem_00802A38->field_00E4) {
      iVar2 = st::machine_word_boundary_cast<int>(param_1->field_04D0 + 5);
      param_1->field_04D0 = iVar2;
      if (500 < iVar2) {
        param_1->field_04D0 = 500;
      }
      param_1->field_04D4 = g_playSystem_00802A38->field_00E4;
    }
  }
  return 0;
}

// 004DFB90 FUN_004dfb90
#line 1 "decomp/ST.exe/functions/004DFB90/decomp.c"

int st::fn_004DFB90(uint param_1,int param_2,int param_3)

{
  int iVar1;
  PackedRecord_A62x8 *pPVar2;
  int iVar3;
  int iVar4;
  DArrayTy *array;
  int iVar5;

  iVar3 = param_3;
  iVar5 = 0;
  pPVar2 = g_packedRecords_A62x8 + param_1;
  array = pPVar2->field1967_0x9d2;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((array != nullptr) && (param_1 = 0, 0 < (int)array->count)) {
    do {
      st::fn_006ACC70(array,param_1,&param_3);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar1 = *(int *)(param_3 + 0x4d0);
      if (iVar1 != 0) {
        if ((param_2 - iVar5) * iVar3 <= iVar1) {
          *(int *)(param_3 + 0x4d0) = *(int *)(param_3 + 0x4d0) - (param_2 - iVar5) * iVar3;
          return param_2;
        }
        iVar4 = (iVar1 / iVar3) * iVar3;
        if (iVar4 != 0) {
          iVar5 = iVar5 + iVar1;
          *(int *)(param_3 + 0x4d0) = iVar1 - iVar4;
        }
      }
      param_1 = param_1 + 1;
      array = pPVar2->field1967_0x9d2;
    } while ((int)param_1 < (int)array->count);
  }
  return iVar5;
}

// 004DFC70 FUN_004dfc70
#line 4 "decomp/ST.exe/functions/004DFC70/decomp.c"
int __thiscall st::fn_004DFC70(void *this,int *param_1)

{
  int *piVar1;
  STAllPlayersC_GetBoatWeaponInfo_param_1Enum SVar2;
  int iVar3;
  DArrayTy *pDVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  void *local_14;
  int local_10;
  int local_c;
  uint local_8;

  piVar1 = param_1;
  uVar5 = 0;
  local_8 = 0;
  pDVar4 = (DArrayTy *)g_packedRecords_A62x8[(int)param_1].field3_0x9;
  if (pDVar4 != nullptr) {
    local_c = 0;
    local_10 = 0;
    local_14 = this;
    if (pDVar4->count != 0) {
      do {
        st::fn_006ACC70(pDVar4,uVar5,&param_1);
        if (param_1 != nullptr) {
          if (param_1[8] == 0x14) {
            puVar8 = &local_18;
            puVar7 = &local_8;
            puVar6 = &local_20;
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            SVar2 = (**(code **)(*param_1 + 0x2c))();
            iVar3 = st::fn_00403995(SVar2,puVar6,st::pointer_boundary_cast<undefined4 *>(puVar7),puVar8);
            if (iVar3 == 2) {
LAB_004dfd49:
              local_10 = 1;
              local_c = local_c + (int)(0x5dc / (longlong)(int)local_8);
            }
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          else if (((param_1[8] == 1000) &&
                   (iVar3 = (**(code **)(*param_1 + 0x2c))(),
                   *(int *)(&DAT_007926b0 + iVar3 * 4) != 0)) &&
                  (iVar3 = (**(code **)(*param_1 + 0x2c))(),
                  *(int *)(&DAT_00793c98 + iVar3 * 8) == 2)) {
            iVar9 = 0;
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            iVar3 = (**(code **)(*param_1 + 0x2c))();
            local_8 = st::fn_00404309((int)piVar1,iVar3 + -0x32,iVar9);
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            iVar3 = (**(code **)(*param_1 + 0x2c))();
            local_18 = *(undefined4 *)(&DAT_00793ea8 + iVar3 * 8);
            goto LAB_004dfd49;
          }
        }
        pDVar4 = (DArrayTy *)g_packedRecords_A62x8[(int)piVar1].field3_0x9;
        uVar5 = uVar5 + 1;
      } while (uVar5 < pDVar4->count);
    }
    uVar5 = 0;
    pDVar4 = g_packedRecords_A62x8[(int)piVar1].field1967_0x9d2;
    iVar3 = 0;
    if (pDVar4 == nullptr) {
      if (local_10 != 0) {
        return 1;
      }
    }
    else {
      if (pDVar4->count != 0) {
        do {
          st::fn_006ACC70(pDVar4,uVar5,&local_1c);
          local_8 = st::fn_00402AB8(local_1c);
          local_8 = local_8 / 500;
          if (local_8 != 0) {
            iVar3 = iVar3 + (int)(0x5dc / (ulonglong)(longlong)(int)local_8);
          }
          pDVar4 = g_packedRecords_A62x8[(int)piVar1].field1967_0x9d2;
          uVar5 = uVar5 + 1;
        } while (uVar5 < pDVar4->count);
      }
      if ((iVar3 < local_c) && (iVar3 = (((local_c - iVar3) * 100) / iVar3 + -100) / 100, 0 < iVar3)
         ) {
        return iVar3;
      }
    }
  }
  return 0;
}

// 004DFE90 FUN_004dfe90
#line 4 "decomp/ST.exe/functions/004DFE90/decomp.c"
undefined4 __fastcall st::fn_004DFE90(int param_1)

{
  DArrayTy *pDVar1;
  int local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (g_packedRecords_A62x8[*(int *)(param_1 + 0x24)].field1973_0x9ea == nullptr) {
    local_8 = param_1;
    pDVar1 = st::fn_006AE290(nullptr,10,4,10);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    g_packedRecords_A62x8[*(int *)(param_1 + 0x24)].field1973_0x9ea = pDVar1;
  }
  local_8 = param_1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  st::fn_006AE1C0
            (g_packedRecords_A62x8[*(int *)(param_1 + 0x24)].field1973_0x9ea,&local_8);
  return 0;
}

// 004DFF30 FUN_004dff30
#line 4 "decomp/ST.exe/functions/004DFF30/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004B9A40 -> 004DFF30 @ 004B9B45; TLOBaseTy::sub_004B9A40 this; stable alias ESI */

undefined4 __fastcall st::fn_004DFF30(TLOBaseTy *param_1)

{
  DArrayTy *array;
  uint index;
  TLOBaseTy *local_8;

  array = g_packedRecords_A62x8[(int)param_1->field_0024].field1973_0x9ea;
  if (array != nullptr) {
    index = 0;
    local_8 = param_1;
    if (0 < (int)array->count) {
      do {
        st::fn_006ACC70(array,index,&local_8);
        if (local_8 == param_1) {
          st::fn_006B0C70(g_packedRecords_A62x8[(int)param_1->field_0024].field1973_0x9ea,index);
          break;
        }
        index = index + 1;
        array = g_packedRecords_A62x8[(int)param_1->field_0024].field1973_0x9ea;
      } while ((int)index < (int)array->count);
    }
    if ((g_packedRecords_A62x8[(int)param_1->field_0024].field1973_0x9ea)->count == 0) {
      st::fn_006AE110(g_packedRecords_A62x8[(int)param_1->field_0024].field1973_0x9ea);
      g_packedRecords_A62x8[(int)param_1->field_0024].field1973_0x9ea = nullptr;
    }
  }
  return 0;
}

