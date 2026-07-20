
void __fastcall FUN_00623600(int *param_1)

{
  STT3DSprC *pSVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  VisibleClassTy *pVVar5;
  int iVar6;
  int local_c;
  int local_8;
  
  pVVar5 = g_visibleClass_00802A88;
  if (g_visibleClass_00802A88 == (VisibleClassTy *)0x0) {
    cVar2 = *(char *)((int)param_1 + 0x2e9);
  }
  else {
    iVar6 = (int)*(short *)((int)param_1 + 0x4b);
    if (((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
         (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                             (int)*(short *)((int)param_1 + 0x47),
                             (int)*(short *)((int)param_1 + 0x49),&local_8,&local_c), iVar6 < 0)) ||
        ((((4 < iVar6 || (local_8 < 0)) ||
          (((int)pVVar5->field_0030 <= local_8 ||
           ((local_c = (&DAT_0079aed0)[iVar6] + local_c, local_c < 0 ||
            ((int)pVVar5->field_0034 <= local_c)))))) || (pVVar5->field_004C == 0)))) ||
       (*(char *)(local_c * pVVar5->field_0030 + pVVar5->field_004C + local_8) != '\0')) {
      bVar4 = false;
      if (*(int *)((int)param_1 + 0x2ae) == 0) {
        cVar2 = *(char *)((int)param_1 + 0x2ad);
        if ((cVar2 == '\x03') || (cVar2 == '\x02')) {
          if (*(char *)((int)param_1 + 0x30e) == '\0') {
            if ((*(int *)((int)param_1 + 0x30a) == 0) || ((*(byte *)(DAT_00802a38 + 0xe4) & 1) == 0)
               ) goto LAB_0062371f;
            iVar6 = *(int *)((int)param_1 + 0x30a) + 1;
            *(int *)((int)param_1 + 0x30a) = iVar6;
            if (iVar6 == 0x2f) {
              *(undefined4 *)((int)param_1 + 0x30a) = 0;
            }
          }
          else if (((*(byte *)(DAT_00802a38 + 0xe4) & 1) != 0) &&
                  (iVar6 = *(int *)((int)param_1 + 0x30a) + 1,
                  *(int *)((int)param_1 + 0x30a) = iVar6, iVar6 == 0x2f)) {
            *(undefined4 *)((int)param_1 + 0x30a) = 0;
          }
          bVar4 = true;
        }
LAB_0062371f:
        if (((DAT_0080732c != 0) || (*(int *)((int)param_1 + 0x2ce) != 0)) || (bVar4)) {
          if (((cVar2 != '\x03') && (cVar2 != '\x02')) ||
             ((*(byte *)(DAT_00802a38 + 0xe4) & 1) != 0)) {
            *(int *)((int)param_1 + 0x2ce) = *(int *)((int)param_1 + 0x2ce) + 1;
          }
          if (*(int *)((int)param_1 + 0x2d2) <= *(int *)((int)param_1 + 0x2ce)) {
            *(undefined4 *)((int)param_1 + 0x2ce) = 0;
          }
          pSVar1 = (STT3DSprC *)((int)param_1 + 0x1d5);
          STT3DSprC::SetCurFase(pSVar1,'\x0e',*(uint *)((int)param_1 + 0x2ce));
          STT3DSprC::ShowCurFase(pSVar1,'\x0e');
          if (*(char *)((int)param_1 + 0x352) != '\0') {
            STT3DSprC::SetCurFase(pSVar1,'\f',*(uint *)((int)param_1 + 0x2ce));
            STT3DSprC::ShowCurFase(pSVar1,'\f');
          }
          if (DAT_00807326 != '\0') {
            bVar3 = *(byte *)((int)param_1 + 0x2d6);
            goto LAB_00623863;
          }
        }
      }
      else {
        if (((*(char *)((int)param_1 + 0x2ad) != '\x03') &&
            (*(char *)((int)param_1 + 0x2ad) != '\x02')) ||
           ((*(byte *)(DAT_00802a38 + 0xe4) & 1) != 0)) {
          *(int *)((int)param_1 + 0x2ce) = *(int *)((int)param_1 + 0x2ce) + 1;
        }
        if (*(int *)((int)param_1 + 0x2d2) <= *(int *)((int)param_1 + 0x2ce)) {
          *(undefined4 *)((int)param_1 + 0x2ce) = 0;
        }
        pSVar1 = (STT3DSprC *)((int)param_1 + 0x1d5);
        STT3DSprC::SetCurFase(pSVar1,'\x0e',*(uint *)((int)param_1 + 0x2ce));
        STT3DSprC::ShowCurFase(pSVar1,'\x0e');
        if (*(char *)((int)param_1 + 0x352) != '\0') {
          STT3DSprC::SetCurFase(pSVar1,'\f',*(uint *)((int)param_1 + 0x2ce));
          STT3DSprC::ShowCurFase(pSVar1,'\f');
        }
        if (DAT_00807326 != '\0') {
          bVar3 = *(byte *)((int)param_1 + 0x2d6);
LAB_00623863:
          STT3DSprC::SetCurShad((STT3DSprC *)((int)param_1 + 0x1d5),'\x0e',(uint)bVar3);
        }
      }
      if (*(char *)((int)param_1 + 0x2e9) == '\0') {
        thunk_FUN_004ad460((void *)((int)param_1 + 0x1d5),0);
        *(undefined1 *)((int)param_1 + 0x2e9) = 1;
        (**(code **)(*param_1 + 0xd8))();
        return;
      }
      goto LAB_006238c2;
    }
    cVar2 = *(char *)((int)param_1 + 0x2e9);
  }
  if (cVar2 != '\0') {
    thunk_FUN_004ad430((int)param_1 + 0x1d5);
    *(undefined1 *)((int)param_1 + 0x2e9) = 0;
  }
LAB_006238c2:
  (**(code **)(*param_1 + 0xd8))();
  return;
}

