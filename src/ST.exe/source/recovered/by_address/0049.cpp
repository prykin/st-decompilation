#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/0049.cpp

// 004907E0 FUN_004907e0
#line 4 "decomp/ST.exe/functions/004907E0/decomp.c"
void __thiscall st::fn_004907E0(void *this,short *param_1,short *param_2,short *param_3)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_14 [2];
  undefined4 local_c;

  local_c = (uint)STField<ushort>(this,0x2a6);
  puVar3 = st::fn_0040342C(local_14,STField<ushort>(this,0x2a6),STField<ushort>(this,0x2aa)
                              ,STField<short>(this,0x6c));
  uVar2 = *puVar3;
  sVar1 = *(short *)(puVar3 + 1);
  if (param_1 != nullptr) {
    STPiece<0,2>(local_c) = (short)uVar2;
    *param_1 = STField<short>(this,0x41) + (short)local_c;
  }
  if (param_2 != nullptr) {
    STPiece<2,2>(local_c) = (short)((uint)uVar2 >> 0x10);
    *param_2 = STField<short>(this,0x43) - STPiece<2,2>(local_c);
  }
  if (param_3 != nullptr) {
    *param_3 = STField<short>(this,0x45) + sVar1;
  }
  return;
}

// 004908A0 FUN_004908a0
#line 4 "decomp/ST.exe/functions/004908A0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004908A0 parameter used as this of STFishC::sub_004162B0 @ 004908C1
   [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (2), none consume AL/AX, and every RET path defines full EAX; sites=0046F5C0 @ 0046FB46
   -> CMP CMP EAX,0x1 | 0046F5C0 @ 0046FCDD -> CMP CMP EAX,0x1 */

int __thiscall st::fn_004908A0(void *this,STFishC *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int local_10;
  short local_c [2];
  short local_8 [2];

  local_10 = 1000000;
  st::fn_004018C5(param_1,(short *)&param_1,local_8,local_c);
  iVar6 = 0;
  iVar5 = param_2;
  do {
    sVar4 = local_8[0] + (short)iVar6;
    sVar3 = local_c[0] + 1;
    sVar1 = (short)param_1 + (short)iVar5;
    if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar4 < 0)) ||
       (((g_worldGrid.sizeY <= sVar4 || (sVar3 < 0)) ||
        ((g_worldGrid.sizeZ <= sVar3 ||
         (iVar5 = param_2,
         STGridAt3D(g_worldGrid, sVar1, sVar4, sVar3).objects[0] == nullptr)))))) {
      iVar2 = st::fn_006AADD0((int)STField<short>(this,0x47),(int)STField<short>(this,0x49),
                           (int)STField<short>(this,0x4b),(short)param_1 + iVar5,
                           st::machine_word_boundary_cast<int>(local_8[0] + iVar6),st::machine_word_boundary_cast<int>(local_c[0] + 1));
      if (iVar2 < local_10) {
        STField<short>(this,0x56c) = (short)iVar5 + (short)param_1;
        STField<short>(this,0x56e) = (short)iVar6 + local_8[0];
        STField<short>(this,0x570) = local_c[0] + 1;
        local_10 = iVar2;
      }
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 2);
  return (uint)(local_10 != 1000000);
}

// 00490A00 FUN_00490a00
#line 4 "decomp/ST.exe/functions/00490A00/decomp.c"
void __thiscall st::fn_00490A00(void *this,short param_1,short param_2,short param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STWorldObject *this_00;

  sVar1 = STField<short>(this,0x554);
  if (((sVar1 != param_1) || (STField<short>(this,0x556) != param_2)) ||
     (STField<short>(this,0x558) != param_3)) {
    sVar2 = STField<short>(this,0x558);
    sVar3 = STField<short>(this,0x556);
    if ((((-1 < sVar1) && (sVar1 < g_worldGrid.sizeX)) &&
        ((-1 < sVar3 && ((sVar3 < g_worldGrid.sizeY && (-1 < sVar2)))))) &&
       (sVar2 < g_worldGrid.sizeZ)) {
      this_00 = STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0];
      if (this_00 != nullptr) {
        st::fn_00404C23(this_00,STField<int>(this,0x568),STField<int>(this,0x18));
        st::fn_00403D28(this_00,STField<int>(this,0x568),STField<int>(this,0x18));
      }
    }
    STField<undefined4>(this,0x564) = 1;
    STField<short>(this,0x554) = param_1;
    STField<short>(this,0x556) = param_2;
    STField<short>(this,0x558) = param_3;
  }
  return;
}

// 00490B30 FUN_00490b30
#line 4 "decomp/ST.exe/functions/00490B30/decomp.c"
void __thiscall
st::fn_00490B30(void *this,AnonShape_00490B30_6CCF6294 *param_1,short param_2,uint param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  STGameObjC *pSVar5;
  char objPtr;

  objPtr = (char)param_1;
  if ((STField<char>(this,0x33a) == objPtr) && (STField<short>(this,0x33f) == param_2)) {
    STField<undefined2>(this,0x33f) = (undefined2)param_3;
  }
  if (STField<int>(this,0x45d) == 2) {
    sVar1 = STField<short>(this,0x800);
    sVar2 = STField<short>(this,0x804);
    sVar3 = STField<short>(this,0x802);
    if (((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar3 < 0)) ||
        ((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)))) || (g_worldGrid.sizeZ <= sVar2)) {
      param_1 = nullptr;
    }
    else {
      param_1 = (AnonShape_00490B30_6CCF6294 *)
                STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0];
    }
    if ((((param_1 != nullptr) &&
         (param_1->field_0018 == STField<int>(this,0x7f4))) ||
        (iVar4 = st::fn_006E62D0
                           (g_playSystem_00802A38,
                            STField<AnonShape_005EFAE0_B406B78B *>(this,0x7f4),(int *)&param_1),
        iVar4 != -4)) && ((param_1->field_0032 == param_2 && (param_1->field_0024 == (int)objPtr))))
    {
      pSVar5 = st::fn_004028BA(g_allPlayers_007FA174,objPtr,(ushort)param_3,CASE_1);
      STField<undefined4>(this,0x7f4) = pSVar5->field_0018;
    }
  }
  return;
}

// 00490CA0 FUN_00490ca0
#line 4 "decomp/ST.exe/functions/00490CA0/decomp.c"
void __fastcall st::fn_00490CA0(STBoatC *param_1)

{
  st::fn_004023CE(param_1);
  param_1->field_0580 = CASE_6;
  return;
}

// 00490D90 FUN_00490d90
#line 4 "decomp/ST.exe/functions/00490D90/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0049DFA0 -> 00490D90 @ 0049E0F6 | 004A0990 -> 00490D90 @ 004A0AE6 */

undefined4 __fastcall st::fn_00490D90(STGameObjC *objPtr)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = objPtr->field_06F7;
  if (((((iVar1 == 8) || (iVar1 == 0x14)) || (iVar1 == 0x1a)) ||
      ((((iVar1 == 7 || (iVar1 == 0x13)) || ((iVar1 == 0x1b || ((iVar1 == 0xc || (iVar1 == 0x18)))))
        ) || (iVar1 == 0x19)))) ||
     (((iVar1 == 9 || (iVar1 == 0x15)) || (uVar2 = 1, objPtr->field_073E != 1)))) {
    uVar2 = 0;
  }
  return uVar2;
}

// 00490E00 FUN_00490e00
#line 4 "decomp/ST.exe/functions/00490E00/decomp.c"
void __thiscall st::fn_00490E00(void *this,int param_1)

{
  if (param_1 == 1) {
    STField<undefined4>(this,0x73e) = 1;
    return;
  }
  if (STField<int>(this,0x73e) == 1) {
    STField<int>(this,0x73e) = param_1;
    if (STField<int>(this,0x45d) == 5) {
      st::fn_00401028
                (g_allPlayers_007FA174,STField<char>(this,0x24),STField<short>(this,0x32),1);
    }
  }
  return;
}

// 00490E90 FUN_00490e90
#line 4 "decomp/ST.exe/functions/00490E90/decomp.c"
void __thiscall st::fn_00490E90(void *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar4;
  char *pcVar5;

  uVar2 = 0xffffffff;
  pcVar4 = (char *)((int)this + 0x6fb);
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  memmove(param_1, pcVar4, uVar2); /* compiler REP MOVS byte copy */
  return;
}

// 00490ED0 FUN_00490ed0
#line 4 "decomp/ST.exe/functions/00490ED0/decomp.c"
void __thiscall st::fn_00490ED0(void *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar4;
  char *pcVar5;
  char *pcVar4_mg1;
  char *pcVar4_mg0;

  uVar2 = 0xffffffff;
  pcVar4_mg0 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4_mg0;
    pcVar4_mg0 = pcVar4_mg0 + 1;
  } while (cVar1 != '\0');
  if (0xe < ~uVar2 - 1) {
    st::fn_0072E340((char *)((int)this + 0x6fb),param_1,0xe);
    STField<undefined1>(this,0x709) = 0;
    return;
  }
  uVar2 = 0xffffffff;
  do {
    pcVar4_mg1 = param_1;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4_mg1 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar4_mg1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4_mg1 + -uVar2;
  pcVar5 = (char *)((int)this + 0x6fb);
  memmove(pcVar5, pcVar4, uVar2); /* compiler REP MOVS byte copy */
  return;
}

// 00490F60 FUN_00490f60
#line 4 "decomp/ST.exe/functions/00490F60/decomp.c"
void __fastcall st::fn_00490F60(STBoatC *param_1)

{
  DArrayTy *array;
  int iVar1;
  uint local_c;
  undefined2 local_8;

  if (((param_1->field_045D != CASE_14) || (param_1->field_07C2 != 0)) &&
     (param_1->field_0459 != CASE_78)) {
    iVar1 = param_1->field_07C2;
    if (param_1->field_045D != CASE_14) {
      if (iVar1 == 0) {
        local_8 = param_1->field_0030;
        local_c = g_playSystem_00802A38->field_00E4;
        array = st::fn_006AE290(nullptr,1,2,1);
        st::fn_006AE1C0(array,&param_1->field_0032);
        st::fn_0040178F
                  (g_allPlayers_007FA174,*(char *)&param_1->field_0024,0xfffe,array,
                   nullptr);
        st::fn_006AE110(array);
        st::fn_00402126(param_1,CASE_14,&local_c);
      }
      iVar1 = param_1->field_07C2;
    }
    param_1->field_07C2 = iVar1 + 1;
    return;
  }
  local_8 = param_1->field_0030;
  local_c = g_playSystem_00802A38->field_00E4;
  st::fn_00402126(param_1,CASE_14,&local_c);
  return;
}

// 00491180 FUN_00491180
#line 4 "decomp/ST.exe/functions/00491180/decomp.c"
undefined4 __fastcall st::fn_00491180(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)(param_1 + 0x45d) == 0x14) && (*(int *)(param_1 + 0x5c0) == 3)) {
    return 1;
  }
  return 0;
}

// 004911B0 FUN_004911b0
#line 4 "decomp/ST.exe/functions/004911B0/decomp.c"
undefined4 __thiscall st::fn_004911B0(void *this,undefined4 param_1)

{
  undefined4 uVar1;

  uVar1 = 0;
  if (((STField<int>(this,0x45d) == 0x14) && (STField<int>(this,0x5c0) != 2)) &&
     (STField<int>(this,0x5a2) == 0)) {
    STField<undefined4>(this,0x5a2) = param_1;
    uVar1 = 1;
  }
  return uVar1;
}

// 00491200 FUN_00491200
#line 4 "decomp/ST.exe/functions/00491200/decomp.c"
undefined4 __thiscall st::fn_00491200(void *this,int param_1)

{
  undefined4 uVar1;

  uVar1 = 0;
  if ((STField<int>(this,0x45d) == 0x14) && (STField<int>(this,0x5a2) == param_1)) {
    STField<undefined4>(this,0x5a2) = 0;
    uVar1 = 1;
  }
  return uVar1;
}

// 00491930 FUN_00491930
#line 4 "decomp/ST.exe/functions/00491930/decomp.c"
undefined4 __fastcall st::fn_00491930(int param_1)

{
  int iVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)(param_1 + 0x6f7);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((((iVar1 != 7) && (iVar1 != 0x13)) && (iVar1 != 0x1b)) &&
     (((iVar1 != 9 && (iVar1 != 0x15)) &&
      ((*(int *)(param_1 + 0x45d) != 0x14 || (*(int *)(param_1 + 0x5c0) != 3)))))) {
    return 1;
  }
  return 0;
}

// 00491980 FUN_00491980
#line 4 "decomp/ST.exe/functions/00491980/decomp.c"
undefined4 __fastcall st::fn_00491980(void *param_1)

{
  int iVar1;
  uint uVar2;

  iVar1 = st::fn_00402EDC(st::pointer_boundary_cast<STGameObjC *>(param_1));
  if (iVar1 != 0x14) {
    uVar2 = st::fn_00404DF9(st::pointer_boundary_cast<STBoatC *>(param_1),CASE_14);
    if (uVar2 == 0) {
      return 1;
    }
  }
  return 0;
}

// 00492370 FUN_00492370
#line 4 "decomp/ST.exe/functions/00492370/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0049DFA0 -> 00492370 @ 0049E11D | 0049DFA0 -> 00492370 @ 0049E318 | 004A0990 ->
   00492370 @ 004A0B1B */

undefined4 __fastcall st::fn_00492370(STGameObjC *objPtr)

{
  return objPtr->field_07CA;
}

// 004924A0 FUN_004924a0
#line 4 "decomp/ST.exe/functions/004924A0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __fastcall st::fn_004924A0(void *param_1)

