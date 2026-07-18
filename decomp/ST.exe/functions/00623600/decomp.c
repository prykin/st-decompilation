
void __fastcall FUN_00623600(int *param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  void *pvVar4;
  int iVar5;
  int local_c;
  int local_8;
  
  pvVar4 = DAT_00802a88;
  if (DAT_00802a88 == (void *)0x0) {
    cVar1 = *(char *)((int)param_1 + 0x2e9);
  }
  else {
    iVar5 = (int)*(short *)((int)param_1 + 0x4b);
    if (((((DAT_0080874d == -1) || (*(int *)((int)DAT_00802a88 + 0xf8) == 0)) ||
         (thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),
                             (int)*(short *)((int)param_1 + 0x47),
                             (int)*(short *)((int)param_1 + 0x49),&local_8,&local_c), iVar5 < 0)) ||
        ((((4 < iVar5 || (local_8 < 0)) ||
          ((*(int *)((int)pvVar4 + 0x30) <= local_8 ||
           ((local_c = (&DAT_0079aed0)[iVar5] + local_c, local_c < 0 ||
            (*(int *)((int)pvVar4 + 0x34) <= local_c)))))) || (*(int *)((int)pvVar4 + 0x4c) == 0))))
       || (*(char *)(local_c * *(int *)((int)pvVar4 + 0x30) + *(int *)((int)pvVar4 + 0x4c) + local_8
                    ) != '\0')) {
      bVar3 = false;
      if (*(int *)((int)param_1 + 0x2ae) == 0) {
        cVar1 = *(char *)((int)param_1 + 0x2ad);
        if ((cVar1 == '\x03') || (cVar1 == '\x02')) {
          if (*(char *)((int)param_1 + 0x30e) == '\0') {
            if ((*(int *)((int)param_1 + 0x30a) == 0) || ((*(byte *)(DAT_00802a38 + 0xe4) & 1) == 0)
               ) goto LAB_0062371f;
            iVar5 = *(int *)((int)param_1 + 0x30a) + 1;
            *(int *)((int)param_1 + 0x30a) = iVar5;
            if (iVar5 == 0x2f) {
              *(undefined4 *)((int)param_1 + 0x30a) = 0;
            }
          }
          else if (((*(byte *)(DAT_00802a38 + 0xe4) & 1) != 0) &&
                  (iVar5 = *(int *)((int)param_1 + 0x30a) + 1,
                  *(int *)((int)param_1 + 0x30a) = iVar5, iVar5 == 0x2f)) {
            *(undefined4 *)((int)param_1 + 0x30a) = 0;
          }
          bVar3 = true;
        }
LAB_0062371f:
        if (((DAT_0080732c != 0) || (*(int *)((int)param_1 + 0x2ce) != 0)) || (bVar3)) {
          if (((cVar1 != '\x03') && (cVar1 != '\x02')) ||
             ((*(byte *)(DAT_00802a38 + 0xe4) & 1) != 0)) {
            *(int *)((int)param_1 + 0x2ce) = *(int *)((int)param_1 + 0x2ce) + 1;
          }
          if (*(int *)((int)param_1 + 0x2d2) <= *(int *)((int)param_1 + 0x2ce)) {
            *(undefined4 *)((int)param_1 + 0x2ce) = 0;
          }
          thunk_FUN_004abe40((void *)((int)param_1 + 0x1d5),'\x0e',
                             *(undefined4 *)((int)param_1 + 0x2ce));
          thunk_FUN_004ac040('\x0e');
          if (*(char *)((int)param_1 + 0x352) != '\0') {
            thunk_FUN_004abe40((void *)((int)param_1 + 0x1d5),'\f',
                               *(undefined4 *)((int)param_1 + 0x2ce));
            thunk_FUN_004ac040('\f');
          }
          if (DAT_00807326 != '\0') {
            bVar2 = *(byte *)((int)param_1 + 0x2d6);
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
        thunk_FUN_004abe40((void *)((int)param_1 + 0x1d5),'\x0e',
                           *(undefined4 *)((int)param_1 + 0x2ce));
        thunk_FUN_004ac040('\x0e');
        if (*(char *)((int)param_1 + 0x352) != '\0') {
          thunk_FUN_004abe40((void *)((int)param_1 + 0x1d5),'\f',
                             *(undefined4 *)((int)param_1 + 0x2ce));
          thunk_FUN_004ac040('\f');
        }
        if (DAT_00807326 != '\0') {
          bVar2 = *(byte *)((int)param_1 + 0x2d6);
LAB_00623863:
          thunk_FUN_004abf00('\x0e',(uint)bVar2);
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
    cVar1 = *(char *)((int)param_1 + 0x2e9);
  }
  if (cVar1 != '\0') {
    thunk_FUN_004ad430((int)param_1 + 0x1d5);
    *(undefined1 *)((int)param_1 + 0x2e9) = 0;
  }
LAB_006238c2:
  (**(code **)(*param_1 + 0xd8))();
  return;
}

