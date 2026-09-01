#include "st/generated.hpp"
// Generated translation unit: source/original/wlad/Tspr3d.cpp

// 004AB880 STT3DSprC::LoadSequence
#line 4 "decomp/ST.exe/functions/004AB880/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tspr3d.cpp
   STT3DSprC::LoadSequence

   [STPrototypeRepairApplier] Propagated parameter 3.
   Evidence: 0044EE30 -> 004AB880 @ 004501D7 | 0044EE30 -> 004AB880 @ 00450A94 | 0044EE30 ->
   004AB880 @ 00450D29 | 0044EE30 -> 004AB880 @ 00450D51 | 0044EE30 -> 004AB880 @ 00450D78 |
   0044EE30 -> 004AB880 @ 00450DCE | 0044EE30 -> 004AB880 @ 00450E0E | 00462180 -> 004AB880 @
   004637A9 | 004B8C80 -> 004AB880 @ 004B962C | 004C9770 -> 004AB880 @ 004C9DA3 | 004C9770 ->
   004AB880 @ 004C9E20 | 004C9770 -> 004AB880 @ 004C9E93 | 004C9770 -> 004AB880 @ 004C9EC0 |
   004C9770 -> 004AB880 @ 004C9F6A | 004C9770 -> 004AB880 @ 004C9F97 | 004C9770 -> 004AB880 @
   004C9FE3 | 004C9770 -> 004AB880 @ 004CA010 | 004D11D0 -> 004AB880 @ 004D1BA6 | 004D11D0 ->
   004AB880 @ 004D1BCC | 004D11D0 -> 004AB880 @ 004D1D14 | 004D11D0 -> 004AB880 @ 004D1D92 |
   004D11D0 -> 004AB880 @ 004D2016 | 004D11D0 -> 004AB880 @ 004D203F | 004D32C0 -> 004AB880 @
   004D3A2D | 004D32C0 -> 004AB880 @ 004D3ABF | 004D32C0 -> 004AB880 @ 004D4164 | 004D32C0 ->
   004AB880 @ 004D41DE | 004D32C0 -> 004AB880 @ 004D4259 | 004D32C0 -> 004AB880 @ 004D427F |
   004E3880 -> 004AB880 @ 004E38CC | 004ECEA0 -> 004AB880 @ 004ECFCC | 00578630 -> 004AB880 @
   00578904 | 00578630 -> 004AB880 @ 00578937 | 00578630 -> 004AB880 @ 00578971 | 00578630 ->
   004AB880 @ 005789A3 | 00578630 -> 004AB880 @ 005789DE | 00578630 -> 004AB880 @ 00578A10 |
   00578630 -> 004AB880 @ 00578A3E | 00578630 -> 004AB880 @ 00578A71 | 00578630 -> 004AB880 @
   00578AAB | 00578630 -> 004AB880 @ 00578ADD | 00578630 -> 004AB880 @ 00578B11 | 00578630 ->
   004AB880 @ 00578B43 | 0057BF60 -> 004AB880 @ 0057C22E | 0057BF60 -> 004AB880 @ 0057C269 |
   0057BF60 -> 004AB880 @ 0057C298 | 0057BF60 -> 004AB880 @ 0057C626 | 00583270 -> 004AB880 @
   00583631 | 00583270 -> 004AB880 @ 005836B0 | 00584380 -> 004AB880 @ 005843D3 | 00584380 ->
   004AB880 @ 00584422 | 00584B10 -> 004AB880 @ 00584B3B | 00584B10 -> 004AB880 @ 00584B52 |
   00584B10 -> 004AB880 @ 00584BCF | 005859A0 -> 004AB880 @ 00585C08 | 00588BC0 -> 004AB880 @
   00589041 | 00589740 -> 004AB880 @ 00589793 | 00589740 -> 004AB880 @ 005897E2 | 00589C10 ->
   004AB880 @ 00589F5C | 00589C10 -> 004AB880 @ 00589F89 | 00589C10 -> 004AB880 @ 00589FBA |
   00589C10 -> 004AB880 @ 00589FEB | 0058BD90 -> 004AB880 @ 0058C038 | 0058D7C0 -> 004AB880 @
   0058DAA9 | 0058D7C0 -> 004AB880 @ 0058DEFE | 0058E570 -> 004AB880 @ 0058E8E8 | 005EC9F0 ->
   004AB880 @ 005ECB5D | 005EC9F0 -> 004AB880 @ 005ECBC8 | 005EC9F0 -> 004AB880 @ 005ECBEF |
   005EC9F0 -> 004AB880 @ 005ECC16 | 005F6AF0 -> 004AB880 @ 005F6C67 | 005F6AF0 -> 004AB880 @
   005F6C8C | 005FDB50 -> 004AB880 @ 005FDC5B | 005FDB50 -> 004AB880 @ 005FDC7A | 005FDB50 ->
   004AB880 @ 005FDEE1 | 006132F0 -> 004AB880 @ 006133EA | 006132F0 -> 004AB880 @ 00613417 |
   006132F0 -> 004AB880 @ 006134CF | 006132F0 -> 004AB880 @ 006134F2 | 006132F0 -> 004AB880 @
   00613515 | 00639990 -> 004AB880 @ 006399E4 | 00639990 -> 004AB880 @ 00639AC8 | 00639C90 ->
   004AB880 @ 00639D35 | 00639C90 -> 004AB880 @ 00639D79 | 00639C90 -> 004AB880 @ 00639E80 |
   00639C90 -> 004AB880 @ 00639EA8 | 00639C90 -> 004AB880 @ 0063B5D2 | 00639C90 -> 004AB880 @
   0063B5FA

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 004AB880 -> 00709AF0 @ 004AB948 | 004ADBA0 -> 004AB880 @ 004ADD18; unproven partial
   register write at 004ADD03
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (156), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00420340 @ 004206B4 -> read as EAX on
   every CFG path | 00420340 @ 004206E9 -> read as EAX on every CFG path | 00420AE0 @ 00420D97 ->
   killed on every CFG path | 00420AE0 @ 00420DED -> killed on every CFG path | 0044EE30 @ 0044FDD0
   -> read as EAX on every CFG path | 0044EE30 @ 0044FE1D -> read as EAX on every CFG path |
   0044EE30 @ 0044FEDF -> read as EAX on every CFG path | 0044EE30 @ 004501D7 -> read as EAX on
   every CFG path | 0044EE30 @ 00450A94 -> read as EAX on every CFG path | 0044EE30 @ 00450D29 ->
   killed on every CFG path | 0044EE30 @ 00450D51 -> killed on every CFG path | 0044EE30 @ 00450D78
   -> killed on every CFG path | 0044EE30 @ 00450DCE -> read as EAX on every CFG path | 0044EE30 @
   00450E0E -> read as EAX on every CFG path | 00462180 @ 004637A9 -> killed on every CFG path |
   004ADBA0 @ 004ADD18 -> killed on every CFG path | 004B8C80 @ 004B962C -> read as EAX on every CFG
   path | 004C6210 @ 004C6312 -> read as EAX on every CFG path | 004C6440 @ 004C6636 -> read as EAX
   on every CFG path | 004C6440 @ 004C66FA -> read as EAX on every CFG path | 004C9770 @ 004C9843 ->
   read as EAX on every CFG path | 004C9770 @ 004C98A3 -> read as EAX on every CFG path | 004C9770 @
   004C9903 -> read as EAX on every CFG path | 004C9770 @ 004C99AE -> read as EAX on every CFG path
    */

int __thiscall
st::fn_004AB880
          (STT3DSprC *this,byte param_1,int *param_2,char *text,Global_mfRLoad_param_2Enum param_4)