{
  int iVar1;
  STBoatC *local_8;

  if (((STField<int>(param_1,0x45d) == 0x14) &&
      (STField<AnonShape_005EFAE0_B406B78B *>(param_1,0x5a2) != nullptr
      )) && (STField<int>(param_1,0x5c0) != 3)) {
    local_8 = st::pointer_boundary_cast<STBoatC *>(param_1);
    iVar1 = st::fn_006E62D0
                      (g_playSystem_00802A38,STField<AnonShape_005EFAE0_B406B78B *>(param_1,0x5a2)
                       ,(int *)&local_8);
    if (iVar1 != -4) {
      st::fn_00403864(local_8,STField<int>(param_1,0x18));
    }
  }
  return;
}

// 00492510 FUN_00492510
#line 4 "decomp/ST.exe/functions/00492510/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_00492510(void *this,int param_1)

{
  if (STField<int>(this,0x7ca) == param_1) {
    STField<undefined4>(this,0x7ca) = 0;
    STField<undefined4>(this,0x7c6) = 0;
    return;
  }
  st::fn_004027CA(st::pointer_boundary_cast<STBoatC *>(this));
  return;
}

// 00492550 FUN_00492550
#line 4 "decomp/ST.exe/functions/00492550/decomp.c"
undefined4 __thiscall
st::fn_00492550(void *this,short param_1,short param_2,short param_3,undefined2 *param_4,
            undefined2 *param_5,short *param_6)

{
  int _param_1 = static_cast<int>(param_1);

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar1 = (int)param_1;
  iVar4 = iVar1 + -1;
  do {
    if (iVar1 + 1 < iVar4) {
      return 0;
    }
    if ((-1 < iVar4) && (iVar4 <= g_worldGrid.sizeX + -1)) {
      iVar3 = param_2 + -1;
      iVar2 = param_2 + 1;
      if (iVar3 <= iVar2) {
        auto _param_1 = g_worldGrid.sizeX * iVar3;
        do {
          if ((((-1 < iVar3) && (iVar3 <= g_worldGrid.sizeY + -1)) &&
              (STGridAt3D(g_pathingGrid, iVar4, iVar3, param_3)
               == 0)) &&
             (g_worldGrid.cells[(int)g_worldGrid.planeStride * (int)param_3 + _param_1 + iVar4].
              objects[STField<byte>(this,0x8e)] == nullptr)) {
            *param_4 = (short)iVar4;
            *param_5 = (short)iVar3;
            *param_6 = param_3;
            return 1;
          }
          _param_1 = _param_1 + g_worldGrid.sizeX;
          iVar3 = iVar3 + 1;
        } while (iVar3 <= iVar2);
      }
    }
    iVar4 = iVar4 + 1;
  } while( true );
}

// 00492AB0 FUN_00492ab0
#line 4 "decomp/ST.exe/functions/00492AB0/decomp.c"
uint __fastcall st::fn_00492AB0(AnonShape_00492AB0_63A128FD *param_1)

{
  uint uVar1;

  if ((0 < param_1->field_06F7) && (param_1->field_06F7 < 3)) {
    param_1->field_001C = st::machine_word_boundary_cast<undefined4>(param_1->field_001C * 0x41c64e6d + 0x3039);
  }
  uVar1 = st::machine_word_boundary_cast<uint>(param_1->field_001C * 0x41c64e6d + 0x3039);
  param_1->field_001C = uVar1;
  return (uVar1 >> 0x10) % 7;
}

// 00492B20 FUN_00492b20
#line 4 "decomp/ST.exe/functions/00492B20/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00476CE0 -> 00492B20 @ 00476D5E; STBoatC::Capture this; stable alias EBX | 00476CE0 ->
   00492B20 @ 00476E32; STBoatC::Capture this; stable alias EBX | 00476CE0 -> 00492B20 @ 00477C00;
   STBoatC::Capture this; stable alias EBX */

undefined4 __fastcall st::fn_00492B20(STBoatC *param_1)

{
  STGameObjC *this;
  int iVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  short sVar7;
  short *psVar8;
  int iVar9;
  short sVar10;
  short *psVar11;
  int local_10;
  short local_c [2];
  short local_8;
  short local_6;

  this = st::fn_004028BA
                   (g_allPlayers_007FA174,param_1->field_05FC,param_1->field_05FD,CASE_1);
  if ((((((this != nullptr) && (this->field_0018 == *(int *)&param_1->field_0x5ff)) &&
        (iVar1 = (*this->vtable->vfunc_108)(param_1->field_0024), iVar1 != 0)) &&
       ((st::fn_004018C5((STFishC *)this,&local_8,&local_6,local_c), -1 < local_8 &&
        (local_8 < g_pathingGrid.sizeX)))) && (-1 < local_6)) &&
     (((local_6 < g_pathingGrid.sizeY && (-1 < local_c[0])) &&
      ((int)local_c[0] < g_pathingGrid.sizeZ + -1)))) {
    param_1->field_0609 = local_8;
    param_1->field_060B = local_6;
    param_1->field_060D = local_c[0];
    uVar4 = (int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX;
    psVar8 = g_pathingGrid.cells;
    psVar11 = g_pathingScratchGrid.cells;
    for (uVar5 = (uVar4 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)psVar11 = *(undefined4 *)psVar8;
      psVar8 = psVar8 + 2;
      psVar11 = psVar11 + 2;
    }
    for (uVar4 = uVar4 * 2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)psVar11 = (char)*psVar8;
      psVar8 = (short *)((int)psVar8 + 1);
      psVar11 = (short *)((int)psVar11 + 1);
    }
    st::fn_006AB090((int)g_pathingScratchGrid.cells,(int)g_pathingGrid.sizeX,(int)g_pathingGrid.sizeY,
                 (int)g_pathingGrid.sizeZ,(int)param_1->field_005B,(int)param_1->field_005D,
                 (int)param_1->field_005F,(int)local_8,(int)local_6,st::machine_word_boundary_cast<int>(local_c[0] + 1));
    if (this->field_002C == 0) {
      sVar7 = local_c[0] + 1;
      if ((((-1 < local_8) && (local_8 < g_worldGrid.sizeX)) && (-1 < local_6)) &&
         (((local_6 < g_worldGrid.sizeY && (-1 < sVar7)) && (sVar7 < g_worldGrid.sizeZ)))) {
        if ((-1 < STGridAt3D(g_pathingGrid, local_8, local_6, sVar7)) &&
           (g_pathingScratchGrid.cells
            [(local_c[0] + 1) * (int)g_pathingGrid.planeStride +
             (int)g_pathingGrid.sizeX * (int)local_6 + (int)local_8] != 0)) {
          param_1->field_0603 = local_8;
          param_1->field_0605 = local_6;
          param_1->field_0607 = sVar7;
          return 1;
        }
      }
    }
    else if (this->field_002C == 1) {
      local_10 = 10000000;
      param_1->field_0607 = local_c[0] + 1;
      iVar2 = (int)local_8;
      iVar1 = iVar2 + 1;
      if (iVar2 <= iVar1) {
        do {
          iVar6 = (int)local_6;
          if (iVar6 <= local_6 + 1) {
            do {
              sVar7 = (short)iVar2;
              iVar9 = (int)g_pathingScratchGrid.cells
                           [(int)g_pathingGrid.planeStride * (local_c[0] + 1) +
                            iVar2 + g_pathingGrid.sizeX * iVar6];
              if (((((-1 < sVar7) && (sVar7 < g_worldGrid.sizeX)) &&
                   (sVar3 = (short)iVar6, -1 < sVar3)) &&
                  (((sVar3 < g_worldGrid.sizeY && (sVar10 = local_c[0] + 1, -1 < sVar10)) &&
                   ((sVar10 < g_worldGrid.sizeZ &&
                    ((-1 < STGridAt3D(g_pathingGrid, sVar7, sVar3, sVar10) && (iVar9 != 0))))))
                  )) && (iVar9 < local_10)) {
                param_1->field_0603 = sVar7;
                param_1->field_0605 = sVar3;
                local_10 = iVar9;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 <= local_6 + 1);
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 <= iVar1);
        if (local_10 != 10000000) {
          return 1;
        }
      }
    }
  }
  return 0;
}

// 00492F30 FUN_00492f30
#line 4 "decomp/ST.exe/functions/00492F30/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00476CE0 -> 00492F30 @ 00477659; STBoatC::Capture this; stable alias EBX | 00476CE0 ->
   00492F30 @ 00477A56; STBoatC::Capture this; stable alias EBX | 00476CE0 -> 00492F30 @ 00477B01;
   STBoatC::Capture this; stable alias EBX

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __fastcall st::fn_00492F30(STBoatC *param_1,undefined4 param_2)

{
  short sVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EAX;
  int iVar2;

  sVar1 = param_1->field_0607 + 1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  iVar2 = st::fn_00404908
                    (param_1,param_1->field_0603,param_1->field_0605,sVar1,param_1->field_0603,
                     param_1->field_0605,(int *)STReplaceLowWord((uint32_t)(in_EAX), (uint16_t)(sVar1)),2,
                     &param_1->field_0609,&param_1->field_060B,&param_1->field_060D);
  if (iVar2 == 0) {
    param_1->field_0609 = param_1->field_0603;
    param_1->field_060B = param_1->field_0605;
    param_1->field_060D = param_1->field_0607;
  }
  return;
}

// 00492FC0 FUN_00492fc0
#line 4 "decomp/ST.exe/functions/00492FC0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __fastcall st::fn_00492FC0(AnonShape_00492FC0_E6F586EF *param_1)

{
  STGameObjC *pSVar1;
  int iVar2;

  if ((param_1->field_045D == 9) && (param_1->field_0611 == 3)) {
    pSVar1 = st::fn_004028BA
                       (g_allPlayers_007FA174,param_1->field_05FC,param_1->field_05FD,CASE_1);
    if ((pSVar1 != nullptr) && (pSVar1->field_0018 == param_1->field_05FF)) {
      iVar2 = (*pSVar1->vtable->vfunc_108)(param_1->field_0024);
      if (iVar2 != 0) {
        st::fn_00405B1E((AnonShape_004CC900_31EE9CAA *)pSVar1);
      }
    }
  }
  return;
}

// 00493050 FUN_00493050
#line 4 "decomp/ST.exe/functions/00493050/decomp.c"
undefined4 __thiscall st::fn_00493050(void *this,int param_1)

{
  int iVar1;

  if ((STField<int>(this,0x45d) == 3) &&
     ((STField<int>(this,0x82e) == -1 || (STField<int>(this,0x82e) == 0)))) {
    iVar1 = STField<int>(this,0x6f7);
    if ((iVar1 == 7) || ((iVar1 == 0x13 || (iVar1 == 0x1b)))) {
      if (STField<int>(this,0x7ca) == 0) {
        if (param_1 == 0xfd) {
          return 1;
        }
        if (param_1 == 0xfe) {
          return 1;
        }
        if ((((0 < param_1) && (param_1 < 0x29)) && (param_1 != 7)) &&
           ((param_1 != 0x13 && (param_1 != 0x1b)))) {
          return 1;
        }
      }
    }
    else if (((param_1 == 7) || (param_1 == 0x13)) || (param_1 == 0x1b)) {
      return 1;
    }
  }
  return 0;
}

// 00493110 FUN_00493110
#line 4 "decomp/ST.exe/functions/00493110/decomp.c"
void __thiscall st::fn_00493110(void *this,AnonShape_00493110_B173055C *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  iVar2 = st::fn_006E62D0
                    (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)param_1,(int *)&param_1);
  if (iVar2 != -4) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar3 = (**(code **)(*(int *)param_1 + 0x2c))();
    iVar2 = STField<int>(this,0x6f7);
    if (((iVar2 == 7) || (iVar2 == 0x13)) || (iVar2 == 0x1b)) {
      if ((STField<int>(this,0x7ca) == 0) &&
         (((iVar3 == 0xfd || (iVar3 == 0xfe)) ||
          ((((0 < iVar3 && ((iVar3 < 0x29 && (iVar3 != 7)))) && (iVar3 != 0x13)) && (iVar3 != 0x1b))
          )))) {
        STField<undefined4>(this,0x7ca) = param_1->field_0018;
        st::fn_006EA3E0
                  (STField<void *>(this,0x211),STField<uint>(this,0x1ed),param_1->field_01ED);
      }
    }
    else if (((iVar3 == 7) || (iVar3 == 0x13)) || (iVar3 == 0x1b)) {
      STField<undefined2>(this,0x5a0) = STField<undefined2>(this,0x30);
      STField<undefined4>(this,0x45d) = 0x14;
      STField<undefined4>(this,0x7c2) = 1;
      uVar1 = param_1->field_0018;
      STField<undefined4>(this,0x5a6) = 0;
      STField<undefined4>(this,0x76) = 0;
      STField<undefined4>(this,0x5a2) = uVar1;
      STField<undefined4>(this,0x5c4) = 7;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*(int *)this + 0xb4))();
      return;
    }
  }
  return;
}

// 00493250 FUN_00493250
#line 4 "decomp/ST.exe/functions/00493250/decomp.c"
uint __fastcall st::fn_00493250(int param_1)

{
  int iVar1;
  uint uVar2;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)(param_1 + 0x45d);
  uVar2 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((iVar1 == 0x14) && (*(int *)(param_1 + 0x5c0) == 3)) {
    uVar2 = 1;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x7ca) != 0) {
    uVar2 = uVar2 | 2;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((iVar1 == 4) && (*(int *)(param_1 + 0x580) == 5)) {
    uVar2 = uVar2 | 4;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (0 < *(int *)(param_1 + 0x73a)) {
    uVar2 = uVar2 | 8;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((iVar1 == 9) && (*(int *)(param_1 + 0x611) == 3)) {
    uVar2 = uVar2 | 0x10;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (((iVar1 == 0xc) && ((*(int *)(param_1 + 0x4d5) == 5 || (*(int *)(param_1 + 0x4d5) == 0xc))))
     || ((iVar1 == 0xd && (*(int *)(param_1 + 0x54c) == 5)))) {
    uVar2 = uVar2 | 0x20;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (0 < *(int *)(param_1 + 0x73a)) {
    uVar2 = uVar2 | 8;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)(param_1 + 0x6f7);
  if (iVar1 != 0x16) {
    if (iVar1 == 0x23) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)(param_1 + 0x72e) != 1) {
        return uVar2;
      }
      return uVar2 | 0x80;
    }
    if (iVar1 != 0x25) {
      return uVar2;
    }
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x732) == 1) {
    uVar2 = uVar2 | 0x80;
  }
  return uVar2;
}

