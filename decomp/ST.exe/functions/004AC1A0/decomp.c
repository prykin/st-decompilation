#include "../../pseudocode_runtime.h"


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
   /STPlaySystemC+0xe4 */

undefined4 __thiscall STT3DSprC::StartShow(STT3DSprC *this,byte param_1,uint param_2)

{
  STT3DSprC *pSVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  code *pcVar6;
  InternalExceptionFrame local_50;
  uint local_c;
  STT3DSprC *local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pSVar1 = local_8;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\Tspr3d.cpp",0xf1,0,iVar2,"%s",
                               "STT3DSprC::StartShow");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    return 0xffffffff;
  }
  if (local_8->field_0018 == 0xffffffff) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Tspr3d.cpp",0xce);
  }
  if (((char)param_1 < '\0') || (pSVar1->field_0014 + -1 < (int)(char)param_1)) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Tspr3d.cpp",0xcf);
  }
  uVar5 = (uint)(char)param_1;
  iVar2 = uVar5 * 0x24;
  if (*(int *)(&pSVar1->field_0020->field_0x0 + iVar2) == 0) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Tspr3d.cpp",0xd0);
  }
  local_c = 1 << (param_1 & 0x1f);
  if ((pSVar1->field_001C & local_c) != 0) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Tspr3d.cpp",0xd1);
  }
  ST3DSMAPContext::sub_006E9CB0(pSVar1->field_003C,(uint *)pSVar1->field_0018,uVar5);
  pSVar1->field_001C = pSVar1->field_001C | local_c;
  if (*(int *)(&pSVar1->field_0020->field_0x20 + iVar2) == 0) {
    ST3DSMAPContext::sub_006EA270
              (pSVar1->field_003C,pSVar1->field_0018,uVar5,
               *(uint *)(&pSVar1->field_0020->field_0x18 + iVar2));
  }
  else {
    ST3DSMAPContext::sub_006E9D40(pSVar1->field_003C,(uint *)pSVar1->field_0018,uVar5);
  }
  if (pSVar1->field_0012 == '\0') {
    Library::Ourlib::ST3DSMAP::SprShow(pSVar1->field_003C,pSVar1->field_0018,0);
  }
  if (pSVar1->field_0011 == '\0') {
    if (pSVar1->field_0010 == '\0') {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)(*(int *)(&pSVar1->field_0020->field_0x0 + iVar2) + 0x29) == 0)
      goto cf_common_exit_004AC330;
      pSVar1->field_0013 = param_1;
      pSVar1->field_0030 = *(undefined4 *)(&pSVar1->field_0020->field_0x18 + iVar2);
      pcVar6 = thunk_FUN_004ad6c0;
    }
    else {
      if ((pSVar1->field_0038 == 0) ||
         (piVar3 = (int *)(&pSVar1->field_0020->field_0x0 + iVar2), *(int *)(*piVar3 + 0x29) == 0))
      goto cf_common_exit_004AC330;
      pSVar1->field_0013 = param_1;
      pSVar1->field_0030 = piVar3[6];
      pcVar6 = thunk_FUN_004ad740;
    }
    Library::Ourlib::ST3DSMAP::SprSetShadow
              (pSVar1->field_003C,pSVar1->field_0018,pSVar1->field_0034,(uint)pcVar6,(uint)pSVar1);
  }
cf_common_exit_004AC330:
  *(uint *)(&pSVar1->field_0020->field_0x1c + iVar2) = param_2;
  g_currentExceptionFrame = local_50.previous;
  return 0;
}