{
  ushort *puVar1;
  byte *pbVar2;
  char cVar3;
  STT3DSprC *this_00;
  int local_EAX_35;
  int iVar5;
  ushort *puVar6;
  void *pvVar6;
  int iVar7;
  int iVar4;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar12;
  int iVar13;
  char *pcVar14;
  char *pcVar15;
  InternalExceptionFrame local_58;
  uint local_14;
  STT3DSprC *local_c;
  int local_8;
  char *pcVar15_mg1;
  char *pcVar15_mg0;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_c = this;

  local_EAX_35 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  this_00 = local_c;
  if (local_EAX_35 != 0) {
    g_currentExceptionFrame = local_58.previous;

    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\Tspr3d.cpp"),0x3b,0,local_EAX_35,
                               st::mutable_c_string("%s"),"STT3DSprC::LoadSequence");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    return -1;
  }
  if (local_c->field_0018 == 0xffffffff) {
    st::fn_006A5E40
              (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\Tspr3d.cpp"),0x22);
  }
  if (((char)param_1 < '\0') || (this_00->field_0014 + -1 < (int)(char)param_1)) {
    st::fn_006A5E40
              (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\Tspr3d.cpp"),0x23);
  }
  local_14 = (uint)(char)param_1;
  iVar13 = local_14 * 0x24;
  local_8 = iVar13;
  if (*(int *)(&this_00->field_0020->field_0x0 + iVar13) != 0) {
    /* ST_CALLSITE[004AB914]: CALL 0x0040498a; direct=0040498A STT3DSprC::UnLoadSequence */
    iVar5 = st::fn_0040498A(this_00,param_1);
    if (iVar5 != 0) {
      st::fn_006A5E40
                (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\Tspr3d.cpp"),0x24);
    }
  }
  puVar6 = st::fn_00709AF0
                     (param_2,param_4,text,0xffffffff,0,1,0,nullptr);
  *(ushort **)(&this_00->field_0020->field_0x0 + iVar13) = puVar6;
  iVar5 = **(int **)(&this_00->field_0020->field_0x0 + iVar13);

  pvVar6 = st::fn_006AAC70(iVar5 * 4);
  *(void **)(&this_00->field_0020->field_0x4 + iVar13) = pvVar6;
  iVar7 = 0;
  if (0 < iVar5) {
    do {
      piVar8 = reinterpret_cast<int *>((&this_00->field_0020->field_0x0 + iVar13));
      iVar7 = iVar7 + 1;
      *(undefined4 *)(piVar8[1] + -4 + iVar7 * 4) = *(undefined4 *)(*piVar8 + 0x2d + iVar7 * 4);
    } while (iVar7 < iVar5);
  }
  uVar9 = 0xffffffff;
  pcVar15_mg0 = text;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar3 = *pcVar15_mg0;
    pcVar15_mg0 = pcVar15_mg0 + 1;
  } while (cVar3 != '\0');

  pvVar6 = st::fn_006AAC70(~uVar9);
  uVar9 = local_14;
  *(void **)(&this_00->field_0020->field_0x8 + iVar13) = pvVar6;
  uVar10 = 0xffffffff;
  do {
    pcVar15_mg1 = text;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar15_mg1 = text + 1;
    cVar3 = *text;
    text = pcVar15_mg1;
  } while (cVar3 != '\0');
  uVar10 = ~uVar10;
  pcVar14 = pcVar15_mg1 + -uVar10;
  pcVar15 = *(char **)(&this_00->field_0020->field_0x8 + local_8);
  memmove(pcVar15, pcVar14, uVar10); /* compiler REP MOVS byte copy */
  (&this_00->field_0020->field_0xc)[local_8] = param_4;
  *(undefined4 *)(&this_00->field_0020->field_0x18 + local_8) = 0;
  *(undefined4 *)(&this_00->field_0020->field_0x10 + local_8) = 0;
  puVar12 = reinterpret_cast<uint *>((&this_00->field_0020->field_0x0 + local_8));
  puVar12[5] = *(int *)*puVar12 + -1;
  *(undefined4 *)(&this_00->field_0020->field_0x20 + local_8) = 0;
  piVar8 = *(int **)(&this_00->field_0020->field_0x0 + local_8);

  st::fn_006E98E0
            (this_00->field_003C,this_00->field_0018,local_14,*piVar8,STField<int>(piVar8,0x21),0
            );
  puVar1 = reinterpret_cast<ushort *>((&this_00->field_0020->field_0xe + local_8));
  *puVar1 = *puVar1 & 0xfe37;
  pbVar2 = &this_00->field_0020->field_0xe + local_8;
  *pbVar2 = *pbVar2 | 0x20;
  this_00->field_001C = this_00->field_001C & ~(1 << ((byte)uVar9 & 0x1f));
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

// 004ABB30 STT3DSprC::UnLoadSequence
#line 4 "decomp/ST.exe/functions/004ABB30/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tspr3d.cpp
   STT3DSprC::UnLoadSequence */

undefined4 __thiscall st::fn_004ABB30(STT3DSprC *this,byte param_1)

{
  int *slotStorage;
  STT3DSprC *pSVar2;
  int local_EAX_35;
  int iVar3;
  uint uVar3;
  int iVar4;
  InternalExceptionFrame local_4c;
  STT3DSprC *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  local_EAX_35 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pSVar2 = local_8;
  if (local_EAX_35 != 0) {
    g_currentExceptionFrame = local_4c.previous;

    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\Tspr3d.cpp"),0x58,0,local_EAX_35,
                               st::mutable_c_string("%s"),"STT3DSprC::UnLoadSequence");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    return 0xffffffff;
  }
  if (local_8->field_0018 == 0xffffffff) {
    st::fn_006A5E40
              (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\Tspr3d.cpp"),0x49);
  }
  if (((char)param_1 < '\0') || (pSVar2->field_0014 + -1 < (int)(char)param_1)) {
    st::fn_006A5E40
              (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\Tspr3d.cpp"),0x4a);
  }
  if (pSVar2->field_0020 != nullptr) {
    iVar4 = (char)param_1 * 0x24;
    if (*(int *)(&pSVar2->field_0020->field_0x0 + iVar4) != 0) {

      st::fn_006E98E0(pSVar2->field_003C,pSVar2->field_0018,(int)(char)param_1,0,0,1);
      slotStorage = reinterpret_cast<int *>((&pSVar2->field_0020->field_0x4 + iVar4));
      pSVar2->field_001C = pSVar2->field_001C & ~(1 << (param_1 & 0x1f));
      if (*slotStorage != 0) {
        st::fn_006AB060(slotStorage);
      }
      if (*(int *)(&pSVar2->field_0020->field_0x8 + iVar4) != 0) {
        st::fn_006AB060(&pSVar2->field_0020->field_0x8 + iVar4);
      }
      *(undefined4 *)(&pSVar2->field_0020->field_0x0 + iVar4) = 0;
      (&pSVar2->field_0020->field_0xc)[iVar4] = 0;
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
  }
  g_currentExceptionFrame = local_4c.previous;
  return 0xffffffff;
}

// 004ABE40 STT3DSprC::SetCurFase
#line 4 "decomp/ST.exe/functions/004ABE40/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tspr3d.cpp
   STT3DSprC::SetCurFase

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00643E20 -> 004ABE40 @ 00644070 | 00643E20 -> 004ABE40 @ 006440B4 | 00643E20 ->
   004ABE40 @ 00644202 | 00643E20 -> 004ABE40 @ 00644246
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (4), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=0041F3B0 @ 0041F45F -> killed on
   every CFG path | 0041F3B0 @ 0041F50C -> killed on every CFG path | 0041F3B0 @ 0041F53A -> killed
   on every CFG path | 0041F3B0 @ 0041F592 -> killed on every CFG path | 0044EE30 @ 0044FFCB ->
   killed on every CFG path | 0044EE30 @ 00450047 -> killed on every CFG path | 0044EE30 @ 00450054
   -> killed on every CFG path | 0044EE30 @ 004500F4 -> killed on every CFG path | 00480600 @
   00480750 -> killed on every CFG path | 00480600 @ 00480762 -> killed on every CFG path | 00480600
   @ 00480858 -> killed on every CFG path | 00480600 @ 0048086A -> killed on every CFG path |
   00480600 @ 00480F73 -> killed on every CFG path | 00480600 @ 00480F7D -> killed on every CFG path
   | 004B9FA0 @ 004BA587 -> killed on every CFG path | 004B9FA0 @ 004BA591 -> killed on every CFG
   path | 004C6210 @ 004C6357 -> killed on every CFG path | 004C6440 @ 004C6678 -> killed on every
   CFG path | 004C6440 @ 004C676F -> killed on every CFG path | 004C9770 @ 004C9CCB -> killed on
   every CFG path | 004C9770 @ 004C9DDE -> killed on every CFG path | 004C9770 @ 004C9F20 -> killed
   on every CFG path | 004C9770 @ 004CA088 -> killed on every CFG path | 004CA3C0 @ 004CA4F0 ->
   killed on every CFG path */

int __thiscall st::fn_004ABE40(STT3DSprC *this,char param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar5;
  int iVar4;
  int *piVar6;

  if (this->field_0018 != 0xffffffff) {
    if ((param_1 < '\0') || (this->field_0014 + -1 < (int)param_1)) {

      iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\Tspr3d.cpp"),0x93,0,0,st::mutable_c_string("%s"),
                                 "STT3DSprC::SetCurFase wrong level");
      if (iVar4 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    else {
      iVar5 = param_1 * 0x24;
      piVar6 = reinterpret_cast<int *>((&this->field_0020->field_0x0 + iVar5));
      piVar1 = (int *)*piVar6;
      if (piVar1 != nullptr) {
        iVar2 = piVar6[6];
        if ((-1 < iVar2) && (iVar2 < *piVar1)) {
          *(undefined4 *)(piVar6[1] + iVar2 * 4) = *(undefined4 *)((int)piVar1 + iVar2 * 4 + 0x31);
        }
        *(uint *)(&this->field_0020->field_0x18 + iVar5) = param_2;
        return 0;
      }
    }
  }
  return -1;
}

// 004ABF00 STT3DSprC::SetCurShad
#line 4 "decomp/ST.exe/functions/004ABF00/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tspr3d.cpp
   STT3DSprC::SetCurShad

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00623170 -> 004ABF00 @ 006232E4 | 00623600 -> 004ABF00 @ 00623867
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=0044EE30 @ 0045018E -> killed on
   every CFG path | 00480600 @ 004807A5 -> read as EAX on every CFG path | 00480600 @ 004808A5 ->
   read as EAX on every CFG path | 00480600 @ 00480FDB -> read as EAX on every CFG path | 0057CD70 @
   0057D08C -> killed on every CFG path | 0057CD70 @ 0057D12D -> killed on every CFG path | 0057CD70
   @ 0057D25D -> killed on every CFG path | 005825C0 @ 00582FA3 -> killed on every CFG path |
   0058A9E0 @ 0058AE21 -> killed on every CFG path | 0058E570 @ 0058E9DA -> killed on every CFG path
   | 005EC9F0 @ 005ECB1B -> killed on every CFG path | 005EF5F0 @ 005EF670 -> killed on every CFG
   path | 005FA0B0 @ 005FA138 -> killed on every CFG path | 00623170 @ 006232E4 -> killed on every
   CFG path | 00623600 @ 00623867 -> killed on every CFG path */

int __thiscall st::fn_004ABF00(STT3DSprC *this,char param_1,uint param_2)

{
  STT3DSprC *pSVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  code *pcVar5;
  InternalExceptionFrame local_4c;
  STT3DSprC *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pSVar1 = local_8;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_4c.previous;

    iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\Tspr3d.cpp"),0xac,0,iVar2,st::mutable_c_string("%s"),
                               "STT3DSprC::SetCurShad");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    return -1;
  }
  if (local_8->field_0018 == 0xffffffff) {
    st::fn_006A5E40
              (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\Tspr3d.cpp"),0xa5);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(*(int *)(&pSVar1->field_0020->field_0x0 + param_1 * 0x24) + 0x29) != 0) {
    pSVar1->field_0013 = param_1;
    pSVar1->field_0030 = param_2;
    if (pSVar1->field_0011 == '\0') {
      if (pSVar1->field_0010 == '\0') {
        puVar4 = pSVar1->field_0034;
        uVar3 = pSVar1->field_0018;
        pcVar5 = st::function_address_boundary_cast<code *>(st::fn_004AD6C0);
      }
      else {
        puVar4 = pSVar1->field_0034;
        uVar3 = pSVar1->field_0018;
        pcVar5 = st::function_address_boundary_cast<code *>(st::fn_004AD740);
      }
      st::fn_006E9520
                (pSVar1->field_003C,uVar3,st::machine_word_boundary_cast<uint>(puVar4),st::machine_word_boundary_cast<uint>(pcVar5),st::machine_word_boundary_cast<uint>(pSVar1));
    }
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  return 0;
}

// 004AC040 STT3DSprC::ShowCurFase
#line 4 "decomp/ST.exe/functions/004AC040/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tspr3d.cpp
   STT3DSprC::ShowCurFase
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (10), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=0041F3B0 @ 0041F468 -> killed on
   every CFG path | 0041F3B0 @ 0041F515 -> killed on every CFG path | 0041F3B0 @ 0041F543 -> killed
   on every CFG path | 0041F3B0 @ 0041F59B -> unknown: terminal before explicit accumulator kill |
   00480600 @ 0048076B -> read as EAX on every CFG path | 00480600 @ 00480782 -> read as EAX on
   every CFG path | 00480600 @ 00480873 -> read as EAX on every CFG path | 00480600 @ 0048088A ->
   read as EAX on every CFG path | 00480600 @ 00480F86 -> read as EAX on every CFG path | 00480600 @
   00480F9D -> read as EAX on every CFG path | 00579350 @ 0057968E -> killed on every CFG path |
   00579350 @ 005796AD -> killed on every CFG path | 0057CD70 @ 0057D289 -> killed on every CFG path
   | 005825C0 @ 00582FAC -> killed on every CFG path | 005825C0 @ 00582FB5 -> killed on every CFG
   path | 0058A9E0 @ 0058AE2A -> killed on every CFG path | 0058BD90 @ 0058C399 -> killed on every
   CFG path | 0058E570 @ 0058E9E3 -> killed on every CFG path | 005EF5F0 @ 005EF679 -> unknown:
   terminal before explicit accumulator kill | 005F9E40 @ 005F9E69 -> killed on every CFG path |
   005FA0B0 @ 005FA141 -> unknown: terminal before explicit accumulator kill | 00600750 @ 00600B81
   -> killed on every CFG path | 00600750 @ 00600C55 -> killed on every CFG path | 00600750 @
   00600C68 -> killed on every CFG path */

int __thiscall st::fn_004AC040(STT3DSprC *this,char param_1)

{
  STT3DSprC *pSVar2;
  int local_EAX_35;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_4c;
  STT3DSprC *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  local_EAX_35 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pSVar2 = local_8;
  if (local_EAX_35 == 0) {
    if (local_8->field_0018 == 0xffffffff) {
      st::fn_006A5E40
                (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\Tspr3d.cpp"),0xba);
    }
    if ((param_1 < '\0') || (pSVar2->field_0014 + -1 < (int)param_1)) {
      st::fn_006A5E40
                (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\Tspr3d.cpp"),0xbb);
    }
    iVar4 = param_1 * 0x24;
    if (*(int *)(&pSVar2->field_0020->field_0x0 + iVar4) == 0) {
      st::fn_006A5E40
                (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\Tspr3d.cpp"),0xbc);
    }
    st::fn_006EA270
              (pSVar2->field_003C,pSVar2->field_0018,(int)param_1,
               *(uint *)(&pSVar2->field_0020->field_0x18 + iVar4));
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\Tspr3d.cpp"),0xbf,0,local_EAX_35,
                             st::mutable_c_string("%s"),"STT3DSprC::ShowCurFase");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  return -1;
}

// 004AC1A0 STT3DSprC::StartShow
#line 4 "decomp/ST.exe/functions/004AC1A0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tspr3d.cpp
   STT3DSprC::StartShow

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0041E530 -> 004AC1A0 @ 0041EEF5; /STPlaySystemC+0xe4 | 0041E530 -> 004AC1A0 @ 0041EF0B;
   /STPlaySystemC+0xe4 | 0041E530 -> 004AC1A0 @ 0041EF9E; /STPlaySystemC+0xe4 | 0041E530 -> 004AC1A0
   @ 0041EFB3; /STPlaySystemC+0xe4 | 00420340 -> 004AC1A0 @ 004207A6; /STPlaySystemC+0xe4 | 00420340
   -> 004AC1A0 @ 004207BC; /STPlaySystemC+0xe4 | 00420340 -> 004AC1A0 @ 00420809;
   /STPlaySystemC+0xe4 | 00420340 -> 004AC1A0 @ 0042081E; /STPlaySystemC+0xe4 | 00420AE0 -> 004AC1A0
   @ 00420DCB; /STPlaySystemC+0xe4 | 00420AE0 -> 004AC1A0 @ 00420E21; /STPlaySystemC+0xe4 | 0044EE30
   -> 004AC1A0 @ 0045008B; /STPlaySystemC+0xe4 | 0044EE30 -> 004AC1A0 @ 004500A1;
   /STPlaySystemC+0xe4 | 0044EE30 -> 004AC1A0 @ 004500E4; /STPlaySystemC+0xe4 | 0044EE30 -> 004AC1A0
   @ 00450226; /STPlaySystemC+0xe4 | 0044EE30 -> 004AC1A0 @ 00450AE3; /STPlaySystemC+0xe4 | 0044EE30
   -> 004AC1A0 @ 00450D97; /STPlaySystemC+0xe4 | 0044EE30 -> 004AC1A0 @ 00450E43;
   /STPlaySystemC+0xe4 | 0044EE30 -> 004AC1A0 @ 0045103C; /STPlaySystemC+0xe4 | 004B8C80 -> 004AC1A0
   @ 004B9652; /STPlaySystemC+0xe4 | 004C9770 -> 004AC1A0 @ 004C9DF4; /STPlaySystemC+0xe4 | 004C9770
   -> 004AC1A0 @ 004C9E3F; /STPlaySystemC+0xe4 | 004C9770 -> 004AC1A0 @ 004C9EF1;
   /STPlaySystemC+0xe4 | 004CA7B0 -> 004AC1A0 @ 004CAABB; /STPlaySystemC+0xe4 | 004CC370 -> 004AC1A0
   @ 004CC62D; /STPlaySystemC+0xe4 | 004D0310 -> 004AC1A0 @ 004D0526; /STPlaySystemC+0xe4 | 004D0310
   -> 004AC1A0 @ 004D0540; /STPlaySystemC+0xe4 | 004D0310 -> 004AC1A0 @ 004D0597;
   /STPlaySystemC+0xe4 | 004D0670 -> 004AC1A0 @ 004D07A8; /STPlaySystemC+0xe4 | 004D0670 -> 004AC1A0
   @ 004D07C2; /STPlaySystemC+0xe4 | 004D0670 -> 004AC1A0 @ 004D0816; /STPlaySystemC+0xe4 | 004D11D0
   -> 004AC1A0 @ 004D1E48; /STPlaySystemC+0xe4 | 004D11D0 -> 004AC1A0 @ 004D1E64;
   /STPlaySystemC+0xe4 | 004D11D0 -> 004AC1A0 @ 004D1F79; /STPlaySystemC+0xe4 | 004D11D0 -> 004AC1A0
   @ 004D1FD1; /STPlaySystemC+0xe4 | 004D11D0 -> 004AC1A0 @ 004D20FD; /STPlaySystemC+0xe4 | 004D32C0
   -> 004AC1A0 @ 004D3360; /STPlaySystemC+0xe4 | 004D32C0 -> 004AC1A0 @ 004D33F0;
   /STPlaySystemC+0xe4 | 004D32C0 -> 004AC1A0 @ 004D35DF; /STPlaySystemC+0xe4 | 004D32C0 -> 004AC1A0
   @ 004D361E; /STPlaySystemC+0xe4 | 004D32C0 -> 004AC1A0 @ 004D36C6; /STPlaySystemC+0xe4 | 004D32C0
   -> 004AC1A0 @ 004D3755; /STPlaySystemC+0xe4 | 004D32C0 -> 004AC1A0 @ 004D3BA8;
   /STPlaySystemC+0xe4 | 004D32C0 -> 004AC1A0 @ 004D3C9B; /STPlaySystemC+0xe4 | 004D32C0 -> 004AC1A0
   @ 004D3D1D; /STPlaySystemC+0xe4 | 004D32C0 -> 004AC1A0 @ 004D3D75; /STPlaySystemC+0xe4 | 004D32C0
   -> 004AC1A0 @ 004D3E9D; /STPlaySystemC+0xe4 | 004D32C0 -> 004AC1A0 @ 004D3F33;
   /STPlaySystemC+0xe4 | 004D32C0 -> 004AC1A0 @ 004D4096; /STPlaySystemC+0xe4 | 004D32C0 -> 004AC1A0
   @ 004D4301; /STPlaySystemC+0xe4 | 004D32C0 -> 004AC1A0 @ 004D4B70; /STPlaySystemC+0xe4 | 004D32C0
   -> 004AC1A0 @ 004D4D3E; /STPlaySystemC+0xe4 | 004D55B0 -> 004AC1A0 @ 004D571A;
   /STPlaySystemC+0xe4 | 004D55B0 -> 004AC1A0 @ 004D5737; /STPlaySystemC+0xe4 | 004D55B0 -> 004AC1A0
   @ 004D580F; /STPlaySystemC+0xe4 | 004D55B0 -> 004AC1A0 @ 004D58A2; /STPlaySystemC+0xe4 | 004D55B0
   -> 004AC1A0 @ 004D58E1; /STPlaySystemC+0xe4 | 004D55B0 -> 004AC1A0 @ 004D5957;
   /STPlaySystemC+0xe4 | 004D55B0 -> 004AC1A0 @ 004D59D9; /STPlaySystemC+0xe4 | 004D55B0 -> 004AC1A0
   @ 004D5C09; /STPlaySystemC+0xe4 | 004D55B0 -> 004AC1A0 @ 004D5F6A; /STPlaySystemC+0xe4 | 004D55B0
   -> 004AC1A0 @ 004D6000; /STPlaySystemC+0xe4 | 004D9000 -> 004AC1A0 @ 004D9199;
   /STPlaySystemC+0xe4 | 004D9C80 -> 004AC1A0 @ 004D9E25; /STPlaySystemC+0xe4 | 004DCE00 -> 004AC1A0
   @ 004DCF2D; /STPlaySystemC+0xe4 | 004E04A0 -> 004AC1A0 @ 004E06B7; /STPlaySystemC+0xe4 | 004E3910
   -> 004AC1A0 @ 004E3E9D; /STPlaySystemC+0xe4 | 004EAA20 -> 004AC1A0 @ 004EABDF;
   /STPlaySystemC+0xe4 | 004EC0F0 -> 004AC1A0 @ 004EC223; /STPlaySystemC+0xe4 | 004EC2A0 -> 004AC1A0
   @ 004EC38B; /STPlaySystemC+0xe4 | 004ECEA0 -> 004AC1A0 @ 004ED04C; /STPlaySystemC+0xe4 | 00578630
   -> 004AC1A0 @ 00578B95; /STPlaySystemC+0xe4 | 00578630 -> 004AC1A0 @ 00578BAB;
   /STPlaySystemC+0xe4 | 0057BF60 -> 004AC1A0 @ 0057C358; /STPlaySystemC+0xe4 | 0057BF60 -> 004AC1A0
   @ 0057C63B; /STPlaySystemC+0xe4 | 0057F6E0 -> 004AC1A0 @ 0057F830; /STPlaySystemC+0xe4 | 0057F6E0
   -> 004AC1A0 @ 0057F85C; /STPlaySystemC+0xe4 | 0057F6E0 -> 004AC1A0 @ 0057F9E6;
   /STPlaySystemC+0xe4 | 0057F6E0 -> 004AC1A0 @ 0057FA12; /STPlaySystemC+0xe4 | 0057F6E0 -> 004AC1A0
   @ 0057FBB2; /STPlaySystemC+0xe4 | 0057F6E0 -> 004AC1A0 @ 0057FBDE; /STPlaySystemC+0xe4 | 005805C0
   -> 004AC1A0 @ 00580624; /STPlaySystemC+0xe4 | 005805C0 -> 004AC1A0 @ 005806A6;
   /STPlaySystemC+0xe4 | 005825C0 -> 004AC1A0 @ 00582DC0; /STPlaySystemC+0xe4 | 00583270 -> 004AC1A0
   @ 005836EB; /STPlaySystemC+0xe4 | 00583270 -> 004AC1A0 @ 0058370A; /STPlaySystemC+0xe4 | 00584380
   -> 004AC1A0 @ 005843BD; /STPlaySystemC+0xe4 | 00584380 -> 004AC1A0 @ 00584402;
   /STPlaySystemC+0xe4 | 00585020 -> 004AC1A0 @ 00585231; /STPlaySystemC+0xe4 | 005859A0 -> 004AC1A0
   @ 00585C39; /STPlaySystemC+0xe4 | 00586AF0 -> 004AC1A0 @ 00586D13; /STPlaySystemC+0xe4 | 00588BC0
   -> 004AC1A0 @ 00589072; /STPlaySystemC+0xe4 | 00589740 -> 004AC1A0 @ 0058977D;
   /STPlaySystemC+0xe4 | 00589740 -> 004AC1A0 @ 005897C2; /STPlaySystemC+0xe4 | 00589C10 -> 004AC1A0
   @ 0058A02C; /STPlaySystemC+0xe4 | 0058BD90 -> 004AC1A0 @ 0058C04D; /STPlaySystemC+0xe4 | 0058C760
   -> 004AC1A0 @ 0058CA08; /STPlaySystemC+0xe4 | 0058D7C0 -> 004AC1A0 @ 0058DAE2;
   /STPlaySystemC+0xe4 | 0058D7C0 -> 004AC1A0 @ 0058DF13; /STPlaySystemC+0xe4 | 0058E570 -> 004AC1A0
   @ 0058E906; /STPlaySystemC+0xe4 | 005EC9F0 -> 004AC1A0 @ 005ECAF8; /STPlaySystemC+0xe4 | 005EC9F0
   -> 004AC1A0 @ 005ECB8E; /STPlaySystemC+0xe4 | 005EC9F0 -> 004AC1A0 @ 005ECC35;
   /STPlaySystemC+0xe4 | 005EC9F0 -> 004AC1A0 @ 005ECC5A; /STPlaySystemC+0xe4 | 005EE6E0 -> 004AC1A0
   @ 005EED6D; /STPlaySystemC+0xe4 | 005F6AF0 -> 004AC1A0 @ 005F6B82; /STPlaySystemC+0xe4 | 005F6AF0
   -> 004AC1A0 @ 005F6BD9; /STPlaySystemC+0xe4 | 005F6AF0 -> 004AC1A0 @ 005F6CAB;
   /STPlaySystemC+0xe4 | 005F6AF0 -> 004AC1A0 @ 005F6CD0; /STPlaySystemC+0xe4 | 005F6F60 -> 004AC1A0
   @ 005F8125; /STPlaySystemC+0xe4 | 005FDB50 -> 004AC1A0 @ 005FDC98; /STPlaySystemC+0xe4 | 005FDB50
   -> 004AC1A0 @ 005FDCC2; /STPlaySystemC+0xe4 | 005FDB50 -> 004AC1A0 @ 005FDF6E;
   /STPlaySystemC+0xe4 | 00600750 -> 004AC1A0 @ 00600B6C; /STPlaySystemC+0xe4 | 006029C0 -> 004AC1A0
   @ 00602A6C; /STPlaySystemC+0xe4 | 006029C0 -> 004AC1A0 @ 00602AF0; /STPlaySystemC+0xe4 | 006051B0
   -> 004AC1A0 @ 00605286; /STPlaySystemC+0xe4 | 006051B0 -> 004AC1A0 @ 00605471;
   /STPlaySystemC+0xe4 | 006101B0 -> 004AC1A0 @ 00611D83; /STPlaySystemC+0xe4 | 006132F0 -> 004AC1A0
   @ 006134A0; /STPlaySystemC+0xe4 | 006132F0 -> 004AC1A0 @ 00613536; /STPlaySystemC+0xe4 | 006132F0
   -> 004AC1A0 @ 00613581; /STPlaySystemC+0xe4 | 00623170 -> 004AC1A0 @ 0062323B;
   /STPlaySystemC+0xe4 | 00623170 -> 004AC1A0 @ 006232C5; /STPlaySystemC+0xe4 | 00623170 -> 004AC1A0
   @ 00623350; /STPlaySystemC+0xe4 | 00623170 -> 004AC1A0 @ 006233D2; /STPlaySystemC+0xe4 | 00623170
   -> 004AC1A0 @ 00623441; /STPlaySystemC+0xe4 | 0062F0D0 -> 004AC1A0 @ 0062F106;
   /STPlaySystemC+0xe4 | 00638CA0 -> 004AC1A0 @ 006390B2; /STPlaySystemC+0xe4 | 00639990 -> 004AC1A0
   @ 00639A06; /STPlaySystemC+0xe4 | 00639990 -> 004AC1A0 @ 00639A23; /STPlaySystemC+0xe4 | 00639990
   -> 004AC1A0 @ 00639B4D; /STPlaySystemC+0xe4 | 00639C90 -> 004AC1A0 @ 00639DEA;
   /STPlaySystemC+0xe4 | 00639C90 -> 004AC1A0 @ 00639ED9; /STPlaySystemC+0xe4 | 00639C90 -> 004AC1A0
   @ 0063A29B; /STPlaySystemC+0xe4 | 00639C90 -> 004AC1A0 @ 0063B424; /STPlaySystemC+0xe4 | 00639C90
   -> 004AC1A0 @ 0063B634; /STPlaySystemC+0xe4 | 00639C90 -> 004AC1A0 @ 0063B6BF;
   /STPlaySystemC+0xe4 | 006406D0 -> 004AC1A0 @ 00640F07; /STPlaySystemC+0xe4 | 006406D0 -> 004AC1A0
   @ 00642666; /STPlaySystemC+0xe4 | 006406D0 -> 004AC1A0 @ 006426A4; /STPlaySystemC+0xe4 | 006406D0
   -> 004AC1A0 @ 006428A3; /STPlaySystemC+0xe4 | 006406D0 -> 004AC1A0 @ 00642F98;
   /STPlaySystemC+0xe4
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=0041E530 @ 0041EEF5 -> killed on
   every CFG path | 0041E530 @ 0041EF0B -> killed on every CFG path | 0041E530 @ 0041EF9E -> killed
   on every CFG path | 0041E530 @ 0041EFB3 -> killed on every CFG path | 00420340 @ 004207A6 ->
   killed on every CFG path | 00420340 @ 004207BC -> unknown: terminal before explicit accumulator
   kill | 00420340 @ 00420809 -> killed on every CFG path | 00420340 @ 0042081E -> unknown: terminal
   before explicit accumulator kill | 00420AE0 @ 00420DCB -> killed on every CFG path | 00420AE0 @
   00420E21 -> unknown: terminal before explicit accumulator kill | 0044EE30 @ 0045008B -> killed on
   every CFG path | 0044EE30 @ 004500A1 -> killed on every CFG path | 0044EE30 @ 004500E4 -> killed
   on every CFG path | 0044EE30 @ 00450226 -> killed on every CFG path | 0044EE30 @ 00450AE3 ->
   killed on every CFG path | 0044EE30 @ 00450D97 -> killed on every CFG path | 0044EE30 @ 00450E43
   -> killed on every CFG path | 0044EE30 @ 0045103C -> killed on every CFG path | 004ADBA0 @
   004ADD78 -> killed on every CFG path | 004B8C80 @ 004B9652 -> killed on every CFG path | 004C6210
   @ 004C636A -> killed on every CFG path | 004C6440 @ 004C668A -> killed on every CFG path |
   004C6440 @ 004C6781 -> killed on every CFG path | 004C9770 @ 004C9CDD -> killed on every CFG path
    */

int __thiscall st::fn_004AC1A0(STT3DSprC *this,byte param_1,uint param_2)

{
  STT3DSprC *pSVar1;
  int local_EAX_35;
  int *piVar2;
  int iVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  InternalExceptionFrame local_50;
  uint local_c;
  STT3DSprC *local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;

  local_EAX_35 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  pSVar1 = local_8;
  if (local_EAX_35 != 0) {
    g_currentExceptionFrame = local_50.previous;

    iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\Tspr3d.cpp"),0xf1,0,local_EAX_35,
                               st::mutable_c_string("%s"),"STT3DSprC::StartShow");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    return -1;
  }
  if (local_8->field_0018 == 0xffffffff) {
    st::fn_006A5E40
              (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\Tspr3d.cpp"),0xce);
  }
  if (((char)param_1 < '\0') || (pSVar1->field_0014 + -1 < (int)(char)param_1)) {
    st::fn_006A5E40
              (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\Tspr3d.cpp"),0xcf);
  }
  uVar4 = (uint)(char)param_1;
  iVar3 = uVar4 * 0x24;
  if (*(int *)(&pSVar1->field_0020->field_0x0 + iVar3) == 0) {
    st::fn_006A5E40
              (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\Tspr3d.cpp"),0xd0);
  }
  local_c = 1 << (param_1 & 0x1f);
  if ((pSVar1->field_001C & local_c) != 0) {
    st::fn_006A5E40
              (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\Tspr3d.cpp"),0xd1);
  }
  st::fn_006E9CB0(pSVar1->field_003C,(uint *)pSVar1->field_0018,uVar4);
  pSVar1->field_001C = pSVar1->field_001C | local_c;
  if (*(int *)(&pSVar1->field_0020->field_0x20 + iVar3) == 0) {
    st::fn_006EA270
              (pSVar1->field_003C,pSVar1->field_0018,uVar4,
               *(uint *)(&pSVar1->field_0020->field_0x18 + iVar3));
  }
  else {
    st::fn_006E9D40(pSVar1->field_003C,(uint *)pSVar1->field_0018,uVar4);
  }
  if (pSVar1->field_0012 == '\0') {

    st::fn_006EAAA0(pSVar1->field_003C,pSVar1->field_0018,0);
  }
  if (pSVar1->field_0011 == '\0') {
    if (pSVar1->field_0010 == '\0') {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)(*(int *)(&pSVar1->field_0020->field_0x0 + iVar3) + 0x29) == 0)
      goto cf_common_exit_004AC330;
      pSVar1->field_0013 = param_1;
      pSVar1->field_0030 = *(undefined4 *)(&pSVar1->field_0020->field_0x18 + iVar3);
      pcVar5 = st::function_address_boundary_cast<code *>(st::fn_004AD6C0);
    }
    else {
      if ((pSVar1->field_0038 == 0) ||
         (piVar2 = reinterpret_cast<int *>((&pSVar1->field_0020->field_0x0 + iVar3)), *(int *)(*piVar2 + 0x29) == 0))
      goto cf_common_exit_004AC330;
      pSVar1->field_0013 = param_1;
      pSVar1->field_0030 = piVar2[6];
      pcVar5 = st::function_address_boundary_cast<code *>(st::fn_004AD740);
    }
    st::fn_006E9520
              (pSVar1->field_003C,pSVar1->field_0018,(uint)pSVar1->field_0034,st::machine_word_boundary_cast<uint>(pcVar5),
               st::machine_word_boundary_cast<uint>(pSVar1));
  }
cf_common_exit_004AC330:
  *(uint *)(&pSVar1->field_0020->field_0x1c + iVar3) = param_2;
  g_currentExceptionFrame = local_50.previous;
  return 0;
}

// 004AC410 STT3DSprC::StopShow
#line 4 "decomp/ST.exe/functions/004AC410/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tspr3d.cpp
   STT3DSprC::StopShow */

undefined4 __thiscall st::fn_004AC410(STT3DSprC *this,byte param_1)

{
  STT3DSprC *pSVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  InternalExceptionFrame local_4c;
  STT3DSprC *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pSVar2 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;

    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\Tspr3d.cpp"),0x10e,0,iVar3,st::mutable_c_string("%s"),
                               "STT3DSprC::StopShow");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    return 0xffffffff;
  }
  if (local_8->field_0018 == 0xffffffff) {
    st::fn_006A5E40
              (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\Tspr3d.cpp"),0xff);
  }
  if (((char)param_1 < '\0') || (pSVar2->field_0014 + -1 < (int)(char)param_1)) {
    st::fn_006A5E40
              (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\Tspr3d.cpp"),0x100);
  }
  uVar5 = 1 << (param_1 & 0x1f);
  if ((uVar5 & pSVar2->field_001C) == 0) {
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  st::fn_006E9D40(pSVar2->field_003C,(uint *)pSVar2->field_0018,(int)(char)param_1);
  pSVar2->field_001C = pSVar2->field_001C & ~uVar5;
  if (param_1 == 0xe) {
    if (pSVar2->field_0011 == '\x01') {
      st::fn_00402A90(pSVar2);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    st::fn_00402A90(pSVar2);
    pSVar2->field_0011 = 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  return 0;
}

// 004AD1F0 STT3DSprC::Init
#line 4 "decomp/ST.exe/functions/004AD1F0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tspr3d.cpp
   STT3DSprC::Init

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 0057F580 -> 004AD1F0 @ 0057F632; STDcResourcC::Init this; stable alias EBX

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0041E530 -> 004AD1F0 @ 0041E9D5; data at 008073CC | 0041E530 -> 004AD1F0 @ 0041EA40;
   data at 008073CC | 004B9FA0 -> 004AD1F0 @ 004BAA63; data at 008073CC | 004B9FA0 -> 004AD1F0 @
   004BAB7D; data at 008073CC | 004C6210 -> 004AD1F0 @ 004C6275; data at 008073CC | 004C6210 ->
   004AD1F0 @ 004C62CC; data at 008073CC | 004CC220 -> 004AD1F0 @ 004CC2B1; data at 008073CC |
   004D01F0 -> 004AD1F0 @ 004D0241; data at 008073CC | 004D11D0 -> 004AD1F0 @ 004D18FC; data at
   008073CC | 004D11D0 -> 004AD1F0 @ 004D1A31; data at 008073CC | 004D11D0 -> 004AD1F0 @ 004D1B45;
   data at 008073CC | 004D11D0 -> 004AD1F0 @ 004D2153; data at 008073CC | 004D9000 -> 004AD1F0 @
   004D904B; data at 008073CC | 004D9C80 -> 004AD1F0 @ 004D9CD0; data at 008073CC | 004DCE00 ->
   004AD1F0 @ 004DCE50; data at 008073CC | 004EAA20 -> 004AD1F0 @ 004EAA70; data at 008073CC |
   004EC050 -> 004AD1F0 @ 004EC097; data at 008073CC | 004ECEA0 -> 004AD1F0 @ 004ECEEB; data at
   008073CC | 0057F580 -> 004AD1F0 @ 0057F632; data at 008073CC | 005FDB50 -> 004AD1F0 @ 005FDEC3;
   data at 008073CC | 006132F0 -> 004AD1F0 @ 0061337D; data at 008073CC | 0062F3B0 -> 004AD1F0 @
   0062F4D9; data at 008073CC
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (24), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=0041E530 @ 0041E9D5 -> read as EAX on
   every CFG path | 0041E530 @ 0041EA40 -> read as EAX on every CFG path | 004B9FA0 @ 004BAA63 ->
   read as EAX on every CFG path | 004B9FA0 @ 004BAB7D -> read as EAX on every CFG path | 004C6210 @
   004C6275 -> read as EAX on every CFG path | 004C6210 @ 004C62CC -> read as EAX on every CFG path
   | 004CC220 @ 004CC2B1 -> read as EAX on every CFG path | 004D01F0 @ 004D0241 -> read as EAX on
   every CFG path | 004D11D0 @ 004D18FC -> read as EAX on every CFG path | 004D11D0 @ 004D1A31 ->
   read as EAX on every CFG path | 004D11D0 @ 004D1B45 -> read as EAX on every CFG path | 004D11D0 @
   004D2153 -> read as EAX on every CFG path | 004D9000 @ 004D904B -> read as EAX on every CFG path
   | 004D9C80 @ 004D9CD0 -> read as EAX on every CFG path | 004DCE00 @ 004DCE50 -> read as EAX on
   every CFG path | 004EAA20 @ 004EAA70 -> read as EAX on every CFG path | 004EC050 @ 004EC097 ->
   read as EAX on every CFG path | 004ECEA0 @ 004ECEEB -> read as EAX on every CFG path | 0057F580 @
   0057F632 -> read as EAX on every CFG path | 005FDB50 @ 005FDEC3 -> read as EAX on every CFG path
   | 006051B0 @ 00605307 -> read as EAX on every CFG path | 006051B0 @ 00605356 -> read as EAX on
   every CFG path | 006132F0 @ 0061337D -> read as EAX on every CFG path | 0062F3B0 @ 0062F4D9 ->
   read as EAX on every CFG path */

int __thiscall
st::fn_004AD1F0(STT3DSprC *this,ushort *param_1,uint param_2,uint param_3,STDcResourcC *param_4,
               uint param_5,uint param_6,uint param_7)

{
  STT3DSprC *pSVar2;
  int local_EAX_34;
  AnonPointee_STT3DSprC_0020 *pAVar3;
  int iVar3;
  uint uVar4;
  int iVar5;
  InternalExceptionFrame local_4c;
  STT3DSprC *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  local_EAX_34 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pSVar2 = local_8;
  if (local_EAX_34 == 0) {
    local_8->field_0034 = param_1;
    local_8->field_0008 = param_3;
    local_8->field_0004 = param_2;
    local_8->field_0014 = param_7;

    st::fn_006E8660
              (local_8->field_003C,reinterpret_cast<int *>(&local_8->field_0018),param_7,0,param_5,param_6,param_2,
               param_3,(uint)param_4);
    /* ST_CALLSITE[004AD260]: CALL 0x006aac70; direct=006AAC70 Library::DKW::LIB::MemAlloc; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/ClassPointees/AnonPointee_STT3DSprC_0020; source view only; no Ghidra override */
    pAVar3 = static_cast<AnonPointee_STT3DSprC_0020 *>(st::fn_006AAC70(pSVar2->field_0014 * 0x24));
    pSVar2->field_0020 = pAVar3;
    for (uVar4 = pSVar2->field_0014 * 9 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pAVar3 = 0;
      pAVar3 = reinterpret_cast<AnonPointee_STT3DSprC_0020 *>(reinterpret_cast<byte *>(pAVar3) + 0x4);
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)pAVar3 = 0;
      pAVar3 = reinterpret_cast<AnonPointee_STT3DSprC_0020 *>(reinterpret_cast<byte *>(pAVar3) + 0x1);
    }
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\Tspr3d.cpp"),0x2b1,0,local_EAX_34,
                             st::mutable_c_string("%s"),"STT3DSprC::Init");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  return -1;
}

// 004AD790 STT3DSprC::SaveSpr
#line 4 "decomp/ST.exe/functions/004AD790/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tspr3d.cpp
   STT3DSprC::SaveSpr */

undefined4 * __thiscall st::fn_004AD790(STT3DSprC *this,uint *param_1)

{
  char cVar1;
  STT3DSprC *this_00;
  int local_EAX_35;
  int iVar4;
  uint uVar5;
  int iVar3;
  uint *puVar6;
  uint uVar7;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  RecoveredRecordView_004AD790_D4DB5A31 *pRVar13;
  InternalExceptionFrame local_60;
  char *local_1c;
  STT3DSprC *local_18;
  RecoveredRecordView_004AD790_D4DB5A31 *local_14;
  int local_10;
  char *local_c;
  int local_8;

  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  local_18 = this;

  local_EAX_35 = st::fn_0072D7F0(local_60.jumpBuffer,0);
  this_00 = local_18;
  if (local_EAX_35 != 0) {
    g_currentExceptionFrame = local_60.previous;

    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\Tspr3d.cpp"),0x3da,0,local_EAX_35,
                               st::mutable_c_string("%s"),"STT3DSprC::SaveSpr");
    if (iVar3 == 0) {
      return nullptr;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar10 = 0;
  *param_1 = (local_18->field_0014 + 1) * 0x24;
  if (0 < local_18->field_0014) {
    local_c = nullptr;
    do {
      /* ST_CALLSITE[004AD7E4]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
      iVar4 = st::fn_004022AC(this_00,(char)iVar10);
      uVar9 = *param_1 + iVar4 * 4;
      *param_1 = uVar9;
      pcVar11 = *(char **)(&this_00->field_0020->field_0x8 + (int)local_c);
      if (pcVar11 == nullptr) {
        *param_1 = uVar9 + 1;
      }
      else {
        uVar7 = 0xffffffff;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar1 != '\0');
        *param_1 = ~uVar7 + uVar9;
      }
      iVar10 = iVar10 + 1;
      local_c = (char *)((int)local_c + 0x24);
    } while (iVar10 < this_00->field_0014);
  }

  local_14 = static_cast<RecoveredRecordView_004AD790_D4DB5A31 *>(st::fn_006AAC70(*param_1));
  uVar9 = *param_1;
  pRVar13 = local_14;
  for (uVar7 = uVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pRVar13 = 0;
    pRVar13 = reinterpret_cast<RecoveredRecordView_004AD790_D4DB5A31 *>(reinterpret_cast<byte *>(pRVar13) + 0x4);
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined1 *)pRVar13 = 0;
    pRVar13 = reinterpret_cast<RecoveredRecordView_004AD790_D4DB5A31 *>(reinterpret_cast<byte *>(pRVar13) + 0x1);
  }
  pcVar11 = (char *)&local_14[1].field_0x4;
  *(undefined4 *)local_14 = this_00->field_0004;
  *(undefined4 *)&local_14->field_0x4 = this_00->field_0008;
  local_14->field_0x8 = this_00->field_0010;
  local_14->field_0009 = this_00->field_0011;
  local_14->field_000A = this_00->field_0012;
  local_14->field_000B = this_00->field_000C;
  local_14->field_000F = this_00->field_0014;
  local_14->field_0013 = this_00->field_0024;
  local_14->field_0017 = this_00->field_0028;
  local_14->field_001B = this_00->field_002C;
  local_14->field_001F = this_00->field_0013;
  *(undefined4 *)(local_14 + 1) = this_00->field_0030;
  local_8 = 0;
  if (0 < this_00->field_0014) {
    iVar10 = 0;
    pcVar12 = pcVar11;
    local_c = pcVar11;
    do {
      /* ST_CALLSITE[004AD8B3]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
      uVar5 = st::fn_004022AC(this_00,(char)local_8);
      *(undefined4 *)pcVar12 = uVar5;
      pcVar11 = pcVar12 + 0x24;
      pcVar12[4] = (&this_00->field_0020->field_0xc)[iVar10];
      pcVar12[5] = (byte)(this_00->field_001C >> ((byte)local_8 & 0x1f)) & 1;
      pcVar12[6] = static_cast<char>(st::machine_word_boundary_cast<uint>((&this_00->field_0020->field_0xe)[iVar10] & 1));
      pcVar12[7] = (&this_00->field_0020->field_0xd)[iVar10];
      pcVar12[8] = (byte)(&this_00->field_0020->field_0xe)[iVar10] >> 1 & 1;
      pcVar12[9] = (byte)((ushort)*(undefined2 *)(&this_00->field_0020->field_0xe + iVar10) >> 9) &
                   1;
      pcVar12[10] = (byte)(&this_00->field_0020->field_0xe)[iVar10] >> 2 & 1;
      *(undefined4 *)(pcVar12 + 0xb) = *(undefined4 *)(&this_00->field_0020->field_0x10 + iVar10);
      *(undefined4 *)(pcVar12 + 0xf) = *(undefined4 *)(&this_00->field_0020->field_0x14 + iVar10);
      *(undefined4 *)(pcVar12 + 0x13) = *(undefined4 *)(&this_00->field_0020->field_0x18 + iVar10);
      *(undefined4 *)(pcVar12 + 0x17) = *(undefined4 *)(&this_00->field_0020->field_0x1c + iVar10);
      *(undefined4 *)(pcVar12 + 0x1b) = *(undefined4 *)(&this_00->field_0020->field_0x20 + iVar10);
      pcVar12[0x1f] = (byte)(&this_00->field_0020->field_0xe)[iVar10] >> 5 & 1;
      pcVar12[0x20] = (byte)(&this_00->field_0020->field_0xe)[iVar10] >> 6 & 1;
      pcVar12[0x21] = (byte)(&this_00->field_0020->field_0xe)[iVar10] >> 7;
      pcVar12[0x22] = (byte)(&this_00->field_0020->field_0xe)[iVar10] >> 3 & 1;
      local_8 = local_8 + 1;
      pcVar12[0x23] = static_cast<char>(st::machine_word_boundary_cast<uint>((&this_00->field_0020->field_0xf)[iVar10] & 1));
      iVar10 = iVar10 + 0x24;
      pcVar12 = pcVar11;
    } while (local_8 < this_00->field_0014);
  }
  local_8 = 0;
  local_c = pcVar11;
  if (0 < this_00->field_0014) {
    local_10 = 0;
    do {
      local_1c = *(char **)(&this_00->field_0020->field_0x8 + local_10);
      if (local_1c == nullptr) {
        uVar9 = 1;
      }
      else {
        uVar9 = 0xffffffff;
        pcVar11 = local_1c;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar1 != '\0');
        uVar9 = ~uVar9;
        uVar7 = 0xffffffff;
        pcVar11 = local_1c;
        do {
          pcVar12 = pcVar11;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar12 = pcVar11 + 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar12;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        pcVar11 = pcVar12 + -uVar7;
        pcVar12 = local_c;
        memmove(pcVar12, pcVar11, uVar7); /* compiler REP MOVS byte copy */
        uVar7 = 0;
      }
      local_c = local_c + uVar9;
      local_8 = local_8 + 1;
      local_10 = local_10 + 0x24;
    } while (local_8 < this_00->field_0014);
  }
  local_8 = 0;
  if (0 < this_00->field_0014) {
    local_10 = 0;
    do {
      pcVar11 = local_c;
      /* ST_CALLSITE[004ADA3C]: CALL 0x004022ac; direct=004022AC STT3DSprC::sub_004ACD30 */
      uVar9 = st::fn_004022AC(this_00,(char)local_8);
      pcVar12 = *(char **)(&this_00->field_0020->field_0x4 + local_10);
      for (uVar7 = uVar9 & 0x3fffffff; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar11 = pcVar11 + 4;
      }
      local_10 = local_10 + 0x24;
      for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
        *pcVar11 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar11 = pcVar11 + 1;
      }
      local_c = local_c + uVar9 * 4;
      local_8 = local_8 + 1;
    } while (local_8 < this_00->field_0014);
  }
  g_currentExceptionFrame = local_60.previous;
  return (undefined4 *)local_14;
}

// 004ADBA0 STT3DSprC::RestoreSpr
#line 4 "decomp/ST.exe/functions/004ADBA0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tspr3d.cpp
   STT3DSprC::RestoreSpr

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=17, used=0), and
   decompilation contains no value return */

void __thiscall
st::fn_004ADBA0(STT3DSprC *this,int *param_1,RecoveredRecordView_004AD790_D4DB5A31 *param_2)

{
  uint32_t _local_c;

  byte *pbVar1;
  ushort *puVar2;
  char cVar3;
  STT3DSprC *this_00;
  AnonShape_004ADBA0_0D812343 *pAVar5;
  int local_EAX_35;
  int iVar6;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  InternalExceptionFrame local_68;
  STT3DSprC *local_24;
  int local_20;
  char *local_1c;
  int local_18;
  char *local_14;
  AnonShape_004ADBA0_0D812343 *local_10;
  char local_c;
  undefined3 uStack_b;
  int local_8;

  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_24 = this;

  local_EAX_35 = st::fn_0072D7F0(local_68.jumpBuffer,0);
  this_00 = local_24;
  if (local_EAX_35 != 0) {
    g_currentExceptionFrame = local_68.previous;

    iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\Tspr3d.cpp"),0x43d,0,local_EAX_35,
                               st::mutable_c_string("%s"),"STT3DSprC::RestoreSpr");
    if (iVar6 == 0) {
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  local_24->field_0004 = *(undefined4 *)param_2;
  local_24->field_0008 = *(undefined4 *)&param_2->field_0x4;
  local_24->field_0010 = param_2->field_0x8;
  local_24->field_0011 = param_2->field_0009;
  local_24->field_0012 = param_2->field_000A;
  local_24->field_000C = param_2->field_000B;
  local_24->field_0014 = param_2->field_000F;
  local_24->field_0024 = param_2->field_0013;
  local_24->field_0028 = param_2->field_0017;
  local_24->field_002C = param_2->field_001B;
  local_24->field_0013 = param_2->field_001F;
  local_24->field_0030 = *(undefined4 *)(param_2 + 1);
  local_24->field_0038 = param_1[6];
  /* ST_CALLSITE[004ADC37]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
  st::fn_004045D9(local_24,(float)local_24->field_0024,(float)local_24->field_0028,
               (float)local_24->field_002C);
  st::fn_006E9830
            (this_00->field_003C,this_00->field_0018,this_00->field_0004,this_00->field_0008);
  if (param_1[1] != 0) {
    /* ST_CALLSITE[004ADC5E]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
    st::fn_0040116D(this_00,param_1[1],param_1[2]);
  }
  if ((ushort *)param_1[3] != 0) {
    /* ST_CALLSITE[004ADC6D]: CALL 0x00405ca9; direct=00405CA9 STT3DSprC::sub_004ACEF0 */
    st::fn_00405CA9(this_00,(ushort *)param_1[3]);
  }
  if ((ushort *)param_1[4] != 0) {
    /* ST_CALLSITE[004ADC80]: CALL 0x004044ee; direct=004044EE STT3DSprC::sub_004ACF20 */
    st::fn_004044EE(this_00,(ushort *)param_1[4],param_1[5]);
  }
  local_10 = reinterpret_cast<AnonShape_004ADBA0_0D812343 *>(&param_2[1].field_0x4);
  iVar7 = this_00->field_0014;
  local_1c = (char *)((int)local_10 + iVar7 * 0x24);
  iVar10 = iVar7;
  local_14 = local_1c;
  if (0 < iVar7) {
    do {
      local_18 = iVar10;
      uVar6 = 0xffffffff;
      pcVar8 = local_14;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar3 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar3 != '\0');
      local_14 = local_14 + ~uVar6;
      local_18 = local_18 + -1;
      iVar10 = local_18;
    } while (local_18 != 0);
  }
  local_8 = 0;
  if (0 < iVar7) {
    local_18 = 0;
    do {
      iVar7 = -1;
      local_20 = 0;
      pcVar8 = local_1c;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        cVar3 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar3 != '\0');
      if (iVar7 != -2) {
        (&this_00->field_0020->field_0xc)[local_18] = local_10->field_0x4;
        /* ST_CALLSITE[004ADD18]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        st::fn_00404183(this_00,(byte)local_8,*(int **)(*param_1 + local_8 * 4),local_1c,
                     (&this_00->field_0020->field_0xc)[local_18]);
        pAVar5 = local_10;
        local_20 = *(uint *)local_10 << 2;
        pcVar8 = local_14;
        pcVar9 = *(char **)(&this_00->field_0020->field_0x4 + local_18);
        for (uVar6 = *(uint *)local_10 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
          *pcVar9 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        }
        *(undefined4 *)(&this_00->field_0020->field_0x10 + local_18) = local_10->field_000B;
        *(undefined4 *)(&this_00->field_0020->field_0x14 + local_18) = local_10->field_000F;
        *(undefined4 *)(&this_00->field_0020->field_0x18 + local_18) = local_10->field_0013;
        *(undefined4 *)(&this_00->field_0020->field_0x20 + local_18) = local_10->field_001B;
        /* ST_CALLSITE[004ADD78]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
        st::fn_00405240(this_00,(byte)local_8,local_10->field_0017);
        if (pAVar5->field_0x5 == '\0') {
          /* ST_CALLSITE[004ADD8A]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
          st::fn_00404264(this_00,(byte)local_8);
        }
      }
      iVar7 = local_18;
      if (local_10->field_0006 == '\0') {
        puVar2 = reinterpret_cast<ushort *>((&this_00->field_0020->field_0xe + local_18));
        *puVar2 = *puVar2 & 0xfffe;
      }
      else {
        pbVar1 = &this_00->field_0020->field_0xe + local_18;
        *pbVar1 = *pbVar1 | 1;
      }
      (&this_00->field_0020->field_0xd)[local_18] = local_10->field_0007;
      if (local_10->field_0x8 == '\0') {
        puVar2 = reinterpret_cast<ushort *>((&this_00->field_0020->field_0xe + local_18));
        *puVar2 = *puVar2 & 0xfffd;
      }
      else {
        pbVar1 = &this_00->field_0020->field_0xe + local_18;
        *pbVar1 = *pbVar1 | 2;
      }
      if (local_10->field_0009 == '\0') {
        puVar2 = reinterpret_cast<ushort *>((&this_00->field_0020->field_0xe + local_18));
        *puVar2 = *puVar2 & 0xfdff;
      }
      else {
        pbVar1 = &this_00->field_0020->field_0xf + local_18;
        *pbVar1 = *pbVar1 | 2;
      }
      if (local_10->field_000A == '\0') {
        puVar2 = reinterpret_cast<ushort *>((&this_00->field_0020->field_0xe + local_18));
        *puVar2 = *puVar2 & 0xfffb;
      }
      else {
        pbVar1 = &this_00->field_0020->field_0xe + local_18;
        *pbVar1 = *pbVar1 | 4;
      }
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      _local_c = CONCAT31(uStack_b,(char)local_8);
      if (local_10->field_001F == '\0') {
        /* ST_CALLSITE[004ADE3B]: CALL 0x00401bae; direct=00401BAE STT3DSprC::sub_004ACE60 */
        st::fn_00401BAE(this_00,(char)local_8);
      }
      else {

        st::fn_00403FDA(this_00,(char)local_8);
      }
      pAVar5 = local_10;
      if (((char *)local_10)[1] == '\x01') {
        /* ST_CALLSITE[004ADE56]: CALL 0x00403afd; direct=00403AFD STT3DSprC::sub_004ACF50 */
        st::fn_00403AFD(this_00,(char)_local_c);
      }
      else {
        /* ST_CALLSITE[004ADE63]: CALL 0x0040461f; direct=0040461F STT3DSprC::sub_004ACF90 */
        st::fn_0040461F(this_00,(char)_local_c);
      }
      if (pAVar5[1].field_0001 == '\x01') {
        /* ST_CALLSITE[004ADE74]: CALL 0x00403233; direct=00403233 STT3DSprC::sub_004ACFE0 */
        st::fn_00403233(this_00,(char)_local_c);
      }
      else {
        /* ST_CALLSITE[004ADE81]: CALL 0x00401951; direct=00401951 STT3DSprC::sub_004AD020 */
        st::fn_00401951(this_00,(char)_local_c);
      }
      if (pAVar5[1].field_0x2 == '\x01') {
        /* ST_CALLSITE[004ADE92]: CALL 0x00402761; direct=00402761 STT3DSprC::sub_004AD070 */
        st::fn_00402761(this_00,(byte)_local_c);
      }
      if (pAVar5[1].field_0x3 == '\0') {
        puVar2 = reinterpret_cast<ushort *>((&this_00->field_0020->field_0xe + iVar7));
        *puVar2 = *puVar2 & 0xfeff;
      }
      else {
        pbVar1 = &this_00->field_0020->field_0xf + iVar7;
        *pbVar1 = *pbVar1 | 1;
      }
      local_10 = reinterpret_cast<AnonShape_004ADBA0_0D812343 *>(&pAVar5[1].field_0x4);
      uVar6 = 0xffffffff;
      pcVar8 = local_1c;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar3 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar3 != '\0');
      local_18 = iVar7 + 0x24;
      local_1c = local_1c + ~uVar6;
      local_14 = local_14 + local_20;
      local_8 = local_8 + 1;
    } while (local_8 < this_00->field_0014);
  }
  if ((-1 < this_00->field_000C) && (iVar7 = 0, 0 < this_00->field_0014)) {
    iVar10 = 0;
    do {
      if (((&this_00->field_0020->field_0xf)[iVar10] & 1) != 0) {
        st::fn_006E93C0(this_00->field_003C,this_00->field_0018,iVar7,this_00->field_000C);
      }
      iVar7 = iVar7 + 1;
      iVar10 = iVar10 + 0x24;
    } while (iVar7 < this_00->field_0014);
  }
  g_currentExceptionFrame = local_68.previous;
  return;
}