// 004934B0 FUN_004934b0
#line 4 "decomp/ST.exe/functions/004934B0/decomp.c"
undefined4 __thiscall
st::fn_004934B0(void *this,short *param_1,short *param_2,short *param_3,int *param_4)

{
  DArrayTy *array;
  dword dVar1;
  int iVar3;
  int iVar2;
  undefined4 uVar4;
  int iVar5;
  uint local_14;
  STFishC *local_10;
  short local_a;
  short local_8;
  short local_6;

  uVar4 = 0;
  iVar5 = 1000000;
  array = g_packedRecords_A62x8[STField<int>(this,0x24)].field1969_0x9da;
  *param_3 = -1;
  *param_2 = -1;
  *param_1 = -1;
  if (array != nullptr) {
    dVar1 = array->count;
    local_14 = 0;
    if (0 < (int)dVar1) {
      do {
        st::fn_006ACC70(array,local_14,&local_10);
        if ((local_10 != nullptr) &&
           (iVar3 = local_10->vfunc_F8(), iVar3 == 1)) {
          st::fn_004018C5(local_10,&local_6,&local_8,&local_a);
          iVar2 = st::fn_006AADD0((int)STField<short>(this,0x47),(int)STField<short>(this,0x49),
                               (int)STField<short>(this,0x4b),(int)local_6,(int)local_8,
                               (int)local_a);
          if (iVar2 < iVar5) {
            *param_1 = local_6;
            uVar4 = 1;
            *param_2 = local_8;
            *param_3 = local_a;
            *param_4 = local_10->field_0018;
            iVar5 = iVar2;
          }
        }
        local_14 = local_14 + 1;
      } while ((int)local_14 < (int)dVar1);
    }
  }
  return uVar4;
}

// 00493BC0 FUN_00493bc0
#line 4 "decomp/ST.exe/functions/00493BC0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0047BF70 -> 00493BC0 @ 0047BFA4; STBoatC::BackTeleport this; stable alias ESI

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __fastcall st::fn_00493BC0(STBoatC *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STWorldObject *this;
  int iVar4;

  if ((param_1->field_045D == CASE_15) || (param_1->field_0459 == CASE_79)) {
    sVar1 = param_1->field_0639;
    sVar2 = param_1->field_063D;
    sVar3 = param_1->field_063B;
    if (((-1 < sVar1) &&
        (((sVar1 < g_worldGrid.sizeX && (-1 < sVar3)) && (sVar3 < g_worldGrid.sizeY)))) &&
       ((-1 < sVar2 && (sVar2 < g_worldGrid.sizeZ)))) {
      this = STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0];
      if ((this != nullptr) && (*(int *)&this->field_0x18 == param_1->field_063F)) {
        iVar4 = (*this->vtable[5].slots_00_28[2])();
        if (iVar4 != 0) {
          st::fn_00404971(this,param_1);
        }
      }
    }
  }
  return;
}

// 00493CA0 FUN_00493ca0
#line 4 "decomp/ST.exe/functions/00493CA0/decomp.c"
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* [STPrototypeApplier] Propagated return.
   Evidence: 00493CA0 returns return of FUN_004e8030 @ 00493CB2
   [STAbiConsistencyApplier] unknown_convention_return_revert target=return:-1: return=/undefined1
   Evidence: automation-owned propagated return is deferred until the wrapper calling convention and
   live-in parameter storage are recovered */

void st::fn_00493CA0(void)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int in_ECX;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  st::fn_00401F5A(*(int *)(in_ECX + 0x6f7));
  return;
}

// 00493CD0 FUN_00493cd0
#line 4 "decomp/ST.exe/functions/00493CD0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0042D770 -> 00493CD0 @ 0042D80F | 0043BEB0 -> 00493CD0 @ 0043C1CB */

undefined4 __fastcall st::fn_00493CD0(STGameObjC *objPtr)

{
  if (((((*(byte *)&objPtr->field_01D1 & 4) == 0) && (objPtr->field_0736 == 0)) &&
      (objPtr->field_073A == 0)) && (objPtr->field_05C0 != 3)) {
    return 0;
  }
  return 1;
}

// 00493D10 FUN_00493d10
#line 4 "decomp/ST.exe/functions/00493D10/decomp.c"
void __fastcall st::fn_00493D10(int *param_1)

{
  switch(STField<undefined4>(param_1,0x6f7)) {
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  case 1:
    (**(code **)(*param_1 + 0x90))(4,0xca);
    return;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  case 2:
    (**(code **)(*param_1 + 0x90))(4,0xd0);
    return;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  case 3:
    (**(code **)(*param_1 + 0x90))(4,0xd6);
    return;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  case 4:
    (**(code **)(*param_1 + 0x90))(4,0xdc);
    return;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  case 5:
    (**(code **)(*param_1 + 0x90))(4,0xe2);
    return;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  case 6:
    (**(code **)(*param_1 + 0x90))(4,0xe9);
    return;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  case 7:
    (**(code **)(*param_1 + 0x90))(4,0xf0);
    return;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  case 8:
    (**(code **)(*param_1 + 0x90))(4,0xf7);
    return;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  case 9:
    (**(code **)(*param_1 + 0x90))(4,0xff);
    return;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  case 10:
    (**(code **)(*param_1 + 0x90))(4,0x104);
    return;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  case 0xb:
    (**(code **)(*param_1 + 0x90))(4,0x10a);
    return;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  case 0xc:
    (**(code **)(*param_1 + 0x90))(4,0x110);
    return;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  case 0xd:
    (**(code **)(*param_1 + 0x90))(4,0x12e);
    return;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  case 0xe:
    (**(code **)(*param_1 + 0x90))(4,0x134);
    return;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  case 0xf:
    (**(code **)(*param_1 + 0x90))(4,0x13a);
    return;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  case 0x10:
    (**(code **)(*param_1 + 0x90))(4,0x140);
    return;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  case 0x11:
    (**(code **)(*param_1 + 0x90))(4,0x146);
    return;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  case 0x12:
    (**(code **)(*param_1 + 0x90))(4,0x14d);
    return;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  case 0x13:
    (**(code **)(*param_1 + 0x90))(4,0x154);
    return;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  case 0x14:
    (**(code **)(*param_1 + 0x90))(4,0x15b);
    return;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  case 0x15:
    (**(code **)(*param_1 + 0x90))(4,0x163);
    return;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  case 0x16:
    (**(code **)(*param_1 + 0x90))(4,0x168);
    return;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  case 0x17:
    (**(code **)(*param_1 + 0x90))(4,0x170);
    return;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  case 0x18:
    (**(code **)(*param_1 + 0x90))(4,0x176);
    return;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  case 0x19:
    (**(code **)(*param_1 + 0x90))(4,0x192);
    return;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  case 0x1a:
    (**(code **)(*param_1 + 0x90))(4,0x19a);
    return;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  case 0x1b:
    (**(code **)(*param_1 + 0x90))(4,0x1a2);
    return;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  case 0x1c:
    (**(code **)(*param_1 + 0x90))(4,0x1a8);
    return;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  case 0x1d:
    (**(code **)(*param_1 + 0x90))(4,0x1ae);
    return;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  case 0x1e:
    (**(code **)(*param_1 + 0x90))(4,0x1b5);
    return;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  case 0x1f:
    (**(code **)(*param_1 + 0x90))(4,0x1bb);
    return;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  case 0x20:
    (**(code **)(*param_1 + 0x90))(4,0x1c1);
    return;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  case 0x21:
    (**(code **)(*param_1 + 0x90))(4,0x1c7);
    return;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  case 0x22:
    (**(code **)(*param_1 + 0x90))(4,0x1ce);
    return;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  case 0x23:
    (**(code **)(*param_1 + 0x90))(4,0x1d5);
    return;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  case 0x24:
    (**(code **)(*param_1 + 0x90))(4,0x1db);
    return;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  case 0x25:
    (**(code **)(*param_1 + 0x90))(4,0x17c);
    return;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  case 0x26:
    (**(code **)(*param_1 + 0x90))(4,0x116);
    return;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  case 0x27:
    (**(code **)(*param_1 + 0x90))(4,0x182);
    return;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  case 0x28:
    (**(code **)(*param_1 + 0x90))(4,0x1e1);
    return;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  default:
    (**(code **)(*param_1 + 0x90))(4,0);
    return;
  }
}

// 00494160 FUN_00494160
#line 4 "decomp/ST.exe/functions/00494160/decomp.c"
void __thiscall st::fn_00494160(void *this,int param_1)

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
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      if (param_1 == 1) {
        if (STField<int>(this,0x722) < 1) {
          return;
        }
        STField<undefined4>(this,0x72e) = 1;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*(int *)this + 0x90))(3,0x16c);
        return;
      }
      STField<undefined4>(this,0x72e) = 0;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*(int *)this + 0x90))(3,0x16d);
      return;
    }
    if (iVar5 != 0x25) {
      return;
    }
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_1 == STField<int>(this,0x732)) {
    return;
  }
  if (param_1 != 1) {
    STField<undefined4>(this,0x732) = 0;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)this + 0x90))(3,0x16d);
    return;
  }
  if (STField<int>(this,0x726) < 1) {
    return;
  }
  STField<undefined4>(this,0x732) = 1;
  memset((void *)((int)this + 0x74e), 0, 0x20); /* compiler bulk-zero initialization */
  st::fn_00403314(st::pointer_boundary_cast<AnonShape_004945C0_2B3B394D *>(this));
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
      st::fn_00401BAE(pSVar1,'\x0e');
      st::fn_00401BAE(pSVar1,'\r');
      st::fn_00401BAE(pSVar1,'\f');
      st::fn_00403FDA(pSVar1,'\x01');
      st::fn_00403FDA(pSVar1,'\x02');
      st::fn_00403FDA(pSVar1,'\0');
      st::fn_00403FDA(pSVar1,'\x0f');
      st::fn_00403FDA(pSVar1,'\v');
      st::fn_00403FDA(pSVar1,'\n');
      st::fn_00403FDA(pSVar1,'\t');
      st::fn_00403FDA(pSVar1,'\b');
      STField<undefined4>(this,0x746) = 0;
      goto LAB_00494498;
    }
  }
  pSVar1 = (STT3DSprC *)((int)this + 0x1d5);
  st::fn_00401BAE(pSVar1,'\x0e');
  st::fn_00401BAE(pSVar1,'\r');
  st::fn_00401BAE(pSVar1,'\f');
  st::fn_00401BAE(pSVar1,'\x01');
  st::fn_00401BAE(pSVar1,'\x02');
  st::fn_00401BAE(pSVar1,'\0');
  st::fn_00401BAE(pSVar1,'\x0f');
  st::fn_00401BAE(pSVar1,'\v');
  st::fn_00401BAE(pSVar1,'\n');
  st::fn_00401BAE(pSVar1,'\t');
  st::fn_00401BAE(pSVar1,'\b');
  STField<undefined4>(this,0x746) = 1;
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
LAB_00494498:
  (**(code **)(*(int *)this + 0x90))(3,0x16c);
  return;
}

// 004945C0 FUN_004945c0
#line 4 "decomp/ST.exe/functions/004945C0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __fastcall st::fn_004945C0(AnonShape_004945C0_2B3B394D *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX;
  byte bVar5;
  int *piVar6;
  bool bVar7;
  byte *local_18;
  uint local_c;

  local_c = 0;
  local_18 = &g_bulkInitializedRecords_008087C7[0].field_0022;
  piVar6 = (int *)&param_1[0x23].field_0032;
  do {
    if ((g_playSystem_00802A38 == nullptr) || (*local_18 < 8)) {
      bVar1 = param_1->field_0024;
      bVar5 = (byte)local_c;
      if (DAT_00808a8f == '\0') {
        if (bVar5 == bVar1) {
LAB_004946a9:
          iVar3 = 0;
        }
        else {
          uVar4 = local_c & 0xff;
          bVar2 = g_playerRelationMatrix[uVar4][bVar1];
          if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar4] == 0)) {
            iVar3 = -2;
          }
          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][uVar4] == 0)) {
            iVar3 = -1;
          }
          else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar4] == 1)) {
            iVar3 = 1;
          }
          else {
            if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][uVar4] != 1)) goto LAB_004946a9;
            iVar3 = 2;
          }
        }
        bVar7 = iVar3 < 0;
      }
      else {
        bVar7 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                g_bulkInitializedRecords_008087C7[local_c & 0xff].field_0023;
      }
      if (!bVar7) {
        if (DAT_00808a8f == '\0') {
          if (bVar1 == bVar5) {
LAB_00494766:
            iVar3 = 0;
          }
          else {
            uVar4 = local_c & 0xff;
            bVar2 = g_playerRelationMatrix[bVar1][uVar4];
            if ((bVar2 == 0) && (g_playerRelationMatrix[uVar4][bVar1] == 0)) {
              iVar3 = -2;
            }
            else if ((bVar2 == 1) && (g_playerRelationMatrix[uVar4][bVar1] == 0)) {
              iVar3 = -1;
            }
            else if ((bVar2 == 0) && (g_playerRelationMatrix[uVar4][bVar1] == 1)) {
              iVar3 = 1;
            }
            else {
              if ((bVar2 != 1) || (g_playerRelationMatrix[uVar4][bVar1] != 1)) goto LAB_00494766;
              iVar3 = 2;
            }
          }
          bVar7 = iVar3 < 0;
        }
        else {
          bVar7 = g_bulkInitializedRecords_008087C7[local_c & 0xff].field_0023 !=
                  g_bulkInitializedRecords_008087C7[bVar1].field_0023;
        }
        if (!bVar7) {
          *piVar6 = 0;
          goto LAB_004947b1;
        }
      }
      iVar3 = st::fn_00405AE7(param_1,local_c);
      if (iVar3 == 1) {
        *piVar6 = 0;
      }
      else if (*piVar6 == 0) {
        /* ST_PSEUDO[return_width_artifact,call_clobber_piece]: candidate call-output artifact: verify return width, clobbers, or x87 state; candidate volatile-register merge after CALL: split the partial-register lifetime */
        st::fn_00402243(bVar5,STReplaceLowByte((uint32_t)(extraout_EDX), (uint8_t)(param_1->field_0024)),
                           CONCAT22(extraout_var,param_1->field_0032));
        *piVar6 = 1;
      }
    }
