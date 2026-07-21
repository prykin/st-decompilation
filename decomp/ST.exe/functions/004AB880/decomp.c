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
   0063B5FA */

undefined4 __thiscall
STT3DSprC::LoadSequence(STT3DSprC *this,byte param_1,int *param_2,char *text,byte param_4)

{
  byte *pbVar1;
  char cVar2;
  code *pcVar3;
  STT3DSprC *this_00;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  char *pcVar14;
  char *pcVar15;
  InternalExceptionFrame local_58;
  uint local_14;
  STT3DSprC *local_c;
  int local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  this_00 = local_c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\Tspr3d.cpp",0x3b,0,iVar4,"%s",
                               "STT3DSprC::LoadSequence");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    return 0xffffffff;
  }
  if (local_c->field_0018 == -1) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Tspr3d.cpp",0x22);
  }
  if (((char)param_1 < '\0') || (this_00->field_0014 + -1 < (int)(char)param_1)) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Tspr3d.cpp",0x23);
  }
  local_14 = (uint)(char)param_1;
  iVar4 = local_14 * 0x24;
  local_8 = iVar4;
  if (*(int *)(this_00->field_0020 + iVar4) != 0) {
    iVar5 = UnLoadSequence(this_00,param_1);
    if (iVar5 != 0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Tspr3d.cpp",0x24);
    }
  }
  puVar6 = Library::Ourlib::MFRLOAD::mfRLoad
                     (param_2,param_4,text,0xffffffff,0,1,0,(undefined4 *)0x0);
  *(ushort **)(this_00->field_0020 + iVar4) = puVar6;
  iVar5 = **(int **)(this_00->field_0020 + iVar4);
  iVar7 = Library::DKW::LIB::FUN_006aac70(iVar5 * 4);
  *(int *)(this_00->field_0020 + 4 + iVar4) = iVar7;
  iVar7 = 0;
  if (0 < iVar5) {
    do {
      piVar9 = (int *)(this_00->field_0020 + iVar4);
      iVar7 = iVar7 + 1;
      *(undefined4 *)(piVar9[1] + -4 + iVar7 * 4) = *(undefined4 *)(*piVar9 + 0x2d + iVar7 * 4);
    } while (iVar7 < iVar5);
  }
  uVar10 = 0xffffffff;
  pcVar14 = text;
  do {
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    cVar2 = *pcVar14;
    pcVar14 = pcVar14 + 1;
  } while (cVar2 != '\0');
  iVar5 = Library::DKW::LIB::FUN_006aac70(~uVar10);
  uVar10 = local_14;
  *(int *)(this_00->field_0020 + 8 + iVar4) = iVar5;
  uVar11 = 0xffffffff;
  do {
    pcVar14 = text;
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    pcVar14 = text + 1;
    cVar2 = *text;
    text = pcVar14;
  } while (cVar2 != '\0');
  uVar11 = ~uVar11;
  pcVar14 = pcVar14 + -uVar11;
  pcVar15 = *(char **)(this_00->field_0020 + 8 + local_8);
  for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar14;
    pcVar14 = pcVar14 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *pcVar15 = *pcVar14;
    pcVar14 = pcVar14 + 1;
    pcVar15 = pcVar15 + 1;
  }
  *(byte *)(this_00->field_0020 + 0xc + local_8) = param_4;
  *(undefined4 *)(this_00->field_0020 + 0x18 + local_8) = 0;
  *(undefined4 *)(this_00->field_0020 + 0x10 + local_8) = 0;
  puVar13 = (undefined4 *)(this_00->field_0020 + local_8);
  puVar13[5] = *(int *)*puVar13 + -1;
  *(undefined4 *)(this_00->field_0020 + 0x20 + local_8) = 0;
  puVar13 = *(undefined4 **)(this_00->field_0020 + local_8);
  FUN_006e98e0(this_00->field_003C,this_00->field_0018,local_14,*puVar13,
               *(int *)((int)puVar13 + 0x21),0);
  puVar6 = (ushort *)(this_00->field_0020 + 0xe + local_8);
  *puVar6 = *puVar6 & 0xfe37;
  pbVar1 = (byte *)(this_00->field_0020 + 0xe + local_8);
  *pbVar1 = *pbVar1 | 0x20;
  this_00->field_001C = this_00->field_001C & ~(1 << ((byte)uVar10 & 0x1f));
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

