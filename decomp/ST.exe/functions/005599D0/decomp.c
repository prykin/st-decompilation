
void __thiscall
FUN_005599d0(void *this,int param_1,int param_2,undefined1 param_3,uint param_4,undefined *param_5,
            undefined4 param_6)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((((*(int *)((int)this + 0x114) != 0) && (-1 < (int)param_5)) && (param_4 < 8)) &&
     (((PTR_00802a38 == (STPlaySystemC *)0x0 || ((byte)(&DAT_008087e9)[param_4 * 0x51] < 8)) &&
      (*(int *)((int)this + param_4 * 4 + 0x54) != 0)))) {
    thunk_FUN_0055bbc0(this,2,(short)param_1,(short)param_2,param_3,param_4,(char)param_5,param_6);
    iVar1 = (int)param_5 * 2 + 1;
    iVar5 = param_1 - (int)param_5;
    iVar8 = param_2 - (int)param_5;
    puVar3 = thunk_FUN_005532f0((Global_sub_005532F0_param_1Enum)param_5);
    _param_3 = iVar1;
    param_5 = puVar3;
    if (0 < iVar1) {
      do {
        iVar4 = 0;
        iVar7 = iVar5;
        do {
          if (((puVar3 == (undefined *)0x0) || (param_5[iVar4] != '\0')) &&
             ((-1 < iVar7 &&
              (((iVar7 < *(int *)((int)this + 0x20) && (-1 < iVar8)) &&
               (iVar8 < *(int *)((int)this + 0x24))))))) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            iVar6 = iVar8 * *(int *)((int)this + 0x20) + *(int *)((int)this + param_4 * 4 + 0x54);
            cVar2 = *(char *)(iVar6 + iVar7);
            if (cVar2 != '\0') {
              *(char *)(iVar6 + iVar7) = cVar2 + -1;
            }
          }
          iVar4 = iVar4 + 1;
          iVar7 = iVar7 + 1;
        } while (iVar4 < iVar1);
        iVar8 = iVar8 + 1;
        _param_3 = _param_3 + -1;
        param_5 = param_5 + iVar1;
      } while (_param_3 != 0);
    }
  }
  return;
}