LAB_004947b1:
    local_18 = local_18 + 0x51;
    local_c = local_c + 1;
    piVar6 = piVar6 + 1;
    if (0x808a70 < (int)local_18) {
      return;
    }
  } while( true );
}

// 00494870 FUN_00494870
#line 4 "decomp/ST.exe/functions/00494870/decomp.c"
bool __thiscall st::fn_00494870(void *this,uint param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;

  uVar3 = 1;
  if (((STField<int>(this,0x732) != 1) || (7 < param_1)) ||
     ((g_playSystem_00802A38 != nullptr &&
      (7 < g_bulkInitializedRecords_008087C7[param_1].field_0022)))) goto cf_common_exit_00494A35;
  bVar1 = STField<byte>(this,0x24);
  if (DAT_00808a8f == '\0') {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if ((byte)param_1 == bVar1) {
LAB_0049495d:
      iVar4 = 0;
    }
    else {
      uVar5 = param_1 & 0xff;
      bVar2 = g_playerRelationMatrix[uVar5][bVar1];
      if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar5] == 0)) {
        iVar4 = -2;
      }
      else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][uVar5] == 0)) {
        iVar4 = -1;
      }
      else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar5] == 1)) {
        iVar4 = 1;
      }
      else {
        if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][uVar5] != 1)) goto LAB_0049495d;
        iVar4 = 2;
      }
    }
    bVar6 = iVar4 < 0;
  }
  else {
    bVar6 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
            g_bulkInitializedRecords_008087C7[param_1 & 0xff].field_0023;
  }
  if (!bVar6) {
    if (DAT_00808a8f == '\0') {
      if (bVar1 == (byte)param_1) {
LAB_00494a19:
        iVar4 = 0;
      }
      else {
        uVar5 = param_1 & 0xff;
        bVar2 = g_playerRelationMatrix[bVar1][uVar5];
        if ((bVar2 == 0) && (g_playerRelationMatrix[uVar5][bVar1] == 0)) {
          iVar4 = -2;
        }
        else if ((bVar2 == 1) && (g_playerRelationMatrix[uVar5][bVar1] == 0)) {
          iVar4 = -1;
        }
        else if ((bVar2 == 0) && (g_playerRelationMatrix[uVar5][bVar1] == 1)) {
          iVar4 = 1;
        }
        else {
          if ((bVar2 != 1) || (g_playerRelationMatrix[uVar5][bVar1] != 1)) goto LAB_00494a19;
          iVar4 = 2;
        }
      }
      bVar6 = iVar4 < 0;
    }
    else {
      bVar6 = g_bulkInitializedRecords_008087C7[param_1 & 0xff].field_0023 !=
              g_bulkInitializedRecords_008087C7[bVar1].field_0023;
    }
    if (!bVar6) {
      uVar3 = 0;
      goto cf_common_exit_00494A35;
    }
  }
  iVar4 = st::fn_00405AE7(this,param_1);
  uVar3 = (undefined1)iVar4;
cf_common_exit_00494A35:
  if ((STField<int>(this,0x45d) == 0x14) && (STField<int>(this,0x5c0) == 3)) {
    uVar3 = 0;
  }
  return (bool)uVar3;
}

// 00494AE0 FUN_00494ae0
#line 4 "decomp/ST.exe/functions/00494AE0/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 004E51B0 -> 00494AE0 @ 004E575B

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __fastcall st::fn_00494AE0(AnonShape_00494AE0_7F188308 *param_1)

{
  int iVar1;

  iVar1 = param_1->field_06F7;
  if (((iVar1 != 5) && (iVar1 != 0x11)) && (iVar1 != 0x21)) {
    return;
  }
  iVar1 = st::fn_0040186B(*(int *)&param_1->field_0x24,0x3c);
  if (((iVar1 < 1) && (iVar1 = st::fn_0040186B(*(int *)&param_1->field_0x24,0x91), iVar1 < 1)) &&
     (iVar1 = st::fn_0040186B(*(int *)&param_1->field_0x24,0x4c), iVar1 < 1)) {
    if (((param_1->field_0792 == 1) &&
        (((param_1->field_0792 = 0, param_1->field_045D != 0x14 ||
          (*(int *)&param_1->field_0x5c0 != 3)) && ((param_1->field_01D1 & 1) == 0)))) &&
       (param_1->field_078A = 0, g_visibleClass_00802A88 != nullptr)) {
      st::fn_004012A3
                (g_visibleClass_00802A88,(int)param_1->field_005B,(int)param_1->field_005D,
                 (char)param_1->field_005F,*(uint *)&param_1->field_0x24,param_1->field_0101,
                 *(int *)&param_1->field_0x18);
    }
  }
  else if ((((param_1->field_0792 == 0) &&
            ((param_1->field_0792 = 1, param_1->field_045D != 0x14 ||
             (*(int *)&param_1->field_0x5c0 != 3)))) && ((param_1->field_01D1 & 1) == 0)) &&
          (param_1->field_078A = 1, g_visibleClass_00802A88 != nullptr)) {
    st::fn_0040205E
              (g_visibleClass_00802A88,(int)param_1->field_005B,(int)param_1->field_005D,
               (char)param_1->field_005F,*(uint *)&param_1->field_0x24,param_1->field_0101,
               *(uint *)&param_1->field_0x18,0xffffffff);
  }
  iVar1 = st::fn_0040186B(*(int *)&param_1->field_0x24,0x9a);
  if (((0 < iVar1) || (iVar1 = st::fn_0040186B(*(int *)&param_1->field_0x24,0x41), 0 < iVar1)) ||
     (iVar1 = st::fn_0040186B(*(int *)&param_1->field_0x24,0x4b), 0 < iVar1)) {
    if ((param_1->field_0796 == 0) &&
       ((((param_1->field_0796 = 1, param_1->field_045D != 0x14 ||
          (*(int *)&param_1->field_0x5c0 != 3)) && ((param_1->field_01D1 & 1) == 0)) &&
        (param_1->field_078E = 1, g_visibleClass_00802A88 != nullptr)))) {
      st::fn_00401848
                (g_visibleClass_00802A88,(int)param_1->field_005B,(int)param_1->field_005D,
                 (char)param_1->field_005F,*(uint *)&param_1->field_0x24,param_1->field_0101,
                 *(uint *)&param_1->field_0x18,0xffffffff);
    }
    return;
  }
  if (param_1->field_0796 != 1) {
    return;
  }
  param_1->field_0796 = 0;
  if ((param_1->field_045D == 0x14) && (*(int *)&param_1->field_0x5c0 == 3)) {
    return;
  }
  if ((param_1->field_01D1 & 1) != 0) {
    return;
  }
  param_1->field_078E = 0;
  if (g_visibleClass_00802A88 == nullptr) {
    return;
  }
  st::fn_00405C86
            (g_visibleClass_00802A88,(int)param_1->field_005B,(int)param_1->field_005D,
             (char)param_1->field_005F,*(uint *)&param_1->field_0x24,param_1->field_0101,
             *(int *)&param_1->field_0x18);
  return;
}

// 00494DF0 FUN_00494df0
#line 4 "decomp/ST.exe/functions/00494DF0/decomp.c"
void __fastcall st::fn_00494DF0(AnonShape_00494DF0_56294F0B *param_1)

{
  int iVar1;

  iVar1 = param_1->field_06F7;
  if (((iVar1 == 5) || (iVar1 == 0x11)) || (iVar1 == 0x21)) {
    if (((param_1->field_0792 == 1) && (param_1->field_078A == 0)) &&
       ((param_1->field_01D1 & 1) == 0)) {
      param_1->field_078A = 1;
      if (g_visibleClass_00802A88 != nullptr) {
        st::fn_0040205E
                  (g_visibleClass_00802A88,(int)param_1->field_005B,(int)param_1->field_005D,
                   (char)param_1->field_005F,param_1->field_0024,param_1->field_0101,
                   param_1->field_0018,0xffffffff);
      }
    }
    if (((param_1->field_0796 == 1) && (param_1->field_078E == 0)) &&
       ((param_1->field_01D1 & 1) == 0)) {
      param_1->field_078E = 1;
      if (g_visibleClass_00802A88 != nullptr) {
        st::fn_00401848
                  (g_visibleClass_00802A88,(int)param_1->field_005B,(int)param_1->field_005D,
                   (char)param_1->field_005F,param_1->field_0024,param_1->field_0101,
                   param_1->field_0018,0xffffffff);
      }
    }
  }
  return;
}

// 00494F00 FUN_00494f00
#line 4 "decomp/ST.exe/functions/00494F00/decomp.c"
void __fastcall st::fn_00494F00(AnonShape_00494F00_45028F21 *param_1)

{
  int iVar1;

  iVar1 = param_1->field_06F7;
  if (((iVar1 == 5) || (iVar1 == 0x11)) || (iVar1 == 0x21)) {
    if (((param_1->field_0792 == 1) && (param_1->field_078A == 1)) &&
       ((param_1->field_01D1 & 1) == 0)) {
      param_1->field_078A = 0;
      if (g_visibleClass_00802A88 != nullptr) {
        st::fn_004012A3
                  (g_visibleClass_00802A88,(int)param_1->field_005B,(int)param_1->field_005D,
                   (char)param_1->field_005F,param_1->field_0024,(int)param_1->field_0101,
                   param_1->field_0018);
      }
    }
    if (((param_1->field_0796 == 1) && (param_1->field_078E == 1)) &&
       ((param_1->field_01D1 & 1) == 0)) {
      param_1->field_078E = 0;
      if (g_visibleClass_00802A88 != nullptr) {
        st::fn_00405C86
                  (g_visibleClass_00802A88,(int)param_1->field_005B,(int)param_1->field_005D,
                   (char)param_1->field_005F,param_1->field_0024,(int)param_1->field_0101,
                   param_1->field_0018);
      }
    }
  }
  return;
}

// 00495010 FUN_00495010
#line 4 "decomp/ST.exe/functions/00495010/decomp.c"
void __thiscall st::fn_00495010(void *this,undefined4 param_1)

{
  int iVar1;
  uint local_8;

  if (STField<int>(this,0x73a) == 0) {
    iVar1 = STField<int>(this,0x45d);
    if (iVar1 == 3) {
      STField<undefined4>(this,0x73a) = param_1;
      return;
    }
    if (iVar1 != 0x14) {
      if (iVar1 == 0xb) goto LAB_00495071;
      local_8 = g_playSystem_00802A38->field_00E4;
      st::fn_00402126(st::pointer_boundary_cast<STBoatC *>(this),CASE_3,&local_8);
    }
    STField<undefined4>(this,0x73a) = param_1;
    return;
  }
LAB_00495071:
  STField<undefined4>(this,0x73a) = param_1;
  return;
}

// 004950B0 FUN_004950b0
#line 4 "decomp/ST.exe/functions/004950B0/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (3), none consume AL/AX, and every RET path defines full EAX; sites=0047C050 @ 0047C197
   -> CMP CMP EAX,0x1 | 0047C050 @ 0047C3E8 -> CMP CMP EAX,0x1 | 0047C050 @ 0047C5C3 -> CMP CMP
   EAX,0x1 */

