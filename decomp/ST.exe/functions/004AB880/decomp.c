#include "../../pseudocode_runtime.h"


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
STT3DSprC::LoadSequence
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

  local_EAX_35 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  this_00 = local_c;
  if (local_EAX_35 != 0) {
    g_currentExceptionFrame = local_58.previous;

    iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\Tspr3d.cpp",0x3b,0,local_EAX_35,
                               "%s","STT3DSprC::LoadSequence");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    return -1;
  }
  if (local_c->field_0018 == 0xffffffff) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Tspr3d.cpp",0x22);
  }
  if (((char)param_1 < '\0') || (this_00->field_0014 + -1 < (int)(char)param_1)) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Tspr3d.cpp",0x23);
  }
  local_14 = (uint)(char)param_1;
  iVar13 = local_14 * 0x24;
  local_8 = iVar13;
  if (*(int *)(&this_00->field_0020->field_0x0 + iVar13) != 0) {
    /* ST_CALLSITE[004AB914]: CALL 0x0040498a; direct=0040498A STT3DSprC::UnLoadSequence */
    iVar5 = UnLoadSequence(this_00,param_1);
    if (iVar5 != 0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Tspr3d.cpp",0x24);
    }
  }
  puVar6 = Library::Ourlib::MFRLOAD::mfRLoad
                     (param_2,param_4,text,0xffffffff,0,1,0,nullptr);
  *(ushort **)(&this_00->field_0020->field_0x0 + iVar13) = puVar6;
  iVar5 = **(int **)(&this_00->field_0020->field_0x0 + iVar13);

  pvVar6 = Library::DKW::LIB::MemAlloc(iVar5 * 4);
  *(void **)(&this_00->field_0020->field_0x4 + iVar13) = pvVar6;
  iVar7 = 0;
  if (0 < iVar5) {
    do {
      piVar8 = (int *)(&this_00->field_0020->field_0x0 + iVar13);
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

  pvVar6 = Library::DKW::LIB::MemAlloc(~uVar9);
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
  puVar12 = (undefined4 *)(&this_00->field_0020->field_0x0 + local_8);
  puVar12[5] = *(int *)*puVar12 + -1;
  *(undefined4 *)(&this_00->field_0020->field_0x20 + local_8) = 0;
  piVar8 = *(int **)(&this_00->field_0020->field_0x0 + local_8);

  ST3DSMAPContext::sub_006E98E0
            (this_00->field_003C,this_00->field_0018,local_14,*piVar8,STField<int>(piVar8,0x21),0
            );
  puVar1 = (ushort *)(&this_00->field_0020->field_0xe + local_8);
  *puVar1 = *puVar1 & 0xfe37;
  pbVar2 = &this_00->field_0020->field_0xe + local_8;
  *pbVar2 = *pbVar2 | 0x20;
  this_00->field_001C = this_00->field_001C & ~(1 << ((byte)uVar9 & 0x1f));
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

