#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:2: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=4, scalar_uses=0; sites=006B079F dereference: MOV DL,byte ptr [EAX + -0x2] |
   006B07A8 dereference: MOV DL,byte ptr [EAX + -0x5] | 006B07AE dereference: MOV DL,byte ptr [EAX +
   -0x4] | 006B07B3 dereference: MOV DL,byte ptr [EAX + -0x3] */

bool FUN_006b06a0(RecoveredGlobalRecordView_00854EB8 *param_1,LOGPALETTE *param_2,void *param_3,
                 UINT param_4,int param_5)

{
  UINT iStart;
  int *piVar1;
  HDC pHVar2;
  BYTE *pBVar3;
  BYTE *pBVar4;
  HPALETTE pHVar5;
  int iVar7_mg7;
  BYTE BVar6;
  int iVar7;
  LOGPALETTE *pLVar8;
  WORD *pWVar9;
  tagLOGPALETTE **pptVar10;
  uint *puVar11;
  tagLOGPALETTE *local_408;
  tagPALETTEENTRY *local_404;
  LOGPALETTE *pLVar8_mg0;

  if (*(HGDIOBJ *)param_1 != (HGDIOBJ)0x0) {
    /* ST_CALLSITE[006B06B6]: CALL dword ptr [0x0085ba78] */
    DeleteObject(*(HGDIOBJ *)param_1);
    *(undefined4 *)param_1 = 0;
  }
  if (param_1->field_04B4 != (HPALETTE)0x0) {
    /* ST_CALLSITE[006B06CD]: CALL dword ptr [0x0085ba78] */
    DeleteObject(param_1->field_04B4);
    param_1->field_04B4 = (HPALETTE)0x0;
  }
  pLVar8_mg0 = param_2;
  for (iVar7 = 0x101; iVar7 != 0; iVar7 = iVar7 + -1) {
    pLVar8_mg0->palVersion = 0;
    pLVar8_mg0->palNumEntries = 0;
    pLVar8_mg0 = (LOGPALETTE *)pLVar8_mg0->palPalEntry;
  }
  param_2->palVersion = 0x300;
  param_2->palNumEntries = 0x100;
  piVar1 = (int *)param_1->field_003C;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  if ((piVar1 == nullptr) ||
     /* ST_CALLSITE[006B070D]: CALL dword ptr [ECX + 0x10] */
     (iVar7 = (**(code **)(*piVar1 + 0x10))(piVar1,0,0,0x100,param_2->palPalEntry), iVar7 != 0)) {
    /* ST_CALLSITE[006B0716]: CALL dword ptr [0x0085be4c] */
    pHVar2 = GetDC((HWND)0x0);
    /* ST_CALLSITE[006B072A]: CALL dword ptr [0x0085ba80] */
    GetSystemPaletteEntries(pHVar2,0,0x100,param_2->palPalEntry);
    /* ST_CALLSITE[006B0733]: CALL dword ptr [0x0085be48] */
    ReleaseDC((HWND)0x0,pHVar2);
  }
  if (((param_1->field_0x8 & 1) == 0) && (param_1->field_0020 < 9)) {
    iVar7 = 0;
    pBVar3 = &param_2->palPalEntry[0].peGreen;
    pWVar9 = &param_2[0x80].palNumEntries;
    pLVar8 = param_2 + 0x80;
    do {
      BVar6 = (BYTE)iVar7;
      ((PALETTEENTRY *)(pBVar3 + -1))->peRed = BVar6;
      *pBVar3 = '\0';
      pBVar3[1] = '\0';
      pBVar3[2] = '\x02';
      iVar7 = iVar7 + 1;
      *(BYTE *)&pLVar8->palVersion = -1 - BVar6;
      *(undefined1 *)((int)pWVar9 + -1) = 0;
      *(undefined1 *)pWVar9 = 0;
      STField<undefined1>(pWVar9,1) = 2;
      pBVar3 = pBVar3 + 4;
      pWVar9 = pWVar9 + -2;
      pLVar8 = (LOGPALETTE *)pLVar8[-1].palPalEntry;
    } while (iVar7 < 10);
  }
  if (0 < param_5) {
    pBVar3 = &param_2->palPalEntry[param_4].peBlue;
    pBVar4 = (BYTE *)((int)param_3 + 2);
    iVar7 = param_5;
    do {
      ((PALETTEENTRY *)(pBVar3 + -2))->peRed = pBVar4[-2];
      pBVar3[-1] = pBVar4[-1];
      *pBVar3 = *pBVar4;
      pBVar3[1] = pBVar4[1] | 4;
      pBVar3 = pBVar3 + 4;
      iVar7 = iVar7 + -1;
      pBVar4 = pBVar4 + 4;
    } while (iVar7 != 0);
  }
  if ((*(uint *)&param_1->field_0x8 & 0x20000000) == 0) {
    *(undefined1 *)((int)&param_2[0x80].palNumEntries + 1) = 4;
    *(undefined1 *)&param_2[0x80].palVersion = 0xff;
    *(undefined1 *)((int)&param_2[0x80].palVersion + 1) = 0xff;
    *(undefined1 *)&param_2[0x80].palNumEntries = 0xff;
  }
  /* ST_CALLSITE[006B07ED]: CALL EDI; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/WinDef.h/HPALETTE__; source view only; no Ghidra override */
  pHVar5 = CreatePalette(param_2);
  *(HPALETTE *)param_1 = pHVar5;
  if (pHVar5 != (HPALETTE)0x0) {
    /* ST_CALLSITE[006B07FF]: CALL EDI; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/WinDef.h/HPALETTE__; source view only; no Ghidra override */
    pHVar5 = CreatePalette(param_2);
    param_1->field_04B4 = pHVar5;
    if (pHVar5 == (HPALETTE)0x0) {
      /* ST_CALLSITE[006B080E]: CALL dword ptr [0x0085ba78] */
      DeleteObject(*(HGDIOBJ *)param_1);
      *(undefined4 *)param_1 = 0;
      return false;
    }
    pptVar10 = &local_408;
    for (iVar7 = 0x101; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pptVar10 = *(tagLOGPALETTE **)param_2;
      param_2 = (LOGPALETTE *)param_2->palPalEntry;
      pptVar10 = pptVar10 + 1;
    }
    /* ST_CALLSITE[006B0834]: CALL dword ptr [0x0085be4c] */
    pHVar2 = GetDC((HWND)0x0);
    if (0 < (int)param_4) {
      /* ST_CALLSITE[006B084E]: CALL dword ptr [0x0085ba80] */
      GetSystemPaletteEntries(pHVar2,0,param_4,(LPPALETTEENTRY)&local_404);
    }
    iStart = param_4 + param_5;
    if ((int)iStart < 0x100) {
      /* ST_CALLSITE[006B0875]: CALL dword ptr [0x0085ba80] */
      GetSystemPaletteEntries
                (pHVar2,iStart,(0x100 - param_4) - param_5,(LPPALETTEENTRY)(&local_404 + iStart));
    }
    /* ST_CALLSITE[006B087E]: CALL dword ptr [0x0085be48] */
    ReleaseDC((HWND)0x0,pHVar2);
    if (*(undefined4 **)&param_1[1].field_0x24 != nullptr) {
      puVar11 = *(undefined4 **)&param_1[1].field_0x24;
      for (iVar7 = 0x2000; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar11 = 0xffffffff;
        puVar11 = puVar11 + 1;
      }
      memset((void *)(*(int *)&param_1[1].field_0x24 + 0x8000), 0, 0x8000); /* compiler bulk-zero initialization */
      /* ST_CALLSITE[006B08B4]: CALL dword ptr [0x0085ba7c]; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/WinDef.h/HPALETTE__; source view only; no Ghidra override */
      pHVar5 = CreatePalette((LOGPALETTE *)&local_408);
      *(HPALETTE *)&param_1[1].field_0x28 = pHVar5;
      if (pHVar5 == (HPALETTE)0x0) {
        return false;
      }
    }

    iVar7_mg7 = FUN_006b0520(param_1,(int)&local_404,0,0x100);
    return (bool)('\x01' - (iVar7_mg7 != 0));
  }
  return false;
}