int __thiscall st::fn_004950B0(void *this,short *param_1,short *param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar5;
  int iVar4;
  short sVar6;
  short sVar7;
  int iVar8;
  int local_c;
  int local_8;

  local_c = 1000000;
  local_8 = 0;
  do {
    iVar8 = 0;
    do {
      iVar5 = STField<short>(this,0x66f) + local_8;
      sVar7 = (short)iVar8;
      sVar2 = (short)local_8;
      if (((iVar5 == STField<short>(this,0x5b)) &&
          (STField<short>(this,0x671) + iVar8 == (int)STField<short>(this,0x5d))) &&
         (STField<short>(this,0x673) + 1 == (int)STField<short>(this,0x5f))) {
        *param_1 = STField<short>(this,0x66f) + sVar2;
        *param_2 = STField<short>(this,0x671) + sVar7;
        *param_3 = STField<short>(this,0x673) + 1;
        return 1;
      }
      sVar1 = STField<short>(this,0x673) + 1;
      sVar6 = sVar7 + STField<short>(this,0x671);
      sVar3 = sVar2 + STField<short>(this,0x66f);
      if (((((sVar3 < 0) || (g_worldGrid.sizeX <= sVar3)) ||
           ((sVar6 < 0 || ((g_worldGrid.sizeY <= sVar6 || (sVar1 < 0)))))) ||
          (g_worldGrid.sizeZ <= sVar1)) ||
         (STGridAt3D(g_worldGrid, sVar3, sVar6, sVar1).objects[0] == nullptr)) {
        iVar4 = st::fn_006AADD0((int)STField<short>(this,0x47),(int)STField<short>(this,0x49),
                             (int)STField<short>(this,0x4b),iVar5,
                             STField<short>(this,0x671) + iVar8,STField<short>(this,0x673) + 1
                            );
        if (iVar4 < local_c) {
          *param_1 = STField<short>(this,0x66f) + sVar2;
          *param_2 = sVar7 + STField<short>(this,0x671);
          *param_3 = STField<short>(this,0x673) + 1;
          local_c = iVar4;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 2);
    local_8 = local_8 + 1;
    if (1 < local_8) {
      return (uint)(local_c != 1000000);
    }
  } while( true );
}

// 00495420 FUN_00495420
#line 4 "decomp/ST.exe/functions/00495420/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (3), none consume AL/AX, and every RET path defines full EAX; sites=0047DF00 @ 0047E05A
   -> CMP CMP EAX,0x1 | 0047DF00 @ 0047E298 -> CMP CMP EAX,0x1 | 0047DF00 @ 0047E4D5 -> CMP CMP
   EAX,0x1 */

int __thiscall st::fn_00495420(void *this,short *param_1,short *param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  int local_c;
  int local_8;

  local_c = 1000000;
  if (STField<int>(this,0x6b9) != 1) {
    sVar5 = STField<short>(this,0x6a9);
    sVar1 = STField<short>(this,0x6ab);
    sVar3 = STField<short>(this,0x6ad) + 1;
    if ((((-1 < sVar5) && (sVar5 < g_worldGrid.sizeX)) && (-1 < sVar1)) &&
       (((sVar1 < g_worldGrid.sizeY && (-1 < sVar3)) &&
        ((sVar3 < g_worldGrid.sizeZ &&
         ((STGridAt3D(g_worldGrid, sVar5, sVar1, sVar3).objects[0] != nullptr &&
          (STGridAt3D(g_worldGrid, sVar5, sVar1, sVar3).objects[0] != this)))))))) {
      return 0;
    }
    *param_1 = sVar5;
    sVar5 = STField<short>(this,0x6ab);
LAB_00495607:
    *param_2 = sVar5;
    *param_3 = STField<short>(this,0x6ad) + 1;
    return 1;
  }
  local_8 = 0;
  do {
    iVar7 = 0;
    do {
      sVar1 = STField<short>(this,0x6ad) + 1;
      sVar5 = (short)iVar7;
      sVar6 = sVar5 + STField<short>(this,0x6ab);
      sVar3 = (short)local_8;
      sVar2 = STField<short>(this,0x6a9) + sVar3;
      if (((((sVar2 < 0) || (g_worldGrid.sizeX <= sVar2)) || (sVar6 < 0)) ||
          ((g_worldGrid.sizeY <= sVar6 || (sVar1 < 0)))) ||
         ((g_worldGrid.sizeZ <= sVar1 ||
          (STGridAt3D(g_worldGrid, sVar2, sVar6, sVar1).objects[0] == nullptr)))) {
        iVar4 = st::fn_006AADD0((int)STField<short>(this,0x47),(int)STField<short>(this,0x49),
                             (int)STField<short>(this,0x4b),
                             STField<short>(this,0x6a9) + local_8,
                             STField<short>(this,0x6ab) + iVar7,STField<short>(this,0x6ad) + 1
                            );
        if (iVar4 < local_c) {
          *param_1 = STField<short>(this,0x6a9) + sVar3;
          *param_2 = STField<short>(this,0x6ab) + sVar5;
          *param_3 = STField<short>(this,0x6ad) + 1;
          local_c = iVar4;
        }
      }
      else if (STGridAt3D(g_worldGrid, sVar2, sVar6, sVar1).objects[0] == this) {
        *param_1 = STField<short>(this,0x6a9) + sVar3;
        sVar5 = STField<short>(this,0x6ab) + sVar5;
        goto LAB_00495607;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 2);
    local_8 = local_8 + 1;
    if (1 < local_8) {
      return (uint)(local_c != 1000000);
    }
  } while( true );
}

// 004956C0 FUN_004956c0
#line 4 "decomp/ST.exe/functions/004956C0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_004956C0(void *this,undefined4 param_1)

{
  if (STField<int>(this,0x6f7) == 0x17) {
    STField<undefined4>(this,0x7e2) = param_1;
  }
  return;
}

// 004956F0 FUN_004956f0
#line 4 "decomp/ST.exe/functions/004956F0/decomp.c"
undefined4 * __fastcall st::fn_004956F0(undefined4 *param_1)

{
  st::fn_006E60E0(param_1);
  *param_1 = st::machine_word_boundary_cast<undefined4>(&st_global_00790708);
  return param_1;
}

// 00495720 FUN_00495720
#line 4 "decomp/ST.exe/functions/00495720/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA76C>0040217B

   [STObjectFactoryApplier] Central object factory for 0x8100 (ST_OBJECT_TYPE_8100).
   Evidence: registry[9] at 007CA768 stores type 0x8100 and executable pointer 0040217B; allocation
   size 44 has no unique current class-layout match */

void * __cdecl st::fn_00495720(void)

{
  undefined4 *puVar1;

  puVar1 = st::fn_006B04D0(0x2c);
  if (puVar1 != nullptr) {
    _DAT_007fb224 = st::fn_00401AA0(puVar1);
    return _DAT_007fb224;
  }
  _DAT_007fb224 = nullptr;
  return nullptr;
}

// 00495750 FUN_00495750
#line 4 "decomp/ST.exe/functions/00495750/decomp.c"
undefined4 __thiscall st::fn_00495750(void *this,float param_1)

{
  float fVar1;
  uint uVar2;
  DWORD DVar3;
  undefined4 uVar4;
  longlong lVar5;
  CHAR local_6c [100];
  float local_8;

  fVar1 = param_1;
  st::fn_006E5FD0(this,(STMessage *)param_1);
  uVar2 = STField<uint>(fVar1,0x10);
  if (uVar2 < 0x61) {
    if (uVar2 == 0x60) {
      STField<uint>(this,0x1c) = (uint)STField<ushort>(fVar1,0x18);
      STField<uint>(this,0x20) = (uint)STField<ushort>(fVar1,0x1a);
      return 0;
    }
    switch(uVar2) {
    case 2:
      uVar2 = st::fn_006E4D40(STField<void *>(this,0x10),STField<int>(this,0xc));
      if (uVar2 == 1) {
        DVar3 = st::external_000000DA();
        STField<DWORD>(this,0x24) = DVar3;
        return 0;
      }
      break;
    case 3:
      st::fn_006E4D40(STField<void *>(this,0x10),STField<int>(this,0xc));
      return 0;
    }
  }
  else if ((uVar2 != 0x61) && (uVar2 == 0x8102)) {
    st::fn_006E1C20
              (g_sT3DSMAPContext_00807598,STField<float>(this,0x1c),STField<int>(this,0x20),
               0.0,&local_8,&param_1);
    lVar5 = st::fn_0072E288();
    uVar4 = (undefined4)lVar5;
    lVar5 = st::fn_0072E288();
    st::external_00000080(local_6c,st::mutable_c_string("\n X = %d\n Y = %d\n Xc = %d\n Yc = %d"),STField<undefined4>(this,0x1c),
              STField<undefined4>(this,0x20),(int)lVar5,uVar4);
    st::external_00000081(g_hWnd_00806748,local_6c,st::pointer_boundary_cast<LPCSTR>("Coordinates of Mouse"),0x40);
  }
  return 0;
}

// 00495950 FUN_00495950
#line 4 "decomp/ST.exe/functions/00495950/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA784>0040374C

   [STObjectFactoryApplier] Central object factory for 0x0102 (ST_OBJECT_TYPE_0102).
   Evidence: registry[12] at 007CA780 stores type 0x0102 and executable pointer 0040374C; allocation
   size 24 has no unique current class-layout match */

void * __cdecl st::fn_00495950(void)

{
  DumpClassC *this;

  this = (DumpClassC *)st::fn_006B04D0(0x18);
  if (this != nullptr) {
    g_dumpClass_007FB284 = st::fn_00405BAA(this);
    return g_dumpClass_007FB284;
  }
  g_dumpClass_007FB284 = nullptr;
  return nullptr;
}

// 00495E50 FUN_00495e50
#line 4 "decomp/ST.exe/functions/00495E50/decomp.c"
void st::fn_00495E50(void)

{
  short *psVar1;

  if ((((char)DAT_008087a0 == '\x06') || ((char)DAT_008087a0 == '\a')) ||
     ((char)DAT_008087a0 == '\x0e')) {
    psVar1 = (short *)0x1;
  }
  else {
    psVar1 = nullptr;
  }
  st::fn_00401C8A(PTR_00806750,(undefined4 *)g_pathingGrid.cells,psVar1);
  return;
}

// 00495EA0 FUN_00495ea0
#line 1 "decomp/ST.exe/functions/00495EA0/decomp.c"

/* [STReturnSemanticsApplier] leaf_void.
   Evidence: leaf function has RET and never writes EAX/AX/AL/AH */

void st::fn_00495EA0(void)

{
  return;
}

// 00495FF0 FUN_00495ff0
#line 4 "decomp/ST.exe/functions/00495FF0/decomp.c"
/* [STAbiConsistencyApplier] stack_parameter_width target=parameter:3: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=0049604C MOV EDX,dword ptr [EBP + 0x14];
   first-use mask */

undefined4
st::fn_00495FF0(short param_1,short param_2,short param_3,byte param_4,
            AnonShape_00495FF0_59081BDD *param_5)

{
  int iVar1;

  iVar1 = (int)g_worldGrid.sizeX * (int)param_2 + (int)g_worldGrid.planeStride * (int)param_3 +
          (int)param_1;
  if ((((-1 < param_1) && (param_1 < g_worldGrid.sizeX)) && (-1 < param_2)) &&
     (((param_2 < g_worldGrid.sizeY && (-1 < param_3)) && (param_3 < g_worldGrid.sizeZ)))) {
    if ((AnonShape_00495FF0_59081BDD *)g_worldGrid.cells[iVar1].objects[param_4] != param_5) {
      return 0xffffffff;
    }
    g_worldGrid.cells[iVar1].objects[param_4] = nullptr;
    param_5->field_005B = 0xffff;
    param_5->field_005D = 0xffff;
    param_5->field_005F = 0xffff;
  }
  return 0;
}

// 004960D0 FUN_004960d0
#line 4 "decomp/ST.exe/functions/004960D0/decomp.c"
undefined4 st::fn_004960D0(short param_1,short param_2,short param_3)

{
  int iVar1;

  iVar1 = (int)g_pathingGrid.sizeX * (int)param_2 + (int)g_pathingGrid.planeStride * (int)param_3 +
          (int)param_1;
  if (g_pathingGrid.cells[iVar1] < 0) {
    return 0xffffffff;
  }
  g_pathingGrid.cells[iVar1] = -2;
  return 0;
}

// 00496140 FUN_00496140
#line 4 "decomp/ST.exe/functions/00496140/decomp.c"
undefined4 st::fn_00496140(short param_1,short param_2,short param_3)

{
  int iVar1;

  iVar1 = (int)g_pathingGrid.sizeX * (int)param_2 + (int)g_pathingGrid.planeStride * (int)param_3 +
          (int)param_1;
  if (g_pathingGrid.cells[iVar1] == 0) {
    return 0xffffffff;
  }
  g_pathingGrid.cells[iVar1] = 0;
  return 0;
}

// 004961B0 FUN_004961b0
#line 4 "decomp/ST.exe/functions/004961B0/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (58), none consume AL/AX, and every RET path defines full EAX; sites=004AE0B0 @ 004AE3E1
   -> TEST TEST EAX,EAX | 004B1690 @ 004B19EB -> TEST TEST EAX,EAX | 004B1690 @ 004B1A03 -> TEST
   TEST EAX,EAX | 004E3910 @ 004E3A07 -> TEST TEST EAX,EAX | 004E3910 @ 004E3ACD -> TEST TEST
   EAX,EAX | 004E3910 @ 004E3BF8 -> TEST TEST EAX,EAX | 004E3910 @ 004E3CB2 -> TEST TEST EAX,EAX |
   00555880 @ 005558C6 -> TEST TEST EAX,EAX | 00578630 @ 005788C5 -> TEST TEST EAX,EAX | 00579170 @
   00579268 -> TEST TEST EAX,EAX | 0057D700 @ 0057DBF5 -> TEST TEST EAX,EAX | 0057F6E0 @ 0057FCEB ->
   TEST TEST EAX,EAX | 005809E0 @ 005809F8 -> TEST TEST EAX,EAX | 00584060 @ 005841EB -> TEST TEST
   EAX,EAX | 005845B0 @ 00584791 -> TEST TEST EAX,EAX | 00585020 @ 005853AA -> TEST TEST EAX,EAX |
   00585020 @ 00585486 -> TEST TEST EAX,EAX | 00589C10 @ 00589F1F -> TEST TEST EAX,EAX | 0058B190 @
   0058B60D -> TEST TEST EAX,EAX | 0058BB90 @ 0058BC8A -> TEST TEST EAX,EAX | 0058BB90 @ 0058BCA4 ->
   TEST TEST EAX,EAX | 0058D160 @ 0058D2F0 -> TEST TEST EAX,EAX | 0058D160 @ 0058D380 -> TEST TEST
   EAX,EAX | 0058F680 @ 0058FBF1 -> TEST TEST EAX,EAX */

int st::fn_004961B0(short param_1,short param_2,short param_3)

{
  if ((((-1 < param_1) && (param_1 < g_worldGrid.sizeX)) && (-1 < param_2)) &&
     (((param_2 < g_worldGrid.sizeY && (-1 < param_3)) && (param_3 < g_worldGrid.sizeZ)))) {
    return (uint)(STGridAt3D(g_pathingGrid, param_1, param_2, param_3) == 0);
  }
  return 0;
}

// 00496250 FUN_00496250
#line 4 "decomp/ST.exe/functions/00496250/decomp.c"
uint st::fn_00496250(int param_1,int param_2,int param_3)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;

  if (param_3 < 10) {
switchD_0049655f_caseD_0:
    return 0x7f;
  }
  sVar1 = (short)(param_1 >> 0x1f);
  if (param_1 < 0) {
    uVar13 = (int)(short)(((short)(param_1 / 0xc9) + sVar1) -
                         (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) - 1;
  }
  else {
    uVar13 = (uint)(short)(((short)(param_1 / 0xc9) + sVar1) -
                          (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
  }
  sVar1 = (short)(param_2 >> 0x1f);
  if (param_2 < 0) {
    uVar10 = (int)(short)(((short)(param_2 / 0xc9) + sVar1) -
                         (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) - 1;
  }
  else {
    uVar10 = (uint)(short)(((short)(param_2 / 0xc9) + sVar1) -
                          (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
  }
  iVar12 = STBiasedDiv16(param_3, 200); /* exact signed 16-bit grid-index division */
  if ((((-1 < (int)uVar13) && ((int)uVar13 <= (int)g_worldGrid.sizeX)) && (-1 < (int)uVar10)) &&
     ((((int)uVar10 <= (int)g_worldGrid.sizeY && (-1 < iVar12)) &&
      ((iVar12 <= g_worldGrid.sizeZ &&
       (sVar1 = STGridAt3D(g_pathingGrid, uVar13, uVar10, iVar12),
       sVar1 != 0)))))) {
    if (sVar1 == -1) {
      return 0x7f;
    }
    if ((sVar1 == -2) || (sVar1 == -0x4001)) {
      iVar8 = (int)PTR_00806750[1] * (int)*PTR_00806750;
      iVar11 = iVar12 + 1;
      iVar8 = (int)(iVar8 + (iVar8 >> 0x1f & 3U)) >> 2;
      if (iVar11 < 6) {
        piVar14 = (int *)((int)PTR_00806750 +
                         (((int)uVar10 >> 1) * ((int)*PTR_00806750 / 2) + iVar11 * iVar8 +
                         ((int)uVar13 >> 1)) * 4 + 0x459);
        while (iVar3 = *piVar14, iVar3 == 0) {
          iVar11 = iVar11 + 1;
          piVar14 = piVar14 + iVar8;
          if (5 < iVar11) {
            return 0xffffffff;
          }
        }
        sVar1 = *(short *)(iVar3 + 8);
        iVar11 = (int)sVar1;
        iVar8 = iVar11 - (uint)*(byte *)(iVar3 + 0x48);
        if (iVar12 < iVar8) {
          return 0xffffffff;
        }
        uVar2 = *(ushort *)(iVar3 + 0x4e);
        if ((uVar2 & 0x4000) != 0) {
          return 0x7f;
        }
        iVar4 = g_sT3DSMAPContext_00807598->field_0380;
        if (sVar1 == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = st::machine_word_boundary_cast<int>(g_sT3DSMAPContext_00807598->field_0384 * iVar8);
        }
        if ((int)(*(byte *)(*(int *)(iVar3 + 0x40) +
                            iVar4 * (((iVar4 * param_2) / 0xc9) % (iVar4 * 2)) * 2 +
                           ((iVar4 * param_1) / 0xc9) % (iVar4 * 2)) + 4 + iVar8) <
            ((param_3 + 400) * 0x100) / 0x640) {
          return 0xffffffff;
        }
        iVar8 = (uVar13 & 0xfffffffe) * -0xc9 + param_1;
        iVar6 = iVar8 / 100;
        iVar4 = (uVar10 & 0xfffffffe) * -0xc9 + param_2;
        iVar7 = iVar4 / 100;
        if ((uVar2 & 0x2000) != 0) {
          uVar10 = uVar10 & 1;
          uVar13 = uVar13 & 1;
          bVar9 = ((char)sVar1 - (char)iVar12) - 1;
          uVar5 = *(uint *)(iVar3 + 0x2c + (uVar13 + uVar10 * 2) * 4);
          if ((uVar5 & 8 >> (bVar9 & 0x1f)) == 0) {
            return 0xffffffff;
          }
          if ((uVar5 & 0x80 >> (bVar9 & 0x1f)) != 0) {
            return 0x7f;
          }
          switch(uVar2 & 0xf) {
          case 0:
            goto switchD_0049655f_caseD_0;
          case 1:
            if (iVar6 == iVar7) {
              return 3;
            }
            if (iVar6 < 3) {
              return (2 < iVar7) + 3;
            }
            return 2;
          case 2:
            if (3 - iVar6 == iVar7) {
              return 5;
            }
            if (iVar6 < 3) {
              return (iVar7 != 0) + 4;
            }
            return 6;
          case 3:
            if (iVar6 != iVar7) {
              if (iVar6 != 0) {
                return -(uint)(iVar7 != 0) & 7;
              }
              return 6;
            }
            break;
          case 4:
            if (iVar6 == 3 - iVar7) {
              return 1;
            }
            if (iVar6 != 0) {
              return (uint)(iVar7 < 3);
            }
            return 2;
          case 5:
            goto cf_common_exit_0049679C;
          case 6:
switchD_0049655f_caseD_6:
            return 6;
          case 7:
            goto cf_common_exit_004967AA;
          case 8:
switchD_0049655f_caseD_8:
            return 2;
          case 9:
            if (iVar12 != iVar11) {
              return 3;
            }
            if (uVar13 != 0) {
              if (uVar10 != 0) {
                return 0x7f;
              }
              return 3;
            }
            return 3;
          case 10:
            if (iVar12 != iVar11) {
              return 5;
            }
            if (uVar13 == 0) {
              return 5;
            }
            if (uVar10 != 0) {
              return 5;
            }
            return 0x7f;
          case 0xb:
            if (((iVar12 == iVar11) && (uVar13 == 0)) && (uVar10 == 0)) {
              return 0x7f;
            }
            break;
          case 0xc:
            if (iVar12 != iVar11) {
              return 1;
            }
            if (uVar13 != 0) {
              return 1;
            }
            if (uVar10 == 0) {
              return 1;
            }
            return 0x7f;
          case 0xd:
            return ((0x192 - iVar4 <= iVar8) - 1 & 0xfffffffc) + 7;
          case 0xe:
            return ((iVar4 <= iVar8) - 1 & 4) + 1;
          default:
            goto switchD_0049655f_default;
          }
cf_common_exit_004965EF:
          return 7;
        }
        switch(iVar7) {
        case 0:
          switch(iVar6) {
          case 0:
            goto switchD_00496785_caseD_1;
          case 1:
          case 2:
            goto switchD_0049655f_caseD_8;
          case 3:
switchD_00496785_caseD_2:
            return 1;
          default:
            return 0xffffffff;
          }
        case 1:
          switch(iVar6) {
          case 0:
cf_common_exit_0049679C:
            return 4;
          case 1:
switchD_00496785_caseD_1:
            return 3;
          case 2:
            goto switchD_00496785_caseD_2;
          case 3:
cf_common_exit_004967AA:
            return 0;
          default:
            return 0xffffffff;
          }
        case 2:
          switch(iVar6) {
          case 0:
            goto cf_common_exit_0049679C;
          case 1:
switchD_004967be_caseD_0:
            return 5;
          case 2:
            goto cf_common_exit_004965EF;
          case 3:
            goto cf_common_exit_004967AA;
          }
          break;
        case 3:
          switch(iVar6) {
          case 0:
            goto switchD_004967be_caseD_0;
          case 1:
          case 2:
            goto switchD_0049655f_caseD_6;
          case 3:
            goto cf_common_exit_004965EF;
          }
        }
      }
    }
  }
switchD_0049655f_default:
  return 0xffffffff;
}

// 004969F0 FUN_004969f0
#line 4 "decomp/ST.exe/functions/004969F0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00496CC0 -> 004969F0 @ 00496D38 | 00496CC0 -> 004969F0 @ 00496D81

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00496CC0 -> 004969F0 @ 00496D38 | 00496CC0 -> 004969F0 @ 00496D81

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 00496CC0 -> 004969F0 @ 00496D38 | 00496CC0 -> 004969F0 @ 00496D81 */

void st::fn_004969F0(int param_1,int param_2,int param_3,int param_4,uint param_5,undefined4 param_6,
                 uint param_7)

{
  int *piVar1;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  undefined4 local_8;

  if (-1 < (int)param_7) {
    if (param_7 < g_array_007FB270->count) {
      piVar1 = DArrayAt<int>(g_array_007FB270, param_7);
    }
    else {
      piVar1 = nullptr;
    }
    piVar1[3] = param_4;
    piVar1[2] = param_3;
    *piVar1 = param_1;
    piVar1[1] = param_2;
    return;
  }
  local_c = param_5;
  local_10 = param_4;
  local_14 = param_3;
  local_8 = param_6;
  local_1c = param_1;
  local_18 = param_2;
  st::fn_006AE1C0(g_array_007FB270,&local_1c);
  return;
}

// 00496A90 FUN_00496a90
#line 4 "decomp/ST.exe/functions/00496A90/decomp.c"
uint st::fn_00496A90(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                 undefined4 *param_6)

{
  dword dVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  DArrayTy *pDVar5;

  uVar2 = 0xffffffff;
  *param_6 = 0;
  uVar4 = 0;
  dVar1 = g_array_007FB270->count;
  pDVar5 = g_array_007FB270;
  if (0 < (int)dVar1) {
    do {
      if (uVar4 < pDVar5->count) {
        piVar3 = DArrayAt<int>(pDVar5, uVar4);
      }
      else {
        piVar3 = nullptr;
      }
      if ((piVar3[4] == param_5) &&
         (((uVar2 = uVar4, *piVar3 != param_1 || (piVar3[1] != param_2)) || (piVar3[2] != param_3)))
         ) {
        *param_6 = 1;
        pDVar5 = g_array_007FB270;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)dVar1);
  }
  return uVar2;
}

// 00496B30 FUN_00496b30
#line 4 "decomp/ST.exe/functions/00496B30/decomp.c"
void st::fn_00496B30(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  char *local_10;
  int local_c;
  int local_8;

  if ((param_1 < g_array_007FB270->count) &&
     (piVar2 = DArrayAt<int>(g_array_007FB270, param_1),
     piVar2 != nullptr)) {
    iVar3 = st::machine_word_boundary_cast<int>(piVar2[1] + -7);
    if (iVar3 < 0) {
      iVar6 = -iVar3;
      iVar3 = 0;
    }
    else {
      iVar6 = 0;
    }
    uVar1 = *piVar2 - 7;
    if ((int)uVar1 < 0) {
      param_1 = 0;
      iVar5 = -uVar1;
    }
    else {
      iVar5 = 0;
      param_1 = uVar1;
    }
    local_8 = st::machine_word_boundary_cast<int>(piVar2[1] + 8);
    if (g_worldGrid.sizeY < local_8) {
      local_8 = (int)g_worldGrid.sizeY;
    }
    local_c = *piVar2 + 8;
    if (g_worldGrid.sizeX < local_c) {
      local_c = (int)g_worldGrid.sizeX;
    }
    if (iVar3 < local_8) {
      local_10 = st::pointer_boundary_cast<char *>(&DAT_007abc64 + iVar5 + iVar6 * 0xf);
      do {
        if ((int)param_1 < local_c) {
          iVar6 = g_worldGrid.sizeX * iVar3 + param_1;
          iVar5 = local_c - param_1;
          pcVar4 = local_10;
          do {
            if (*pcVar4 != '\0') {
              if (param_3 == 0) {
                *(char *)((&DAT_007fb24c)[param_2] + iVar6) =
                     *(char *)((&DAT_007fb24c)[param_2] + iVar6) + -1;
                *(char *)(iVar6 + DAT_007fb26c) = *(char *)(iVar6 + DAT_007fb26c) + -1;
              }
              else {
                *(char *)((&DAT_007fb24c)[param_2] + iVar6) =
                     *(char *)((&DAT_007fb24c)[param_2] + iVar6) + '\x01';
                if (*(char *)(iVar6 + DAT_007fb26c) != -1) {
                  *(char *)(iVar6 + DAT_007fb26c) = *(char *)(iVar6 + DAT_007fb26c) + '\x01';
                }
              }
            }
            pcVar4 = pcVar4 + 1;
            iVar6 = iVar6 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        iVar3 = iVar3 + 1;
        local_10 = local_10 + 0xf;
      } while (iVar3 < local_8);
    }
  }
  return;
}

// 00496CC0 FUN_00496cc0
#line 4 "decomp/ST.exe/functions/00496CC0/decomp.c"
void st::fn_00496CC0(int param_1,int param_2,uint param_3,undefined4 param_4,uint param_5,void *param_6
                 )

{
  uint uVar1;
  uint uVar2;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;

  uVar1 = param_3;
  uVar2 = st::fn_00403E8B(param_1,param_2,param_3,param_4,param_5,st::pointer_boundary_cast<undefined4 *>(&param_3));
  pvVar2 = param_6;
  if ((int)uVar2 < 0) {
    iVar3 = st::fn_004027FC(param_1,param_2,uVar1,param_5,param_6);
    if (0 < iVar3) {
      param_5 = st::fn_00402D24(param_1,param_2,uVar1,param_4,param_5,st::machine_word_boundary_cast<undefined4>(pvVar2),0xffffffff);
      if ((&DAT_007fb24c)[uVar1] == 0) {
        puVar4 = st::pointer_boundary_cast<undefined4 *>(st::fn_006AAC70
                           ((int)g_pathingScratchGrid.sizeY * (int)g_pathingScratchGrid.sizeX));
        iVar3 = (int)g_pathingScratchGrid.sizeY;
        iVar6 = (int)g_pathingScratchGrid.sizeX;
        (&DAT_007fb24c)[uVar1] = puVar4;
        for (uVar5 = (uint)(iVar3 * iVar6) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        for (uVar5 = iVar3 * iVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar4 = 0;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
      }
      st::fn_00403639(param_5,uVar1,1);
    }
  }
  else if (param_3 != 0) {
    if (uVar2 < g_array_007FB270->count) {
      pvVar2 = DArrayAt<void>(g_array_007FB270, uVar2);
    }
    else {
      pvVar2 = nullptr;
    }
    st::fn_00403639(uVar2,STField<int>(pvVar2,8),0);
    st::fn_00402D24(param_1,param_2,uVar1,param_4,param_5,st::machine_word_boundary_cast<undefined4>(param_6),uVar2);
    st::fn_00403639(uVar2,uVar1,1);
    return;
  }
  return;
}

// 00496E40 FUN_00496e40
#line 4 "decomp/ST.exe/functions/00496E40/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_00496E40(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint index;
  int iVar2;
  void *pvVar3;

  index = st::fn_00403E8B(param_1,param_2,0,param_3,param_4,st::pointer_boundary_cast<undefined4 *>(&param_4));
  if (-1 < (int)index) {
    if (index < g_array_007FB270->count) {
      pvVar3 = DArrayAt<void>(g_array_007FB270, index);
    }
    else {
      pvVar3 = nullptr;
    }
    st::fn_00403639(index,STField<int>(pvVar3,8),0);
    iVar1 = STField<int>(pvVar3,8);
    st::fn_006B0C70(g_array_007FB270,index);
    iVar2 = st::fn_004010CD(iVar1);
    if (iVar2 == 0) {
      st::fn_006AB060(&DAT_007fb24c + iVar1);
    }
  }
  return;
}

// 00496F00 FUN_00496f00
#line 4 "decomp/ST.exe/functions/00496F00/decomp.c"
undefined4 st::fn_00496F00(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  bool bVar5;

  uVar2 = 0;
  uVar4 = 0;
  uVar1 = g_array_007FB270->count;
  if (0 < (int)uVar1) {
    bVar5 = uVar1 != 0;
    while( true ) {
      if (bVar5) {
        pvVar3 = DArrayAt<void>(g_array_007FB270, uVar4);
      }
      else {
        pvVar3 = nullptr;
      }
      if (STField<int>(pvVar3,8) == param_1) break;
      uVar4 = uVar4 + 1;
      bVar5 = uVar4 < uVar1;
      if ((int)uVar1 <= (int)uVar4) {
        return uVar2;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}

// 00496F70 FUN_00496f70
#line 4 "decomp/ST.exe/functions/00496F70/decomp.c"
void st::fn_00496F70(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;

  uVar2 = 0;
  iVar4 = st::machine_word_boundary_cast<int>(g_array_007FB270->count * g_array_007FB270->elementSize + 0x1c);
  if (0 < iVar4) {
    do {
      if (uVar2 < g_array_007FB270->count) {
        piVar3 = DArrayAt<int>(g_array_007FB270, uVar2);
      }
      else {
        piVar3 = nullptr;
      }
      iVar1 = st::fn_006ACF90(*piVar3,(uint)(piVar3[1] < param_2),param_1,param_2);
      if (iVar1 < piVar3[3]) {
        st::fn_00402ABD((void *)piVar3[5],param_4);
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < iVar4);
  }
  return;
}

// 00497000 FUN_00497000
#line 1 "decomp/ST.exe/functions/00497000/decomp.c"

void st::fn_00497000(void)

{
  int *slotStorage;

  slotStorage = st::pointer_boundary_cast<int *>(&DAT_007fb24c);
  do {
    if (*slotStorage != 0) {
      st::fn_006AB060(slotStorage);
    }
    slotStorage = slotStorage + 1;
  } while ((int)slotStorage < 0x7fb270);
  return;
}

// 00497030 FUN_00497030
#line 4 "decomp/ST.exe/functions/00497030/decomp.c"
uint st::fn_00497030(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;

  uVar1 = g_array_007FB270->count;
  uVar5 = 0;
  if ((int)uVar1 < 1) {
    return 0xffffffff;
  }
  do {
    if (uVar5 < uVar1) {
      piVar4 = DArrayAt<int>(g_array_007FB270, uVar5);
    }
    else {
      piVar4 = nullptr;
    }
    if ((param_4 == 0) || (piVar4[2] != param_3)) {
      iVar2 = (param_1 - *piVar4) + 7;
      iVar3 = (param_2 - piVar4[1]) + 7;
      if ((iVar2 < 0xf) && ((iVar3 < 0xf && ((&DAT_007abc64)[iVar3 + iVar2 * 0xf] != '\0')))) {
        if (param_5 < 1) {
          return uVar5;
        }
        st::fn_00402ABD((void *)piVar4[5],param_5);
        return uVar5;
      }
    }
    uVar5 = uVar5 + 1;
    if ((int)uVar1 <= (int)uVar5) {
      return 0xffffffff;
    }
  } while( true );
}

// 00497110 FUN_00497110
#line 1 "decomp/ST.exe/functions/00497110/decomp.c"

void st::fn_00497110(AnonShape_00497110_11FEE69C *param_1,AnonShape_00497110_465BC742 *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_10 = param_1->field_01F1;
  iVar6 = st::machine_word_boundary_cast<int>(param_1->field_01ED + 100);
  iVar5 = st::machine_word_boundary_cast<int>(param_1->field_01E9 + 100);
  local_18 = st::machine_word_boundary_cast<int>(param_2->field_01ED + 100);
  iVar4 = st::machine_word_boundary_cast<int>(param_2->field_01E9 + 100);
  iVar2 = st::fn_006ACED8(iVar5,iVar6,iVar4,local_18);
  if (0 < iVar2) {
    iVar3 = local_18 - iVar6;
    local_c = iVar3 / 2 + iVar6;
    local_14 = (iVar4 - iVar5) / 2 + iVar5;
    local_8 = STBiasedDiv16(local_10, 200); /* exact signed 16-bit grid-index division */
    st::fn_006E3310
              (g_sT3DSMAPContext_00807598,(g_sT3DSMAPContext_00807598->field_0380 * local_14) / 0xc9
               ,(int *)((g_sT3DSMAPContext_00807598->field_0380 * local_c) / 0xc9),local_8,&local_1c
              );
    local_8 = local_8 + 1;
    if (local_8 < local_1c) {
      local_8 = local_1c;
    }
    local_8 = local_8 * 200;
    iVar2 = iVar2 * 4;
    st::fn_00402A86(param_1->field_01D9,(short)(((iVar4 - iVar5) * 600) / iVar2) + (short)iVar5,
                       (short)((iVar3 * 600) / iVar2) + (short)iVar6,(ushort)local_10,
                       (short)local_14,(short)local_c,(short)local_8);
    st::fn_00402A86(param_2->field_01D9,(short)(((iVar5 - iVar4) * 600) / iVar2) + (short)iVar4,
                       (short)(((iVar6 - local_18) * 600) / iVar2) + (short)local_18,
                       (ushort)local_10,(short)local_14,(short)local_c,(short)local_8);
  }
  return;
}

// 00497370 FUN_00497370
#line 4 "decomp/ST.exe/functions/00497370/decomp.c"
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00496CC0 -> 00497370 @ 00496D62; FUN_00496cc0 parameter param_5 */

undefined4 st::fn_00497370(int param_1,int param_2,uint param_3,uint param_4,void *param_5)

{
  alignas(4) byte st_stack_frame[140];

  byte bVar1;
  dword dVar2;
  void *this;
  int iVar3;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  DArrayTy *pDVar14;
  bool bVar15;
  int aiStack_84 [4];
  undefined4 uStack_74;
  uint local_60;
  char local_5c;
  undefined3 uStack_5b;
  dword local_44;
  int local_40;
  int *local_3c;
  undefined1 *local_38;
  uint local_34;
  int local_30;
  undefined4 local_28;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = st::pointer_boundary_cast<undefined *>(&DAT_00790718);
  puStack_10 = st::pointer_boundary_cast<undefined1 *>(&st_image_0072D964);
  local_14 = ExceptionList;
  local_28 = 0xffffffff;
  dVar2 = g_array_007FB270->count;
  local_44 = dVar2;
  uStack_74 = 0x4973c3;
  local_38 = (st_stack_frame + 24) + dVar2 * -0x18;
  aiStack_84[dVar2 * -6 + 4] = 0x4973de;
  local_1c = (st_stack_frame + 24) + dVar2 * -0x1c;
  local_3c = (int *)((st_stack_frame + 24) + dVar2 * -0x1c);
  local_8 = 0xffffffff;
  local_30 = 0;
  local_40 = 0;
  local_34 = 0;
  ExceptionList = &local_14;
  if (0 < (int)dVar2) {
    puVar11 = &local_60 + dVar2 * -6;
    pDVar14 = g_array_007FB270;
    ExceptionList = &local_14;
    do {
      if (local_34 < pDVar14->count) {
        puVar12 = DArrayAt<uint>(pDVar14, local_34);
      }
      else {
        puVar12 = nullptr;
      }
      uVar3 = puVar12[2];
      if (uVar3 != param_3) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        auto _local_5c = CONCAT31(uStack_5b,(char)uVar3);
        if (DAT_00808a8f == '\0') {
          if ((char)uVar3 == (char)param_3) {
LAB_004974ca:
            iVar9 = 0;
          }
          else {
            uVar3 = uVar3 & 0xff;
            uVar8 = param_3 & 0xff;
            bVar1 = g_playerRelationMatrix[uVar3][uVar8];
            if ((bVar1 == 0) && (g_playerRelationMatrix[uVar8][uVar3] == 0)) {
              iVar9 = -2;
            }
            else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar8][uVar3] == 0)) {
              iVar9 = -1;
            }
            else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar8][uVar3] == 1)) {
              iVar9 = 1;
            }
            else {
              if ((bVar1 != 1) || (g_playerRelationMatrix[uVar8][uVar3] != 1)) goto LAB_004974ca;
              iVar9 = 2;
            }
          }
          bVar15 = iVar9 < 0;
        }
        else {
          bVar15 = g_bulkInitializedRecords_008087C7[param_3 & 0xff].field_0023 !=
                   g_bulkInitializedRecords_008087C7[uVar3 & 0xff].field_0023;
        }
        if (bVar15) {
          aiStack_84[dVar2 * -7 + 4] = param_2 * 0xc9 + 100;
          aiStack_84[dVar2 * -7 + 3] = param_1 * 0xc9 + 100;
          aiStack_84[dVar2 * -7 + 2] = st::machine_word_boundary_cast<int>(puVar12[1] * 0xc9 + 100);
          aiStack_84[dVar2 * -7 + 1] = *puVar12 * 0xc9 + 100;
          aiStack_84[dVar2 * -7] = 0x497515;
          iVar3 = st::fn_006ACED8(aiStack_84[dVar2 * -7 + 1],aiStack_84[dVar2 * -7 + 2],
                               aiStack_84[dVar2 * -7 + 3],aiStack_84[dVar2 * -7 + 4]);
          pDVar14 = g_array_007FB270;
          if (iVar3 < 0xbc7) {
            puVar13 = puVar11 + -4;
            memmove(puVar13, puVar12, 0x18); /* compiler REP MOVS byte copy */
            uVar3 = puVar11[1];
            aiStack_84[dVar2 * -7 + 4] = 0x497531;
            uVar3 = st::fn_00402DC4(uVar3);
            uVar3 = ((int)uVar3 < 0) - 1 & uVar3;
            *puVar11 = uVar3;
            local_40 = local_40 + uVar3;
            local_30 = local_30 + 1;
            puVar11 = puVar11 + 6;
            pDVar14 = g_array_007FB270;
          }
        }
      }
      local_34 = local_34 + 1;
    } while ((int)local_34 < (int)local_44);
  }
  if (local_30 != 0) {
    aiStack_84[dVar2 * -7 + 4] = 0x497571;
    iVar4 = st::fn_00402DC4((int)param_5);
    iVar7 = local_30;
    local_20 = local_30;
    iVar9 = iVar4 / local_30;
    if (iVar4 < local_40) {
      iVar6 = 0;
      piVar10 = local_3c;
      if (0 < local_30) {
        do {
          *piVar10 = iVar6;
          iVar6 = iVar6 + 1;
          piVar10 = piVar10 + 1;
        } while (iVar6 < local_30);
      }
      aiStack_84[dVar2 * -7 + 4] = local_30;
      aiStack_84[dVar2 * -7 + 3] = (int)local_3c;
      aiStack_84[dVar2 * -7 + 2] = (int)local_38;
      aiStack_84[dVar2 * -7 + 1] = 0x4975cf;
      st::fn_00402B67(aiStack_84[dVar2 * -7 + 2],(int *)aiStack_84[dVar2 * -7 + 3],
                         aiStack_84[dVar2 * -7 + 4]);
      while (0 < iVar4) {
        iVar6 = local_30 - iVar7;
        if (iVar6 < local_30) {
          piVar10 = (int *)(local_38 + iVar6 * 0x18 + 0x10);
          iVar6 = local_30 - iVar6;
          do {
            iVar7 = *piVar10;
            if (iVar7 < iVar9) {
              *piVar10 = 0;
              local_20 = local_20 + -1;
            }
            else {
              *piVar10 = iVar7 - iVar9;
              iVar7 = iVar9;
            }
            local_40 = local_40 - iVar7;
            iVar4 = iVar4 - iVar7;
            piVar10 = piVar10 + 6;
            iVar6 = iVar6 + -1;
            iVar7 = local_20;
          } while (iVar6 != 0);
        }
        if (((iVar4 < 1) || (iVar7 < 1)) || (iVar9 = iVar4 / iVar7, iVar9 == 0)) {
          iVar4 = 0;
        }
      }
    }
    else {
      iVar4 = iVar4 - local_40;
      if (0 < local_30) {
        puVar5 = (undefined4 *)(local_38 + 0x10);
        iVar9 = local_30;
        do {
          *puVar5 = 0;
          puVar5 = puVar5 + 6;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
    iVar9 = local_30;
    aiStack_84[dVar2 * -7 + 4] = 0x497638;
    iVar7 = st::fn_00402DC4((int)param_5);
    aiStack_84[dVar2 * -7 + 4] = iVar7 - iVar4;
    aiStack_84[dVar2 * -7 + 3] = 0x497642;
    st::fn_00402ABD(param_5,aiStack_84[dVar2 * -7 + 4]);
    if (0 < iVar9) {
      piVar10 = (int *)(local_38 + 0x10);
      do {
        this = (void *)piVar10[1];
        aiStack_84[dVar2 * -7 + 4] = 0x497656;
        iVar4 = st::fn_00402DC4((int)this);
        if (iVar4 != *piVar10) {
          aiStack_84[dVar2 * -7 + 4] = 0x497661;
          iVar4 = st::fn_00402DC4((int)this);
          aiStack_84[dVar2 * -7 + 4] = iVar4 - *piVar10;
          aiStack_84[dVar2 * -7 + 3] = 0x49766b;
          st::fn_00402ABD(this,aiStack_84[dVar2 * -7 + 4]);
          aiStack_84[dVar2 * -7 + 4] = (int)this;
          aiStack_84[dVar2 * -7 + 3] = (int)param_5;
          aiStack_84[dVar2 * -7 + 2] = 0x497678;
          st::fn_00402EE6((AnonShape_00497110_11FEE69C *)aiStack_84[dVar2 * -7 + 3],
                             (AnonShape_00497110_465BC742 *)aiStack_84[dVar2 * -7 + 4]);
        }
        piVar10 = piVar10 + 6;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  aiStack_84[dVar2 * -7 + 4] = 0x497686;
  iVar9 = st::fn_00402DC4((int)param_5);
  if (0 < iVar9) {
    local_28 = 1;
  }
  ExceptionList = local_14;
  return local_28;
}

// 004977C0 FUN_004977c0
#line 1 "decomp/ST.exe/functions/004977C0/decomp.c"

void st::fn_004977C0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_8;

  iVar3 = param_1;
  local_8 = 0;
  piVar5 = param_2;
  if (0 < param_3) {
    do {
      iVar1 = *(int *)(iVar3 + 0x10 + *piVar5 * 0x18);
      piVar4 = param_2;
      param_1 = local_8;
      if (0 < local_8) {
        do {
          iVar2 = *piVar4;
          if (iVar1 < *(int *)(iVar3 + 0x10 + iVar2 * 0x18)) {
            *piVar4 = *piVar5;
            *piVar5 = iVar2;
          }
          param_1 = param_1 + -1;
          piVar4 = piVar4 + 1;
        } while (param_1 != 0);
      }
      local_8 = local_8 + 1;
      piVar5 = piVar5 + 1;
    } while (local_8 < param_3);
  }
  return;
}

// 00497850 FUN_00497850
#line 4 "decomp/ST.exe/functions/00497850/decomp.c"
undefined4
st::fn_00497850(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,uint param_7,
            int *param_8,int *param_9,int *param_10)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;

  if (-1 < (int)param_7) {
    if ((((int)param_7 < (int)g_array_007FB270->count) && (param_7 < g_array_007FB270->count)) &&
       (pvVar3 = DArrayAt<void>(g_array_007FB270, param_7),
       pvVar3 != nullptr)) {
      iVar1 = STField<int>(pvVar3,0x14);
      uVar2 = st::fn_00404C0A(param_1,param_2,param_3,param_4,param_5,param_6,
                                 *(int *)(iVar1 + 0x1e9) + 100,*(int *)(iVar1 + 0x1ed) + 100,
                                 *(undefined4 *)(iVar1 + 0x1f1),param_8,param_9,param_10);
      return uVar2;
    }
  }
  *param_8 = param_4;
  *param_9 = param_5;
  *param_10 = param_6;
  return 0;
}

// 00497920 FUN_00497920
#line 4 "decomp/ST.exe/functions/00497920/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (47), none consume AL/AX, and every RET path defines full EAX; sites=0040AE40 @ 0040B0E7
   -> TEST TEST EAX,EAX | 0040AE40 @ 0040B147 -> TEST TEST EAX,EAX | 0040AE40 @ 0040B1B4 -> TEST
   TEST EAX,EAX | 0040AE40 @ 0040B210 -> TEST TEST EAX,EAX | 0040AE40 @ 0040B297 -> TEST TEST
   EAX,EAX | 0040AE40 @ 0040B2F6 -> TEST TEST EAX,EAX | 0040AE40 @ 0040B359 -> TEST TEST EAX,EAX |
   0040AE40 @ 0040B3BA -> TEST TEST EAX,EAX | 0040AE40 @ 0040B419 -> TEST TEST EAX,EAX | 0040AE40 @
   0040B470 -> TEST TEST EAX,EAX | 0040AE40 @ 0040B6C8 -> TEST TEST EAX,EAX | 0040BC90 @ 0040BDD6 ->
   TEST TEST EAX,EAX | 0040C080 @ 0040C4BA -> TEST TEST EAX,EAX | 0040CE20 @ 0040CF6B -> TEST TEST
   EAX,EAX | 0040CE20 @ 0040CF8A -> TEST TEST EAX,EAX | 0040CE20 @ 0040D06A -> TEST TEST EAX,EAX |
   0040CE20 @ 0040D089 -> TEST TEST EAX,EAX | 0040CE20 @ 0040D0A9 -> TEST TEST EAX,EAX | 0040CE20 @
   0040D0C7 -> TEST TEST EAX,EAX | 0040CE20 @ 0040D0E6 -> TEST TEST EAX,EAX | 0040CE20 @ 0040D104 ->
   TEST TEST EAX,EAX | 0040CE20 @ 0040D1DD -> TEST TEST EAX,EAX | 0040CE20 @ 0040D1FD -> TEST TEST
   EAX,EAX | 0040CE20 @ 0040D21E -> TEST TEST EAX,EAX

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0040AE40 -> 00497920 @ 0040B147; MOVSX at 0040B141 establishes signed source width 2 |
   0040AE40 -> 00497920 @ 0040B3BA; MOVSX at 0040B3B4 establishes signed source width 2 | 0040AE40
   -> 00497920 @ 0040B470; MOVSX at 0040B468 establishes signed source width 2 | 0040CE20 ->
   00497920 @ 0040CF6B; MOVSX at 0040CF65 establishes signed source width 2 | 0040CE20 -> 00497920 @
   0040CF8A; MOVSX at 0040CF80 establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D06A;
   MOVSX at 0040D05C establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D089; MOVSX at
   0040D07F establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D0A9; MOVSX at 0040D09E
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D0C7; MOVSX at 0040D0BE
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D0E6; MOVSX at 0040D0DC
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D104; MOVSX at 0040D0FB
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D1DD; MOVSX at 0040D1D1
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D1FD; MOVSX at 0040D1F2
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D21E; MOVSX at 0040D212
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D23D; MOVSX at 0040D233
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D25D; MOVSX at 0040D252
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D27C; MOVSX at 0040D272
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D2DC; MOVSX at 0040D2D5
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D320; MOVSX at 0040D316
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D35D; MOVSX at 0040D34F
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040D792; MOVSX at 0040D788
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040D80C; MOVSX at 0040D801
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040D82B; MOVSX at 0040D821
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040D907; MOVSX at 0040D8FB
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040D927; MOVSX at 0040D91C
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040D948; MOVSX at 0040D93C
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040D967; MOVSX at 0040D95D
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040D987; MOVSX at 0040D97C
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040DA6C; MOVSX at 0040DA60
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040DA8C; MOVSX at 0040DA81
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040DAAD; MOVSX at 0040DAA1
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040DACC; MOVSX at 0040DAC2
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040DAEC; MOVSX at 0040DAE1
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040DB6E; MOVSX at 0040DB67
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040DBB2; MOVSX at 0040DBA8
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040DBF7; MOVSX at 0040DBE9
   establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0040AE40 -> 00497920 @ 0040B0E7; MOVSX at 0040B0D9 establishes signed source width 2 |
   0040AE40 -> 00497920 @ 0040B2F6; MOVSX at 0040B2E9 establishes signed source width 2 | 0040CE20
   -> 00497920 @ 0040CF6B; MOVSX at 0040CF60 establishes signed source width 2 | 0040CE20 ->
   00497920 @ 0040CF8A; MOVSX at 0040CF7C establishes signed source width 2 | 0040CE20 -> 00497920 @
   0040D06A; MOVSX at 0040D058 establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D089;
   MOVSX at 0040D07B establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D0A9; MOVSX at
   0040D09A establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D0C7; MOVSX at 0040D0BA
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D0E6; MOVSX at 0040D0D8
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D104; MOVSX at 0040D0F7
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D1DD; MOVSX at 0040D1CD
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D1FD; MOVSX at 0040D1EE
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D21E; MOVSX at 0040D20E
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D23D; MOVSX at 0040D22F
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D25D; MOVSX at 0040D24E
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D27C; MOVSX at 0040D26E
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D320; MOVSX at 0040D313
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D35D; MOVSX at 0040D353
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040D792; MOVSX at 0040D784
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040D82B; MOVSX at 0040D81D
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040D907; MOVSX at 0040D8F7
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040D927; MOVSX at 0040D918
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040D948; MOVSX at 0040D938
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040D967; MOVSX at 0040D959
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040D987; MOVSX at 0040D978
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040DA6C; MOVSX at 0040DA5C
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040DA8C; MOVSX at 0040DA7D
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040DAAD; MOVSX at 0040DA9D
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040DACC; MOVSX at 0040DABE
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040DAEC; MOVSX at 0040DADD
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040DBB2; MOVSX at 0040DBA5
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040DBF7; MOVSX at 0040DBED
   establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 0040BC90 -> 00497920 @ 0040BDD6; FUN_0040bc90 parameter param_1 | 0040CE20 -> 00497920
   @ 0040CF6B; MOVSX at 0040CF58 establishes signed source width 2 | 0040CE20 -> 00497920 @
   0040CF8A; MOVSX at 0040CF78 establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D0C7;
   MOVSX at 0040D0B6 establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D0E6; MOVSX at
   0040D0D4 establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D104; MOVSX at 0040D0F3
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D23D; MOVSX at 0040D22B
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D25D; MOVSX at 0040D24A
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D27C; MOVSX at 0040D26A
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D2DC; MOVSX at 0040D2CD
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D320; MOVSX at 0040D30F
   establishes signed source width 2 | 0040CE20 -> 00497920 @ 0040D35D; MOVSX at 0040D34B
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040D792; MOVSX at 0040D780
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040D80C; MOVSX at 0040D7FD
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040D82B; MOVSX at 0040D819
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040D967; MOVSX at 0040D955
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040D987; MOVSX at 0040D974
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040DACC; MOVSX at 0040DABA
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040DAEC; MOVSX at 0040DAD9
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040DB6E; MOVSX at 0040DB5F
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040DBB2; MOVSX at 0040DBA1
   establishes signed source width 2 | 0040D540 -> 00497920 @ 0040DBF7; MOVSX at 0040DBE5
   establishes signed source width 2 | 0049794D TEST AX,AX classifies dword parameter loaded at
   0049794A | 00497952 CMP AX,word ptr [0x007fb244] classifies dword parameter loaded at 0049794A */

int st::fn_00497920(RecoveredRecord_STBoatC_0040AE40 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  STWorldObject *this;
  int iVar2;
  short sVar3;
  short sVar4;
  short sVar5;

  sVar5 = (short)param_2;
  if ((((-1 < sVar5) && (sVar5 < g_worldGrid.sizeX)) && (sVar4 = (short)param_3, -1 < sVar4)) &&
     (((sVar4 < g_worldGrid.sizeY && (sVar3 = (short)param_4, -1 < sVar3)) &&
      ((sVar3 < g_worldGrid.sizeZ &&
       (this = STGridAt3D(g_worldGrid, sVar5, sVar4, sVar3).objects[0], this != nullptr)))))) {
    if (((this[1].vtable != (STWorldObjectVTable *)param_1->field_0024) ||
        (*(short *)&this[1].field_0xc != param_1->field_0030)) ||
       (*(int *)((int)&this[7].vtable + 1) == 1)) {
      if (this[6].field_0xb == '\x01') {
        return 1;
      }
      if (this[6].field_0xb == '\0') {
        return 0;
      }
      if (*(short *)((int)&this[6].value_20 + 2) == 0) {
        return 0;
      }
      if (*(int *)&this[4].field_0x7 == 0) {
        return 0;
      }
      st::fn_00405736(this,(undefined2 *)((int)&param_2 + 2),(undefined2 *)((int)&param_3 + 2),
                         (undefined2 *)((int)&param_4 + 2));
      if (((param_1->field_005B == STPiece<2,2>(param_2)) && (param_1->field_005D == STPiece<2,2>(param_3))) &&
         (param_1->field_005F == STPiece<2,2>(param_4))) {
        return 0;
      }
      return (uint)(*(short *)((int)&this[6].value_20 + 2) < 0x1e);
    }
    iVar2 = *(int *)&this[4].field_0x7;
    if (iVar2 == 0) {
      return 1;
    }
    iVar1 = iVar2 + *(int *)&this[5].field_0x1f * 8;
    if (((*(short *)(iVar2 + *(int *)&this[5].field_0x1f * 8) == param_1->field_0047) &&
        (*(short *)(iVar1 + 2) == param_1->field_0049)) &&
       (*(short *)(iVar1 + 4) == param_1->field_004B)) {
      return 0;
    }
  }
  return 1;
}

